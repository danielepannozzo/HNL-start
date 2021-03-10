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

    int i=0,j=0,t=0;
    int eprobe=0, egen=0;

    TH1F *Ne = new TH1F("Ne", "Difference bet/ e gen and reco", 50, -3.3, 4.3);
    //TH1F *Ne2 = new TH1F("Ne2", "", 50, -0.3, 50.);
    TCanvas *c1 = new TCanvas("#E", "Diff electron number", 1280, 1024);


    for(i=0;i<signal.fChain->GetEntries();i++) {

        TLorentzVector tmp1,tmp2;
        signal.fChain->GetEntry(i);

        egen=0;
        eprobe=0;

        for(j=0;j<signal.nGenPart;j++){
            if(abs(signal.GenPart_pdgId[j])==11){
                egen++;
                for(t=0;t<signal.nElectron;t++){  
                    if(signal.Electron_genPartIdx[t]==j) eprobe++;
                };
            };
        };
        int n=egen-eprobe;
        Ne->Fill(n);
    };
    c1->cd(1);
    Ne->GetXaxis()->SetTitle("n_{ele^{gen}} - n_{ele^{reco}}");
    Ne->GetYaxis()->SetTitle("Number of entries");
    Ne->SetFillColor(kBlue);
    //Ne->Scale(1./Ne->GetEntries());
    Ne->DrawNormalized("HIST");

    c1->SaveAs("Diff_e.jpg");

    delete cosa;

    return 0;

};
