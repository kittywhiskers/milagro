#include "arch.h"
#include "fp_BN254CX.h"

/* Curve BN254CX - Pairing friendly BN curve */

/* CertiVox BN curve/field  */

#if CHUNK==16

// Base Bits= 13
const BIG_256_13 Modulus_BN254CX= {0x15B3,0xDA,0x1BD7,0xC47,0x1BE6,0x1F70,0x24,0x1DC3,0x1FD6,0x1921,0x19B4,0x14C6,0x1647,0x1EEF,0x16C2,0x541,0x870,0x0,0x0,0x48};
const BIG_256_13 R2modp_BN254CX= {0x1527,0x146B,0x12A7,0x1A60,0x1E0A,0x1382,0x2BC,0x1D3F,0xB30,0xA8,0xD19,0x11AB,0x1D40,0x1965,0xD6D,0x643,0x10FF,0x1BC7,0x1E61,0x31};
const chunk MConst_BN254CX= 0x1E85;
const BIG_256_13 Fra_BN254CX= {0xEA3,0xE40,0xCD5,0x1210,0x15BD,0x1C10,0x5CF,0x4DE,0x773,0x343,0x626,0x194E,0x18AA,0x10C5,0x12BF,0x2C,0x63A,0x17D,0x1642,0x26};
const BIG_256_13 Frb_BN254CX= {0x710,0x129A,0xF01,0x1A37,0x628,0x360,0x1A55,0x18E4,0x1863,0x15DE,0x138E,0x1B78,0x1D9C,0xE29,0x403,0x515,0x236,0x1E83,0x9BD,0x21};


#endif

#if CHUNK==32
// Base Bits= 28
const BIG_256_28 Modulus_BN254CX= {0xC1B55B3,0x6623EF5,0x93EE1BE,0xD6EE180,0x6D3243F,0x647A636,0xDB0BDDF,0x8702A0,0x4000000,0x2};
const BIG_256_28 R2modp_BN254CX= {0x8A0800A,0x466A061,0x43056A3,0x2B3A225,0x9C6600,0x148515B,0x6BDF50,0xEC9EA56,0xC992E66,0x1};
const chunk MConst_BN254CX= 0x9789E85;
const BIG_256_28 Fra_BN254CX= {0x5C80EA3,0xD908335,0x3F8215B,0x7326F17,0x8986867,0x8AACA71,0x4AFE18B,0xA63A016,0x359082F,0x1};
const BIG_256_28 Frb_BN254CX= {0x6534710,0x8D1BBC0,0x546C062,0x63C7269,0xE3ABBD8,0xD9CDBC4,0x900DC53,0x623628A,0xA6F7D0,0x1};

#endif

#if CHUNK==64
// Base Bits= 56
const BIG_256_56 Modulus_BN254CX= {0x6623EF5C1B55B3L,0xD6EE18093EE1BEL,0x647A6366D3243FL,0x8702A0DB0BDDFL,0x24000000L};
const BIG_256_56 R2modp_BN254CX= {0x466A0618A0800AL,0x2B3A22543056A3L,0x148515B09C6600L,0xEC9EA5606BDF50L,0x1C992E66L};
const chunk MConst_BN254CX= 0x4E205BF9789E85L;
const BIG_256_56 Fra_BN254CX= {0xD9083355C80EA3L,0x7326F173F8215BL,0x8AACA718986867L,0xA63A0164AFE18BL,0x1359082FL};
const BIG_256_56 Frb_BN254CX= {0x8D1BBC06534710L,0x63C7269546C062L,0xD9CDBC4E3ABBD8L,0x623628A900DC53L,0x10A6F7D0L};
#endif

