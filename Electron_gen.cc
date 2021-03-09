#include <iostream>
#include <cmath>

#include "TVector3.h"
#include "TFile.h"
#include "HNLClass.h"
#include "TChain.h"
#include "TH1F.h"
#include "TCanvas.h"
#include "TLorentzVector.h"
#include "math.h"

int main() {
    TChain* cosa = new TChain("Events");
    cosa->Add("HNLDP.root");
    HNLClass signal;
    signal.Init(cosa);

    int i=0,j=0,l=0;

    /*TH1F *pt = new TH1F("E(all)_pt","Pt of all electrons",250,0.,20.0);
    TH1F *eta = new TH1F("E(all)_eta", "Eta of all electrons", 250, -6.5,6.5);
    TH1F *pt_n = new TH1F("E(/HNL)_pt", "Pt of electrons not from HNL", 250, 0., 20.);
    TH1F *eta_n = new TH1F("E(/HNL)_eta", "Eta of electrons not from HNL", 250, -6.5,6.5);*/

    TH1F *Ne = new TH1F("#E", "# of electrons in the event", 5000, 0., 4.);

    //TCanvas *PtEta = new TCanvas("PtEta","Electron pt eta", 1280, 1024);
    //PtEta->Divide(2,2);

    TCanvas *c2 = new TCanvas("c2","Number of electron", 1280, 1024);
    

    for(i=0;i<signal.fChain->GetEntries();i++) {
        
        signal.fChain->GetEntry(i);
        l=0;
        for(j=0;j<signal.nGenPart;j++){
            if(abs(signal.GenPart_pdgId[j])==11){
                
                l+=1;
                //pt->Fill(signal.GenPart_pt[j]);
                //eta->Fill(signal.GenPart_eta[j]);
            };
            /*if(abs(signal.GenPart_pdgId[j])==11 && abs(signal.GenPart_pdgId[signal.GenPart_genPartIdxMother[j]])!=9900015){
                pt_n->Fill(signal.GenPart_pt[j]);
                eta_n->Fill(signal.GenPart_eta[j]);
            };*/
        
        };
        Ne->Fill(l);
    };

    /*PtEta->cd(1);
    pt->GetXaxis()->SetTitle("Pt [GeV]");
    pt->GetYaxis()->SetTitle("Number of entries");
    pt->Draw("HIST");

    PtEta->cd(2);
    eta->GetXaxis()->SetTitle("Eta");
    eta->GetYaxis()->SetTitle("Number of entries");
    eta->Draw("HIST");

    PtEta->cd(3);
    pt_n->GetXaxis()->SetTitle("Pt [GeV]");
    pt_n->GetYaxis()->SetTitle("Number of entries");
    pt_n->Draw("HIST");

    PtEta->cd(4);
    eta_n->GetXaxis()->SetTitle("Eta");
    eta_n->GetYaxis()->SetTitle("Number of entries");
    eta_n->Draw("HIST");*/

    c2->cd(1);
    Ne->GetXaxis()->SetTitle("# electrons in the event");
    Ne->GetYaxis()->SetTitle("# entries");
    Ne->Draw("HIST");


    //PtEta->SaveAs("E_pt_eta.jpg");
    c2->SaveAs("Numb_E.jpg");

    delete cosa;

    return 0;

};