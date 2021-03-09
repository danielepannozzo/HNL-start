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

    /*TH1F *pt = new TH1F("Pi(all)_pt","Pt of all pions",250,0.,20.0);
    TH1F *eta = new TH1F("Pi(all)_eta", "Eta of all pions", 250, -6.5,6.5);
    TH1F *pt_n = new TH1F("Pi(/HNL)_pt", "Pt of pions not from HNL", 250, 0., 20.);
    TH1F *eta_n = new TH1F("Pi(/HNL)_eta", "Eta of pions not from HNL", 250, -6.5,6.5);*/

    TH1F *Npi = new TH1F("#E", "# of pions in the event", 5000, 0., 12.3);

    //TCanvas *PtEta = new TCanvas("PtEta","Pion pt eta", 1280, 1024);
    //PtEta->Divide(2,2);

    TCanvas *c2 = new TCanvas("c2","Number of pions", 1280, 1024);
    

    for(i=0;i<signal.fChain->GetEntries();i++) {
        
        signal.fChain->GetEntry(i);
        l=0;
        for(j=0;j<signal.nGenPart;j++){
            if(abs(signal.GenPart_pdgId[j])==211){
                
                l+=1;
                //pt->Fill(signal.GenPart_pt[j]);
                //eta->Fill(signal.GenPart_eta[j]);
            };
            /*if(abs(signal.GenPart_pdgId[j])==211 && abs(signal.GenPart_pdgId[signal.GenPart_genPartIdxMother[j]])!=9900015){
                pt_n->Fill(signal.GenPart_pt[j]);
                eta_n->Fill(signal.GenPart_eta[j]);
            };*/
        
        };
        Npi->Fill(l);
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
    Npi->GetXaxis()->SetTitle("# electrons in the event");
    Npi->GetYaxis()->SetTitle("# entries");
    Npi->Draw("HIST");


    //PtEta->SaveAs("Pi_pt_eta.png");
    c2->SaveAs("Numb_Pi.png");

    delete cosa;

    return 0;

};