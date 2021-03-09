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

    TH1F *Ne = new TH1F("Ne", "Difference bet/ e gen and reco", 250, -0.3, 5.);
    TCanvas *c1 = new TCanvas("#E", "Electron number", 1280, 1024);


    for(i=0;i<signal.fChain->GetEntries();i++) {
        
        signal.fChain->GetEntry(i);
        l=0;
        int n=0;
        for(j=0;j<signal.nGenPart;j++){
            if(abs(signal.GenPart_pdgId[j])==11){
                
                l+=1;
            }
            n=l-signal.nElectron;
        };
        Ne->Fill(n);
    };

    c1->cd(1);
    Ne->GetXaxis()->SetTitle("Difference");
    Ne->GetYaxis()->SetTitle("Number of entries");
    Ne->Draw("HIST");

    c1->SaveAs("Diff_e.png");

    delete cosa;

    return 0;

};