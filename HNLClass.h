//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Feb 23 14:54:41 2021 by ROOT version 6.22/06
// from TTree Events/Events
// found on file: HNLDP.root
//////////////////////////////////////////////////////////

#ifndef HNLClass_h
#define HNLClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class HNLClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   UInt_t          nHNLToPiE;
   Float_t         HNLToPiE_cos_theta_2D[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_eta[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_cos_theta[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_eta[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_l_eta[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_l_phi[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_l_pt[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_mass[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_massErr[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_phi[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_pi_eta[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_pi_phi[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_pi_pt[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_fitted_pt[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_l_xy[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_l_xy_unc[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_ls_xy[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_ltrk_deltaR[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_mass[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_phi[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_pt[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_vtx_chi2[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_vtx_ex[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_vtx_ey[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_vtx_ez[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_vtx_ndof[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_vtx_prob[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_vtx_x[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_vtx_y[118];   //[nHNLToPiE]
   Float_t         HNLToPiE_vtx_z[118];   //[nHNLToPiE]
   Int_t           HNLToPiE_charge[118];   //[nHNLToPiE]
   Int_t           HNLToPiE_lep_idx[118];   //[nHNLToPiE]
   Int_t           HNLToPiE_pdgId[118];   //[nHNLToPiE]
   Int_t           HNLToPiE_trk_idx[118];   //[nHNLToPiE]
   Int_t           HNLToPiE_vtx_OK[118];   //[nHNLToPiE]
   UInt_t          nElectron;
   Float_t         Electron_convChi2Prob[42];   //[nElectron]
   Float_t         Electron_convDeltaCotFromPin[42];   //[nElectron]
   Float_t         Electron_convLxy[42];   //[nElectron]
   Float_t         Electron_convMass[42];   //[nElectron]
   Float_t         Electron_convMassAfterFit[42];   //[nElectron]
   Float_t         Electron_convMassBeforeFit[42];   //[nElectron]
   Float_t         Electron_convMassFromPin[42];   //[nElectron]
   Float_t         Electron_convMinTrkPt[42];   //[nElectron]
   Float_t         Electron_convVtxRadius[42];   //[nElectron]
   Float_t         Electron_dxy[42];   //[nElectron]
   Float_t         Electron_dxyErr[42];   //[nElectron]
   Float_t         Electron_dz[42];   //[nElectron]
   Float_t         Electron_dzErr[42];   //[nElectron]
   Float_t         Electron_eta[42];   //[nElectron]
   Float_t         Electron_fBrem[42];   //[nElectron]
   Float_t         Electron_ip3d[42];   //[nElectron]
   Float_t         Electron_mass[42];   //[nElectron]
   Float_t         Electron_mvaId[42];   //[nElectron]
   Float_t         Electron_pfRelIso[42];   //[nElectron]
   Float_t         Electron_pfmvaId[42];   //[nElectron]
   Float_t         Electron_phi[42];   //[nElectron]
   Float_t         Electron_pt[42];   //[nElectron]
   Float_t         Electron_ptBiased[42];   //[nElectron]
   Float_t         Electron_sip3d[42];   //[nElectron]
   Float_t         Electron_trkRelIso[42];   //[nElectron]
   Float_t         Electron_unBiased[42];   //[nElectron]
   Float_t         Electron_vx[42];   //[nElectron]
   Float_t         Electron_vy[42];   //[nElectron]
   Float_t         Electron_vz[42];   //[nElectron]
   Int_t           Electron_charge[42];   //[nElectron]
   Int_t           Electron_convDeltaExpectedNHitsInner[42];   //[nElectron]
   Int_t           Electron_convLeadIdx[42];   //[nElectron]
   Int_t           Electron_convLeadNHitsBeforeVtx[42];   //[nElectron]
   Int_t           Electron_convMaxNHitsBeforeVtx[42];   //[nElectron]
   Int_t           Electron_convSumNHitsBeforeVtx[42];   //[nElectron]
   Int_t           Electron_convTracksN[42];   //[nElectron]
   Int_t           Electron_convTrailIdx[42];   //[nElectron]
   Int_t           Electron_convTrailNHitsBeforeVtx[42];   //[nElectron]
   Int_t           Electron_pdgId[42];   //[nElectron]
   Bool_t          Electron_convExtra[42];   //[nElectron]
   Bool_t          Electron_convLead[42];   //[nElectron]
   Bool_t          Electron_convLoose[42];   //[nElectron]
   Bool_t          Electron_convOpen[42];   //[nElectron]
   Bool_t          Electron_convQualityHighEff[42];   //[nElectron]
   Bool_t          Electron_convQualityHighPurity[42];   //[nElectron]
   Bool_t          Electron_convTight[42];   //[nElectron]
   Bool_t          Electron_convTrail[42];   //[nElectron]
   Bool_t          Electron_convValid[42];   //[nElectron]
   Bool_t          Electron_convVeto[42];   //[nElectron]
   Bool_t          Electron_isLowPt[42];   //[nElectron]
   Bool_t          Electron_isPF[42];   //[nElectron]
   Bool_t          Electron_isPFoverlap[42];   //[nElectron]
   UInt_t          nGenPart;
   Float_t         GenPart_eta[131];   //[nGenPart]
   Float_t         GenPart_mass[131];   //[nGenPart]
   Float_t         GenPart_phi[131];   //[nGenPart]
   Float_t         GenPart_pt[131];   //[nGenPart]
   Float_t         GenPart_vx[131];   //[nGenPart]
   Float_t         GenPart_vy[131];   //[nGenPart]
   Float_t         GenPart_vz[131];   //[nGenPart]
   Int_t           GenPart_genPartIdxMother[131];   //[nGenPart]
   Int_t           GenPart_pdgId[131];   //[nGenPart]
   Int_t           GenPart_status[131];   //[nGenPart]
   Int_t           GenPart_statusFlags[131];   //[nGenPart]
   Float_t         Generator_binvar;
   Float_t         Generator_scalePDF;
   Float_t         Generator_weight;
   Float_t         Generator_x1;
   Float_t         Generator_x2;
   Float_t         Generator_xpdf1;
   Float_t         Generator_xpdf2;
   Int_t           Generator_id1;
   Int_t           Generator_id2;
   Float_t         genWeight;
   UInt_t          nPSWeight;
   Float_t         PSWeight[1];   //[nPSWeight]
   UInt_t          nMuon;
   Float_t         Muon_dxy[9];   //[nMuon]
   Float_t         Muon_dxyErr[9];   //[nMuon]
   Float_t         Muon_dz[9];   //[nMuon]
   Float_t         Muon_dzErr[9];   //[nMuon]
   Float_t         Muon_eta[9];   //[nMuon]
   Float_t         Muon_ip3d[9];   //[nMuon]
   Float_t         Muon_mass[9];   //[nMuon]
   Float_t         Muon_pfRelIso03_all[9];   //[nMuon]
   Float_t         Muon_pfRelIso04_all[9];   //[nMuon]
   Float_t         Muon_phi[9];   //[nMuon]
   Float_t         Muon_pt[9];   //[nMuon]
   Float_t         Muon_ptErr[9];   //[nMuon]
   Float_t         Muon_sip3d[9];   //[nMuon]
   Float_t         Muon_vx[9];   //[nMuon]
   Float_t         Muon_vy[9];   //[nMuon]
   Float_t         Muon_vz[9];   //[nMuon]
   Int_t           Muon_charge[9];   //[nMuon]
   Int_t           Muon_isTriggering[9];   //[nMuon]
   Int_t           Muon_pdgId[9];   //[nMuon]
   Bool_t          Muon_isGlobal[9];   //[nMuon]
   Bool_t          Muon_isPFcand[9];   //[nMuon]
   Bool_t          Muon_isTracker[9];   //[nMuon]
   Bool_t          Muon_mediumId[9];   //[nMuon]
   UChar_t         Muon_pfIsoId[9];   //[nMuon]
   Bool_t          Muon_softId[9];   //[nMuon]
   Bool_t          Muon_tightId[9];   //[nMuon]
   UChar_t         Muon_tkIsoId[9];   //[nMuon]
   Bool_t          Muon_triggerIdLoose[9];   //[nMuon]
   UInt_t          nTriggerMuon;
   Float_t         TriggerMuon_eta[3];   //[nTriggerMuon]
   Float_t         TriggerMuon_mass[3];   //[nTriggerMuon]
   Float_t         TriggerMuon_phi[3];   //[nTriggerMuon]
   Float_t         TriggerMuon_pt[3];   //[nTriggerMuon]
   Float_t         TriggerMuon_vx[3];   //[nTriggerMuon]
   Float_t         TriggerMuon_vy[3];   //[nTriggerMuon]
   Float_t         TriggerMuon_vz[3];   //[nTriggerMuon]
   Int_t           TriggerMuon_charge[3];   //[nTriggerMuon]
   Int_t           TriggerMuon_pdgId[3];   //[nTriggerMuon]
   Int_t           TriggerMuon_trgMuonIndex[3];   //[nTriggerMuon]
   Float_t         Pileup_nTrueInt;
   Float_t         Pileup_pudensity;
   Float_t         Pileup_gpudensity;
   Int_t           Pileup_nPU;
   Int_t           Pileup_sumEOOT;
   Int_t           Pileup_sumLOOT;
   Float_t         fixedGridRhoFastjetAll;
   Float_t         fixedGridRhoFastjetCentral;
   Float_t         fixedGridRhoFastjetCentralCalo;
   Float_t         fixedGridRhoFastjetCentralChargedPileUp;
   Float_t         fixedGridRhoFastjetCentralNeutral;
   UInt_t          nProbeTracks;
   Float_t         ProbeTracks_DCASig[407];   //[nProbeTracks]
   Float_t         ProbeTracks_dxy[407];   //[nProbeTracks]
   Float_t         ProbeTracks_dxyS[407];   //[nProbeTracks]
   Float_t         ProbeTracks_dz[407];   //[nProbeTracks]
   Float_t         ProbeTracks_dzS[407];   //[nProbeTracks]
   Float_t         ProbeTracks_eta[407];   //[nProbeTracks]
   Float_t         ProbeTracks_mass[407];   //[nProbeTracks]
   Float_t         ProbeTracks_phi[407];   //[nProbeTracks]
   Float_t         ProbeTracks_pt[407];   //[nProbeTracks]
   Float_t         ProbeTracks_vx[407];   //[nProbeTracks]
   Float_t         ProbeTracks_vy[407];   //[nProbeTracks]
   Float_t         ProbeTracks_vz[407];   //[nProbeTracks]
   Int_t           ProbeTracks_charge[407];   //[nProbeTracks]
   Int_t           ProbeTracks_isLostTrk[407];   //[nProbeTracks]
   Int_t           ProbeTracks_isPacked[407];   //[nProbeTracks]
   Int_t           ProbeTracks_nValidHits[407];   //[nProbeTracks]
   Int_t           ProbeTracks_pdgId[407];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToEle[407];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToLooseMuon[407];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToLowPtEle[407];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToMediumMuon[407];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToMuon[407];   //[nProbeTracks]
   Bool_t          ProbeTracks_isMatchedToSoftMuon[407];   //[nProbeTracks]
   UChar_t         HLT_Mu7_IP4;
   UChar_t         HLT_Mu8_IP6;
   UChar_t         HLT_Mu8_IP5;
   UChar_t         HLT_Mu8_IP3;
   UChar_t         HLT_Mu8p5_IP3p5;
   UChar_t         HLT_Mu9_IP6;
   UChar_t         HLT_Mu9_IP5;
   UChar_t         HLT_Mu9_IP4;
   UChar_t         HLT_Mu10p5_IP3p5;
   UChar_t         HLT_Mu12_IP6;
   UChar_t         L1_SingleMu7er1p5;
   UChar_t         L1_SingleMu8er1p5;
   UChar_t         L1_SingleMu9er1p5;
   UChar_t         L1_SingleMu10er1p5;
   UChar_t         L1_SingleMu12er1p5;
   UChar_t         L1_SingleMu22;
   UInt_t          nTrigObj;
   Float_t         TrigObj_pt[4];   //[nTrigObj]
   Float_t         TrigObj_eta[4];   //[nTrigObj]
   Float_t         TrigObj_phi[4];   //[nTrigObj]
   Float_t         TrigObj_l1pt[4];   //[nTrigObj]
   Float_t         TrigObj_l1pt_2[4];   //[nTrigObj]
   Float_t         TrigObj_l2pt[4];   //[nTrigObj]
   Int_t           TrigObj_id[4];   //[nTrigObj]
   Int_t           TrigObj_l1iso[4];   //[nTrigObj]
   Int_t           TrigObj_l1charge[4];   //[nTrigObj]
   Int_t           TrigObj_filterBits[4];   //[nTrigObj]
   UInt_t          nOtherPV;
   Float_t         OtherPV_z[3];   //[nOtherPV]
   Float_t         PV_ndof;
   Float_t         PV_x;
   Float_t         PV_y;
   Float_t         PV_z;
   Float_t         PV_chi2;
   Float_t         PV_score;
   Int_t           PV_npvs;
   Int_t           PV_npvsGood;
   UInt_t          nSV;
   Float_t         SV_dlen[12];   //[nSV]
   Float_t         SV_dlenSig[12];   //[nSV]
   Float_t         SV_pAngle[12];   //[nSV]
   Int_t           Electron_genPartIdx[42];   //[nElectron]
   Int_t           Electron_genPartFlav[42];   //[nElectron]
   Int_t           Muon_genPartIdx[9];   //[nMuon]
   Int_t           Muon_genPartFlav[9];   //[nMuon]
   Float_t         SV_chi2[12];   //[nSV]
   Float_t         SV_eta[12];   //[nSV]
   Float_t         SV_mass[12];   //[nSV]
   Float_t         SV_ndof[12];   //[nSV]
   Float_t         SV_phi[12];   //[nSV]
   Float_t         SV_pt[12];   //[nSV]
   Float_t         SV_x[12];   //[nSV]
   Float_t         SV_y[12];   //[nSV]
   Float_t         SV_z[12];   //[nSV]
   Int_t           ProbeTracks_genPartIdx[407];   //[nProbeTracks]
   Int_t           ProbeTracks_genPartFlav[407];   //[nProbeTracks]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_event;   //!
   TBranch        *b_nHNLToPiE;   //!
   TBranch        *b_HNLToPiE_cos_theta_2D;   //!
   TBranch        *b_HNLToPiE_eta;   //!
   TBranch        *b_HNLToPiE_fitted_cos_theta;   //!
   TBranch        *b_HNLToPiE_fitted_eta;   //!
   TBranch        *b_HNLToPiE_fitted_l_eta;   //!
   TBranch        *b_HNLToPiE_fitted_l_phi;   //!
   TBranch        *b_HNLToPiE_fitted_l_pt;   //!
   TBranch        *b_HNLToPiE_fitted_mass;   //!
   TBranch        *b_HNLToPiE_fitted_massErr;   //!
   TBranch        *b_HNLToPiE_fitted_phi;   //!
   TBranch        *b_HNLToPiE_fitted_pi_eta;   //!
   TBranch        *b_HNLToPiE_fitted_pi_phi;   //!
   TBranch        *b_HNLToPiE_fitted_pi_pt;   //!
   TBranch        *b_HNLToPiE_fitted_pt;   //!
   TBranch        *b_HNLToPiE_l_xy;   //!
   TBranch        *b_HNLToPiE_l_xy_unc;   //!
   TBranch        *b_HNLToPiE_ls_xy;   //!
   TBranch        *b_HNLToPiE_ltrk_deltaR;   //!
   TBranch        *b_HNLToPiE_mass;   //!
   TBranch        *b_HNLToPiE_phi;   //!
   TBranch        *b_HNLToPiE_pt;   //!
   TBranch        *b_HNLToPiE_vtx_chi2;   //!
   TBranch        *b_HNLToPiE_vtx_ex;   //!
   TBranch        *b_HNLToPiE_vtx_ey;   //!
   TBranch        *b_HNLToPiE_vtx_ez;   //!
   TBranch        *b_HNLToPiE_vtx_ndof;   //!
   TBranch        *b_HNLToPiE_vtx_prob;   //!
   TBranch        *b_HNLToPiE_vtx_x;   //!
   TBranch        *b_HNLToPiE_vtx_y;   //!
   TBranch        *b_HNLToPiE_vtx_z;   //!
   TBranch        *b_HNLToPiE_charge;   //!
   TBranch        *b_HNLToPiE_lep_idx;   //!
   TBranch        *b_HNLToPiE_pdgId;   //!
   TBranch        *b_HNLToPiE_trk_idx;   //!
   TBranch        *b_HNLToPiE_vtx_OK;   //!
   TBranch        *b_nElectron;   //!
   TBranch        *b_Electron_convChi2Prob;   //!
   TBranch        *b_Electron_convDeltaCotFromPin;   //!
   TBranch        *b_Electron_convLxy;   //!
   TBranch        *b_Electron_convMass;   //!
   TBranch        *b_Electron_convMassAfterFit;   //!
   TBranch        *b_Electron_convMassBeforeFit;   //!
   TBranch        *b_Electron_convMassFromPin;   //!
   TBranch        *b_Electron_convMinTrkPt;   //!
   TBranch        *b_Electron_convVtxRadius;   //!
   TBranch        *b_Electron_dxy;   //!
   TBranch        *b_Electron_dxyErr;   //!
   TBranch        *b_Electron_dz;   //!
   TBranch        *b_Electron_dzErr;   //!
   TBranch        *b_Electron_eta;   //!
   TBranch        *b_Electron_fBrem;   //!
   TBranch        *b_Electron_ip3d;   //!
   TBranch        *b_Electron_mass;   //!
   TBranch        *b_Electron_mvaId;   //!
   TBranch        *b_Electron_pfRelIso;   //!
   TBranch        *b_Electron_pfmvaId;   //!
   TBranch        *b_Electron_phi;   //!
   TBranch        *b_Electron_pt;   //!
   TBranch        *b_Electron_ptBiased;   //!
   TBranch        *b_Electron_sip3d;   //!
   TBranch        *b_Electron_trkRelIso;   //!
   TBranch        *b_Electron_unBiased;   //!
   TBranch        *b_Electron_vx;   //!
   TBranch        *b_Electron_vy;   //!
   TBranch        *b_Electron_vz;   //!
   TBranch        *b_Electron_charge;   //!
   TBranch        *b_Electron_convDeltaExpectedNHitsInner;   //!
   TBranch        *b_Electron_convLeadIdx;   //!
   TBranch        *b_Electron_convLeadNHitsBeforeVtx;   //!
   TBranch        *b_Electron_convMaxNHitsBeforeVtx;   //!
   TBranch        *b_Electron_convSumNHitsBeforeVtx;   //!
   TBranch        *b_Electron_convTracksN;   //!
   TBranch        *b_Electron_convTrailIdx;   //!
   TBranch        *b_Electron_convTrailNHitsBeforeVtx;   //!
   TBranch        *b_Electron_pdgId;   //!
   TBranch        *b_Electron_convExtra;   //!
   TBranch        *b_Electron_convLead;   //!
   TBranch        *b_Electron_convLoose;   //!
   TBranch        *b_Electron_convOpen;   //!
   TBranch        *b_Electron_convQualityHighEff;   //!
   TBranch        *b_Electron_convQualityHighPurity;   //!
   TBranch        *b_Electron_convTight;   //!
   TBranch        *b_Electron_convTrail;   //!
   TBranch        *b_Electron_convValid;   //!
   TBranch        *b_Electron_convVeto;   //!
   TBranch        *b_Electron_isLowPt;   //!
   TBranch        *b_Electron_isPF;   //!
   TBranch        *b_Electron_isPFoverlap;   //!
   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_pt;   //!
   TBranch        *b_GenPart_vx;   //!
   TBranch        *b_GenPart_vy;   //!
   TBranch        *b_GenPart_vz;   //!
   TBranch        *b_GenPart_genPartIdxMother;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_statusFlags;   //!
   TBranch        *b_Generator_binvar;   //!
   TBranch        *b_Generator_scalePDF;   //!
   TBranch        *b_Generator_weight;   //!
   TBranch        *b_Generator_x1;   //!
   TBranch        *b_Generator_x2;   //!
   TBranch        *b_Generator_xpdf1;   //!
   TBranch        *b_Generator_xpdf2;   //!
   TBranch        *b_Generator_id1;   //!
   TBranch        *b_Generator_id2;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_nPSWeight;   //!
   TBranch        *b_PSWeight;   //!
   TBranch        *b_nMuon;   //!
   TBranch        *b_Muon_dxy;   //!
   TBranch        *b_Muon_dxyErr;   //!
   TBranch        *b_Muon_dz;   //!
   TBranch        *b_Muon_dzErr;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_ip3d;   //!
   TBranch        *b_Muon_mass;   //!
   TBranch        *b_Muon_pfRelIso03_all;   //!
   TBranch        *b_Muon_pfRelIso04_all;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_ptErr;   //!
   TBranch        *b_Muon_sip3d;   //!
   TBranch        *b_Muon_vx;   //!
   TBranch        *b_Muon_vy;   //!
   TBranch        *b_Muon_vz;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_isTriggering;   //!
   TBranch        *b_Muon_pdgId;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_isPFcand;   //!
   TBranch        *b_Muon_isTracker;   //!
   TBranch        *b_Muon_mediumId;   //!
   TBranch        *b_Muon_pfIsoId;   //!
   TBranch        *b_Muon_softId;   //!
   TBranch        *b_Muon_tightId;   //!
   TBranch        *b_Muon_tkIsoId;   //!
   TBranch        *b_Muon_triggerIdLoose;   //!
   TBranch        *b_nTriggerMuon;   //!
   TBranch        *b_TriggerMuon_eta;   //!
   TBranch        *b_TriggerMuon_mass;   //!
   TBranch        *b_TriggerMuon_phi;   //!
   TBranch        *b_TriggerMuon_pt;   //!
   TBranch        *b_TriggerMuon_vx;   //!
   TBranch        *b_TriggerMuon_vy;   //!
   TBranch        *b_TriggerMuon_vz;   //!
   TBranch        *b_TriggerMuon_charge;   //!
   TBranch        *b_TriggerMuon_pdgId;   //!
   TBranch        *b_TriggerMuon_trgMuonIndex;   //!
   TBranch        *b_Pileup_nTrueInt;   //!
   TBranch        *b_Pileup_pudensity;   //!
   TBranch        *b_Pileup_gpudensity;   //!
   TBranch        *b_Pileup_nPU;   //!
   TBranch        *b_Pileup_sumEOOT;   //!
   TBranch        *b_Pileup_sumLOOT;   //!
   TBranch        *b_fixedGridRhoFastjetAll;   //!
   TBranch        *b_fixedGridRhoFastjetCentral;   //!
   TBranch        *b_fixedGridRhoFastjetCentralCalo;   //!
   TBranch        *b_fixedGridRhoFastjetCentralChargedPileUp;   //!
   TBranch        *b_fixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_nProbeTracks;   //!
   TBranch        *b_ProbeTracks_DCASig;   //!
   TBranch        *b_ProbeTracks_dxy;   //!
   TBranch        *b_ProbeTracks_dxyS;   //!
   TBranch        *b_ProbeTracks_dz;   //!
   TBranch        *b_ProbeTracks_dzS;   //!
   TBranch        *b_ProbeTracks_eta;   //!
   TBranch        *b_ProbeTracks_mass;   //!
   TBranch        *b_ProbeTracks_phi;   //!
   TBranch        *b_ProbeTracks_pt;   //!
   TBranch        *b_ProbeTracks_vx;   //!
   TBranch        *b_ProbeTracks_vy;   //!
   TBranch        *b_ProbeTracks_vz;   //!
   TBranch        *b_ProbeTracks_charge;   //!
   TBranch        *b_ProbeTracks_isLostTrk;   //!
   TBranch        *b_ProbeTracks_isPacked;   //!
   TBranch        *b_ProbeTracks_nValidHits;   //!
   TBranch        *b_ProbeTracks_pdgId;   //!
   TBranch        *b_ProbeTracks_isMatchedToEle;   //!
   TBranch        *b_ProbeTracks_isMatchedToLooseMuon;   //!
   TBranch        *b_ProbeTracks_isMatchedToLowPtEle;   //!
   TBranch        *b_ProbeTracks_isMatchedToMediumMuon;   //!
   TBranch        *b_ProbeTracks_isMatchedToMuon;   //!
   TBranch        *b_ProbeTracks_isMatchedToSoftMuon;   //!
   TBranch        *b_HLT_Mu7_IP4;   //!
   TBranch        *b_HLT_Mu8_IP6;   //!
   TBranch        *b_HLT_Mu8_IP5;   //!
   TBranch        *b_HLT_Mu8_IP3;   //!
   TBranch        *b_HLT_Mu8p5_IP3p5;   //!
   TBranch        *b_HLT_Mu9_IP6;   //!
   TBranch        *b_HLT_Mu9_IP5;   //!
   TBranch        *b_HLT_Mu9_IP4;   //!
   TBranch        *b_HLT_Mu10p5_IP3p5;   //!
   TBranch        *b_HLT_Mu12_IP6;   //!
   TBranch        *b_L1_SingleMu7er1p5;   //!
   TBranch        *b_L1_SingleMu8er1p5;   //!
   TBranch        *b_L1_SingleMu9er1p5;   //!
   TBranch        *b_L1_SingleMu10er1p5;   //!
   TBranch        *b_L1_SingleMu12er1p5;   //!
   TBranch        *b_L1_SingleMu22;   //!
   TBranch        *b_nTrigObj;   //!
   TBranch        *b_TrigObj_pt;   //!
   TBranch        *b_TrigObj_eta;   //!
   TBranch        *b_TrigObj_phi;   //!
   TBranch        *b_TrigObj_l1pt;   //!
   TBranch        *b_TrigObj_l1pt_2;   //!
   TBranch        *b_TrigObj_l2pt;   //!
   TBranch        *b_TrigObj_id;   //!
   TBranch        *b_TrigObj_l1iso;   //!
   TBranch        *b_TrigObj_l1charge;   //!
   TBranch        *b_TrigObj_filterBits;   //!
   TBranch        *b_nOtherPV;   //!
   TBranch        *b_OtherPV_z;   //!
   TBranch        *b_PV_ndof;   //!
   TBranch        *b_PV_x;   //!
   TBranch        *b_PV_y;   //!
   TBranch        *b_PV_z;   //!
   TBranch        *b_PV_chi2;   //!
   TBranch        *b_PV_score;   //!
   TBranch        *b_PV_npvs;   //!
   TBranch        *b_PV_npvsGood;   //!
   TBranch        *b_nSV;   //!
   TBranch        *b_SV_dlen;   //!
   TBranch        *b_SV_dlenSig;   //!
   TBranch        *b_SV_pAngle;   //!
   TBranch        *b_Electron_genPartIdx;   //!
   TBranch        *b_Electron_genPartFlav;   //!
   TBranch        *b_Muon_genPartIdx;   //!
   TBranch        *b_Muon_genPartFlav;   //!
   TBranch        *b_SV_chi2;   //!
   TBranch        *b_SV_eta;   //!
   TBranch        *b_SV_mass;   //!
   TBranch        *b_SV_ndof;   //!
   TBranch        *b_SV_phi;   //!
   TBranch        *b_SV_pt;   //!
   TBranch        *b_SV_x;   //!
   TBranch        *b_SV_y;   //!
   TBranch        *b_SV_z;   //!
   TBranch        *b_ProbeTracks_genPartIdx;   //!
   TBranch        *b_ProbeTracks_genPartFlav;   //!

   HNLClass(TTree *tree=0);
   virtual void     Init(TTree *tree);
};

#endif

