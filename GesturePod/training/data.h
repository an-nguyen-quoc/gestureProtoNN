/*
 * This is an autogenerated file. Modifications
 * might not be persistent.
 */
namespace protoNNParam {

#ifndef __TEST_PROTONN__
    /** Gamma for gaussian kernel */
    const PROGMEM float gamma = gamma;
    /** Low Dimensional Projection Matrix */
    const PROGMEM unsigned int featDim = 36;
    const PROGMEM unsigned int ldDim = 8;

    /**
    * Projectino Matrix (W)
    * d_cap x d flattened (dimension of 2D array)
    * ldDim x featDim
    */
    const PROGMEM  float ldProjectionMatrix[]  = {
		2.106006,0.28504497,0.47464257,0.72726685,-0.39654619,-0.137337,-0.5495442,0.763535,0.350902,-2.2007105,-0.7298514,0.87213355,0.2409024,0.2480654,2.2350507,-3.8948328,-0.06491318,-0.075591646,0.7926805,-0.5033328,0.6966491,0.71907896,2.3213556,-2.142191,0.28144747,0.7198956,1.6233603,0.9977887,0.8941156,-0.757454,-0.1639386,0.13709038,0.91595465,0.3189656,-0.06212722,1.3038107,
		-0.16621669,0.08014425,-0.77069455,-0.43073052,0.13104577,0.54464966,1.097013,-1.7293266,0.10535989,-0.29315993,-1.5511755,-0.5560491,1.4651191,-0.21106918,-1.6285584,0.27048963,0.13071144,-1.6261023,-1.0855781,1.8469026,0.13093837,1.3225704,-1.4195563,2.2698479,0.61757624,-0.13287437,0.3322465,0.4461379,0.5254198,-0.16256545,-0.66552806,1.0732435,0.17609052,-0.46964338,0.9058225,-0.94105476,
		-0.75215375,-0.6984137,1.3406456,-0.7393477,0.24625346,-0.30239037,-1.164766,0.8828558,-0.5522973,-0.6301671,4.0154104,-3.990445,0.28512883,0.98467463,-3.0351517,4.8451395,2.5269866,0.07051936,2.4188921,-1.8217642,-0.11151393,0.25324377,-0.35914153,2.0743244,-0.6175781,1.0950859,-2.0701387,0.6080349,1.5880201,-1.1849886,-0.6770216,0.096736096,-0.18300684,0.7404567,-2.456253,-0.769223,
		0.20414133,0.7677418,-0.34999672,0.7408408,-0.07177532,-0.0041936184,-4.778272,3.9526465,-0.159357,-0.66368663,1.5011518,-2.5791025,0.8036946,0.19326548,-0.8496375,1.4424055,1.1235831,-1.1528836,1.4435744,-1.5125775,-0.21842515,-1.4390806,1.6438024,-1.523354,-0.5122268,-0.31906062,0.040975843,-0.7253587,-0.64302737,0.5457268,-0.009383139,-0.18753013,-2.220996,0.3999305,1.1880505,-1.020441,
		-1.4551525,-0.886964,0.4130435,-0.39064556,0.26968393,1.6852174,2.2558672,-4.1141477,0.7007646,1.2431906,-5.388289,3.842257,-0.26290745,0.050915908,2.513984,-3.3731344,1.077628,0.24928074,2.320477,-1.2174808,2.5565732,-0.0087914625,2.4892082,-1.5247943,0.28444505,-1.1610554,-0.21570727,0.09539428,-0.5164045,-1.6779336,-0.77546686,0.60236865,1.5510776,-0.24817717,1.1820146,-0.49035683,
		-0.6648948,-0.07695911,1.5226197,0.018313028,0.10475433,-0.6807217,3.8150501,-4.2922683,-1.2297888,-0.62333167,-4.5100784,4.3358397,-0.16809314,0.34050992,-1.3029122,0.35914928,-0.75541097,0.5294593,0.6379614,-1.4969991,1.8909138,-0.65316516,-1.773619,0.021508636,0.6448175,-2.4306633,-1.8828259,0.44333556,-0.3235315,1.5303767,1.5904275,1.1023983,2.1544867,-2.003887,1.1700189,2.5776446,
		-1.9593726,1.7277495,0.9450012,2.240175,-1.0255549,0.15982962,0.9141054,0.6231268,1.1206026,-0.60295707,-0.55135894,2.5419762,-0.0669554,0.096948415,3.2977219,-5.2561107,0.06606911,-0.44149375,0.4724434,1.0379989,-1.2371839,1.0222621,3.480036,-1.0014226,-0.872055,-0.70894,2.055314,0.061671983,0.29940608,-0.86343586,-0.4593426,1.5186826,-0.30674195,-1.1081667,1.3931493,1.9963326,
		0.39488408,-1.0369406,0.772303,-0.9198729,0.2024338,-0.38329977,2.9854662,-5.3064466,-0.20927669,-0.8843942,-1.1075075,0.68946815,-2.1585991,-1.918671,5.583227,-4.835819,-0.55428994,1.7618183,-2.7660484,3.2078757,0.001176556,-1.038031,-3.875172,-0.7916406,-0.03768658,0.33749714,0.5472694,0.87236786,-0.097949184,0.12749884,1.2175847,0.38477537,1.3484592,0.10681229,-1.3248627,-0.40729395,
	};
    
    /**
     * Prototypes (B)
     * m x d_cap flattened (dimension of 2D array)
     * numPrototypes x d_cap
     */
    const PROGMEM float prototypeMatrix[] = {
		-8.322668,6.017302,6.409458,-4.064722,1.150767,11.244027,-10.820653,-8.727680,
		-11.468566,7.235057,-29.379150,-6.683092,-3.470222,25.525553,13.784957,7.669453,
		-4.765345,12.398025,-7.304859,-12.685775,12.507105,18.096468,-3.557206,4.679430,
		-10.173143,8.719848,6.245257,-5.847251,-5.075331,6.301581,-11.304886,-3.696183,
		-12.147465,10.310237,4.054091,-6.848958,-17.578588,-5.004246,-12.756484,5.112910,
		11.197135,-6.854059,-5.852005,-2.409164,12.721993,-2.699811,12.293236,11.705806,
		-2.900224,9.319572,-6.727927,-11.428042,12.429801,14.585086,-0.697441,6.593414,
		8.064907,-4.931190,-3.751991,-6.935009,13.964334,7.142424,8.494746,9.740869,
		8.862656,-8.243293,-1.017915,12.002774,-2.099449,-11.307858,8.137535,-9.522738,
		5.430939,-11.960091,0.563744,13.587369,-2.203771,-16.725610,8.810431,-3.128629,
		-2.971930,-5.335074,9.309997,5.939198,-4.633026,-2.389508,-6.221123,-11.568167,
		10.064790,-9.672962,-3.380528,-1.860766,10.023584,-1.705926,8.606598,9.149067,
		12.244616,-11.287607,-3.033607,-0.674531,13.531560,-2.474471,12.040935,9.634820,
		6.160778,0.781056,-7.087049,-9.309990,15.154813,9.471402,8.635938,10.863590,
		9.628527,-7.649122,-2.597065,16.544727,-5.348897,-15.602148,8.539494,-11.632800,
		-9.450166,3.675061,11.060362,-3.782143,-5.340651,6.650362,-12.839108,-5.945766,
		8.510666,-6.455082,-1.723551,15.582329,-5.116794,-10.400416,5.406825,-14.838056,
		-13.664803,11.611320,4.023461,-6.467437,-21.805717,-7.125345,-15.098724,5.320265,
		-7.893468,3.662647,7.378333,-0.599980,-5.384060,2.091948,-8.780956,-9.873531,
		10.150016,-10.551402,-1.574996,6.492640,4.013321,-9.795448,10.942214,4.035125,
	};
    /** Number of prototypes (m) */
    const PROGMEM unsigned int numPrototypes = 20;
    
    /**
     * Prototype Lables (Z)
     * m x L (dimension of 2D array)
     * numLabels x numPrototypes
     */
    const PROGMEM float prototypeLabelMatrix[] = {
		-2.187809,0.406729,-2.432451,1.484908,0.000881,
		-0.726112,3.814463,-1.715659,-2.118070,-2.544900,
		-1.380349,2.807595,-3.491456,-0.065037,-1.891333,
		-2.330010,0.228056,-2.471348,0.985753,0.998585,
		-2.366871,-0.247370,-2.162195,-0.187562,2.852492,
		2.425229,-0.085643,-0.493049,-1.452242,-1.083183,
		-0.414602,2.242320,-3.167965,-0.185488,-1.273650,
		1.866976,0.801038,-1.999955,-0.763211,-1.194548,
		0.125322,-1.694376,2.647223,-0.044038,-0.956856,
		0.505502,-2.413529,2.896313,-0.360383,-0.421513,
		-1.106863,-1.591422,0.797254,1.518717,-0.020519,
		1.529946,-0.096207,-0.337022,-0.595623,-0.564527,
		2.323523,-0.525407,-0.287808,-1.059646,-1.350677,
		1.885685,1.742434,-2.500136,-1.194454,-1.696732,
		-0.629336,-2.216447,3.809125,-0.328918,-1.149305,
		-2.109076,-0.449600,-2.506079,1.451609,0.987468,
		-1.025453,-1.689515,3.506949,0.279503,-1.169266,
		-2.921349,-0.635313,-2.294601,-0.583674,3.693350,
		-1.733380,-0.597621,-0.855874,1.197541,0.362914,
		1.188385,-1.250643,1.226774,-0.574316,-0.485900,
};
    /** Number of output labels, (L). */
    const PROGMEM unsigned int numLabels = 5; // 0,1,2,3,4,5
    
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
    