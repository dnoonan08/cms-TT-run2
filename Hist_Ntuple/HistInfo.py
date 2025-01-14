btagWeightCategory = ["1","(1-btagWeight[0])","(btagWeight[2])","(btagWeight[1])"]
'''
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
'''

def GetHistogramInfo(extraCuts="(passPresel_Mu && nJet>=4 && nBJet>=2)*", nBJets=1):
    hDict = { 
             "Weight_lumi"              : ["Weight_lumi"             , "Weight_lumi"            , [30,0.0,1500000], extraCuts, "", True],
             "Weight_pu"                : ["Weight_pu"               , "Weight_pu"              , [25,0.0,2.0], extraCuts, "", True],
             "Weight_prefire"           : ["Weight_prefire"          , "Weight_prefire"         , [30,0.0,1.5], extraCuts, "", True],
             "Weight_btag"              : ["Weight_btag"             , "Weight_btag"            , [25,0.0,2.0], extraCuts, "", True],
             "Weight_mu"                : ["Weight_mu"               , "Weight_mu"              , [30,0.0,1.5], extraCuts, "", True],
             "Weight_mu_id_iso"         : ["Weight_mu_id_iso"        , "Weight_mu_id_iso"       , [30,0.0,1.5], extraCuts, "", True],
             "Weight_mu_trig"           : ["Weight_mu_trig"          , "Weight_mu_trig"         , [30,0.0,1.5], extraCuts, "", True],
             "Weight_ele"               : ["Weight_ele"              , "Weight_ele"             , [30,0.0,1.5], extraCuts, "", True],
             "Weight_ele_id_reco"       : ["Weight_ele_id_reco"      , "Weight_ele_id_reco"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_ele_trig"          : ["Weight_ele_trig"         , "Weight_ele_trig"        , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pho"               : ["Weight_pho"              , "Weight_pho"             , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pho_id"            : ["Weight_pho_id"           , "Weight_pho_id"          , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pho_e_veto"        : ["Weight_pho_e_veto"       , "Weight_pho_e_veto"      , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pu_up"             : ["Weight_pu_up"            , "Weight_pu_up"           , [25,0.0,2.0], extraCuts, "", True],
             "Weight_pu_down"           : ["Weight_pu_down"          , "Weight_pu_down"         , [25,0.0,2.0], extraCuts, "", True],
             "Weight_prefire_up"        : ["Weight_prefire_up"       , "Weight_prefire_up"      , [30,0.0,1.5], extraCuts, "", True],
             "Weight_prefire_down"      : ["Weight_prefire_down"     , "Weight_prefire_down"     ,[30,0.0,1.5], extraCuts, "", True],
             "Weight_btag_b_up"         : ["Weight_btag_b_up"        , "Weight_btag_b_up"       , [25,0.0,2.0], extraCuts, "", True],
             "Weight_btag_b_down"       : ["Weight_btag_b_down"      , "Weight_btag_b_down"     , [25,0.0,2.0], extraCuts, "", True],
             "Weight_btag_l_up"         : ["Weight_btag_l_up"        , "Weight_btag_l_up"       , [25,0.0,2.0], extraCuts, "", True],
             "Weight_btag_l_down"       : ["Weight_btag_l_down"      , "Weight_btag_l_down"     , [25,0.0,2.0], extraCuts, "", True],
             "Weight_mu_up"             : ["Weight_mu_up"            , "Weight_mu_up"           , [30,0.0,1.5], extraCuts, "", True],
             "Weight_mu_down"           : ["Weight_mu_down"          , "Weight_mu_down"         , [30,0.0,1.5], extraCuts, "", True],
             "Weight_mu_id_iso_up"      : ["Weight_mu_id_iso_up"     , "Weight_mu_id_iso_up"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_mu_id_iso_down"    : ["Weight_mu_id_iso_down"   , "Weight_mu_id_iso_down"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_mu_trig_up"        : ["Weight_mu_trig_up"       , "Weight_mu_trig_up"      , [30,0.0,1.5], extraCuts, "", True],
             "Weight_mu_trig_down"      : ["Weight_mu_trig_down"     , "Weight_mu_trig_down"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_ele_up"            : ["Weight_ele_up"           , "Weight_ele_up"          , [30,0.0,1.5], extraCuts, "", True],
             "Weight_ele_down"          : ["Weight_ele_down"         , "Weight_ele_down"        , [30,0.0,1.5], extraCuts, "", True],
             "Weight_ele_id_reco_up"    : ["Weight_ele_id_reco_up"   , "Weight_ele_id_reco_up"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_ele_id_reco_down"  : ["Weight_ele_id_reco_down" , "Weight_ele_id_reco_down"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_ele_trig_up"       : ["Weight_ele_trig_up"      , "Weight_ele_trig_up"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_ele_trig_down"     : ["Weight_ele_trig_down"    , "Weight_ele_trig_down"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pho_up"            : ["Weight_pho_up"           , "Weight_pho_up"          , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pho_down"          : ["Weight_pho_down"         , "Weight_pho_down"        , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pho_id_up"         : ["Weight_pho_id_up"        , "Weight_pho_id_up"       , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pho_id_down"       : ["Weight_pho_id_down"      , "Weight_pho_id_down"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pho_e_veto_up"     : ["Weight_pho_e_veto_up"    , "Weight_pho_e_veto_up"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pho_e_veto_down"   : ["Weight_pho_e_veto_down"  , "Weight_pho_e_veto_down"     , [30,0.0,1.5], extraCuts, "", True],
             "Weight_q2"                : ["Weight_q2"               , "Weight_q2"              , [30,0.0,1.5], extraCuts, "", True],
             "Weight_q2_up"             : ["Weight_q2_up"            , "Weight_q2_up"           , [30,0.0,1.5], extraCuts, "", True],
             "Weight_q2_down"           : ["Weight_q2_down"          , "Weight_q2_down"         , [30,0.0,1.5], extraCuts, "", True],
             "Weight_gen"               : ["Weight_gen"              , "Weight_gen"             , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pdf"               : ["Weight_pdf"              , "Weight_pdf"             , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pdf_up"            : ["Weight_pdf_up"           , "Weight_pdf_up"          , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pdf_down"          : ["Weight_pdf_down"         , "Weight_pdf_down"        , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pdf_syst"          : ["Weight_pdf_syst"         , "Weight_pdf_syst"        , [30,0.0,1.5], extraCuts, "", True],
             "Weight_pdf_unc"           : ["Weight_pdf_unc"          , "Weight_pdf_unc"         , [30,0.0,1.5], extraCuts, "", True],
             "Weight_isr_up"            : ["Weight_isr_up"           , "Weight_isr_up"          , [30,0.0,1.5], extraCuts, "", True],
             "Weight_isr_down"          : ["Weight_isr_down"         , "Weight_isr_down"        , [30,0.0,1.5], extraCuts, "", True],
             "Weight_fsr_up"            : ["Weight_fsr_up"           , "Weight_fsr_up"          , [30,0.0,1.5], extraCuts, "", True],
             "Weight_fsr_down"          : ["Weight_fsr_down"         , "Weight_fsr_down"        , [30,0.0,1.5], extraCuts, "", True],
             }
    return hDict 
    
allPlotList = [
"Weight_lumi"             ,
"Weight_pu"               ,
"Weight_prefire"          ,
"Weight_btag"             ,
"Weight_mu"               ,
"Weight_mu_id_iso"        ,
"Weight_mu_trig"          ,
"Weight_ele"              ,
"Weight_ele_id_reco"      ,
"Weight_ele_trig"         ,
"Weight_pho"              ,
"Weight_pho_id"           ,
"Weight_pho_e_veto"       ,
"Weight_pu_up"            ,
"Weight_pu_down"          ,
"Weight_prefire_up"       ,
"Weight_prefire_down"     ,
"Weight_btag_b_up"        ,
"Weight_btag_b_down"      ,
"Weight_btag_l_up"        ,
"Weight_btag_l_down"      ,
"Weight_mu_up"            ,
"Weight_mu_down"          ,
"Weight_mu_id_iso_up"     ,
"Weight_mu_id_iso_down"   ,
"Weight_mu_trig_up"       ,
"Weight_mu_trig_down"     ,
"Weight_ele_up"           ,
"Weight_ele_down"         ,
"Weight_ele_id_reco_up"   ,
"Weight_ele_id_reco_down" ,
"Weight_ele_trig_up"      ,
"Weight_ele_trig_down"    ,
"Weight_pho_up"           ,
"Weight_pho_down"         ,
"Weight_pho_id_up"        ,
"Weight_pho_id_down"      ,
"Weight_pho_e_veto_up"    ,
"Weight_pho_e_veto_down"  ,
"Weight_q2"               ,
"Weight_q2_up"            ,
"Weight_q2_down"          ,
"Weight_gen"              ,
"Weight_pdf"              ,
"Weight_pdf_up"           ,
"Weight_pdf_down"         ,
"Weight_pdf_syst"         ,
"Weight_pdf_unc"          ,
"Weight_isr_up"           ,
"Weight_isr_down"         ,
"Weight_fsr_up"           ,
"Weight_fsr_down"         ,
]
allPlotListNominal = [
"Weight_pu"      , 
"Weight_prefire" , 
"Weight_btag"    , 
"Weight_btag_1a" , 
"Weight_mu"      , 
"Weight_mu_id_iso",
"Weight_mu_trig" , 
"Weight_ele"     , 
"Weight_ele_id_reco" , 
"Weight_ele_trig", 
"Weight_pho"     , 
"Weight_pho_id"  , 
"Weight_pho_e_veto", 
]
