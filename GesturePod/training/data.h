/*
 * This is an autogenerated file. Modifications
 * might not be persistent.
 */
namespace protoNNParam {

#ifndef __TEST_PROTONN__
    /** Gamma for gaussian kernel */
    const PROGMEM float gamma = 0.015863258;
    /** Low Dimensional Projection Matrix */
    const PROGMEM unsigned int featDim = 84;
    const PROGMEM unsigned int ldDim = 8;

    /**
    * Projectino Matrix (W)
    * d_cap x d flattened (dimension of 2D array)
    * ldDim x featDim
    */
    const PROGMEM  float ldProjectionMatrix[]  = {
		0.31378713,1.7361087,1.1346841,-0.56790507,0.0050952057,-0.6895228,-0.15328418,-0.032905027,0.66831213,-1.3197889,0.11348034,0.7498331,0.79742926,-0.022655617,0.7967996,0.5940127,-0.3797258,-1.262535,-1.2099833,0.22360723,0.24219206,-1.5682905,-0.7018583,-0.45149994,1.4942896,0.31147423,-0.4179269,-1.4489968,-0.99171335,3.54774,0.37289053,4.052265,2.2062197,-0.2790055,-1.5759971,-0.28788477,-0.54681915,-0.09131549,-1.244353,-0.05733636,-1.6428248,-0.8519884,2.9502625,-0.3704407,-2.4909637,2.5507631,-0.435041,0.42865768,1.4855886,-1.0193665,-3.2142942,1.2814677,0.796322,-1.1185353,-0.64902014,0.37633428,2.8634174,-0.15325381,-0.8250945,-0.6344648,1.1612856,-0.7721329,-0.0351732,-0.64353746,3.2767377,-0.13369301,-0.25975674,0.87655306,0.6260601,-2.066814,-1.0675075,-0.8238591,-1.4904057,-2.179357,0.52576935,0.4513687,-1.270929,-1.5748397,-0.08737569,0.818789,1.6647269,0.7458066,0.33609548,0.6403397,
		-0.13442428,1.4412923,1.1223592,0.44183603,-0.24811831,0.49357703,1.8372201,1.9094381,1.8089042,-0.71867454,0.5120574,0.6418965,-1.512885,-0.30464622,-0.98356146,0.14677402,0.28868294,-0.9066868,0.647127,-0.08433004,-0.45005324,2.5140817,1.4751682,-0.5828341,2.1913805,-0.8028152,0.40719646,-3.6269667,0.23883216,4.1662407,0.8493976,4.3399158,2.7099197,-0.63279706,-1.1901973,1.3359743,-0.42151576,-0.33811015,-0.39307758,1.0944968,-0.78772914,-0.15084878,1.1349716,0.45765668,-0.6533294,1.9522086,0.92424214,0.6516681,0.90815467,-0.6984528,-4.18664,0.13891439,1.3750994,0.8859944,-0.49604693,0.2136086,3.280818,0.768064,-1.481842,-0.9940033,0.3411281,0.9435485,0.010574363,1.5881917,1.1323345,0.3321492,-0.5249452,1.1494384,-0.14347194,-1.3655522,-0.042361945,-0.76908535,0.46373004,0.54676706,0.28388563,-1.7367957,-2.3957865,-2.3417654,-0.9916555,-0.57261735,0.9962689,-0.4561738,0.4669059,0.10057404,
		-1.2532034,1.4306418,1.3815466,0.423755,1.0517416,-0.2516962,0.80431163,0.83570874,1.3798944,-0.8968722,0.14727773,-1.9250511,0.93537635,-0.26171923,-0.5735093,-0.68826056,-0.43520537,-0.13160568,0.51352215,-0.32672587,-0.07906687,0.42388648,0.026147058,-0.36738908,-0.051621545,-0.28388044,-1.2033228,-0.35884973,-0.17055237,0.74995863,-0.046283856,-1.6883273,-1.1803763,0.06163046,-0.43490753,-0.7060596,0.5289878,-0.14417078,-0.35255536,2.2735634,3.7432933,0.9632715,-0.9398163,-0.49992377,-0.43524337,0.020839877,0.65684515,-3.7225292,-1.2798456,0.72915435,4.3842387,3.3363636,-0.2331995,-0.5187737,-1.0077906,0.15685648,0.6358482,0.56775355,-0.02385206,-1.4824206,0.6886439,0.0024855835,-0.08824266,0.015445411,0.34652773,-1.0764136,2.9429088,0.77235323,0.92005205,0.60547036,1.1212009,0.15906528,-0.43150106,0.8466666,-0.6033174,0.6119026,0.76608205,1.4392602,1.2695577,0.8289132,-1.8399047,-0.39190894,-0.07282521,-1.8081409,
		-0.9952804,1.0627277,0.59011537,-0.31752676,-0.99841547,-0.45666695,-1.8980794,-0.45202103,-2.3580003,-0.59305227,-0.41752717,-0.68228346,-0.9711979,-0.6507892,0.6865312,1.9896027,0.3188529,1.266472,-2.6166053,-0.45966262,-0.24472547,0.902696,-1.2290957,0.76178813,-1.3173,1.0001415,0.65025896,-1.0348094,-0.8790431,-2.9002564,1.1734514,3.3665383,0.6550042,-0.12742352,0.6738774,0.35687762,-0.28170544,-0.005366656,-2.2917774,2.090729,1.4886589,2.3512874,2.9486613,-1.8624319,1.0560725,-1.1147151,0.6859135,-3.3852737,-4.4575534,3.7155037,7.381655,4.576931,-0.33995736,1.0824738,0.36166364,-0.17945597,0.9164874,0.57207364,0.4146315,-0.6284189,-0.62774366,0.021301582,1.9174323,-0.22161126,0.97173744,0.62197804,1.7570468,-0.13268994,-1.0548979,3.4533226,0.6105752,-1.0290153,-1.315077,1.183843,-0.35381755,0.25104743,0.8559755,-0.7584795,1.8942944,-1.57467,-1.3222703,-2.3156614,-0.4231205,0.34588963,
		0.25006118,0.36233595,-1.0380005,-0.8890293,-0.07789858,0.52691835,-0.3812406,-1.8204982,0.20047405,0.9797521,-0.7970429,-0.98159146,-0.444251,0.91116923,0.75540155,0.9130957,0.047081217,0.9240504,-2.684838,-0.18468663,0.06597809,-0.328395,-1.083847,0.45395306,1.2164847,0.343122,-0.2700636,-2.0897431,-0.91491586,-0.56423396,0.3695959,1.9912664,0.41369352,1.1345459,0.1829236,1.2563715,1.3213402,-0.1638059,1.4843584,-1.9548965,-3.9247594,-0.122086704,3.154317,-0.56256014,-1.2273697,-0.33923435,-0.1475372,0.5033434,-2.9321017,1.4389044,-2.1141586,-0.3560986,-0.9458313,-0.016680755,-0.23391084,-0.086013176,0.3971707,-0.91418076,0.69850296,2.2259085,0.58582,0.51059836,-0.91963667,-1.301871,-1.7736585,-0.49880466,1.3921151,0.86779743,-0.3063767,-0.8066018,-0.50396556,0.8565826,-0.31665498,-0.47686848,0.46447945,1.0396619,-1.74837,-0.6502486,0.37672973,-0.704721,0.40056863,0.981021,0.58616346,-0.5350719,
		0.25875545,0.8698238,-0.46327195,-0.5073104,0.7203919,0.3317885,-0.6271377,-1.2964605,-1.045457,0.5069917,0.3498962,-0.42922646,0.15070248,-0.36761847,-1.2511789,1.4103129,0.044771824,0.9600479,-1.9966826,-0.5092789,-0.32404888,-0.42329377,1.6794368,-2.015836,-0.20727113,-1.5953457,-0.085292004,-2.0438728,-1.6847999,-1.864944,0.67540884,3.2311182,1.8342859,0.5188244,-0.19700934,1.81536,1.3151002,0.2072669,1.9308089,-0.03528274,-1.2724959,2.4070492,1.4045733,0.34585318,0.6768368,-0.31614247,-0.49532494,3.0080287,-0.05151486,-1.0061496,-3.3248777,-0.7854414,-0.29577067,0.58179075,0.015222162,-0.17656985,-1.1266787,-0.916054,-0.44309935,1.3919988,-0.31272966,-1.0148629,-0.12303896,1.2994766,0.307579,-0.113281734,-0.84828943,-0.3300585,0.24502571,-1.4600511,-0.57093364,-0.23684253,-0.46133867,1.2553176,0.24269114,-0.028416518,-1.0771817,-1.6858041,-1.2416095,-0.9848194,0.27709725,1.587391,-0.25208712,0.20398478,
		0.7954868,-0.105617814,-1.7383652,0.56506926,-0.5034474,-0.18085496,0.11651909,1.6180135,-2.22098,0.5702545,-0.31652573,-0.13519399,1.2308972,0.7002725,-0.56709886,0.13625954,-0.28818193,-0.35562858,1.1789975,-0.49512896,0.18097812,1.470507,0.34141025,-0.43633366,0.59831357,0.25522852,0.43030915,-1.3777244,2.4129639,2.759175,0.46407318,0.0071293265,0.106296085,-1.5928297,-0.12930001,0.19798146,1.5760864,0.029972553,-2.9626968,2.8624125,3.8035953,2.509194,0.7699516,-0.088562295,-1.0926888,-1.6907667,0.5359318,-1.6600732,-0.7126503,-0.6014825,3.0219145,1.7334335,-2.262927,0.95491207,0.097717,0.113492064,0.6508301,2.6517456,1.7116723,-0.15852776,0.25849894,0.15873042,1.4442233,0.08564498,-0.5866687,-0.1187939,0.24882932,-0.8100542,-0.09693684,0.080177724,-1.143005,-0.15694194,0.107266404,0.5878523,0.27811697,-2.6936352,0.9440667,0.62625927,0.699034,1.957902,0.9911674,-1.3347983,1.551343,-1.5341738,
		-0.19254327,0.9700623,0.96199834,-0.39504474,0.523434,0.2866019,2.7447042,0.7165168,3.4999478,-4.2736115,-1.1587461,0.46490714,1.997235,-0.057247587,-0.44503024,2.2420971,0.28370285,-0.18259926,3.0541675,0.05515476,-0.8716038,3.2284083,-0.072593585,0.10076827,-1.7957028,-0.88663745,1.8364286,0.40181306,2.0960255,0.70659065,0.22270784,-0.8836567,-0.8143884,0.18764158,0.34681025,-0.46320403,-1.6367676,-0.52214766,5.460746,-1.6053848,-2.1851146,-3.0947375,-1.3277124,-0.19999114,1.317345,0.20648004,0.08177729,-4.2965693,-2.451407,3.834949,4.322286,5.280295,-1.7996026,1.2756917,1.6606765,-0.24481155,0.6208561,-1.46936,-1.3760607,0.45872054,0.21147236,0.8370244,1.3751162,1.9152143,-0.08409583,0.30901802,1.0368855,-0.6961231,1.2761991,0.16680512,0.088365115,0.15844387,0.5225157,0.3679734,1.358362,-1.4372838,-3.1019635,-0.5496835,1.6908668,-1.1406809,-0.23788165,-0.54935384,0.5160287,1.2634615,
	};
    
    /**
     * Prototypes (B)
     * m x d_cap flattened (dimension of 2D array)
     * numPrototypes x d_cap
     */
    const PROGMEM float prototypeMatrix[] = {
		-4.320265,0.901012,7.333772,-15.263224,-13.360255,-3.037841,7.369453,-0.246349,
		4.205646,8.228455,11.742197,-1.659257,-11.994473,-8.903941,17.042135,0.538636,
		13.491116,8.870791,-2.428447,12.923405,5.130224,6.605345,4.219578,0.596654,
		7.427997,1.279211,-7.125030,6.304669,12.899125,12.446520,-17.369635,-3.839266,
		0.377127,2.537743,-9.990006,-14.559351,-2.400004,6.097067,-1.337814,-6.018596,
		15.320591,8.420917,4.362133,21.242289,6.712571,5.204938,7.788415,7.716948,
		-5.549112,-3.163811,9.444995,-13.179726,-11.368673,-8.627551,-2.733477,5.135865,
		-46.818356,-8.311826,-11.351541,-31.478546,-5.421235,5.639138,3.630795,3.764118,
		-0.555088,-0.852436,0.404430,12.722207,6.137177,8.595734,-2.349632,3.246926,
		-1.096913,7.907605,2.797382,9.520655,-1.598225,-7.550920,10.937031,-7.907677,
		6.311511,9.780935,-19.362722,-13.370254,6.683477,12.674992,-9.923467,-8.993718,
		-3.032539,2.635201,14.106314,1.742970,9.719856,-0.576907,-23.604004,16.701519,
		10.339745,5.098697,5.858644,20.440315,5.803530,5.763536,2.306551,9.513567,
		-16.883102,-16.233088,3.031777,4.714472,-0.101231,-5.090373,-0.054040,-5.884341,
		7.471868,5.911999,-9.904983,-7.968733,11.403088,19.503084,4.934209,-13.989255,
		2.854548,2.002379,1.106525,-12.512094,-6.211147,-1.969077,-11.632761,6.994214,
		-7.551764,-8.510358,6.642086,7.978990,-3.149890,-6.631940,2.415379,-3.834558,
		-39.125046,5.731797,-6.994292,-11.652598,-4.903976,-42.380300,-21.295986,29.968200,
		-6.697960,-4.968058,-9.969441,-11.655122,7.673005,9.624688,-4.488717,7.064667,
		-10.919465,-15.199489,1.980543,-7.526671,-13.150130,-3.238912,15.905815,-13.360711,
		46.288826,34.282223,-2.940878,-10.321014,-0.847598,2.748115,-24.049753,-75.587980,
		-4.375964,-2.634111,-0.516030,-10.987911,10.492795,-0.611895,-10.211002,2.402935,
		0.521204,-4.908270,-3.814829,-7.803075,7.721158,7.306646,-13.960936,4.862860,
		3.357612,19.405056,-9.847322,8.166054,9.736481,19.581835,8.191798,-15.646485,
		4.460980,-4.748263,-2.140673,-12.860322,4.438395,-15.142795,-15.072357,13.287138,
		3.211242,7.285271,8.350252,-6.689573,-14.043059,-10.854712,14.036020,-1.319922,
		-2.936710,-2.388247,5.393234,-4.400878,-13.645228,-10.289042,14.128471,-8.137133,
		29.719137,38.127560,13.294453,39.160793,-2.801508,-30.231540,24.447886,37.524208,
		10.440094,-4.752486,-7.915149,-7.056766,9.745249,14.328097,-21.146500,-1.859976,
		16.793304,12.738656,-7.636484,8.711187,5.567733,11.712482,4.472228,-7.216461,
		-2.929932,-4.290828,-5.169117,-12.282679,-1.486107,10.307978,-8.319520,-5.077838,
		-0.595202,-6.854358,-18.612701,2.892405,-0.203868,9.386171,0.464555,-18.977590,
		-4.940421,-2.468062,1.449920,-15.998556,-5.637000,-7.937178,-9.233394,10.630012,
		3.450459,12.910375,-16.230808,-1.114927,4.874238,11.324552,7.136952,-13.719943,
		8.293664,13.405557,-15.870861,-7.776333,9.433476,9.111010,-6.027535,-12.561652,
		-24.787117,-22.197840,15.494905,1.821749,-11.756768,-17.427307,2.122840,-17.512306,
		-18.850365,-17.395440,19.073746,23.511595,-13.536090,-13.232618,20.790182,-11.927881,
		-49.844368,-36.093258,-0.707166,37.474323,-38.230095,-21.788210,9.348190,-8.929777,
		2.970050,0.575390,-6.752642,10.992833,5.293090,4.455474,-2.948371,-7.169509,
		9.848511,19.482940,-7.494328,6.316622,6.053453,14.828202,3.509707,-11.709783,
		6.345637,15.494177,2.203935,17.338968,8.183124,9.506765,6.381184,3.532211,
		-4.699722,-3.801323,-12.160650,-3.266849,-2.549316,2.030587,8.574924,-11.873069,
		15.383554,23.087526,4.987429,22.383652,-4.110618,-18.478237,13.241885,13.131254,
		3.345648,11.538714,-6.355718,12.625554,9.035508,3.702281,12.911066,-5.233199,
		-20.469168,-18.057560,24.222690,-5.580875,-1.067978,-0.258679,-1.157549,7.345283,
		-34.775192,98.935580,60.507110,-101.932020,-33.963470,-51.324055,18.013628,166.380200,
		-9.252973,-10.798421,9.526719,12.416136,2.870410,-11.058527,-0.499389,5.104681,
		1.659440,26.249050,19.576914,-28.626957,-16.577597,-16.574255,1.174296,36.383846,
		-6.678588,-7.386753,-30.858717,5.174461,-0.303414,10.438104,-13.352808,4.602979,
		14.752280,17.879618,4.607480,16.040540,5.308911,7.249817,5.025031,8.096136,
		-5.628651,-6.816671,8.682766,12.987030,-1.470167,-9.580064,10.774860,4.095053,
		-1.338159,-8.890109,-7.329031,-13.426519,2.184154,4.514338,-12.641662,6.236279,
		9.851513,12.721952,3.318156,19.763786,8.258665,3.801314,7.284277,3.573427,
		3.258114,13.953596,10.068942,-5.800154,-14.193119,-20.760504,20.803760,13.694887,
		-4.353374,-3.646635,10.543285,9.211405,-6.068096,-18.569310,11.590327,8.335299,
		5.873629,10.826341,-5.288533,-2.797656,-0.954736,5.539671,5.438418,-11.730835,
		7.759441,7.220147,-14.374598,-12.373168,4.874744,10.738338,-12.299731,-6.156876,
		3.030755,5.017413,12.033706,-2.193896,-13.991462,-12.811300,18.144285,-2.180150,
		-32.407696,-18.383366,-27.914259,2.054632,-8.789538,-13.192878,-21.790398,17.888710,
		-1.989524,-8.265883,-4.091742,10.611856,4.467479,4.447487,3.105948,-7.089693,
		1.791733,-3.843635,13.485517,-4.551479,-16.875965,-17.001532,20.806772,-0.268064,
		-1.985483,-4.999384,6.863521,-7.558611,-1.234146,0.375742,0.644763,7.053153,
		2.309282,-0.816454,6.912783,22.099216,6.766111,1.687381,3.496783,6.068708,
		4.768028,8.506666,-9.643843,-10.020169,5.357952,4.771776,-13.055920,3.246097,
		1.425672,-3.095478,-3.291877,-10.466360,7.672709,-14.929840,-10.520588,12.024356,
		15.324830,12.222696,-4.001733,17.625217,9.019032,10.311792,6.256007,1.858052,
		2.769410,13.032168,-7.818583,9.345826,6.719842,10.812770,8.480759,-8.725333,
		-3.462974,-6.952808,-30.573252,-5.393778,-1.288044,9.778307,-27.239824,10.507234,
		2.600274,-8.302905,0.593107,-10.526423,2.317767,3.553589,-14.076013,5.980107,
		3.821756,-6.691134,-12.249312,-19.658340,6.260657,-2.309905,-9.645190,-1.255137,
		-15.759236,-12.135769,1.523869,-5.638746,17.201168,8.403771,-8.439677,7.376230,
		-3.500741,-6.714319,6.722324,-16.635893,-12.793814,-0.342585,-1.803719,2.593374,
		-10.244437,-11.051682,7.463801,9.631084,-4.174678,-3.977603,9.824450,-4.827577,
		7.242093,11.422117,10.571480,-3.018691,-10.292556,-8.367387,0.863508,8.010143,
		-0.017973,-1.655606,-0.781103,-14.526692,-10.221861,-1.355894,-4.115061,4.692864,
		3.345826,4.314035,-1.059223,20.803225,8.068199,4.425917,2.307697,0.303028,
		9.335728,14.242558,-5.042046,16.015282,10.997686,5.524071,5.726252,-3.919179,
		2.302822,9.041101,3.767895,-0.079586,-7.568598,-11.513799,3.246473,10.453552,
		8.577641,12.970304,-5.404132,14.126068,8.183700,8.997593,1.650685,-4.500597,
		9.247298,17.001255,-5.581479,-7.356904,-1.986130,8.414088,0.467063,-8.477324,
		-13.658758,-17.301779,3.601290,9.490767,-4.072152,-9.014323,5.714496,-7.203213,
		-0.683095,10.026110,2.619326,8.854518,9.046222,5.061111,-8.550986,13.017686,
		-7.786829,1.998201,10.449720,-9.956453,-11.460447,-9.456725,9.952523,7.264636,
		-4.282391,-7.155830,-11.058858,-12.432920,6.573468,7.398947,-9.488584,2.286914,
		-12.492407,0.685919,-9.942246,-18.178005,-2.040511,-22.951164,-15.277913,16.351685,
		-14.663147,-14.923618,4.171081,13.485686,-2.613894,-8.179812,15.692131,-7.620010,
		10.266419,17.410786,3.004403,2.530659,-4.574011,1.367929,7.844021,-3.386489,
		9.849567,13.749461,-9.863545,5.739856,6.680618,4.571526,7.302054,-13.548389,
		-3.581442,-12.320977,-2.403675,4.365190,-1.238933,1.155588,-4.700429,2.243792,
		10.415424,10.977071,5.980540,26.456383,9.456135,5.366972,8.432222,10.232731,
		-15.842832,-15.455804,2.030433,-0.856447,3.337391,-3.704746,-10.660812,-3.332645,
		1.558240,1.992110,6.127662,-10.317337,-3.259122,-7.599396,-8.255154,8.525831,
		-50.081696,-5.530495,22.564436,-4.623064,-14.058555,-35.359390,-17.061245,28.140842,
		-8.336207,-13.322803,7.746527,16.439764,-3.689543,-13.767099,13.205794,1.126731,
		-14.446293,-49.446890,-11.659282,-61.522995,104.931080,-64.547210,122.256320,-16.136848,
		3.246665,6.130047,14.163801,29.639580,3.967257,-2.405206,18.097668,12.977940,
		-7.883971,-5.835710,16.489063,2.984036,-13.416408,-19.008015,25.669660,3.719448,
		7.705553,14.514952,7.142264,0.346225,-8.150792,-3.373127,13.041119,-3.526240,
		9.832582,15.827919,-14.202130,3.579009,7.438206,13.130089,4.330363,-16.746805,
		13.481136,16.447475,-9.279622,-12.778299,13.074661,16.490582,3.084408,-15.833830,
	};
    /** Number of prototypes (m) */
    const PROGMEM unsigned int numPrototypes = 100;
    
    /**
     * Prototype Lables (Z)
     * m x L (dimension of 2D array)
     * numLabels x numPrototypes
     */
    const PROGMEM float prototypeLabelMatrix[] = {
		0.009308,-0.714756,-1.264363,0.880309,-0.264319,-0.039018,
		-0.733002,-0.913708,-0.205891,1.356971,-0.382686,-0.043353,
		-0.380831,-0.675316,0.890576,-0.293909,0.278414,-0.397120,
		0.547222,-0.457956,0.327897,-1.449512,0.639633,-0.519697,
		0.343204,-0.613346,-1.139808,0.099863,0.370777,-0.394334,
		-0.685730,-0.756629,1.933880,-0.478830,-0.149645,-0.456951,
		0.445572,-0.693029,-0.970677,0.786214,-0.722510,0.075972,
		1.364137,-0.804083,-2.805466,-0.307384,-0.734389,0.585181,
		0.037551,-0.658769,0.799679,-0.643582,-0.042816,0.112212,
		-0.686954,-0.797791,0.306188,0.291909,0.109659,0.478106,
		0.648806,-0.516734,-1.305300,-0.629897,1.035885,-1.067893,
		0.945515,-0.489984,0.779746,-0.553871,-1.053804,-0.639465,
		-0.255669,-0.642918,1.662014,-0.381181,-0.257108,-0.306643,
		0.193461,-0.751288,-0.274674,-0.592315,-0.466289,1.317858,
		-0.004856,-0.620266,-0.945810,-0.486441,1.126756,-0.476912,
		0.608587,-0.631362,-0.630896,0.328270,-0.351020,-0.636754,
		-0.149629,-0.742467,0.075801,-0.107330,-0.396442,0.814981,
		1.589751,-0.926724,-1.462059,0.416466,-2.002153,-0.040232,
		0.705175,-0.626383,-0.377824,-0.435299,0.025676,-0.351565,
		-0.187481,-0.821670,-1.394395,0.288279,-0.038011,1.196980,
		-1.677856,-0.734680,-5.766466,0.334156,4.434523,-1.706754,
		0.612701,-0.658002,-0.349673,-0.326674,-0.136238,-0.230490,
		0.818289,-0.647989,-0.092647,-0.685778,-0.045895,-0.513503,
		-0.842540,-0.495428,-0.190744,-0.606957,1.485249,-0.493018,
		1.041283,-0.704543,-0.523606,0.038601,-0.904984,-0.816309,
		-0.534137,-0.784188,-0.788321,1.329190,-0.204170,-0.014062,
		-0.577209,-0.825232,-0.901716,0.914260,-0.073601,0.684588,
		-2.339490,-2.108872,3.403698,1.862564,-3.091663,-3.231947,
		0.908541,-0.398626,-0.436117,-1.330802,0.372154,-0.996248,
		-0.502098,-0.679353,0.379276,-0.385500,0.749282,-0.642658,
		0.648684,-0.495786,-0.942569,-0.314951,0.158122,-0.105636,
		0.048409,-0.617383,-0.922605,-0.905522,0.930705,0.477310,
		0.896022,-0.697604,-0.947996,0.528709,-0.724919,-0.429860,
		-0.332129,-0.563570,-0.773229,-0.235517,1.099934,-0.382569,
		0.226104,-0.596471,-0.927929,-0.448835,1.141181,-0.929221,
		-0.202456,-1.042693,-1.565754,-0.426531,-0.880971,2.290832,
		-1.476956,-1.172770,0.209728,-0.117579,-1.123635,2.601162,
		-1.450378,-1.950464,-1.421888,-2.969888,-1.940245,4.464990,
		-0.068065,-0.639365,0.386606,-0.627354,0.319853,0.139460,
		-0.568483,-0.650236,0.007459,-0.294144,1.082873,-0.674682,
		-0.648642,-0.590902,1.457561,-0.421280,0.171495,-0.415764,
		-0.091347,-0.700735,-0.727800,-0.066132,0.411253,0.408636,
		-1.274762,-0.985189,1.956770,1.025094,-0.799101,-0.976468,
		-0.849132,-0.795130,0.783170,-0.287890,0.577457,0.016098,
		0.472276,-0.804717,-0.596299,-0.128821,-1.335944,1.219242,
		-2.170824,-2.089724,-2.148284,-1.943071,-2.191546,2.131958,
		0.041880,-0.785478,0.735934,-0.362915,-0.964418,0.945088,
		0.461308,-1.354660,-2.125359,3.374669,-1.814199,-2.716983,
		0.890391,-0.534662,-0.095251,-1.497295,0.261723,-0.224015,
		-0.614938,-0.672683,1.626888,-0.091944,0.110432,-0.881362,
		-0.384674,-0.904003,0.653142,0.070212,-0.739190,0.791637,
		1.022047,-0.511091,-0.611723,-0.406175,-0.260376,-0.446778,
		-0.771285,-0.707479,1.702265,-0.393422,0.083487,-0.287614,
		-0.783783,-1.012878,-0.586646,2.373888,-0.863324,-0.602733,
		-0.450524,-0.888107,0.380768,0.628176,-1.103907,0.723924,
		-0.272222,-0.705391,-0.447965,0.135325,0.592757,-0.279047,
		0.647388,-0.427975,-0.979796,-0.500699,0.693847,-1.089557,
		-0.915289,-0.855468,-0.530741,1.471373,-0.350862,0.304998,
		1.743352,-0.633605,-0.762878,-1.720065,-1.436544,0.817700,
		-0.128129,-0.700272,0.284492,-0.580672,0.097073,0.484369,
		-0.727752,-1.010541,-0.888052,1.670195,-0.672058,0.631061,
		0.168331,-0.712738,-0.125915,0.171878,-0.345925,0.009000,
		-0.333217,-0.759916,1.602879,-0.661365,-0.480638,0.372149,
		0.530808,-0.559102,-0.306940,-0.271745,0.261191,-1.029304,
		0.760579,-0.602409,-0.164999,0.084936,-0.606718,-0.502348,
		-0.616595,-0.624815,1.397858,-0.727840,0.484252,-0.669928,
		-0.519004,-0.693489,0.296829,-0.317860,0.667352,-0.193293,
		1.738313,-0.397917,-0.644275,-1.759562,-0.205488,-1.149191,
		0.859295,-0.595967,-0.311693,-0.343257,-0.441014,-0.471418,
		0.965593,-0.673594,-1.350822,-0.322812,0.130055,-0.686004,
		1.046541,-0.676316,-0.074163,-1.150955,-0.441624,0.201880,
		0.596358,-0.641292,-1.175857,0.653884,-0.493653,-0.070485,
		-0.297808,-0.763820,0.093414,-0.034851,-0.409433,1.009011,
		-0.136663,-0.663916,0.122924,0.872131,-0.341894,-0.539687,
		0.577771,-0.707748,-0.936524,0.533758,-0.304493,-0.410896,
		-0.423455,-0.692683,1.345756,-0.859061,0.020736,0.173177,
		-0.640298,-0.787944,1.096004,-0.635016,0.602870,-0.432811,
		-0.153458,-0.811602,0.212692,0.734120,-0.520930,-0.343910,
		-0.483808,-0.629993,0.783113,-0.634233,0.549784,-0.356106,
		-0.094264,-0.580489,-0.597720,0.343549,0.692615,-0.852023,
		-0.146338,-0.780030,-0.189861,-0.444848,-0.572516,1.506255,
		0.212079,-0.645971,1.007321,-0.477876,-0.301083,-0.619941,
		-0.042770,-0.859037,-0.791582,1.055802,-0.621215,0.090573,
		0.903025,-0.500101,-0.763340,-0.721510,0.035564,-0.405628,
		1.333760,-0.782076,-1.262135,0.376509,-1.139951,-0.656239,
		-0.528959,-0.878234,0.108382,-0.292234,-0.362241,1.587456,
		-0.650821,-0.677220,0.181510,0.652143,0.362802,-0.628429,
		-0.634771,-0.659228,-0.047722,-0.092127,1.028982,-0.289849,
		0.339770,-0.676246,0.130732,-0.473397,-0.336150,0.454528,
		-0.740669,-0.750547,2.406554,-0.712342,-0.395459,-0.313958,
		0.695657,-0.723552,-0.461807,-0.924295,-0.483709,0.951981,
		0.388268,-0.652208,-0.313813,0.431371,-0.545244,-0.485227,
		0.873532,-1.131163,-1.733782,0.157688,-2.448878,1.247790,
		-0.463861,-0.928398,0.636550,0.027595,-0.909173,1.431260,
		-1.173340,-1.164068,-1.337159,-1.004085,-1.119143,1.243391,
		-1.121930,-0.968975,2.544039,0.009918,-1.267986,0.425628,
		-1.112948,-1.058332,-0.474592,1.420165,-1.268227,1.111265,
		-0.794493,-0.762472,-0.004038,1.015724,0.207704,-0.334483,
		-0.554802,-0.649650,-0.630063,-0.525266,1.363064,-0.474254,
		-0.082724,-0.658109,-1.404847,-0.162255,1.560201,-1.138360,
};
    /** Number of output labels, (L). */
    const PROGMEM unsigned int numLabels = 6; // 0,1,2,3,4,5
    
#else
    const PROGMEM float = 1.0;
    const PROGMEM unsigned int featDim = 10;
    const PROGMEM unsigned int ldDim = 5;
    // Row Major (X.x)
    const PROGMEM  float ldProjectionMatrix[]  = {
        0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,
        1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,
        2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,
        3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0,
        4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0,13.0,
    };
    // Column Major
    const PROGMEM unsigned int numPrototypes = 3;
    const PROGMEM float prototypeMatrix[] = {
        -1.0,-0.5,0.0,0.5,1.0,
        -2.0,-1.0,0.0,1.0,2.0,
        -7.51,-7.51,-7.51,-7.51,-7.51,
    };
    // column major
    const PROGMEM unsigned int numLabels = 4;
    const PROGMEM float prototypeLabelMatrix[] = {
        0.96,0.01,0.01,0.02,
        0.02,0.94,0.02,0.02,
        0.10,0.15,0.55,0.20,
    };
#endif
};
    