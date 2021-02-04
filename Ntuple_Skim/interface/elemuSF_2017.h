#include<TH2F.h>
//only muon is updated here 01_03_2019

//In bins of 0.2 in absEta
double mu2017TrackingSF[6][4][3]={ {{0.987581042 ,0.9910777627756951 ,0.994574483 },{0.98799519,0.9927389275515244,0.997482665},{0.984639319,0.9924252719877384,1.000211225},{0.971410269,0.9758095839531763,0.980208899},},
                                { {0.98551296,0.987410468262084,0.989307977},{0.963185179,0.985063939762512,1.006942701},{0.97418309,0.9890884461284933,1.003993802},{0.971804258,0.9745153594179884,0.97722646},},
                                { {0.990377578,0.9907753279135898,0.991173078},{0.985845594,0.9865359464182247,0.987226299},{0.982222683,0.9946469069883841,1.007071131},{0.977737492,0.9787410500158746,0.979744608},},
                                { {0.988925059,0.9892483588952047,0.989571658},{0.964778062,0.984913093101493,1.005048124},{0.982721204,0.9926528825155183,1.002584561},{0.977066062,0.978189122919501,0.979312184},},
                                { {0.984694243,0.9855545160334763,0.986414789},{0.982313915,0.9839056384760008,0.985497362},{0.989665101,0.9906364222943529,0.991607744},{0.963656189,0.9673568416097894,0.971057494},},
                                {{0.988185305,0.9898057377093389,0.99142617},{0.971932525,0.984060403143468,0.996188281},{0.989911036,0.9920464322143979,0.994181829},{0.968004521,0.9766311856731202,0.98525785}, }   };
//Taken from combining BCDEF and GH from https://twiki.cern.ch/twiki/bin/view/CMS/MuonWorkInProgressAndPagResults
double mu2017IdIsoSF[6][4][3]={{{0.9891598392166276, 0.9927813488028193, 0.996402858389011}, {0.9892995191523063, 0.995732951928973, 1.00216638470564}, {0.9887328325459126, 0.9914010546323393, 0.994069276718766}, {0.9851736041228438, 0.9888297103629511, 0.9924858166030583},},
        {{0.9955550774944956, 0.9973322326192515, 0.9991093877440075}, {0.9857449462404535, 0.9889686790250191, 0.9921924118095846}, {0.9926007786226093, 0.9940667663237377, 0.9955327540248661}, {0.9903434678457551, 0.9923197624578961, 0.9942960570700371},},
        {{0.9970917908322766, 0.9975767335443745, 0.9980616762564724}, {0.9938148349097943, 0.9947379753441337, 0.995661115778473}, {0.9950417624401411, 0.995523772936602, 0.9960057834330629}, {0.994287516677547, 0.9949958672766567, 0.9957042178757664},},
        {{0.9979610091368057, 0.9982123404899821, 0.9984636718431584}, {0.9966150923966932, 0.9970159957153533, 0.9974168990340133}, {0.9972441081412257, 0.9974679188552951, 0.9976917295693645}, {0.9975162226361343, 0.9979260585567848, 0.9983358944774354},},
        {{0.997990489578844, 0.998446695574627, 0.99890290157041}, {0.998441394608484, 0.9993462494443384, 1.0002511042801927}, {0.9981077759532497, 0.9985968873383925, 0.9990859987235352}, {0.9985041707207148, 0.999363924350496, 1.0002236779802771},},
        {{0.9989078451231627, 0.9995299697442489, 1.000152094365335}, {0.9988380307535794, 1.0000177267113954, 1.0011974226692115}, {0.9989425049536994, 0.9996491176044998, 1.0003557302553003}, {0.9969850000796211, 0.9983468116552913, 0.9997086232309614},}};
//Taken from combining BCDEF and GH from https://twiki.cern.ch/twiki/bin/view/CMS/MuonWorkInProgressAndPagResults
double mu2017TrigSF[7][4][3] = {{{0.9190362393517787, 0.9206593632698059, 0.9222824871878331}, {0.8887993626796371, 0.8919714689254761, 0.895143575171315}, {0.8863851496923948, 0.8896984457969666, 0.8930117419015383}, {0.8021953935978753, 0.809643030166626, 0.8170906667353767},},
        {{0.9033310208950234, 0.906362771987915, 0.9093945230808067}, {0.8644020693144588, 0.8705963492393494, 0.8767906291642399}, {0.8816059239807954, 0.8860496282577515, 0.8904933325347075}, {0.7726680149691089, 0.7922462224960327, 0.8118244300229566},},
{{0.8983559756586376, 0.8986954092979431, 0.8990348429372487}, {0.8612889317892432, 0.8621211647987366, 0.86295339780823}, {0.8178233727199296, 0.8184208869934082, 0.8190184012668869}, {0.6412250571304302, 0.642516553401947, 0.6438080496734638},},
{{0.9140686183499893, 0.9141939878463745, 0.9143193573427597}, {0.8884258660365222, 0.8886955976486206, 0.888965329260719}, {0.853721717384555, 0.8539246320724487, 0.8541275467603424}, {0.7252091172768393, 0.725704550743103, 0.7261999842093667},},
{{0.9245437436524544, 0.9246364831924438, 0.9247292227324333}, {0.9031082348966514, 0.9032931327819824, 0.9034780306673135}, {0.876658332822603, 0.8767918348312378, 0.8769253368398726}, {0.7718224518297263, 0.7721936106681824, 0.7725647695066384},},
{{0.9273838062750666, 0.9275859594345093, 0.927788112593952}, {0.9080896031657784, 0.9084885120391846, 0.9088874209125908}, {0.8860728621169096, 0.8863519430160522, 0.8866310239151949}, {0.7923453800560504, 0.7931295037269592, 0.7939136273978681},},
{{0.9280409790082962, 0.9285075664520264, 0.9289741538957565}, {0.9061309835769022, 0.9069061875343323, 0.9076813914917623}, {0.89093593407123, 0.891466498374939, 0.891997062678648}, {0.8013494838042939, 0.8031379580497742, 0.8049264322952544},}};

//https://twiki.cern.ch/twiki/bin/view/CMS/EgammaIDRecipesRun2#Instructions_for_applying_electr

/*double eleTrigSF[10][6][3]={ { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, },
							 { {1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.},{1.,1.,1.}, }, };

*/
double ele2017RecoSF[12][4][3]={{{0.969903,0.977482,0.985061},{0.979967,0.983673,0.98738},{0.981912,0.996951,1.01199},{0.980283,0.989909,0.999535},},
			 	{{0.979011,0.981614,0.984217},{0.977839,0.981707,0.985575},{0.989156,0.996954,1.00475},{0.98504,0.989889,0.994738},},
				{{0.934416,0.948352,0.962287},{0.956692,0.970619,0.984546},{0.96241,1.00323,1.04405},{0.960473,1.00959,1.05872},},
				{{0.964238,0.969262,0.974286},{0.97116,0.975535,0.97991},{0.988032,0.995902,1.00377},{0.978448,0.984725,0.991002},},
				{{0.971768,0.976555,0.981341},{0.977058,0.979695,0.982333},{0.989413,0.991895,0.994376},{0.982948,0.987891,0.992834},},
				{{0.963561,0.970378,0.977195},{0.977011,0.979654,0.982297},{0.987983,0.991903,0.995823},{0.992182,0.993933,0.995685},},
				{{0.96353,0.970348,0.977165},{0.974977,0.97762,0.980263},{0.987983,0.991903,0.995823},{0.992182,0.993933,0.995685},},
				{{0.967635,0.972421,0.977207},{0.976043,0.97868,0.981318},{0.989413,0.991895,0.994376},{0.982948,0.987891,0.992834},},
				{{0.964893,0.969917,0.974941},{0.972991,0.977366,0.981741},{0.988032,0.995902,1.00377},{0.978448,0.984725,0.991002},},
				{{0.944029,0.957965,0.9719},{0.94999,0.963945,0.977899},{0.96241,1.00323,1.04405},{0.960473,1.00959,1.05872},},
				{{0.976989,0.979592,0.982195},{0.978873,0.982741,0.986609},{0.989156,0.996954,1.00475},{0.98504,0.989889,0.994738},},
				{{0.972013,0.979592,0.987171},{0.980033,0.98374,0.987447},{0.981912,0.996951,1.01199},{0.980283,0.989909,0.999535},}, };

double ele2017IDSF[10][6][3]={{{0.88701,0.972569,1.05813},{0.900843,0.927609,0.954376},{0.905316,0.919605,0.933894},{0.894905,0.91366,0.932415},{0.968556,0.989247,1.00994},{0.822002,0.925799,1.0296},},
				{{0.901079,0.959267,1.01745},{0.928028,0.958333,0.988638},{0.93908,0.95478,0.970481},{0.950706,0.961399,0.972093},{0.917097,0.974099,1.0311},{0.854228,0.972406,1.09058},},
				{{0,1,2},{0,1,2},{0,1,2},{0,1,2},{0,1,2},{0,1,2},},
				{{0.98866,1.05699,1.12533},{0.951656,0.988095,1.02453},{0.943454,0.960784,0.978114},{0.949642,0.959184,0.968726},{0.954479,0.98007,1.00566},{0.895014,0.952017,1.00902},},
				{{0.959016,1.00879,1.05857},{0.967551,0.990712,1.01387},{0.950145,0.965834,0.981524},{0.940855,0.956364,0.971872},{0.934489,0.976082,1.01768},{0.924774,0.957655,0.990535},},
				{{0.937461,0.986957,1.03645},{0.961571,0.984733,1.00789},{0.951673,0.967363,0.983053},{0.94589,0.961399,0.976908},{0.934725,0.976298,1.01787},{0.926976,0.959913,0.992851},},
				{{0.962754,1.03109,1.09942},{0.953304,0.989744,1.02618},{0.948867,0.966197,0.983527},{0.947311,0.956853,0.966395},{0.945226,0.970862,0.996499},{0.900464,0.957563,1.01466},},
				{{0,1,2},{0,1,2},{0,1,2},{0,1,2},{0,1,2},{0,1,2},},
				{{0.909226,0.967413,1.0256},{0.927904,0.958209,0.988514},{0.934106,0.949807,0.965508},{0.94146,0.952153,0.962846},{0.93504,0.992063,1.04909},{0.830599,0.948258,1.06592},},
				{{0.897598,0.983092,1.06859},{0.918049,0.944816,0.971583},{0.908788,0.923077,0.937366},{0.90599,0.924745,0.9435},{0.93634,0.956927,0.977513},{0.982989,1.08918,1.19537},}, };
double get2017MuSF(double pt, double eta, int systLevel){
//double getMuSF(double pt, double eta, int systLevel){

	double abseta = abs(eta);

	//binned in 0.2 in absEta
	//int muTrackEtaRegion = int(abseta/0.2);

	int muEtaRegion = -1;
	if (abseta < 0.9) {muEtaRegion = 0;}
	else if (abseta < 1.2) {muEtaRegion = 1;}
	else if (abseta < 2.1) {muEtaRegion = 2;}
	else {muEtaRegion = 3;}

	int muPtRegion_Trigger = -1;
	if (pt < 32){muPtRegion_Trigger = 0;}
	else if (pt < 40){muPtRegion_Trigger = 1;}
	else if (pt < 50){muPtRegion_Trigger = 2;}
	else if (pt < 60){muPtRegion_Trigger = 3;}
	else if (pt < 120){muPtRegion_Trigger = 4;}
	else if (pt < 200){muPtRegion_Trigger = 5;}
	else {muPtRegion_Trigger = 6;}

	int muPtRegion_IDIso = -1;
      	if (pt < 25){muPtRegion_IDIso = 0;}
	else if (pt < 30){muPtRegion_IDIso = 1;}
	else if (pt < 40){muPtRegion_IDIso = 2;}
	else if (pt < 50){muPtRegion_IDIso = 3;}
	else if (pt < 60){muPtRegion_IDIso = 4;}
	else {muPtRegion_IDIso = 5;}

        double syst_var[3][3]={ {0.99,0.995,0.995},{1.,1.,1.},{1.01,1.005,1.005}};
	double muEffSF=-1;
	
	//muEffSF = muTrackingSF[muTrackEtaRegion][systLevel] *syst_var[systLevel][0]* muIdIsoSF[muPtRegion_IDIso][muEtaRegion][systLevel]* syst_var[systLevel][1]* muTrigSF[muPtRegion_Trigger][muEtaRegion][systLevel]*syst_var[systLevel][2];
	muEffSF = mu2017TrackingSF[muPtRegion_IDIso][muEtaRegion][systLevel] *syst_var[systLevel][0]* mu2017IdIsoSF[muPtRegion_IDIso][muEtaRegion][systLevel]* syst_var[systLevel][1]* mu2017TrigSF[muPtRegion_Trigger][muEtaRegion][systLevel]*syst_var[systLevel][2];

//cout<<"mu track sf = "<<mu2017TrackingSF[muPtRegion_IDIso][muEtaRegion][systLevel] *syst_var[systLevel][0]<<endl;
//cout<<"mu ISo sf = "<<mu2017IdIsoSF[muPtRegion_IDIso][muEtaRegion][systLevel] *syst_var[systLevel][0]<<endl;
//cout<<"mu trigger sf = "<<mu2017TrigSF[muPtRegion_IDIso][muEtaRegion][systLevel] *syst_var[systLevel][0]<<endl;

	return muEffSF;

}


double get2017EleSF(double pt, double eta, int systLevel){
//double getEleSF(double pt, double eta, int systLevel){

	int eleRecoEtaRegion = 0;
	int eleIDEtaRegion = 0;

	/*if (eta > -2.45 ){eleRecoEtaRegion++;}
	if (eta > -2.4	){eleRecoEtaRegion++;}
	if (eta > -2.3	){eleRecoEtaRegion++;}
	if (eta > -2.2	){eleRecoEtaRegion++;}
	if (eta > -2.0	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > -1.8	){eleRecoEtaRegion++;}
	if (eta > -1.63	){eleRecoEtaRegion++;}
	if (eta > -1.566){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > -1.444){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > -1.2	){eleRecoEtaRegion++;}
	if (eta > -1.0	){eleRecoEtaRegion++;}
	if (eta > -0.8	){eleIDEtaRegion++;}
	if (eta > -0.6	){eleRecoEtaRegion++;}
	if (eta > -0.4	){eleRecoEtaRegion++;}
	if (eta > -0.2	){eleRecoEtaRegion++;}
	if (eta > 0.0	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > 0.2	){eleRecoEtaRegion++;}
	if (eta > 0.4	){eleRecoEtaRegion++;}
	if (eta > 0.6	){eleRecoEtaRegion++;}
	if (eta > 0.8	){eleIDEtaRegion++;}
	if (eta > 1.0	){eleRecoEtaRegion++;}
	if (eta > 1.2	){eleRecoEtaRegion++;}
	if (eta > 1.444	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > 1.566	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > 1.63	){eleRecoEtaRegion++;}
	if (eta > 1.8	){eleRecoEtaRegion++;}
	if (eta > 2.0	){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > 2.2	){eleRecoEtaRegion++;}
	if (eta > 2.3	){eleRecoEtaRegion++;}
	if (eta > 2.4	){eleRecoEtaRegion++;}
	if (eta > 2.45	){eleRecoEtaRegion++;}*/
	
//	if (eta < -2.0	){eleRecoEtaRegion++;  eleIDEtaRegion++;}
	if (eta > -2.0 ){eleRecoEtaRegion++;   eleIDEtaRegion++;}
	if (eta > -1.566){eleRecoEtaRegion++;  eleIDEtaRegion++;}
	if (eta > -1.444 ){eleRecoEtaRegion++; eleIDEtaRegion++;}
	if (eta > -0.8 ){                       eleIDEtaRegion++; }
	if (eta > -1.0 ){eleRecoEtaRegion++; }
	if (eta > -0.5 ){eleRecoEtaRegion++; }
	if (eta > 0.0 ){eleRecoEtaRegion++;    eleIDEtaRegion++;}
	if (eta > 0.5 ){eleRecoEtaRegion++; }
	if (eta > 1.0 ){eleRecoEtaRegion++; }
	if (eta > 0.8 ){                       eleIDEtaRegion++; }
	if (eta > 1.444	){eleRecoEtaRegion++;  eleIDEtaRegion++;}
	if (eta > 1.566	){eleRecoEtaRegion++;  eleIDEtaRegion++;}
	if (eta > 2.0	){eleRecoEtaRegion++;  eleIDEtaRegion++;}

	int eleIDPtRegion = 0;

//	if (pt > 10.0  ){eleIDPtRegion++;}
	if (pt > 20.0  ){eleIDPtRegion++;}
	if (pt > 35.0  ){eleIDPtRegion++;}
	if (pt > 50.0  ){eleIDPtRegion++;}
	if (pt > 100.0  ){eleIDPtRegion++;}
	if (pt > 200.0 ){eleIDPtRegion++;}
	
	int eleRecoPtRegion = 0;
//	if (pt > 20.0 ){eleRecoPtRegion++;}
	if (pt > 45.0  ){eleRecoPtRegion++;}
	if (pt > 75.0  ){eleRecoPtRegion++;}
	if (pt > 100.0  ){eleRecoPtRegion++;}

//	int eleTrigEtaRegion = eleIDEtaRegion;
//	int eleTrigPtRegion  = eleIDPtRegion;

	double eleEffSF = ele2017IDSF[eleIDEtaRegion][eleIDPtRegion][systLevel] * ele2017RecoSF[eleRecoEtaRegion][eleRecoPtRegion][systLevel];
	//double eleEffSF = eleTrigSF[eleTrigEtaRegion][eleTrigPtRegion][systLevel] * eleIDSF[eleIDEtaRegion][eleIDPtRegion][systLevel] * eleRecoSF[eleRecoEtaRegion][systLevel];
	//double eleEffSF = eleTrigSF[eleTrigEtaRegion][eleTrigPtRegion][systLevel] * eleIDSF[systLevel] * eleRecoSF[systLevel];
//cout<<"IDSF = "<<ele2017IDSF[eleIDEtaRegion][eleIDPtRegion][systLevel]<<endl;
//cout<<"Reco EFF = "<<ele2017RecoSF[eleRecoEtaRegion][eleRecoPtRegion][systLevel]<<endl;	
       return eleEffSF;


}






double pho2017IDSF[10][5][3]={{{0.987394,1.02926,1.07113},{0.960999,0.985135,1.00927},{0.968756,0.985056,1.00136},{0.936331,1.02689,1.11746},{0.793648,0.995122,1.1966},},
				{{0.959802,0.991005,1.02221},{0.959727,0.981747,1.00377},{0.971872,0.985203,0.998535},{0.968596,0.986779,1.00496},{0.958923,1.05853,1.15814},},
				{{0,1,2},{0,1,2},{0,1,2},{0,1,2},{0,1,2},},
				{{1.00195,1.0227,1.04344},{0.967061,0.985933,1.00481},{0.942869,0.969212,0.995555},{0.910044,0.980512,1.05098},{0.833777,0.983432,1.13309},},
				{{1.00292,1.02199,1.04107},{0.959828,0.981747,1.00367},{0.940553,0.960199,0.979845},{0.938001,0.991261,1.04452},{0.887392,0.967391,1.04739},},
				{{0.999819,1.0189,1.03797},{0.967691,0.98961,1.01153},{0.957966,0.977612,0.997258},{0.939311,0.992537,1.04576},{0.875032,0.954933,1.03483},},
				{{1.0035,1.02425,1.045},{0.970871,0.989744,1.00862},{0.942831,0.969174,0.995517},{0.913851,0.984318,1.05479},{0.780216,0.929929,1.07964},},
				{{0,1,2},{0,1,2},{0,1,2},{0,1,2},{0,1,2},},
				{{0.977806,1.00901,1.04021},{0.963675,0.985696,1.00772},{0.973088,0.98642,0.999751},{0.974452,0.992857,1.01126},{0.761942,0.860262,0.958582},},
				{{1.02611,1.06794,1.10978},{0.966405,0.990541,1.01468},{0.97252,0.98882,1.00512},{0.933782,1.0243,1.11482},{0.803762,1.00601,1.20826},},};

double get2017PhoSF(double pt, double eta, int systLevel){
//double getPhoSF(double pt, double eta, int systLevel){


	
	int phoIDEtaRegion = 0;

//	if (eta < -2.0	){phoIDEtaRegion++;}
	if (eta > -2.0	){phoIDEtaRegion++;}
	if (eta > -1.566){phoIDEtaRegion++;}
	if (eta > -1.444){phoIDEtaRegion++;}
	if (eta > -0.8	){phoIDEtaRegion++;}
	if (eta > 0.0	){phoIDEtaRegion++;}
	if (eta > 0.8	){phoIDEtaRegion++;}
	if (eta > 1.444	){phoIDEtaRegion++;}
	if (eta > 1.566	){phoIDEtaRegion++;}
	if (eta > 2.0	){phoIDEtaRegion++;}


	int phoIDPtRegion = 0;

//	if (pt > 20.0  ){phoIDPtRegion++;}
//	if (pt < 35.0  ){phoIDPtRegion++;}
	if (pt > 35.0  ){phoIDPtRegion++;}
	if (pt > 50.0  ){phoIDPtRegion++;}
	if (pt > 100.0  ){phoIDPtRegion++;}
	if (pt > 200.0 ){phoIDPtRegion++;}
        

	double phoSF = pho2017IDSF[phoIDEtaRegion][phoIDPtRegion][systLevel];
//	double phoSF = phoIDSF[systLevel];
  //      tf2->Clear();
  //aloke
 // cout<<"phoSF = "<<phoSF<<endl;
	return phoSF;


}

