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

    int i,j,l;

    TH1F *h1 = new TH1F("h1","test histo",500,0.0,2.0);
    TCanvas *c1 = new TCanvas("c1","Mass invariant", 1280, 1024);

    for(i=0;i<signal.fChain->GetEntries();i++) {
        TLorentzVector tmp1,tmp2;
        double_t mass;

        signal.fChain->GetEntry(i);

        //loop per lavorare sui muoni
        for(j=0; j<signal.nMuon; j++);
        for(l=0; l<signal.nProbeTracks; l++) if(abs(signal.GenPart_pdgId[i])==211) continue;

        tmp1.SetPtEtaPhiM(*signal.Muon_pt, *signal.Muon_eta, *signal.Muon_phi, 105.658);

        tmp2.SetPtEtaPhiM(*signal.ProbeTracks_pt, *signal.ProbeTracks_eta, *signal.ProbeTracks_phi, 139.57);

        mass=tmp1*tmp2;
        h1->Fill(mass);
    }
    c1->cd(1);
    h1->GetXaxis()->SetTitle("Mass");
    h1->GetYaxis()->SetTitle("Numer of events");
    h1->SetFillColor(kBlue);
    h1->Draw();

    c1->SaveAs("Mass_Mu_Pi.pdf");
    return(0);

}
