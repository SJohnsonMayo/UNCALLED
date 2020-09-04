#ifndef _INCL_MODEL_R94
#define _INCL_MODEL_R94

#include "pore_model.hpp"

const std::vector<float> model_r94_means_stdvs = {
        85.083612,	1.517846, //AAAAA
        76.635809,	1.705015, //AAAAC
        83.489101,	1.537572, //AAAAG
        75.716163,	1.542528, //AAAAT
        87.429392,	1.962027, //AAACA
        84.244828,	1.836131, //AAACC
        86.305639,	1.554534, //AAACG
        83.004043,	1.588056, //AAACT
        82.555225,	1.461596, //AAAGA
        78.564667,	1.427101, //AAAGC
        81.963762,	1.409894, //AAAGG
        76.453817,	1.487030, //AAAGT
        81.670295,	1.980243, //AAATA
        75.815142,	2.227696, //AAATC
        78.830515,	1.676175, //AAATG
        69.548817,	2.008670, //AAATT
        106.444465,	2.191321, //AACAA
        99.204036,	1.741661, //AACAC
        103.855497,	2.289866, //AACAG
        98.436037,	2.177595, //AACAT
        106.571950,	1.882637, //AACCA
        103.300437,	1.753323, //AACCC
        105.238715,	1.904430, //AACCG
        102.006200,	1.830978, //AACCT
        101.029607,	2.247222, //AACGA
        98.165143,	2.023168, //AACGC
        101.415409,	2.226676, //AACGG
        97.193286,	2.645556, //AACGT
        99.931247,	1.698466, //AACTA
        92.947418,	1.861358, //AACTC
        96.889940,	1.644856, //AACTG
        87.465428,	1.469612, //AACTT
        78.200147,	1.829158, //AAGAA
        68.426403,	2.144815, //AAGAC
        77.043824,	1.828542, //AAGAG
        68.019966,	1.854593, //AAGAT
        85.883901,	1.877059, //AAGCA
        82.128994,	1.706178, //AAGCC
        83.225063,	1.560138, //AAGCG
        80.477989,	1.421728, //AAGCT
        76.226019,	1.833456, //AAGGA
        72.500218,	1.676900, //AAGGC
        77.579076,	1.687201, //AAGGG
        70.938865,	1.760891, //AAGGT
        75.638499,	2.048050, //AAGTA
        69.052203,	2.421331, //AAGTC
        71.345166,	1.996932, //AAGTG
        63.048387,	2.356355, //AAGTT
        109.874662,	3.162864, //AATAA
        106.022879,	3.097662, //AATAC
        108.351131,	3.024385, //AATAG
        107.807108,	3.751323, //AATAT
        118.527373,	2.972605, //AATCA
        117.783749,	3.047684, //AATCC
        118.492647,	3.000273, //AATCG
        118.288404,	3.104102, //AATCT
        106.202113,	2.994843, //AATGA
        106.989289,	3.134146, //AATGC
        107.698742,	2.931226, //AATGG
        110.036033,	3.567998, //AATGT
        105.974377,	2.180266, //AATTA
        101.007011,	2.090218, //AATTC
        103.624224,	2.200879, //AATTG
        96.494614,	1.925107, //AATTT
        91.063935,	2.709875, //ACAAA
        82.827286,	2.161122, //ACAAC
        89.668250,	2.817961, //ACAAG
        81.399158,	2.248901, //ACAAT
        93.712100,	1.224810, //ACACA
        91.197680,	1.290436, //ACACC
        92.814359,	1.397982, //ACACG
        89.141968,	1.562573, //ACACT
        85.649215,	2.601181, //ACAGA
        82.539466,	2.082363, //ACAGC
        85.983245,	2.501465, //ACAGG
        78.525355,	2.406247, //ACAGT
        87.620403,	1.952000, //ACATA
        81.754986,	2.229315, //ACATC
        84.716446,	2.185064, //ACATG
        75.108519,	2.430893, //ACATT
        102.728561,	1.630852, //ACCAA
        95.859940,	1.463223, //ACCAC
        100.618062,	1.842031, //ACCAG
        94.333022,	1.799272, //ACCAT
        101.981100,	1.449808, //ACCCA
        98.881045,	1.401820, //ACCCC
        100.545131,	1.431916, //ACCCG
        97.330175,	1.447096, //ACCCT
        96.772770,	1.820247, //ACCGA
        93.927720,	1.580932, //ACCGC
        97.178941,	1.748125, //ACCGG
        91.510979,	2.134667, //ACCGT
        96.643337,	1.774084, //ACCTA
        91.014356,	2.162105, //ACCTC
        93.670192,	1.638304, //ACCTG
        85.177870,	1.913109, //ACCTT
        83.858905,	2.367950, //ACGAA
        74.980835,	2.003318, //ACGAC
        82.987047,	2.412907, //ACGAG
        73.446658,	1.858546, //ACGAT
        89.312690,	1.442911, //ACGCA
        86.323377,	1.527415, //ACGCC
        87.193625,	1.581813, //ACGCG
        83.913229,	1.560399, //ACGCT
        82.302804,	2.441716, //ACGGA
        79.482039,	2.031856, //ACGGC
        84.018365,	2.352700, //ACGGG
        76.892461,	2.460963, //ACGGT
        80.566832,	2.144676, //ACGTA
        74.831829,	2.495653, //ACGTC
        76.642618,	2.220054, //ACGTG
        68.058969,	2.473128, //ACGTT
        108.509685,	2.640979, //ACTAA
        104.918573,	2.582529, //ACTAC
        106.750818,	2.516063, //ACTAG
        105.454217,	3.038925, //ACTAT
        113.953194,	2.427926, //ACTCA
        112.991632,	2.470406, //ACTCC
        113.249130,	2.498912, //ACTCG
        112.914763,	2.722041, //ACTCT
        103.413183,	2.505934, //ACTGA
        102.985186,	2.565836, //ACTGC
        104.185570,	2.473458, //ACTGG
        103.570987,	3.112501, //ACTGT
        102.431896,	1.860074, //ACTTA
        97.885436,	1.792855, //ACTTC
        100.378876,	1.888032, //ACTTG
        93.742257,	1.897284, //ACTTT
        78.486621,	1.677481, //AGAAA
        69.183387,	2.181444, //AGAAC
        76.854769,	1.595406, //AGAAG
        68.957203,	1.951472, //AGAAT
        84.168997,	2.485995, //AGACA
        80.492355,	2.197200, //AGACC
        82.888096,	1.981911, //AGACG
        79.701281,	1.929455, //AGACT
        77.762694,	1.417762, //AGAGA
        72.468653,	1.590985, //AGAGC
        77.847143,	1.358207, //AGAGG
        71.978664,	1.457057, //AGAGT
        77.216489,	2.586817, //AGATA
        71.422591,	2.702412, //AGATC
        74.323999,	2.058055, //AGATG
        66.189140,	2.353002, //AGATT
        104.091032,	2.217680, //AGCAA
        96.198299,	1.729785, //AGCAC
        101.244563,	2.293936, //AGCAG
        95.567360,	2.053863, //AGCAT
        104.918630,	1.965209, //AGCCA
        101.892470,	1.763366, //AGCCC
        103.638970,	1.934645, //AGCCG
        100.551907,	1.857380, //AGCCT
        99.355345,	2.248272, //AGCGA
        95.575361,	1.869846, //AGCGC
        99.693559,	2.163916, //AGCGG
        95.320758,	2.467197, //AGCGT
        98.077835,	1.801944, //AGCTA
        91.182618,	2.012889, //AGCTC
        95.116078,	1.678402, //AGCTG
        86.078294,	1.518410, //AGCTT
        71.112465,	1.833777, //AGGAA
        60.756671,	2.325889, //AGGAC
        69.648530,	1.861102, //AGGAG
        61.114230,	1.922772, //AGGAT
        82.559612,	1.896143, //AGGCA
        78.897571,	1.710818, //AGGCC
        80.711089,	1.575505, //AGGCG
        77.451438,	1.474313, //AGGCT
        72.875238,	1.702104, //AGGGA
        67.833052,	1.768077, //AGGGC
        74.265974,	1.512557, //AGGGG
        67.183573,	1.634836, //AGGGT
        72.371769,	2.386667, //AGGTA
        65.940829,	2.691990, //AGGTC
        68.302129,	2.132513, //AGGTG
        60.910896,	2.621137, //AGGTT
        106.293999,	2.967921, //AGTAA
        100.782710,	2.663822, //AGTAC
        104.343204,	2.779656, //AGTAG
        102.996613,	3.770059, //AGTAT
        114.689739,	2.788713, //AGTCA
        113.543189,	2.926713, //AGTCC
        114.395502,	2.905583, //AGTCG
        113.834084,	3.023806, //AGTCT
        103.266526,	2.865487, //AGTGA
        103.095769,	2.925330, //AGTGC
        104.689494,	2.854346, //AGTGG
        106.241086,	3.386671, //AGTGT
        102.512916,	2.404871, //AGTTA
        96.789072,	2.217327, //AGTTC
        100.061516,	2.364475, //AGTTG
        92.800127,	1.913314, //AGTTT
        92.448524,	2.424337, //ATAAA
        84.197561,	2.309626, //ATAAC
        91.171287,	2.478620, //ATAAG
        83.359138,	2.479595, //ATAAT
        94.169750,	1.320107, //ATACA
        91.942741,	1.417739, //ATACC
        93.017168,	1.341323, //ATACG
        90.361582,	1.521743, //ATACT
        89.206133,	2.323276, //ATAGA
        86.097767,	2.289189, //ATAGC
        89.743082,	2.340315, //ATAGG
        83.636428,	2.723338, //ATAGT
        89.226575,	1.882633, //ATATA
        85.202341,	2.462911, //ATATC
        86.841341,	2.119190, //ATATG
        79.292839,	2.695063, //ATATT
        103.532725,	2.080524, //ATCAA
        97.564633,	2.101257, //ATCAC
        102.075732,	2.400608, //ATCAG
        95.731816,	2.473610, //ATCAT
        102.574617,	1.632531, //ATCCA
        100.050407,	1.608675, //ATCCC
        101.545332,	1.827966, //ATCCG
        98.570185,	1.915015, //ATCCT
        99.554412,	2.591370, //ATCGA
        96.379887,	2.485991, //ATCGC
        99.947118,	2.512791, //ATCGG
        92.924943,	5.740038, //ATCGT
        97.750933,	1.860970, //ATCTA
        93.335370,	2.329145, //ATCTC
        95.467580,	2.032872, //ATCTG
        87.589371,	2.374892, //ATCTT
        85.499653,	3.075336, //ATGAA
        76.493104,	2.535449, //ATGAC
        85.294462,	3.174293, //ATGAG
        75.919898,	2.693786, //ATGAT
        92.059405,	1.482083, //ATGCA
        89.610534,	1.665776, //ATGCC
        90.659862,	1.674668, //ATGCG
        87.758512,	1.839044, //ATGCT
        87.396287,	3.229588, //ATGGA
        84.563905,	2.830276, //ATGGC
        88.711912,	2.988263, //ATGGG
        82.916112,	3.422647, //ATGGT
        85.887654,	2.229805, //ATGTA
        82.191254,	2.831328, //ATGTC
        83.024561,	2.655150, //ATGTG
        76.354496,	3.040482, //ATGTT
        106.223171,	2.163707, //ATTAA
        101.745044,	2.019532, //ATTAC
        104.618763,	2.041936, //ATTAG
        101.795361,	2.505570, //ATTAT
        109.668584,	2.198568, //ATTCA
        108.127252,	2.171602, //ATTCC
        109.056241,	2.226071, //ATTCG
        108.519198,	2.264576, //ATTCT
        101.961153,	2.113695, //ATTGA
        100.761004,	2.066305, //ATTGC
        102.722574,	1.986539, //ATTGG
        101.406803,	2.510487, //ATTGT
        100.147698,	1.708404, //ATTTA
        95.676644,	1.569772, //ATTTC
        98.264218,	1.623511, //ATTTG
        91.867064,	1.513907, //ATTTT
        85.299201,	1.517846, //CAAAA
        76.182269,	1.705015, //CAAAC
        83.515830,	1.537572, //CAAAG
        75.189913,	1.542528, //CAAAT
        88.136373,	1.962027, //CAACA
        84.995473,	1.836131, //CAACC
        87.006688,	1.554534, //CAACG
        83.493372,	1.588056, //CAACT
        82.800198,	1.461596, //CAAGA
        78.149885,	1.427101, //CAAGC
        82.266932,	1.409894, //CAAGG
        75.864969,	1.487030, //CAAGT
        81.528646,	1.980243, //CAATA
        75.530028,	2.227696, //CAATC
        78.684782,	1.676175, //CAATG
        69.482536,	2.008670, //CAATT
        105.083413,	2.191321, //CACAA
        97.615650,	1.741661, //CACAC
        102.177502,	2.289866, //CACAG
        96.833636,	2.177595, //CACAT
        105.427106,	1.882637, //CACCA
        102.052909,	1.753323, //CACCC
        103.922479,	1.904430, //CACCG
        100.585286,	1.830978, //CACCT
        98.932038,	2.247222, //CACGA
        95.707254,	2.023168, //CACGC
        99.142620,	2.226676, //CACGG
        94.357861,	2.645556, //CACGT
        98.810434,	1.698466, //CACTA
        91.730228,	1.861358, //CACTC
        95.288047,	1.644856, //CACTG
        86.102083,	1.469612, //CACTT
        76.923197,	1.829158, //CAGAA
        67.126672,	2.144815, //CAGAC
        75.360802,	1.828542, //CAGAG
        66.746971,	1.854593, //CAGAT
        85.481267,	1.877059, //CAGCA
        81.851132,	1.706178, //CAGCC
        83.215307,	1.560138, //CAGCG
        80.119853,	1.421728, //CAGCT
        75.417467,	1.833456, //CAGGA
        71.582437,	1.676900, //CAGGC
        76.614621,	1.687201, //CAGGG
        70.179614,	1.760891, //CAGGT
        75.143913,	2.048050, //CAGTA
        68.778678,	2.421331, //CAGTC
        71.420319,	1.996932, //CAGTG
        62.882703,	2.356355, //CAGTT
        107.114152,	3.162864, //CATAA
        103.026195,	3.097662, //CATAC
        105.114666,	3.024385, //CATAG
        104.405725,	3.751323, //CATAT
        116.473274,	2.972605, //CATCA
        115.472553,	3.047684, //CATCC
        115.908028,	3.000273, //CATCG
        115.949399,	3.104102, //CATCT
        103.103093,	2.994843, //CATGA
        103.491687,	3.134146, //CATGC
        104.304824,	2.931226, //CATGG
        106.329565,	3.567998, //CATGT
        102.954711,	2.180266, //CATTA
        97.929889,	2.090218, //CATTC
        100.481875,	2.200879, //CATTG
        93.685052,	1.925107, //CATTT
        90.886902,	2.709875, //CCAAA
        82.688617,	2.161122, //CCAAC
        89.522192,	2.817961, //CCAAG
        81.161068,	2.248901, //CCAAT
        94.291383,	1.224810, //CCACA
        91.692168,	1.290436, //CCACC
        93.168278,	1.397982, //CCACG
        89.495678,	1.562573, //CCACT
        85.669315,	2.601181, //CCAGA
        82.491813,	2.082363, //CCAGC
        85.912503,	2.501465, //CCAGG
        78.582625,	2.406247, //CCAGT
        87.536432,	1.952000, //CCATA
        81.650728,	2.229315, //CCATC
        84.608713,	2.185064, //CCATG
        75.137628,	2.430893, //CCATT
        103.838170,	1.630852, //CCCAA
        96.573356,	1.463223, //CCCAC
        101.084652,	1.842031, //CCCAG
        95.085334,	1.799272, //CCCAT
        103.314435,	1.449808, //CCCCA
        99.916883,	1.401820, //CCCCC
        101.723145,	1.431916, //CCCCG
        98.367101,	1.447096, //CCCCT
        97.400380,	1.820247, //CCCGA
        94.424019,	1.580932, //CCCGC
        97.607286,	1.748125, //CCCGG
        92.242990,	2.134667, //CCCGT
        97.963664,	1.774084, //CCCTA
        92.039801,	2.162105, //CCCTC
        94.568398,	1.638304, //CCCTG
        86.037709,	1.913109, //CCCTT
        83.422980,	2.367950, //CCGAA
        74.671008,	2.003318, //CCGAC
        82.208317,	2.412907, //CCGAG
        73.029003,	1.858546, //CCGAT
        90.050177,	1.442911, //CCGCA
        87.004014,	1.527415, //CCGCC
        87.859546,	1.581813, //CCGCG
        84.581805,	1.560399, //CCGCT
        82.036119,	2.441716, //CCGGA
        79.070131,	2.031856, //CCGGC
        83.603933,	2.352700, //CCGGG
        76.331678,	2.460963, //CCGGT
        80.495558,	2.144676, //CCGTA
        74.497765,	2.495653, //CCGTC
        76.660434,	2.220054, //CCGTG
        67.965198,	2.473128, //CCGTT
        110.695855,	2.640979, //CCTAA
        107.048904,	2.582529, //CCTAC
        108.913506,	2.516063, //CCTAG
        107.323511,	3.038925, //CCTAT
        116.314348,	2.427926, //CCTCA
        115.528260,	2.470406, //CCTCC
        115.909360,	2.498912, //CCTCG
        115.279298,	2.722041, //CCTCT
        105.671966,	2.505934, //CCTGA
        105.233101,	2.565836, //CCTGC
        106.591326,	2.473458, //CCTGG
        105.943748,	3.112501, //CCTGT
        104.639187,	1.860074, //CCTTA
        99.568793,	1.792855, //CCTTC
        102.481258,	1.888032, //CCTTG
        95.451294,	1.897284, //CCTTT
        79.257840,	1.677481, //CGAAA
        69.469963,	2.181444, //CGAAC
        77.254641,	1.595406, //CGAAG
        68.955740,	1.951472, //CGAAT
        85.325087,	2.485995, //CGACA
        81.790097,	2.197200, //CGACC
        83.926795,	1.981911, //CGACG
        80.821263,	1.929455, //CGACT
        78.431140,	1.417762, //CGAGA
        73.052438,	1.590985, //CGAGC
        78.444465,	1.358207, //CGAGG
        72.213793,	1.457057, //CGAGT
        77.967189,	2.586817, //CGATA
        71.522203,	2.702412, //CGATC
        74.643640,	2.058055, //CGATG
        66.274033,	2.353002, //CGATT
        104.795115,	2.217680, //CGCAA
        96.259419,	1.729785, //CGCAC
        101.843896,	2.293936, //CGCAG
        95.726300,	2.053863, //CGCAT
        105.834966,	1.965209, //CGCCA
        102.470332,	1.763366, //CGCCC
        104.360294,	1.934645, //CGCCG
        101.042529,	1.857380, //CGCCT
        99.530716,	2.248272, //CGCGA
        95.495773,	1.869846, //CGCGC
        99.705019,	2.163916, //CGCGG
        94.977629,	2.467197, //CGCGT
        98.917405,	1.801944, //CGCTA
        91.179629,	2.012889, //CGCTC
        95.523832,	1.678402, //CGCTG
        86.274697,	1.518410, //CGCTT
        71.734459,	1.833777, //CGGAA
        61.324636,	2.325889, //CGGAC
        70.009384,	1.861102, //CGGAG
        61.286638,	1.922772, //CGGAT
        84.335955,	1.896143, //CGGCA
        80.706982,	1.710818, //CGGCC
        82.478291,	1.575505, //CGGCG
        78.892076,	1.474313, //CGGCT
        74.045169,	1.702104, //CGGGA
        69.084817,	1.768077, //CGGGC
        75.502289,	1.512557, //CGGGG
        68.194763,	1.634836, //CGGGT
        73.628429,	2.386667, //CGGTA
        67.167437,	2.691990, //CGGTC
        69.531847,	2.132513, //CGGTG
        61.837098,	2.621137, //CGGTT
        106.265683,	2.967921, //CGTAA
        100.721623,	2.663822, //CGTAC
        104.021897,	2.779656, //CGTAG
        102.596352,	3.770059, //CGTAT
        115.352531,	2.788713, //CGTCA
        114.002652,	2.926713, //CGTCC
        114.732597,	2.905583, //CGTCG
        114.235179,	3.023806, //CGTCT
        102.828262,	2.865487, //CGTGA
        102.690912,	2.925330, //CGTGC
        104.332242,	2.854346, //CGTGG
        105.674186,	3.386671, //CGTGT
        102.158016,	2.404871, //CGTTA
        96.373898,	2.217327, //CGTTC
        99.314245,	2.364475, //CGTTG
        92.072715,	1.913314, //CGTTT
        92.562125,	2.424337, //CTAAA
        84.664034,	2.309626, //CTAAC
        91.201323,	2.478620, //CTAAG
        83.598047,	2.479595, //CTAAT
        94.896464,	1.320107, //CTACA
        92.593313,	1.417739, //CTACC
        93.701177,	1.341323, //CTACG
        91.064522,	1.521743, //CTACT
        89.526407,	2.323276, //CTAGA
        86.261535,	2.289189, //CTAGC
        89.788654,	2.340315, //CTAGG
        83.321080,	2.723338, //CTAGT
        89.685334,	1.882633, //CTATA
        85.951117,	2.462911, //CTATC
        87.376870,	2.119190, //CTATG
        80.262479,	2.695063, //CTATT
        102.665954,	2.080524, //CTCAA
        97.041059,	2.101257, //CTCAC
        100.922796,	2.400608, //CTCAG
        95.628794,	2.473610, //CTCAT
        101.694192,	1.632531, //CTCCA
        99.147925,	1.608675, //CTCCC
        100.516608,	1.827966, //CTCCG
        97.982527,	1.915015, //CTCCT
        98.765403,	2.591370, //CTCGA
        95.390102,	2.485991, //CTCGC
        98.901758,	2.512791, //CTCGG
        92.658656,	5.740038, //CTCGT
        97.135808,	1.860970, //CTCTA
        93.093150,	2.329145, //CTCTC
        94.926446,	2.032872, //CTCTG
        87.812190,	2.374892, //CTCTT
        84.698420,	3.075336, //CTGAA
        76.244467,	2.535449, //CTGAC
        84.349994,	3.174293, //CTGAG
        75.418002,	2.693786, //CTGAT
        91.345572,	1.482083, //CTGCA
        88.826771,	1.665776, //CTGCC
        90.008825,	1.674668, //CTGCG
        87.298622,	1.839044, //CTGCT
        86.122238,	3.229588, //CTGGA
        82.880303,	2.830276, //CTGGC
        87.335988,	2.988263, //CTGGG
        81.364240,	3.422647, //CTGGT
        84.914632,	2.229805, //CTGTA
        81.424318,	2.831328, //CTGTC
        82.231172,	2.655150, //CTGTG
        75.964444,	3.040482, //CTGTT
        104.196111,	2.163707, //CTTAA
        100.287935,	2.019532, //CTTAC
        102.394288,	2.041936, //CTTAG
        100.838825,	2.505570, //CTTAT
        107.930841,	2.198568, //CTTCA
        106.308733,	2.171602, //CTTCC
        107.100798,	2.226071, //CTTCG
        107.156076,	2.264576, //CTTCT
        99.894877,	2.113695, //CTTGA
        98.698121,	2.066305, //CTTGC
        100.143390,	1.986539, //CTTGG
        99.698475,	2.510487, //CTTGT
        97.833296,	1.708404, //CTTTA
        93.994560,	1.569772, //CTTTC
        96.038527,	1.623511, //CTTTG
        90.896237,	1.513907, //CTTTT
        83.386638,	1.517846, //GAAAA
        74.388394,	1.705015, //GAAAC
        81.388866,	1.537572, //GAAAG
        74.042064,	1.542528, //GAAAT
        87.048645,	1.962027, //GAACA
        83.557746,	1.836131, //GAACC
        85.665266,	1.554534, //GAACG
        82.634133,	1.588056, //GAACT
        81.166448,	1.461596, //GAAGA
        76.520803,	1.427101, //GAAGC
        80.833237,	1.409894, //GAAGG
        74.795959,	1.487030, //GAAGT
        80.121540,	1.980243, //GAATA
        73.854454,	2.227696, //GAATC
        77.095118,	1.676175, //GAATG
        68.536043,	2.008670, //GAATT
        105.222875,	2.191321, //GACAA
        97.661873,	1.741661, //GACAC
        102.268034,	2.289866, //GACAG
        96.832985,	2.177595, //GACAT
        105.456844,	1.882637, //GACCA
        102.183376,	1.753323, //GACCC
        103.955159,	1.904430, //GACCG
        100.749327,	1.830978, //GACCT
        100.000783,	2.247222, //GACGA
        96.771938,	2.023168, //GACGC
        100.285296,	2.226676, //GACGG
        95.850103,	2.645556, //GACGT
        98.853494,	1.698466, //GACTA
        91.816791,	1.861358, //GACTC
        95.756422,	1.644856, //GACTG
        86.309743,	1.469612, //GACTT
        75.544973,	1.829158, //GAGAA
        65.307774,	2.144815, //GAGAC
        74.000863,	1.828542, //GAGAG
        65.158786,	1.854593, //GAGAT
        84.680681,	1.877059, //GAGCA
        80.945784,	1.706178, //GAGCC
        82.101278,	1.560138, //GAGCG
        79.170605,	1.421728, //GAGCT
        74.768355,	1.833456, //GAGGA
        70.483473,	1.676900, //GAGGC
        75.925213,	1.687201, //GAGGG
        69.438371,	1.760891, //GAGGT
        73.918872,	2.048050, //GAGTA
        67.155597,	2.421331, //GAGTC
        69.683295,	1.996932, //GAGTG
        61.359462,	2.356355, //GAGTT
        109.281931,	3.162864, //GATAA
        105.052128,	3.097662, //GATAC
        107.364989,	3.024385, //GATAG
        106.904799,	3.751323, //GATAT
        116.807913,	2.972605, //GATCA
        116.146652,	3.047684, //GATCC
        116.561661,	3.000273, //GATCG
        116.170176,	3.104102, //GATCT
        105.520597,	2.994843, //GATGA
        105.928307,	3.134146, //GATGC
        106.906539,	2.931226, //GATGG
        108.772450,	3.567998, //GATGT
        104.306284,	2.180266, //GATTA
        99.650873,	2.090218, //GATTC
        102.066628,	2.200879, //GATTG
        95.442499,	1.925107, //GATTT
        89.939141,	2.709875, //GCAAA
        81.679718,	2.161122, //GCAAC
        88.368133,	2.817961, //GCAAG
        80.254497,	2.248901, //GCAAT
        92.784857,	1.224810, //GCACA
        90.148429,	1.290436, //GCACC
        91.623348,	1.397982, //GCACG
        88.076636,	1.562573, //GCACT
        84.611481,	2.601181, //GCAGA
        81.523864,	2.082363, //GCAGC
        84.900396,	2.501465, //GCAGG
        77.745998,	2.406247, //GCAGT
        86.489332,	1.952000, //GCATA
        80.783037,	2.229315, //GCATC
        83.593272,	2.185064, //GCATG
        74.258178,	2.430893, //GCATT
        101.835905,	1.630852, //GCCAA
        94.988975,	1.463223, //GCCAC
        99.657423,	1.842031, //GCCAG
        93.462754,	1.799272, //GCCAT
        101.336313,	1.449808, //GCCCA
        98.210369,	1.401820, //GCCCC
        99.909622,	1.431916, //GCCCG
        96.660961,	1.447096, //GCCCT
        96.013791,	1.820247, //GCCGA
        93.202291,	1.580932, //GCCGC
        96.358557,	1.748125, //GCCGG
        90.871380,	2.134667, //GCCGT
        96.042651,	1.774084, //GCCTA
        90.369255,	2.162105, //GCCTC
        93.038318,	1.638304, //GCCTG
        84.806715,	1.913109, //GCCTT
        83.047346,	2.367950, //GCGAA
        74.039586,	2.003318, //GCGAC
        82.045953,	2.412907, //GCGAG
        72.597339,	1.858546, //GCGAT
        88.912531,	1.442911, //GCGCA
        86.071698,	1.527415, //GCGCC
        86.786208,	1.581813, //GCGCG
        83.458958,	1.560399, //GCGCT
        81.657448,	2.441716, //GCGGA
        78.721440,	2.031856, //GCGGC
        83.377785,	2.352700, //GCGGG
        76.339622,	2.460963, //GCGGT
        79.952401,	2.144676, //GCGTA
        74.115989,	2.495653, //GCGTC
        76.018809,	2.220054, //GCGTG
        67.578387,	2.473128, //GCGTT
        107.212991,	2.640979, //GCTAA
        103.668501,	2.582529, //GCTAC
        105.168383,	2.516063, //GCTAG
        104.067110,	3.038925, //GCTAT
        112.904496,	2.427926, //GCTCA
        111.825810,	2.470406, //GCTCC
        112.328850,	2.498912, //GCTCG
        111.761826,	2.722041, //GCTCT
        102.355413,	2.505934, //GCTGA
        101.761822,	2.565836, //GCTGC
        103.157324,	2.473458, //GCTGG
        102.644807,	3.112501, //GCTGT
        101.279065,	1.860074, //GCTTA
        96.855676,	1.792855, //GCTTC
        99.374546,	1.888032, //GCTTG
        92.861408,	1.897284, //GCTTT
        75.050005,	1.677481, //GGAAA
        65.414516,	2.181444, //GGAAC
        73.223645,	1.595406, //GGAAG
        65.690017,	1.951472, //GGAAT
        80.837180,	2.485995, //GGACA
        77.222799,	2.197200, //GGACC
        79.590032,	1.981911, //GGACG
        76.630173,	1.929455, //GGACT
        74.673690,	1.417762, //GGAGA
        68.985288,	1.590985, //GGAGC
        74.767069,	1.358207, //GGAGG
        68.876269,	1.457057, //GGAGT
        74.093656,	2.586817, //GGATA
        68.253333,	2.702412, //GGATC
        71.176950,	2.058055, //GGATG
        64.016816,	2.353002, //GGATT
        101.489714,	2.217680, //GGCAA
        93.334595,	1.729785, //GGCAC
        98.582676,	2.293936, //GGCAG
        92.917383,	2.053863, //GGCAT
        102.288840,	1.965209, //GGCCA
        98.763940,	1.763366, //GGCCC
        100.719835,	1.934645, //GGCCG
        97.887087,	1.857380, //GGCCT
        96.635617,	2.248272, //GGCGA
        92.870280,	1.869846, //GGCGC
        96.969873,	2.163916, //GGCGG
        92.667522,	2.467197, //GGCGT
        95.573822,	1.801944, //GGCTA
        88.517796,	2.012889, //GGCTC
        92.450082,	1.678402, //GGCTG
        83.696252,	1.518410, //GGCTT
        70.102930,	1.833777, //GGGAA
        59.569718,	2.325889, //GGGAC
        68.493043,	1.861102, //GGGAG
        59.868908,	1.922772, //GGGAT
        81.528162,	1.896143, //GGGCA
        78.184412,	1.710818, //GGGCC
        79.861229,	1.575505, //GGGCG
        76.671709,	1.474313, //GGGCT
        72.349880,	1.702104, //GGGGA
        67.246213,	1.768077, //GGGGC
        73.483347,	1.512557, //GGGGG
        66.699841,	1.634836, //GGGGT
        71.363669,	2.386667, //GGGTA
        64.854176,	2.691990, //GGGTC
        67.465323,	2.132513, //GGGTG
        59.958861,	2.621137, //GGGTT
        103.092591,	2.967921, //GGTAA
        97.343566,	2.663822, //GGTAC
        100.909205,	2.779656, //GGTAG
        99.148854,	3.770059, //GGTAT
        111.054862,	2.788713, //GGTCA
        109.830512,	2.926713, //GGTCC
        110.538821,	2.905583, //GGTCG
        110.182778,	3.023806, //GGTCT
        100.227815,	2.865487, //GGTGA
        99.578682,	2.925330, //GGTGC
        101.303068,	2.854346, //GGTGG
        102.523215,	3.386671, //GGTGT
        98.581507,	2.404871, //GGTTA
        93.689416,	2.217327, //GGTTC
        96.220439,	2.364475, //GGTTG
        89.601902,	1.913314, //GGTTT
        89.982076,	2.424337, //GTAAA
        81.539639,	2.309626, //GTAAC
        88.511340,	2.478620, //GTAAG
        80.516642,	2.479595, //GTAAT
        91.990912,	1.320107, //GTACA
        89.693237,	1.417739, //GTACC
        90.767179,	1.341323, //GTACG
        88.301315,	1.521743, //GTACT
        87.058295,	2.323276, //GTAGA
        83.481020,	2.289189, //GTAGC
        87.351838,	2.340315, //GTAGG
        81.468725,	2.723338, //GTAGT
        86.728339,	1.882633, //GTATA
        82.622965,	2.462911, //GTATC
        84.315010,	2.119190, //GTATG
        76.806121,	2.695063, //GTATT
        101.379601,	2.080524, //GTCAA
        95.391344,	2.101257, //GTCAC
        99.605998,	2.400608, //GTCAG
        93.509137,	2.473610, //GTCAT
        100.670463,	1.632531, //GTCCA
        97.904316,	1.608675, //GTCCC
        99.515842,	1.827966, //GTCCG
        96.368581,	1.915015, //GTCCT
        97.384795,	2.591370, //GTCGA
        94.303889,	2.485991, //GTCGC
        97.717914,	2.512791, //GTCGG
        92.558778,	5.740038, //GTCGT
        95.792036,	1.860970, //GTCTA
        91.270080,	2.329145, //GTCTC
        93.420874,	2.032872, //GTCTG
        85.554250,	2.374892, //GTCTT
        83.601375,	3.075336, //GTGAA
        74.576246,	2.535449, //GTGAC
        83.127101,	3.174293, //GTGAG
        73.838397,	2.693786, //GTGAT
        90.199927,	1.482083, //GTGCA
        87.707263,	1.665776, //GTGCC
        88.805967,	1.674668, //GTGCG
        85.971831,	1.839044, //GTGCT
        85.277473,	3.229588, //GTGGA
        82.128710,	2.830276, //GTGGC
        86.688362,	2.988263, //GTGGG
        80.729504,	3.422647, //GTGGT
        83.508642,	2.229805, //GTGTA
        79.343863,	2.831328, //GTGTC
        80.584531,	2.655150, //GTGTG
        73.464255,	3.040482, //GTGTT
        104.027773,	2.163707, //GTTAA
        99.691570,	2.019532, //GTTAC
        102.254982,	2.041936, //GTTAG
        99.693864,	2.505570, //GTTAT
        107.625062,	2.198568, //GTTCA
        106.305205,	2.171602, //GTTCC
        107.262057,	2.226071, //GTTCG
        106.426197,	2.264576, //GTTCT
        99.968794,	2.113695, //GTTGA
        98.831631,	2.066305, //GTTGC
        100.631462,	1.986539, //GTTGG
        99.458033,	2.510487, //GTTGT
        98.129942,	1.708404, //GTTTA
        93.954313,	1.569772, //GTTTC
        96.300125,	1.623511, //GTTTG
        90.279102,	1.513907, //GTTTT
        87.110801,	1.517846, //TAAAA
        78.283819,	1.705015, //TAAAC
        85.402786,	1.537572, //TAAAG
        77.319566,	1.542528, //TAAAT
        89.949000,	1.962027, //TAACA
        86.786303,	1.836131, //TAACC
        88.614569,	1.554534, //TAACG
        85.332521,	1.588056, //TAACT
        84.714208,	1.461596, //TAAGA
        80.019472,	1.427101, //TAAGC
        84.285796,	1.409894, //TAAGG
        78.012306,	1.487030, //TAAGT
        83.211693,	1.980243, //TAATA
        77.092142,	2.227696, //TAATC
        80.258390,	1.676175, //TAATG
        70.919240,	2.008670, //TAATT
        105.038267,	2.191321, //TACAA
        97.459580,	1.741661, //TACAC
        102.137974,	2.289866, //TACAG
        96.420347,	2.177595, //TACAT
        105.028796,	1.882637, //TACCA
        101.598382,	1.753323, //TACCC
        103.504437,	1.904430, //TACCG
        100.094231,	1.830978, //TACCT
        99.485543,	2.247222, //TACGA
        96.052496,	2.023168, //TACGC
        99.594475,	2.226676, //TACGG
        94.743516,	2.645556, //TACGT
        98.638847,	1.698466, //TACTA
        91.883091,	1.861358, //TACTC
        95.446496,	1.644856, //TACTG
        86.162047,	1.469612, //TACTT
        78.881111,	1.829158, //TAGAA
        68.794947,	2.144815, //TAGAC
        77.446258,	1.828542, //TAGAG
        68.471318,	1.854593, //TAGAT
        85.711523,	1.877059, //TAGCA
        82.133416,	1.706178, //TAGCC
        82.735456,	1.560138, //TAGCG
        80.498507,	1.421728, //TAGCT
        77.347848,	1.833456, //TAGGA
        73.221457,	1.676900, //TAGGC
        78.784896,	1.687201, //TAGGG
        71.813579,	1.760891, //TAGGT
        76.317002,	2.048050, //TAGTA
        69.820528,	2.421331, //TAGTC
        72.191972,	1.996932, //TAGTG
        63.584976,	2.356355, //TAGTT
        109.682082,	3.162864, //TATAA
        105.403801,	3.097662, //TATAC
        107.754822,	3.024385, //TATAG
        107.309844,	3.751323, //TATAT
        117.983933,	2.972605, //TATCA
        117.188486,	3.047684, //TATCC
        117.517222,	3.000273, //TATCG
        117.555271,	3.104102, //TATCT
        105.550211,	2.994843, //TATGA
        105.692073,	3.134146, //TATGC
        106.686408,	2.931226, //TATGG
        108.197924,	3.567998, //TATGT
        105.157128,	2.180266, //TATTA
        100.112002,	2.090218, //TATTC
        102.788626,	2.200879, //TATTG
        95.947011,	1.925107, //TATTT
        90.110138,	2.709875, //TCAAA
        82.199679,	2.161122, //TCAAC
        88.671394,	2.817961, //TCAAG
        80.719998,	2.248901, //TCAAT
        92.896485,	1.224810, //TCACA
        90.383526,	1.290436, //TCACC
        91.801464,	1.397982, //TCACG
        88.290341,	1.562573, //TCACT
        85.104101,	2.601181, //TCAGA
        81.824701,	2.082363, //TCAGC
        85.143667,	2.501465, //TCAGG
        78.120046,	2.406247, //TCAGT
        86.457378,	1.952000, //TCATA
        80.734106,	2.229315, //TCATC
        83.791653,	2.185064, //TCATG
        74.436252,	2.430893, //TCATT
        101.477335,	1.630852, //TCCAA
        94.867930,	1.463223, //TCCAC
        99.083612,	1.842031, //TCCAG
        93.327878,	1.799272, //TCCAT
        100.857711,	1.449808, //TCCCA
        97.781886,	1.401820, //TCCCC
        99.451717,	1.431916, //TCCCG
        96.139394,	1.447096, //TCCCT
        95.530039,	1.820247, //TCCGA
        92.886693,	1.580932, //TCCGC
        95.974951,	1.748125, //TCCGG
        90.614115,	2.134667, //TCCGT
        95.787187,	1.774084, //TCCTA
        90.079311,	2.162105, //TCCTC
        92.703727,	1.638304, //TCCTG
        84.493067,	1.913109, //TCCTT
        82.855355,	2.367950, //TCGAA
        74.344480,	2.003318, //TCGAC
        81.751704,	2.412907, //TCGAG
        72.717827,	1.858546, //TCGAT
        88.127740,	1.442911, //TCGCA
        84.976761,	1.527415, //TCGCC
        85.676709,	1.581813, //TCGCG
        82.653881,	1.560399, //TCGCT
        81.512289,	2.441716, //TCGGA
        78.623976,	2.031856, //TCGGC
        83.004309,	2.352700, //TCGGG
        76.197573,	2.460963, //TCGGT
        79.672304,	2.144676, //TCGTA
        73.819625,	2.495653, //TCGTC
        75.801558,	2.220054, //TCGTG
        67.418801,	2.473128, //TCGTT
        108.291003,	2.640979, //TCTAA
        104.709682,	2.582529, //TCTAC
        106.108011,	2.516063, //TCTAG
        105.196252,	3.038925, //TCTAT
        113.900843,	2.427926, //TCTCA
        113.075779,	2.470406, //TCTCC
        113.435897,	2.498912, //TCTCG
        112.715687,	2.722041, //TCTCT
        103.496535,	2.505934, //TCTGA
        102.989693,	2.565836, //TCTGC
        104.141737,	2.473458, //TCTGG
        103.740894,	3.112501, //TCTGT
        102.353025,	1.860074, //TCTTA
        97.691494,	1.792855, //TCTTC
        100.178981,	1.888032, //TCTTG
        93.780498,	1.897284, //TCTTT
        77.796208,	1.677481, //TGAAA
        68.079456,	2.181444, //TGAAC
        75.607091,	1.595406, //TGAAG
        66.861991,	1.951472, //TGAAT
        83.647544,	2.485995, //TGACA
        80.344298,	2.197200, //TGACC
        82.328897,	1.981911, //TGACG
        79.209093,	1.929455, //TGACT
        77.438483,	1.417762, //TGAGA
        72.133224,	1.590985, //TGAGC
        77.469925,	1.358207, //TGAGG
        71.115787,	1.457057, //TGAGT
        75.963571,	2.586817, //TGATA
        70.091646,	2.702412, //TGATC
        72.867324,	2.058055, //TGATG
        64.729991,	2.353002, //TGATT
        102.245779,	2.217680, //TGCAA
        94.171625,	1.729785, //TGCAC
        99.083506,	2.293936, //TGCAG
        93.222027,	2.053863, //TGCAT
        103.010164,	1.965209, //TGCCA
        99.508185,	1.763366, //TGCCC
        101.584275,	1.934645, //TGCCG
        98.239428,	1.857380, //TGCCT
        97.056922,	2.248272, //TGCGA
        93.507929,	1.869846, //TGCGC
        97.369661,	2.163916, //TGCGG
        92.621945,	2.467197, //TGCGT
        96.290433,	1.801944, //TGCTA
        89.381608,	2.012889, //TGCTC
        93.120468,	1.678402, //TGCTG
        84.107201,	1.518410, //TGCTT
        72.079631,	1.833777, //TGGAA
        61.845025,	2.325889, //TGGAC
        70.531431,	1.861102, //TGGAG
        61.484549,	1.922772, //TGGAT
        82.983042,	1.896143, //TGGCA
        79.656503,	1.710818, //TGGCC
        81.224246,	1.575505, //TGGCG
        78.169809,	1.474313, //TGGCT
        74.498847,	1.702104, //TGGGA
        69.882906,	1.768077, //TGGGC
        75.729976,	1.512557, //TGGGG
        68.816269,	1.634836, //TGGGT
        73.695690,	2.386667, //TGGTA
        67.269454,	2.691990, //TGGTC
        69.746593,	2.132513, //TGGTG
        61.854664,	2.621137, //TGGTT
        104.795258,	2.967921, //TGTAA
        99.280418,	2.663822, //TGTAC
        102.609692,	2.779656, //TGTAG
        100.809072,	3.770059, //TGTAT
        113.356664,	2.788713, //TGTCA
        111.712997,	2.926713, //TGTCC
        112.612603,	2.905583, //TGTCG
        112.230996,	3.023806, //TGTCT
        101.552476,	2.865487, //TGTGA
        100.966167,	2.925330, //TGTGC
        102.720910,	2.854346, //TGTGG
        103.517568,	3.386671, //TGTGT
        100.503850,	2.404871, //TGTTA
        95.318147,	2.217327, //TGTTC
        97.974253,	2.364475, //TGTTG
        91.138411,	1.913314, //TGTTT
        91.410962,	2.424337, //TTAAA
        83.420966,	2.309626, //TTAAC
        89.978630,	2.478620, //TTAAG
        82.138468,	2.479595, //TTAAT
        93.456748,	1.320107, //TTACA
        91.086788,	1.417739, //TTACC
        92.267389,	1.341323, //TTACG
        89.558506,	1.521743, //TTACT
        88.332620,	2.323276, //TTAGA
        85.002867,	2.289189, //TTAGC
        88.572604,	2.340315, //TTAGG
        82.477058,	2.723338, //TTAGT
        88.094812,	1.882633, //TTATA
        83.755611,	2.462911, //TTATC
        85.647866,	2.119190, //TTATG
        77.966495,	2.695063, //TTATT
        101.170960,	2.080524, //TTCAA
        95.236643,	2.101257, //TTCAC
        99.296106,	2.400608, //TTCAG
        93.692141,	2.473610, //TTCAT
        100.256021,	1.632531, //TTCCA
        97.470987,	1.608675, //TTCCC
        98.993045,	1.827966, //TTCCG
        96.027094,	1.915015, //TTCCT
        97.022236,	2.591370, //TTCGA
        93.911287,	2.485991, //TTCGC
        97.221238,	2.512791, //TTCGG
        92.050978,	5.740038, //TTCGT
        95.723096,	1.860970, //TTCTA
        90.738442,	2.329145, //TTCTC
        93.052489,	2.032872, //TTCTG
        85.480260,	2.374892, //TTCTT
        83.721234,	3.075336, //TTGAA
        75.590138,	2.535449, //TTGAC
        83.326155,	3.174293, //TTGAG
        74.331402,	2.693786, //TTGAT
        90.006111,	1.482083, //TTGCA
        87.366255,	1.665776, //TTGCC
        88.436191,	1.674668, //TTGCG
        85.661034,	1.839044, //TTGCT
        85.028159,	3.229588, //TTGGA
        81.841017,	2.830276, //TTGGC
        86.158946,	2.988263, //TTGGG
        80.408835,	3.422647, //TTGGT
        83.341406,	2.229805, //TTGTA
        79.174315,	2.831328, //TTGTC
        80.346437,	2.655150, //TTGTG
        73.340969,	3.040482, //TTGTT
        103.897500,	2.163707, //TTTAA
        99.942932,	2.019532, //TTTAC
        102.151443,	2.041936, //TTTAG
        100.349869,	2.505570, //TTTAT
        108.207484,	2.198568, //TTTCA
        106.791029,	2.171602, //TTTCC
        107.354359,	2.226071, //TTTCG
        107.074973,	2.264576, //TTTCT
        99.863983,	2.113695, //TTTGA
        98.730197,	2.066305, //TTTGC
        100.575891,	1.986539, //TTTGG
        99.746559,	2.510487, //TTTGT
        98.045635,	1.708404, //TTTTA
        94.016860,	1.569772, //TTTTC
        96.127181,	1.623511, //TTTTG
        90.405465,	1.513907  //TTTTT
};

const PoreModel<KmerLen::k5> 
    pmodel_r94_template(model_r94_means_stdvs, false);

const PoreModel<KmerLen::k5> 
    pmodel_r94_complement(model_r94_means_stdvs, true);

#endif
