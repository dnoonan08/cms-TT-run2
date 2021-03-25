btagWeightCategory = ["1","(1-btagWeight[0])","(btagWeight[2])","(btagWeight[1])"]
def GetHistogramInfo(extraCuts="(passPresel_Mu && nJet>=4 && nBJet>=2)*", nBJets=1):
    hDict = { 
             "Muon_pt"              : ["Muon_pt"      , "Muon_pt"     , [50,30,1000], extraCuts, "", True],
             "Muon_eta"             : ["Muon_eta"     , "Muon_eta"    , [20,-2.4,2.4], extraCuts, "", True],
             "Muon_phi"             : ["Muon_phi"     , "Muon_phi"    , [20,-3.15,3.15], extraCuts, "", True],
             "Electron_pt"          : ["Electron_pt"     , "Electron_pt"    , [20,30,1000], extraCuts, "", True],
             "Electron_eta_sc"       : ["Electron_eta_sc"  , "Electron_eta_sc" , [20,-2.4,2.4], extraCuts, "", True],
             "Electron_phi"         : ["Electron_phi"    , "Electron_phi"   , [20,-3.15,3.15], extraCuts, "", True],
             "Photon_et"            : ["Photon_et"     , "Photon_et"    , [50,20,1000], extraCuts, "", True],
             "Jet_size"             : ["Jet_size"      , "Jet_size"     , [16,-0.5,15.5], extraCuts, "", True],
             "Jet_b_size"           : ["Jet_b_size"     , "Jet_b_size"    , [10,0,10], extraCuts, "", True],
             "Jet_pt"               : ["Jet_pt"     , "Jet_pt"    , [50,30,1000], extraCuts, "", True],
             "Reco_met"             : ["Reco_met"     , "Reco_met"      , [20,0,1000], extraCuts, "", True],
             "Reco_ht"              : ["Reco_ht"        , "Reco_ht"        , [50,0,3000], extraCuts, "", True],
             "Reco_st"              : ["Reco_st"        , "Reco_st"        , [50,0,3000], extraCuts, "", True],
             "Reco_mass_t_had"      : ["Reco_mass_t_had", "Reco_mass_t_had", [30,0,3000], extraCuts, "", True],
             "Reco_mass_t_lep"      : ["Reco_mass_t_lep", "Reco_mass_t_lep", [30,0,3000], extraCuts, "", True],
             "Reco_mass_tt"         : ["Reco_mass_tt", "Reco_mass_tt", [30,0,3000], extraCuts, "", True],
             "Reco_mass_T_had"      : ["Reco_mass_T_had", "Reco_mass_T_had", [30,0,3000], extraCuts , "", True],
             "Reco_mass_T_lep"      : ["Reco_mass_T_lep", "Reco_mass_T_lep", [30,0,3000], extraCuts , "", True],
             "Reco_mass_T"          : ["Reco_mass_T", "Reco_mass_T", [30,0,3000], extraCuts      , "", True],
             "Reco_mass_TT"         : ["Reco_mass_TT", "Reco_mass_TT", [30,0,6000], extraCuts, "", True],
             "Reco_chi2"            : ["Reco_chi2", "Reco_chi2", [50, 0,1000], extraCuts, "", True],
             "FatJet_size"             : ["FatJet_size"            , "FatJet_size"            , [16,-0.5,15.5], extraCuts, "", True],
             "FatJet_pt"               : ["FatJet_pt"              , "FatJet_pt"              , [50,0,2000], extraCuts, "", True],
             "FatJet_eta"              : ["FatJet_eta"             , "FatJet_eta"             , [20,-2.4,2.4], extraCuts, "", True],
             "FatJet_mass"             : ["FatJet_mass"            , "FatJet_mass"            , [50,0,2000], extraCuts, "", True],
             "FatJet_msoftdrop"        : ["FatJet_msoftdrop"       , "FatJet_msoftdrop"       , [50,0,2000], extraCuts, "", True],
             "FatJet_btagDeepB"        : ["FatJet_btagDeepB"       , "FatJet_btagDeepB"       , [20,-2.0,2.0], extraCuts, "", True],
             "FatJet_deepTagMD_TvsQCD" : ["FatJet_deepTagMD_TvsQCD", "FatJet_deepTagMD_TvsQCD", [20,-2.0,2.0], extraCuts, "", True],
             "FatJet_deepTagMD_WvsQCD" : ["FatJet_deepTagMD_WvsQCD", "FatJet_deepTagMD_WvsQCD", [20,-2.0,2.0], extraCuts, "", True],
             "FatJet_deepTag_TvsQCD"   : ["FatJet_deepTag_TvsQCD"  , "FatJet_deepTag_TvsQCD"  , [20,-2.0,2.0], extraCuts, "", True],
             "FatJet_deepTag_WvsQCD"   : ["FatJet_deepTag_WvsQCD"  , "FatJet_deepTag_WvsQCD"  , [20,-2.0,2.0], extraCuts, "", True],
             }
    return hDict 
    
allPlotList = [
"Muon_pt",      
"Muon_eta",     
"Electron_pt",      
"Electron_eta_sc",
"Photon_et",      
"Jet_pt",      
"Jet_size",      
"Jet_b_size",     
"Reco_ht",
"Reco_st",
"Reco_met",       
"Reco_chi2",
"Reco_mass_T",
"Reco_mass_TT",
"Reco_mass_t_had",
"Reco_mass_t_lep",
"Reco_mass_T_had",
"Reco_mass_T_lep",
"FatJet_size",                 
"FatJet_pt",               
"FatJet_eta",              
"FatJet_mass",             
"FatJet_msoftdrop",        
"FatJet_btagDeepB",       
"FatJet_deepTagMD_TvsQCD", 
"FatJet_deepTagMD_WvsQCD", 
"FatJet_deepTag_TvsQCD",   
"FatJet_deepTag_WvsQCD",   
]

allPlotList2D = [
["Reco_mass_T"    , "Reco_chi2"],
["Reco_mass_t_had", "Reco_chi2"],
["Reco_mass_t_lep", "Reco_chi2"],
["Reco_mass_T_had", "Reco_chi2"],
["Reco_mass_T_lep", "Reco_chi2"],
["Reco_mass_t_had", "Reco_mass_t_lep"],
["Reco_mass_T_had", "Reco_mass_T_lep"],
]
