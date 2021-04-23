/*
 * This is an autogenerated file. Modifications
 * might not be persistent.
 */
namespace protoNNParam {

#ifndef __TEST_PROTONN__
    /** Gamma for gaussian kernel */
    const PROGMEM float gamma = 0.02469564;
    /** Low Dimensional Projection Matrix */
    const PROGMEM unsigned int featDim = 36;
    const PROGMEM unsigned int ldDim = 8;

    /**
    * Projectino Matrix (W)
    * d_cap x d flattened (dimension of 2D array)
    * ldDim x featDim
    */
    const PROGMEM  float ldProjectionMatrix[]  = {
		0.44500557,-0.46413904,0.39047936,-0.78113294,0.038273603,-1.4215717,-4.676015,4.1654963,-1.1531571,-1.7201442,0.50408447,-1.3995818,-0.31596515,-0.96035147,-5.2656937,2.2248907,-1.2725238,-1.0427576,0.77042806,1.2599167,-1.8762422,0.4208398,-3.584606,4.14084,-1.3231096,1.8880765,-0.76450247,-0.24296038,1.4659319,0.31842494,-1.0534059,-1.7726506,-1.0216289,-0.47309706,-0.8134867,-0.05249528,
		-0.8988809,1.2493901,0.98422813,-0.21205173,1.434729,-1.9115224,-2.1988556,4.205715,-0.46446398,-0.5825933,3.663554,-1.705412,0.25002757,0.05985269,1.6135607,-2.2723777,1.425653,-1.3801821,-1.2322482,1.3191875,-0.7590706,-1.6264662,-2.3433654,0.60033447,1.0650567,-1.0109477,-0.39419627,-0.34539574,-0.08953911,0.94635266,0.9600893,-0.29109317,-0.16103095,0.34090048,0.35464892,-0.8904949,
		-1.4764357,-1.293626,-0.016214993,0.35189727,0.07305442,0.33895054,0.13798732,-1.0424443,0.049772732,0.60081244,0.63996327,0.12173671,0.83089316,-0.4715398,-2.8970795,3.804336,-1.8292029,-0.2691447,-0.23312315,0.27594885,-0.5867726,0.7112068,-1.2787716,1.7689294,-1.0243323,1.8062465,-0.54311,-1.5488545,1.2617995,0.18163303,0.052916273,-0.018404765,0.20606028,1.9601259,1.8994651,-2.0506113,
		-0.7331753,0.57122487,-0.28410882,1.5132257,-2.4318979,1.598383,-0.12453896,-0.23310223,-0.7591823,0.4988123,2.4142988,-4.656025,0.24751711,-2.2047114,0.8359447,-1.4500576,1.0472615,2.117916,-1.7014824,0.095776364,0.6703192,-0.418726,1.090464,1.5315756,-0.10140706,1.2459956,-0.29644963,1.3343759,1.3863134,0.044772223,-0.043403525,0.90809506,-1.0436721,0.69522715,-1.3693635,0.27486768,
		-0.4079813,0.7536886,-0.37711924,-0.22916263,0.050224055,0.84722066,-3.3591037,4.590691,0.8389078,-0.32640332,3.60123,-3.2250705,0.3981149,0.10239939,-2.2556012,1.0297817,-0.27310345,0.88100845,0.13096334,0.08051711,0.20999013,0.23199122,-0.74877363,0.5349772,-0.83059317,1.1739782,-1.867327,-0.5190458,0.5249668,0.3187306,-0.73766977,1.2474597,-0.52232623,2.9788911,-0.7714198,0.3994698,
		-0.25835338,-1.9653149,-0.86633795,0.5814203,1.1455446,0.90254396,0.52530026,-1.6908008,-1.0856987,-0.54549015,3.7754138,-2.762837,-0.14561108,-1.2288142,-4.677841,5.126194,1.2582659,-0.8246018,1.6839794,-1.2236242,-0.27644563,-2.5433702,-0.11108372,-0.032161776,-0.87550867,1.7331762,-2.7314088,1.6881857,1.9811206,0.27254537,-0.43047562,0.107393235,0.4048594,1.1355861,-1.9519452,-0.39040476,
		0.53837514,0.86756736,-0.25673604,-2.661244,1.1443309,0.92980003,-2.5966322,2.2180932,-2.2158525,0.4024515,-1.4833784,0.31071624,0.83894306,1.8694597,-0.85151756,0.056102537,-1.6722126,0.021348502,1.5389031,-1.9714675,-0.8470921,0.503098,2.1405106,-1.6581631,-0.120196946,-0.00089862884,0.13130946,-1.0213919,0.04675408,0.27459073,-0.68455714,-1.1145577,-0.22104105,0.92856055,-0.662319,0.35829988,
		0.69067603,0.84996265,-0.46061867,0.7661696,1.2408268,0.47051597,2.6713088,-4.281621,0.06880585,-0.11371535,3.712621,-3.6099417,1.6513678,1.4004012,1.9661622,-2.365983,-0.8667726,1.0101591,-2.8595223,0.922884,-1.6639422,-1.9375567,-0.017631656,-0.37924215,-0.07766413,1.339096,-0.4899075,-0.034484692,1.1492708,0.12415644,0.76206434,-0.36601412,-0.018054329,1.0609945,-2.2108238,-0.28677356,
	};
    
    /**
     * Prototypes (B)
     * m x d_cap flattened (dimension of 2D array)
     * numPrototypes x d_cap
     */
    const PROGMEM float prototypeMatrix[] = {
		-8.197947,-8.416105,2.990786,-7.628754,-10.153644,7.758713,0.343500,-7.901439,
		-7.630940,-35.307953,31.586464,27.463500,-26.915100,51.582947,-90.042816,0.952665,
		8.737500,3.499944,7.439366,8.179500,10.675064,10.141285,-4.415648,9.565400,
		4.402989,-6.678835,6.843592,-8.131484,-11.874208,-6.141983,-8.543836,-6.614687,
		-0.432555,11.171411,-12.089573,-0.659722,6.809370,-13.644561,12.913669,-9.499150,
		-6.602617,0.859930,-6.098803,-6.717732,-7.702065,-4.162097,4.381574,-9.599717,
		11.501052,-2.636617,10.129039,3.449460,5.260643,9.282867,-6.113161,7.261239,
		-7.381846,-6.888145,1.057528,3.946366,5.893189,17.210000,5.911058,5.059462,
		-22.649086,-1.180101,-12.314168,6.740922,-6.978664,-5.915785,2.918304,12.693027,
		5.080100,-8.764319,8.171794,-9.341642,-13.827300,-8.087775,-9.841334,-6.174011,
		-30.566780,-2.821579,-12.586338,6.661418,-8.536232,-5.590119,1.005295,18.857271,
		2.221184,5.843431,-3.874390,6.453540,11.980601,6.436786,7.103497,4.590498,
		0.949473,11.765188,-10.779499,2.673254,8.821207,-8.420396,10.002701,-8.923840,
		-14.919920,6.148641,-11.810805,4.461221,-3.106849,-9.238287,6.248080,4.487351,
		-0.391762,-13.642494,8.437312,-9.029995,-12.661085,2.312957,-4.365516,-6.033454,
		-9.422332,10.870736,-13.680672,3.852458,7.692034,-10.582191,14.030460,-2.512567,
		8.261338,9.057170,-6.168012,6.457811,16.646875,-2.625760,7.033755,-2.982469,
		14.622013,5.747203,13.101659,4.569272,5.709906,10.071301,-11.510533,9.756825,
		-22.874693,-6.995524,-7.974248,6.618753,-4.332891,6.812783,5.469503,13.508463,
		0.205158,-3.025030,1.347565,-6.977422,-10.842813,-8.460064,-4.832234,-7.605697,
	};
    /** Number of prototypes (m) */
    const PROGMEM unsigned int numPrototypes = 20;
    
    /**
     * Prototype Lables (Z)
     * m x L (dimension of 2D array)
     * numLabels x numPrototypes
     */
    const PROGMEM float prototypeLabelMatrix[] = {
		-0.274601,1.125832,-1.671407,0.871555,-1.987038,
		2.487285,-2.242895,-2.455422,-1.010692,-2.276028,
		-1.475169,-2.478052,-1.014121,0.522371,2.360113,
		-1.822353,2.229616,-1.452912,0.255605,-0.727978,
		-0.623112,-0.096390,3.655380,-1.136452,-1.241939,
		0.010793,1.006879,0.938719,-0.257609,-1.765138,
		-2.538988,-0.801039,-2.476293,0.916485,1.891402,
		0.141387,-2.096514,-1.604584,1.665726,-0.179333,
		3.049512,-0.441998,-1.018970,-1.263772,-1.506666,
		-2.068153,2.790169,-2.018828,-0.010704,-1.216046,
		4.648773,-0.923930,-2.955889,-2.057478,-2.557494,
		-0.415871,-2.191419,1.365320,0.276085,0.686036,
		-0.699182,-0.499173,2.970130,-0.493456,-0.388380,
		1.439662,-0.212906,1.043156,-1.072344,-0.836109,
		-1.603020,1.984185,-2.763225,1.005712,-1.677490,
		0.775188,-1.034898,2.983531,-1.164072,-1.230993,
		-1.548398,-2.111042,3.328508,-0.214153,0.974286,
		-3.257242,-0.743989,-3.148085,0.342565,3.157779,
		2.666818,-1.087867,-2.627551,0.135752,-1.366776,
		-0.857072,1.732865,0.051410,-0.332990,-1.190135,
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
    