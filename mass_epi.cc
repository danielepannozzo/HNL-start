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

    TH1F *h1 = new TH1F("h1","Invariant Mass of e pi",5000,0.,2.0);

    TCanvas *c1 = new TCanvas("c1","Mass invariant", 1280, 1024);
    

    for(i=0;i<signal.fChain->GetEntries();i++) {
        
        TLorentzVector tmp1,tmp2,tmp3;
        signal.fChain->GetEntry(i);
    
        for(j=0;j<signal.nGenPart;j++){
            if(abs(signal.GenPart_pdgId[j])==11 && abs(signal.GenPart_pdgId[signal.GenPart_genPartIdxMother[j]])==9900015){
                tmp1.SetPtEtaPhiM(signal.GenPart_pt[j], signal.GenPart_eta[j], signal.GenPart_phi[j], signal.GenPart_mass[j]);
                for(l=0;l<signal.nGenPart;l++){
                    if(abs(signal.GenPart_pdgId[l])==211 && abs(signal.GenPart_pdgId[signal.GenPart_genPartIdxMother[l]])==9900015){
                
                    tmp2.SetPtEtaPhiM(signal.GenPart_pt[l], signal.GenPart_eta[l], signal.GenPart_phi[l], signal.GenPart_mass[l]);
                    
                    tmp3=tmp1+tmp2;
                    double mass=tmp3.M();

                    h1->Fill(mass);
                    };    
                };
            };
        };
    };

    c1->cd(1);
    h1->GetXaxis()->SetTitle("Mass");
    h1->GetYaxis()->SetTitle("Number of events");
    h1->Draw();

    c1->SaveAs("Mass_E_Pi.pdf");

    delete cosa;

    return 0;

};