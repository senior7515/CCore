/* APRTestData.gen.cpp */

#include <CCore/inc/math/APRTest.h>

#include <CCore/inc/Exception.h>

namespace CCore {
namespace Math {
namespace APRTest {

/* Data 1 */

static const TestSet::JTable JSet_1_2[]=
 {
  { 3u , Empty },
  { 7u , Empty }
 };

static const UType JSum_1_3_1_1[]=
 {
  2u,
  0u,
  3u
 };

static const PtrLen<const UType> JTable_1_3_1[]=
 {
  Range(JSum_1_3_1_1)
 };

static const TestSet::JTable JSet_1_3[]=
 {
  { 7u , Range(JTable_1_3_1) }
 };

static const TestSet PSet1[]=
 {
  { 2u , Range(JSet_1_2) },
  { 3u , Range(JSet_1_3) }
 };

static const UType QSet1[]=
 {
  3u /* gen = 2 */,
  7u /* gen = 3 */
 };

static const uint8 P1[]=
 {
  0x06, 0x00, 0x00, 0x00
 };

static const uint8 Q1[]=
 {
  0x2A, 0x00, 0x00, 0x00
 };

/* Data 2 */

static const TestSet::JTable JSet_2_2[]=
 {
  { 3u , Empty },
  { 7u , Empty },
  { 11u , Empty },
  { 31u , Empty }
 };

static const UType JSum_2_3_1_1[]=
 {
  2u,
  0u,
  3u
 };

static const PtrLen<const UType> JTable_2_3_1[]=
 {
  Range(JSum_2_3_1_1)
 };

static const UType JSum_2_3_2_1[]=
 {
  11u,
  12u,
  6u
 };

static const PtrLen<const UType> JTable_2_3_2[]=
 {
  Range(JSum_2_3_2_1)
 };

static const TestSet::JTable JSet_2_3[]=
 {
  { 7u , Range(JTable_2_3_1) },
  { 31u , Range(JTable_2_3_2) }
 };

static const UType JSum_2_5_1_1[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const UType JSum_2_5_1_2[]=
 {
  2u,
  1u,
  4u,
  2u,
  0u
 };

static const UType JSum_2_5_1_3[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const PtrLen<const UType> JTable_2_5_1[]=
 {
  Range(JSum_2_5_1_1),
  Range(JSum_2_5_1_2),
  Range(JSum_2_5_1_3)
 };

static const UType JSum_2_5_2_1[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const UType JSum_2_5_2_2[]=
 {
  8u,
  8u,
  2u,
  6u,
  5u
 };

static const UType JSum_2_5_2_3[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_2_5_2[]=
 {
  Range(JSum_2_5_2_1),
  Range(JSum_2_5_2_2),
  Range(JSum_2_5_2_3)
 };

static const TestSet::JTable JSet_2_5[]=
 {
  { 11u , Range(JTable_2_5_1) },
  { 31u , Range(JTable_2_5_2) }
 };

static const TestSet PSet2[]=
 {
  { 2u , Range(JSet_2_2) },
  { 3u , Range(JSet_2_3) },
  { 5u , Range(JSet_2_5) }
 };

static const UType QSet2[]=
 {
  3u /* gen = 2 */,
  7u /* gen = 3 */,
  11u /* gen = 2 */,
  31u /* gen = 3 */
 };

static const uint8 P2[]=
 {
  0x1E, 0x00, 0x00, 0x00
 };

static const uint8 Q2[]=
 {
  0xF2, 0x37, 0x00, 0x00
 };

/* Data 3 */

static const TestSet::JTable JSet_3_2[]=
 {
  { 3u , Empty },
  { 7u , Empty },
  { 11u , Empty },
  { 31u , Empty },
  { 43u , Empty },
  { 71u , Empty },
  { 211u , Empty }
 };

static const UType JSum_3_3_1_1[]=
 {
  2u,
  0u,
  3u
 };

static const PtrLen<const UType> JTable_3_3_1[]=
 {
  Range(JSum_3_3_1_1)
 };

static const UType JSum_3_3_2_1[]=
 {
  11u,
  12u,
  6u
 };

static const PtrLen<const UType> JTable_3_3_2[]=
 {
  Range(JSum_3_3_2_1)
 };

static const UType JSum_3_3_3_1[]=
 {
  11u,
  18u,
  12u
 };

static const PtrLen<const UType> JTable_3_3_3[]=
 {
  Range(JSum_3_3_3_1)
 };

static const UType JSum_3_3_4_1[]=
 {
  74u,
  75u,
  60u
 };

static const PtrLen<const UType> JTable_3_3_4[]=
 {
  Range(JSum_3_3_4_1)
 };

static const TestSet::JTable JSet_3_3[]=
 {
  { 7u , Range(JTable_3_3_1) },
  { 31u , Range(JTable_3_3_2) },
  { 43u , Range(JTable_3_3_3) },
  { 211u , Range(JTable_3_3_4) }
 };

static const UType JSum_3_5_1_1[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const UType JSum_3_5_1_2[]=
 {
  2u,
  1u,
  4u,
  2u,
  0u
 };

static const UType JSum_3_5_1_3[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const PtrLen<const UType> JTable_3_5_1[]=
 {
  Range(JSum_3_5_1_1),
  Range(JSum_3_5_1_2),
  Range(JSum_3_5_1_3)
 };

static const UType JSum_3_5_2_1[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const UType JSum_3_5_2_2[]=
 {
  8u,
  8u,
  2u,
  6u,
  5u
 };

static const UType JSum_3_5_2_3[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_3_5_2[]=
 {
  Range(JSum_3_5_2_1),
  Range(JSum_3_5_2_2),
  Range(JSum_3_5_2_3)
 };

static const UType JSum_3_5_3_1[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const UType JSum_3_5_3_2[]=
 {
  10u,
  13u,
  20u,
  12u,
  14u
 };

static const UType JSum_3_5_3_3[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const PtrLen<const UType> JTable_3_5_3[]=
 {
  Range(JSum_3_5_3_1),
  Range(JSum_3_5_3_2),
  Range(JSum_3_5_3_3)
 };

static const UType JSum_3_5_4_1[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const UType JSum_3_5_4_2[]=
 {
  42u,
  33u,
  48u,
  48u,
  38u
 };

static const UType JSum_3_5_4_3[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const PtrLen<const UType> JTable_3_5_4[]=
 {
  Range(JSum_3_5_4_1),
  Range(JSum_3_5_4_2),
  Range(JSum_3_5_4_3)
 };

static const TestSet::JTable JSet_3_5[]=
 {
  { 11u , Range(JTable_3_5_1) },
  { 31u , Range(JTable_3_5_2) },
  { 71u , Range(JTable_3_5_3) },
  { 211u , Range(JTable_3_5_4) }
 };

static const UType JSum_3_7_1_1[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const UType JSum_3_7_1_2[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_3_7_1_3[]=
 {
  6u,
  4u,
  6u,
  4u,
  10u,
  8u,
  3u
 };

static const UType JSum_3_7_1_4[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_3_7_1_5[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const PtrLen<const UType> JTable_3_7_1[]=
 {
  Range(JSum_3_7_1_1),
  Range(JSum_3_7_1_2),
  Range(JSum_3_7_1_3),
  Range(JSum_3_7_1_4),
  Range(JSum_3_7_1_5)
 };

static const UType JSum_3_7_2_1[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const UType JSum_3_7_2_2[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_3_7_2_3[]=
 {
  12u,
  8u,
  12u,
  6u,
  6u,
  14u,
  11u
 };

static const UType JSum_3_7_2_4[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_3_7_2_5[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_3_7_2[]=
 {
  Range(JSum_3_7_2_1),
  Range(JSum_3_7_2_2),
  Range(JSum_3_7_2_3),
  Range(JSum_3_7_2_4),
  Range(JSum_3_7_2_5)
 };

static const UType JSum_3_7_3_1[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const UType JSum_3_7_3_2[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_3_7_3_3[]=
 {
  22u,
  27u,
  28u,
  30u,
  30u,
  32u,
  40u
 };

static const UType JSum_3_7_3_4[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_3_7_3_5[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_3_7_3[]=
 {
  Range(JSum_3_7_3_1),
  Range(JSum_3_7_3_2),
  Range(JSum_3_7_3_3),
  Range(JSum_3_7_3_4),
  Range(JSum_3_7_3_5)
 };

static const TestSet::JTable JSet_3_7[]=
 {
  { 43u , Range(JTable_3_7_1) },
  { 71u , Range(JTable_3_7_2) },
  { 211u , Range(JTable_3_7_3) }
 };

static const TestSet PSet3[]=
 {
  { 2u , Range(JSet_3_2) },
  { 3u , Range(JSet_3_3) },
  { 5u , Range(JSet_3_5) },
  { 7u , Range(JSet_3_7) }
 };

static const UType QSet3[]=
 {
  3u /* gen = 2 */,
  7u /* gen = 3 */,
  11u /* gen = 2 */,
  31u /* gen = 3 */,
  43u /* gen = 3 */,
  71u /* gen = 7 */,
  211u /* gen = 2 */
 };

static const uint8 P3[]=
 {
  0xD2, 0x00, 0x00, 0x00
 };

static const uint8 Q3[]=
 {
  0x3E, 0x6B, 0xE9, 0x25,  0x02, 0x00, 0x00, 0x00
 };

/* Data 4 */

static const TestSet::JTable JSet_4_2[]=
 {
  { 3u , Empty },
  { 7u , Empty },
  { 11u , Empty },
  { 23u , Empty },
  { 31u , Empty },
  { 43u , Empty },
  { 67u , Empty },
  { 71u , Empty },
  { 211u , Empty },
  { 331u , Empty },
  { 463u , Empty },
  { 2311u , Empty }
 };

static const UType JSum_4_3_1_1[]=
 {
  2u,
  0u,
  3u
 };

static const PtrLen<const UType> JTable_4_3_1[]=
 {
  Range(JSum_4_3_1_1)
 };

static const UType JSum_4_3_2_1[]=
 {
  11u,
  12u,
  6u
 };

static const PtrLen<const UType> JTable_4_3_2[]=
 {
  Range(JSum_4_3_2_1)
 };

static const UType JSum_4_3_3_1[]=
 {
  11u,
  18u,
  12u
 };

static const PtrLen<const UType> JTable_4_3_3[]=
 {
  Range(JSum_4_3_3_1)
 };

static const UType JSum_4_3_4_1[]=
 {
  20u,
  27u,
  18u
 };

static const PtrLen<const UType> JTable_4_3_4[]=
 {
  Range(JSum_4_3_4_1)
 };

static const UType JSum_4_3_5_1[]=
 {
  74u,
  75u,
  60u
 };

static const PtrLen<const UType> JTable_4_3_5[]=
 {
  Range(JSum_4_3_5_1)
 };

static const UType JSum_4_3_6_1[]=
 {
  110u,
  99u,
  120u
 };

static const PtrLen<const UType> JTable_4_3_6[]=
 {
  Range(JSum_4_3_6_1)
 };

static const UType JSum_4_3_7_1[]=
 {
  146u,
  147u,
  168u
 };

static const PtrLen<const UType> JTable_4_3_7[]=
 {
  Range(JSum_4_3_7_1)
 };

static const UType JSum_4_3_8_1[]=
 {
  740u,
  774u,
  795u
 };

static const PtrLen<const UType> JTable_4_3_8[]=
 {
  Range(JSum_4_3_8_1)
 };

static const TestSet::JTable JSet_4_3[]=
 {
  { 7u , Range(JTable_4_3_1) },
  { 31u , Range(JTable_4_3_2) },
  { 43u , Range(JTable_4_3_3) },
  { 67u , Range(JTable_4_3_4) },
  { 211u , Range(JTable_4_3_5) },
  { 331u , Range(JTable_4_3_6) },
  { 463u , Range(JTable_4_3_7) },
  { 2311u , Range(JTable_4_3_8) }
 };

static const UType JSum_4_5_1_1[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const UType JSum_4_5_1_2[]=
 {
  2u,
  1u,
  4u,
  2u,
  0u
 };

static const UType JSum_4_5_1_3[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const PtrLen<const UType> JTable_4_5_1[]=
 {
  Range(JSum_4_5_1_1),
  Range(JSum_4_5_1_2),
  Range(JSum_4_5_1_3)
 };

static const UType JSum_4_5_2_1[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const UType JSum_4_5_2_2[]=
 {
  8u,
  8u,
  2u,
  6u,
  5u
 };

static const UType JSum_4_5_2_3[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_4_5_2[]=
 {
  Range(JSum_4_5_2_1),
  Range(JSum_4_5_2_2),
  Range(JSum_4_5_2_3)
 };

static const UType JSum_4_5_3_1[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const UType JSum_4_5_3_2[]=
 {
  10u,
  13u,
  20u,
  12u,
  14u
 };

static const UType JSum_4_5_3_3[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const PtrLen<const UType> JTable_4_5_3[]=
 {
  Range(JSum_4_5_3_1),
  Range(JSum_4_5_3_2),
  Range(JSum_4_5_3_3)
 };

static const UType JSum_4_5_4_1[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const UType JSum_4_5_4_2[]=
 {
  42u,
  33u,
  48u,
  48u,
  38u
 };

static const UType JSum_4_5_4_3[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const PtrLen<const UType> JTable_4_5_4[]=
 {
  Range(JSum_4_5_4_1),
  Range(JSum_4_5_4_2),
  Range(JSum_4_5_4_3)
 };

static const UType JSum_4_5_5_1[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const UType JSum_4_5_5_2[]=
 {
  78u,
  57u,
  60u,
  68u,
  66u
 };

static const UType JSum_4_5_5_3[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const PtrLen<const UType> JTable_4_5_5[]=
 {
  Range(JSum_4_5_5_1),
  Range(JSum_4_5_5_2),
  Range(JSum_4_5_5_3)
 };

static const UType JSum_4_5_6_1[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const UType JSum_4_5_6_2[]=
 {
  432u,
  450u,
  477u,
  464u,
  486u
 };

static const UType JSum_4_5_6_3[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const PtrLen<const UType> JTable_4_5_6[]=
 {
  Range(JSum_4_5_6_1),
  Range(JSum_4_5_6_2),
  Range(JSum_4_5_6_3)
 };

static const TestSet::JTable JSet_4_5[]=
 {
  { 11u , Range(JTable_4_5_1) },
  { 31u , Range(JTable_4_5_2) },
  { 71u , Range(JTable_4_5_3) },
  { 211u , Range(JTable_4_5_4) },
  { 331u , Range(JTable_4_5_5) },
  { 2311u , Range(JTable_4_5_6) }
 };

static const UType JSum_4_7_1_1[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const UType JSum_4_7_1_2[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_4_7_1_3[]=
 {
  6u,
  4u,
  6u,
  4u,
  10u,
  8u,
  3u
 };

static const UType JSum_4_7_1_4[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_4_7_1_5[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const PtrLen<const UType> JTable_4_7_1[]=
 {
  Range(JSum_4_7_1_1),
  Range(JSum_4_7_1_2),
  Range(JSum_4_7_1_3),
  Range(JSum_4_7_1_4),
  Range(JSum_4_7_1_5)
 };

static const UType JSum_4_7_2_1[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const UType JSum_4_7_2_2[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_4_7_2_3[]=
 {
  12u,
  8u,
  12u,
  6u,
  6u,
  14u,
  11u
 };

static const UType JSum_4_7_2_4[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_4_7_2_5[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_4_7_2[]=
 {
  Range(JSum_4_7_2_1),
  Range(JSum_4_7_2_2),
  Range(JSum_4_7_2_3),
  Range(JSum_4_7_2_4),
  Range(JSum_4_7_2_5)
 };

static const UType JSum_4_7_3_1[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const UType JSum_4_7_3_2[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_4_7_3_3[]=
 {
  22u,
  27u,
  28u,
  30u,
  30u,
  32u,
  40u
 };

static const UType JSum_4_7_3_4[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_4_7_3_5[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_4_7_3[]=
 {
  Range(JSum_4_7_3_1),
  Range(JSum_4_7_3_2),
  Range(JSum_4_7_3_3),
  Range(JSum_4_7_3_4),
  Range(JSum_4_7_3_5)
 };

static const UType JSum_4_7_4_1[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const UType JSum_4_7_4_2[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_4_7_4_3[]=
 {
  66u,
  66u,
  78u,
  60u,
  60u,
  56u,
  75u
 };

static const UType JSum_4_7_4_4[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_4_7_4_5[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const PtrLen<const UType> JTable_4_7_4[]=
 {
  Range(JSum_4_7_4_1),
  Range(JSum_4_7_4_2),
  Range(JSum_4_7_4_3),
  Range(JSum_4_7_4_4),
  Range(JSum_4_7_4_5)
 };

static const UType JSum_4_7_5_1[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const UType JSum_4_7_5_2[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_4_7_5_3[]=
 {
  352u,
  348u,
  310u,
  318u,
  318u,
  347u,
  316u
 };

static const UType JSum_4_7_5_4[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_4_7_5_5[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const PtrLen<const UType> JTable_4_7_5[]=
 {
  Range(JSum_4_7_5_1),
  Range(JSum_4_7_5_2),
  Range(JSum_4_7_5_3),
  Range(JSum_4_7_5_4),
  Range(JSum_4_7_5_5)
 };

static const TestSet::JTable JSet_4_7[]=
 {
  { 43u , Range(JTable_4_7_1) },
  { 71u , Range(JTable_4_7_2) },
  { 211u , Range(JTable_4_7_3) },
  { 463u , Range(JTable_4_7_4) },
  { 2311u , Range(JTable_4_7_5) }
 };

static const UType JSum_4_11_1_1[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const UType JSum_4_11_1_2[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_4_11_1_3[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_4_11_1_4[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_4_11_1_5[]=
 {
  0u,
  2u,
  3u,
  4u,
  2u,
  2u,
  0u,
  2u,
  0u,
  2u,
  4u
 };

static const UType JSum_4_11_1_6[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_4_11_1_7[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_4_11_1_8[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_4_11_1_9[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const PtrLen<const UType> JTable_4_11_1[]=
 {
  Range(JSum_4_11_1_1),
  Range(JSum_4_11_1_2),
  Range(JSum_4_11_1_3),
  Range(JSum_4_11_1_4),
  Range(JSum_4_11_1_5),
  Range(JSum_4_11_1_6),
  Range(JSum_4_11_1_7),
  Range(JSum_4_11_1_8),
  Range(JSum_4_11_1_9)
 };

static const UType JSum_4_11_2_1[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const UType JSum_4_11_2_2[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_4_11_2_3[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_4_11_2_4[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_4_11_2_5[]=
 {
  8u,
  3u,
  2u,
  6u,
  6u,
  10u,
  4u,
  6u,
  8u,
  8u,
  4u
 };

static const UType JSum_4_11_2_6[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_4_11_2_7[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_4_11_2_8[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_4_11_2_9[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const PtrLen<const UType> JTable_4_11_2[]=
 {
  Range(JSum_4_11_2_1),
  Range(JSum_4_11_2_2),
  Range(JSum_4_11_2_3),
  Range(JSum_4_11_2_4),
  Range(JSum_4_11_2_5),
  Range(JSum_4_11_2_6),
  Range(JSum_4_11_2_7),
  Range(JSum_4_11_2_8),
  Range(JSum_4_11_2_9)
 };

static const UType JSum_4_11_3_1[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const UType JSum_4_11_3_2[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_4_11_3_3[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_4_11_3_4[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_4_11_3_5[]=
 {
  27u,
  24u,
  32u,
  30u,
  38u,
  34u,
  28u,
  24u,
  40u,
  26u,
  26u
 };

static const UType JSum_4_11_3_6[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_4_11_3_7[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_4_11_3_8[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_4_11_3_9[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const PtrLen<const UType> JTable_4_11_3[]=
 {
  Range(JSum_4_11_3_1),
  Range(JSum_4_11_3_2),
  Range(JSum_4_11_3_3),
  Range(JSum_4_11_3_4),
  Range(JSum_4_11_3_5),
  Range(JSum_4_11_3_6),
  Range(JSum_4_11_3_7),
  Range(JSum_4_11_3_8),
  Range(JSum_4_11_3_9)
 };

static const UType JSum_4_11_4_1[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const UType JSum_4_11_4_2[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_4_11_4_3[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_4_11_4_4[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_4_11_4_5[]=
 {
  44u,
  35u,
  42u,
  54u,
  50u,
  36u,
  44u,
  34u,
  46u,
  36u,
  40u
 };

static const UType JSum_4_11_4_6[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_4_11_4_7[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_4_11_4_8[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_4_11_4_9[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const PtrLen<const UType> JTable_4_11_4[]=
 {
  Range(JSum_4_11_4_1),
  Range(JSum_4_11_4_2),
  Range(JSum_4_11_4_3),
  Range(JSum_4_11_4_4),
  Range(JSum_4_11_4_5),
  Range(JSum_4_11_4_6),
  Range(JSum_4_11_4_7),
  Range(JSum_4_11_4_8),
  Range(JSum_4_11_4_9)
 };

static const UType JSum_4_11_5_1[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const UType JSum_4_11_5_2[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_4_11_5_3[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_4_11_5_4[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_4_11_5_5[]=
 {
  198u,
  208u,
  224u,
  206u,
  210u,
  204u,
  236u,
  222u,
  194u,
  220u,
  187u
 };

static const UType JSum_4_11_5_6[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_4_11_5_7[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_4_11_5_8[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_4_11_5_9[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const PtrLen<const UType> JTable_4_11_5[]=
 {
  Range(JSum_4_11_5_1),
  Range(JSum_4_11_5_2),
  Range(JSum_4_11_5_3),
  Range(JSum_4_11_5_4),
  Range(JSum_4_11_5_5),
  Range(JSum_4_11_5_6),
  Range(JSum_4_11_5_7),
  Range(JSum_4_11_5_8),
  Range(JSum_4_11_5_9)
 };

static const TestSet::JTable JSet_4_11[]=
 {
  { 23u , Range(JTable_4_11_1) },
  { 67u , Range(JTable_4_11_2) },
  { 331u , Range(JTable_4_11_3) },
  { 463u , Range(JTable_4_11_4) },
  { 2311u , Range(JTable_4_11_5) }
 };

static const TestSet PSet4[]=
 {
  { 2u , Range(JSet_4_2) },
  { 3u , Range(JSet_4_3) },
  { 5u , Range(JSet_4_5) },
  { 7u , Range(JSet_4_7) },
  { 11u , Range(JSet_4_11) }
 };

static const UType QSet4[]=
 {
  3u /* gen = 2 */,
  7u /* gen = 3 */,
  11u /* gen = 2 */,
  23u /* gen = 5 */,
  31u /* gen = 3 */,
  43u /* gen = 3 */,
  67u /* gen = 2 */,
  71u /* gen = 7 */,
  211u /* gen = 2 */,
  331u /* gen = 3 */,
  463u /* gen = 3 */,
  2311u /* gen = 3 */
 };

static const uint8 P4[]=
 {
  0x06, 0x09, 0x00, 0x00
 };

static const uint8 Q4[]=
 {
  0xA2, 0xD1, 0xF2, 0x8C,  0x82, 0x10, 0xB0, 0xF6,  0x10, 0x01, 0x00, 0x00
 };

/* Data 5 */

static const TestSet::JTable JSet_5_2[]=
 {
  { 3u , Empty },
  { 7u , Empty },
  { 11u , Empty },
  { 23u , Empty },
  { 31u , Empty },
  { 43u , Empty },
  { 67u , Empty },
  { 71u , Empty },
  { 79u , Empty },
  { 131u , Empty },
  { 211u , Empty },
  { 331u , Empty },
  { 463u , Empty },
  { 547u , Empty },
  { 859u , Empty },
  { 911u , Empty },
  { 2003u , Empty },
  { 2311u , Empty },
  { 2731u , Empty },
  { 6007u , Empty }
 };

static const UType JSum_5_3_1_1[]=
 {
  2u,
  0u,
  3u
 };

static const PtrLen<const UType> JTable_5_3_1[]=
 {
  Range(JSum_5_3_1_1)
 };

static const UType JSum_5_3_2_1[]=
 {
  11u,
  12u,
  6u
 };

static const PtrLen<const UType> JTable_5_3_2[]=
 {
  Range(JSum_5_3_2_1)
 };

static const UType JSum_5_3_3_1[]=
 {
  11u,
  18u,
  12u
 };

static const PtrLen<const UType> JTable_5_3_3[]=
 {
  Range(JSum_5_3_3_1)
 };

static const UType JSum_5_3_4_1[]=
 {
  20u,
  27u,
  18u
 };

static const PtrLen<const UType> JTable_5_3_4[]=
 {
  Range(JSum_5_3_4_1)
 };

static const UType JSum_5_3_5_1[]=
 {
  20u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_5_3_5[]=
 {
  Range(JSum_5_3_5_1)
 };

static const UType JSum_5_3_6_1[]=
 {
  74u,
  75u,
  60u
 };

static const PtrLen<const UType> JTable_5_3_6[]=
 {
  Range(JSum_5_3_6_1)
 };

static const UType JSum_5_3_7_1[]=
 {
  110u,
  99u,
  120u
 };

static const PtrLen<const UType> JTable_5_3_7[]=
 {
  Range(JSum_5_3_7_1)
 };

static const UType JSum_5_3_8_1[]=
 {
  146u,
  147u,
  168u
 };

static const PtrLen<const UType> JTable_5_3_8[]=
 {
  Range(JSum_5_3_8_1)
 };

static const UType JSum_5_3_9_1[]=
 {
  182u,
  195u,
  168u
 };

static const PtrLen<const UType> JTable_5_3_9[]=
 {
  Range(JSum_5_3_9_1)
 };

static const UType JSum_5_3_10_1[]=
 {
  290u,
  267u,
  300u
 };

static const PtrLen<const UType> JTable_5_3_10[]=
 {
  Range(JSum_5_3_10_1)
 };

static const UType JSum_5_3_11_1[]=
 {
  740u,
  774u,
  795u
 };

static const PtrLen<const UType> JTable_5_3_11[]=
 {
  Range(JSum_5_3_11_1)
 };

static const UType JSum_5_3_12_1[]=
 {
  875u,
  930u,
  924u
 };

static const PtrLen<const UType> JTable_5_3_12[]=
 {
  Range(JSum_5_3_12_1)
 };

static const UType JSum_5_3_13_1[]=
 {
  2027u,
  2028u,
  1950u
 };

static const PtrLen<const UType> JTable_5_3_13[]=
 {
  Range(JSum_5_3_13_1)
 };

static const TestSet::JTable JSet_5_3[]=
 {
  { 7u , Range(JTable_5_3_1) },
  { 31u , Range(JTable_5_3_2) },
  { 43u , Range(JTable_5_3_3) },
  { 67u , Range(JTable_5_3_4) },
  { 79u , Range(JTable_5_3_5) },
  { 211u , Range(JTable_5_3_6) },
  { 331u , Range(JTable_5_3_7) },
  { 463u , Range(JTable_5_3_8) },
  { 547u , Range(JTable_5_3_9) },
  { 859u , Range(JTable_5_3_10) },
  { 2311u , Range(JTable_5_3_11) },
  { 2731u , Range(JTable_5_3_12) },
  { 6007u , Range(JTable_5_3_13) }
 };

static const UType JSum_5_5_1_1[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const UType JSum_5_5_1_2[]=
 {
  2u,
  1u,
  4u,
  2u,
  0u
 };

static const UType JSum_5_5_1_3[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const PtrLen<const UType> JTable_5_5_1[]=
 {
  Range(JSum_5_5_1_1),
  Range(JSum_5_5_1_2),
  Range(JSum_5_5_1_3)
 };

static const UType JSum_5_5_2_1[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const UType JSum_5_5_2_2[]=
 {
  8u,
  8u,
  2u,
  6u,
  5u
 };

static const UType JSum_5_5_2_3[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_5_5_2[]=
 {
  Range(JSum_5_5_2_1),
  Range(JSum_5_5_2_2),
  Range(JSum_5_5_2_3)
 };

static const UType JSum_5_5_3_1[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const UType JSum_5_5_3_2[]=
 {
  10u,
  13u,
  20u,
  12u,
  14u
 };

static const UType JSum_5_5_3_3[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const PtrLen<const UType> JTable_5_5_3[]=
 {
  Range(JSum_5_5_3_1),
  Range(JSum_5_5_3_2),
  Range(JSum_5_5_3_3)
 };

static const UType JSum_5_5_4_1[]=
 {
  28u,
  22u,
  20u,
  33u,
  26u
 };

static const UType JSum_5_5_4_2[]=
 {
  28u,
  33u,
  22u,
  26u,
  20u
 };

static const UType JSum_5_5_4_3[]=
 {
  28u,
  22u,
  20u,
  33u,
  26u
 };

static const PtrLen<const UType> JTable_5_5_4[]=
 {
  Range(JSum_5_5_4_1),
  Range(JSum_5_5_4_2),
  Range(JSum_5_5_4_3)
 };

static const UType JSum_5_5_5_1[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const UType JSum_5_5_5_2[]=
 {
  42u,
  33u,
  48u,
  48u,
  38u
 };

static const UType JSum_5_5_5_3[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const PtrLen<const UType> JTable_5_5_5[]=
 {
  Range(JSum_5_5_5_1),
  Range(JSum_5_5_5_2),
  Range(JSum_5_5_5_3)
 };

static const UType JSum_5_5_6_1[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const UType JSum_5_5_6_2[]=
 {
  78u,
  57u,
  60u,
  68u,
  66u
 };

static const UType JSum_5_5_6_3[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const PtrLen<const UType> JTable_5_5_6[]=
 {
  Range(JSum_5_5_6_1),
  Range(JSum_5_5_6_2),
  Range(JSum_5_5_6_3)
 };

static const UType JSum_5_5_7_1[]=
 {
  197u,
  190u,
  162u,
  184u,
  176u
 };

static const UType JSum_5_5_7_2[]=
 {
  197u,
  184u,
  190u,
  176u,
  162u
 };

static const UType JSum_5_5_7_3[]=
 {
  197u,
  190u,
  162u,
  184u,
  176u
 };

static const PtrLen<const UType> JTable_5_5_7[]=
 {
  Range(JSum_5_5_7_1),
  Range(JSum_5_5_7_2),
  Range(JSum_5_5_7_3)
 };

static const UType JSum_5_5_8_1[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const UType JSum_5_5_8_2[]=
 {
  432u,
  450u,
  477u,
  464u,
  486u
 };

static const UType JSum_5_5_8_3[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const PtrLen<const UType> JTable_5_5_8[]=
 {
  Range(JSum_5_5_8_1),
  Range(JSum_5_5_8_2),
  Range(JSum_5_5_8_3)
 };

static const UType JSum_5_5_9_1[]=
 {
  513u,
  576u,
  558u,
  540u,
  542u
 };

static const UType JSum_5_5_9_2[]=
 {
  513u,
  540u,
  576u,
  542u,
  558u
 };

static const UType JSum_5_5_9_3[]=
 {
  513u,
  576u,
  558u,
  540u,
  542u
 };

static const PtrLen<const UType> JTable_5_5_9[]=
 {
  Range(JSum_5_5_9_1),
  Range(JSum_5_5_9_2),
  Range(JSum_5_5_9_3)
 };

static const TestSet::JTable JSet_5_5[]=
 {
  { 11u , Range(JTable_5_5_1) },
  { 31u , Range(JTable_5_5_2) },
  { 71u , Range(JTable_5_5_3) },
  { 131u , Range(JTable_5_5_4) },
  { 211u , Range(JTable_5_5_5) },
  { 331u , Range(JTable_5_5_6) },
  { 911u , Range(JTable_5_5_7) },
  { 2311u , Range(JTable_5_5_8) },
  { 2731u , Range(JTable_5_5_9) }
 };

static const UType JSum_5_7_1_1[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const UType JSum_5_7_1_2[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_5_7_1_3[]=
 {
  6u,
  4u,
  6u,
  4u,
  10u,
  8u,
  3u
 };

static const UType JSum_5_7_1_4[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_5_7_1_5[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const PtrLen<const UType> JTable_5_7_1[]=
 {
  Range(JSum_5_7_1_1),
  Range(JSum_5_7_1_2),
  Range(JSum_5_7_1_3),
  Range(JSum_5_7_1_4),
  Range(JSum_5_7_1_5)
 };

static const UType JSum_5_7_2_1[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const UType JSum_5_7_2_2[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_5_7_2_3[]=
 {
  12u,
  8u,
  12u,
  6u,
  6u,
  14u,
  11u
 };

static const UType JSum_5_7_2_4[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_5_7_2_5[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_5_7_2[]=
 {
  Range(JSum_5_7_2_1),
  Range(JSum_5_7_2_2),
  Range(JSum_5_7_2_3),
  Range(JSum_5_7_2_4),
  Range(JSum_5_7_2_5)
 };

static const UType JSum_5_7_3_1[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const UType JSum_5_7_3_2[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_5_7_3_3[]=
 {
  22u,
  27u,
  28u,
  30u,
  30u,
  32u,
  40u
 };

static const UType JSum_5_7_3_4[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_5_7_3_5[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_5_7_3[]=
 {
  Range(JSum_5_7_3_1),
  Range(JSum_5_7_3_2),
  Range(JSum_5_7_3_3),
  Range(JSum_5_7_3_4),
  Range(JSum_5_7_3_5)
 };

static const UType JSum_5_7_4_1[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const UType JSum_5_7_4_2[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_5_7_4_3[]=
 {
  66u,
  66u,
  78u,
  60u,
  60u,
  56u,
  75u
 };

static const UType JSum_5_7_4_4[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_5_7_4_5[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const PtrLen<const UType> JTable_5_7_4[]=
 {
  Range(JSum_5_7_4_1),
  Range(JSum_5_7_4_2),
  Range(JSum_5_7_4_3),
  Range(JSum_5_7_4_4),
  Range(JSum_5_7_4_5)
 };

static const UType JSum_5_7_5_1[]=
 {
  84u,
  86u,
  60u,
  78u,
  78u,
  75u,
  84u
 };

static const UType JSum_5_7_5_2[]=
 {
  59u,
  78u,
  78u,
  84u,
  78u,
  84u,
  84u
 };

static const UType JSum_5_7_5_3[]=
 {
  84u,
  75u,
  78u,
  86u,
  84u,
  78u,
  60u
 };

static const UType JSum_5_7_5_4[]=
 {
  59u,
  78u,
  78u,
  84u,
  78u,
  84u,
  84u
 };

static const UType JSum_5_7_5_5[]=
 {
  84u,
  86u,
  60u,
  78u,
  78u,
  75u,
  84u
 };

static const PtrLen<const UType> JTable_5_7_5[]=
 {
  Range(JSum_5_7_5_1),
  Range(JSum_5_7_5_2),
  Range(JSum_5_7_5_3),
  Range(JSum_5_7_5_4),
  Range(JSum_5_7_5_5)
 };

static const UType JSum_5_7_6_1[]=
 {
  134u,
  132u,
  116u,
  116u,
  147u,
  126u,
  138u
 };

static const UType JSum_5_7_6_2[]=
 {
  123u,
  142u,
  142u,
  120u,
  142u,
  120u,
  120u
 };

static const UType JSum_5_7_6_3[]=
 {
  134u,
  126u,
  116u,
  132u,
  138u,
  147u,
  116u
 };

static const UType JSum_5_7_6_4[]=
 {
  123u,
  142u,
  142u,
  120u,
  142u,
  120u,
  120u
 };

static const UType JSum_5_7_6_5[]=
 {
  134u,
  132u,
  116u,
  116u,
  147u,
  126u,
  138u
 };

static const PtrLen<const UType> JTable_5_7_6[]=
 {
  Range(JSum_5_7_6_1),
  Range(JSum_5_7_6_2),
  Range(JSum_5_7_6_3),
  Range(JSum_5_7_6_4),
  Range(JSum_5_7_6_5)
 };

static const UType JSum_5_7_7_1[]=
 {
  291u,
  272u,
  288u,
  320u,
  278u,
  282u,
  270u
 };

static const UType JSum_5_7_7_2[]=
 {
  315u,
  292u,
  292u,
  270u,
  292u,
  270u,
  270u
 };

static const UType JSum_5_7_7_3[]=
 {
  291u,
  282u,
  320u,
  272u,
  270u,
  278u,
  288u
 };

static const UType JSum_5_7_7_4[]=
 {
  315u,
  292u,
  292u,
  270u,
  292u,
  270u,
  270u
 };

static const UType JSum_5_7_7_5[]=
 {
  291u,
  272u,
  288u,
  320u,
  278u,
  282u,
  270u
 };

static const PtrLen<const UType> JTable_5_7_7[]=
 {
  Range(JSum_5_7_7_1),
  Range(JSum_5_7_7_2),
  Range(JSum_5_7_7_3),
  Range(JSum_5_7_7_4),
  Range(JSum_5_7_7_5)
 };

static const UType JSum_5_7_8_1[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const UType JSum_5_7_8_2[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_5_7_8_3[]=
 {
  352u,
  348u,
  310u,
  318u,
  318u,
  347u,
  316u
 };

static const UType JSum_5_7_8_4[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_5_7_8_5[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const PtrLen<const UType> JTable_5_7_8[]=
 {
  Range(JSum_5_7_8_1),
  Range(JSum_5_7_8_2),
  Range(JSum_5_7_8_3),
  Range(JSum_5_7_8_4),
  Range(JSum_5_7_8_5)
 };

static const UType JSum_5_7_9_1[]=
 {
  379u,
  364u,
  406u,
  382u,
  392u,
  424u,
  382u
 };

static const UType JSum_5_7_9_2[]=
 {
  419u,
  400u,
  400u,
  370u,
  400u,
  370u,
  370u
 };

static const UType JSum_5_7_9_3[]=
 {
  379u,
  424u,
  382u,
  364u,
  382u,
  392u,
  406u
 };

static const UType JSum_5_7_9_4[]=
 {
  419u,
  400u,
  400u,
  370u,
  400u,
  370u,
  370u
 };

static const UType JSum_5_7_9_5[]=
 {
  379u,
  364u,
  406u,
  382u,
  392u,
  424u,
  382u
 };

static const PtrLen<const UType> JTable_5_7_9[]=
 {
  Range(JSum_5_7_9_1),
  Range(JSum_5_7_9_2),
  Range(JSum_5_7_9_3),
  Range(JSum_5_7_9_4),
  Range(JSum_5_7_9_5)
 };

static const UType JSum_5_7_10_1[]=
 {
  844u,
  834u,
  820u,
  898u,
  848u,
  870u,
  891u
 };

static const UType JSum_5_7_10_2[]=
 {
  899u,
  874u,
  874u,
  828u,
  874u,
  828u,
  828u
 };

static const UType JSum_5_7_10_3[]=
 {
  844u,
  870u,
  898u,
  834u,
  891u,
  848u,
  820u
 };

static const UType JSum_5_7_10_4[]=
 {
  899u,
  874u,
  874u,
  828u,
  874u,
  828u,
  828u
 };

static const UType JSum_5_7_10_5[]=
 {
  844u,
  834u,
  820u,
  898u,
  848u,
  870u,
  891u
 };

static const PtrLen<const UType> JTable_5_7_10[]=
 {
  Range(JSum_5_7_10_1),
  Range(JSum_5_7_10_2),
  Range(JSum_5_7_10_3),
  Range(JSum_5_7_10_4),
  Range(JSum_5_7_10_5)
 };

static const TestSet::JTable JSet_5_7[]=
 {
  { 43u , Range(JTable_5_7_1) },
  { 71u , Range(JTable_5_7_2) },
  { 211u , Range(JTable_5_7_3) },
  { 463u , Range(JTable_5_7_4) },
  { 547u , Range(JTable_5_7_5) },
  { 911u , Range(JTable_5_7_6) },
  { 2003u , Range(JTable_5_7_7) },
  { 2311u , Range(JTable_5_7_8) },
  { 2731u , Range(JTable_5_7_9) },
  { 6007u , Range(JTable_5_7_10) }
 };

static const UType JSum_5_11_1_1[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const UType JSum_5_11_1_2[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_5_11_1_3[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_5_11_1_4[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_5_11_1_5[]=
 {
  0u,
  2u,
  3u,
  4u,
  2u,
  2u,
  0u,
  2u,
  0u,
  2u,
  4u
 };

static const UType JSum_5_11_1_6[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_5_11_1_7[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_5_11_1_8[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_5_11_1_9[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const PtrLen<const UType> JTable_5_11_1[]=
 {
  Range(JSum_5_11_1_1),
  Range(JSum_5_11_1_2),
  Range(JSum_5_11_1_3),
  Range(JSum_5_11_1_4),
  Range(JSum_5_11_1_5),
  Range(JSum_5_11_1_6),
  Range(JSum_5_11_1_7),
  Range(JSum_5_11_1_8),
  Range(JSum_5_11_1_9)
 };

static const UType JSum_5_11_2_1[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const UType JSum_5_11_2_2[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_5_11_2_3[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_5_11_2_4[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_5_11_2_5[]=
 {
  8u,
  3u,
  2u,
  6u,
  6u,
  10u,
  4u,
  6u,
  8u,
  8u,
  4u
 };

static const UType JSum_5_11_2_6[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_5_11_2_7[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_5_11_2_8[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_5_11_2_9[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const PtrLen<const UType> JTable_5_11_2[]=
 {
  Range(JSum_5_11_2_1),
  Range(JSum_5_11_2_2),
  Range(JSum_5_11_2_3),
  Range(JSum_5_11_2_4),
  Range(JSum_5_11_2_5),
  Range(JSum_5_11_2_6),
  Range(JSum_5_11_2_7),
  Range(JSum_5_11_2_8),
  Range(JSum_5_11_2_9)
 };

static const UType JSum_5_11_3_1[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const UType JSum_5_11_3_2[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_5_11_3_3[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_5_11_3_4[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_5_11_3_5[]=
 {
  27u,
  24u,
  32u,
  30u,
  38u,
  34u,
  28u,
  24u,
  40u,
  26u,
  26u
 };

static const UType JSum_5_11_3_6[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_5_11_3_7[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_5_11_3_8[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_5_11_3_9[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const PtrLen<const UType> JTable_5_11_3[]=
 {
  Range(JSum_5_11_3_1),
  Range(JSum_5_11_3_2),
  Range(JSum_5_11_3_3),
  Range(JSum_5_11_3_4),
  Range(JSum_5_11_3_5),
  Range(JSum_5_11_3_6),
  Range(JSum_5_11_3_7),
  Range(JSum_5_11_3_8),
  Range(JSum_5_11_3_9)
 };

static const UType JSum_5_11_4_1[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const UType JSum_5_11_4_2[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_5_11_4_3[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_5_11_4_4[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_5_11_4_5[]=
 {
  44u,
  35u,
  42u,
  54u,
  50u,
  36u,
  44u,
  34u,
  46u,
  36u,
  40u
 };

static const UType JSum_5_11_4_6[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_5_11_4_7[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_5_11_4_8[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_5_11_4_9[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const PtrLen<const UType> JTable_5_11_4[]=
 {
  Range(JSum_5_11_4_1),
  Range(JSum_5_11_4_2),
  Range(JSum_5_11_4_3),
  Range(JSum_5_11_4_4),
  Range(JSum_5_11_4_5),
  Range(JSum_5_11_4_6),
  Range(JSum_5_11_4_7),
  Range(JSum_5_11_4_8),
  Range(JSum_5_11_4_9)
 };

static const UType JSum_5_11_5_1[]=
 {
  84u,
  76u,
  74u,
  90u,
  80u,
  84u,
  62u,
  74u,
  76u,
  67u,
  90u
 };

static const UType JSum_5_11_5_2[]=
 {
  77u,
  72u,
  86u,
  63u,
  80u,
  79u,
  75u,
  87u,
  94u,
  76u,
  68u
 };

static const UType JSum_5_11_5_3[]=
 {
  77u,
  94u,
  79u,
  86u,
  68u,
  87u,
  80u,
  72u,
  76u,
  75u,
  63u
 };

static const UType JSum_5_11_5_4[]=
 {
  77u,
  86u,
  80u,
  75u,
  94u,
  68u,
  72u,
  63u,
  79u,
  87u,
  76u
 };

static const UType JSum_5_11_5_5[]=
 {
  84u,
  67u,
  74u,
  84u,
  90u,
  76u,
  90u,
  76u,
  62u,
  80u,
  74u
 };

static const UType JSum_5_11_5_6[]=
 {
  77u,
  86u,
  80u,
  75u,
  94u,
  68u,
  72u,
  63u,
  79u,
  87u,
  76u
 };

static const UType JSum_5_11_5_7[]=
 {
  77u,
  94u,
  79u,
  86u,
  68u,
  87u,
  80u,
  72u,
  76u,
  75u,
  63u
 };

static const UType JSum_5_11_5_8[]=
 {
  77u,
  72u,
  86u,
  63u,
  80u,
  79u,
  75u,
  87u,
  94u,
  76u,
  68u
 };

static const UType JSum_5_11_5_9[]=
 {
  84u,
  76u,
  74u,
  90u,
  80u,
  84u,
  62u,
  74u,
  76u,
  67u,
  90u
 };

static const PtrLen<const UType> JTable_5_11_5[]=
 {
  Range(JSum_5_11_5_1),
  Range(JSum_5_11_5_2),
  Range(JSum_5_11_5_3),
  Range(JSum_5_11_5_4),
  Range(JSum_5_11_5_5),
  Range(JSum_5_11_5_6),
  Range(JSum_5_11_5_7),
  Range(JSum_5_11_5_8),
  Range(JSum_5_11_5_9)
 };

static const UType JSum_5_11_6_1[]=
 {
  188u,
  192u,
  186u,
  170u,
  202u,
  188u,
  164u,
  172u,
  162u,
  198u,
  179u
 };

static const UType JSum_5_11_6_2[]=
 {
  182u,
  187u,
  184u,
  188u,
  190u,
  192u,
  180u,
  166u,
  154u,
  204u,
  174u
 };

static const UType JSum_5_11_6_3[]=
 {
  182u,
  154u,
  192u,
  184u,
  174u,
  166u,
  190u,
  187u,
  204u,
  180u,
  188u
 };

static const UType JSum_5_11_6_4[]=
 {
  182u,
  184u,
  190u,
  180u,
  154u,
  174u,
  187u,
  188u,
  192u,
  166u,
  204u
 };

static const UType JSum_5_11_6_5[]=
 {
  188u,
  198u,
  172u,
  188u,
  170u,
  192u,
  179u,
  162u,
  164u,
  202u,
  186u
 };

static const UType JSum_5_11_6_6[]=
 {
  182u,
  184u,
  190u,
  180u,
  154u,
  174u,
  187u,
  188u,
  192u,
  166u,
  204u
 };

static const UType JSum_5_11_6_7[]=
 {
  182u,
  154u,
  192u,
  184u,
  174u,
  166u,
  190u,
  187u,
  204u,
  180u,
  188u
 };

static const UType JSum_5_11_6_8[]=
 {
  182u,
  187u,
  184u,
  188u,
  190u,
  192u,
  180u,
  166u,
  154u,
  204u,
  174u
 };

static const UType JSum_5_11_6_9[]=
 {
  188u,
  192u,
  186u,
  170u,
  202u,
  188u,
  164u,
  172u,
  162u,
  198u,
  179u
 };

static const PtrLen<const UType> JTable_5_11_6[]=
 {
  Range(JSum_5_11_6_1),
  Range(JSum_5_11_6_2),
  Range(JSum_5_11_6_3),
  Range(JSum_5_11_6_4),
  Range(JSum_5_11_6_5),
  Range(JSum_5_11_6_6),
  Range(JSum_5_11_6_7),
  Range(JSum_5_11_6_8),
  Range(JSum_5_11_6_9)
 };

static const UType JSum_5_11_7_1[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const UType JSum_5_11_7_2[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_5_11_7_3[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_5_11_7_4[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_5_11_7_5[]=
 {
  198u,
  208u,
  224u,
  206u,
  210u,
  204u,
  236u,
  222u,
  194u,
  220u,
  187u
 };

static const UType JSum_5_11_7_6[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_5_11_7_7[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_5_11_7_8[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_5_11_7_9[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const PtrLen<const UType> JTable_5_11_7[]=
 {
  Range(JSum_5_11_7_1),
  Range(JSum_5_11_7_2),
  Range(JSum_5_11_7_3),
  Range(JSum_5_11_7_4),
  Range(JSum_5_11_7_5),
  Range(JSum_5_11_7_6),
  Range(JSum_5_11_7_7),
  Range(JSum_5_11_7_8),
  Range(JSum_5_11_7_9)
 };

static const UType JSum_5_11_8_1[]=
 {
  560u,
  530u,
  564u,
  574u,
  530u,
  498u,
  552u,
  523u,
  570u,
  544u,
  560u
 };

static const UType JSum_5_11_8_2[]=
 {
  540u,
  550u,
  564u,
  534u,
  539u,
  580u,
  582u,
  512u,
  554u,
  512u,
  538u
 };

static const UType JSum_5_11_8_3[]=
 {
  540u,
  554u,
  580u,
  564u,
  538u,
  512u,
  539u,
  550u,
  512u,
  582u,
  534u
 };

static const UType JSum_5_11_8_4[]=
 {
  540u,
  564u,
  539u,
  582u,
  554u,
  538u,
  550u,
  534u,
  580u,
  512u,
  512u
 };

static const UType JSum_5_11_8_5[]=
 {
  560u,
  544u,
  523u,
  498u,
  574u,
  530u,
  560u,
  570u,
  552u,
  530u,
  564u
 };

static const UType JSum_5_11_8_6[]=
 {
  540u,
  564u,
  539u,
  582u,
  554u,
  538u,
  550u,
  534u,
  580u,
  512u,
  512u
 };

static const UType JSum_5_11_8_7[]=
 {
  540u,
  554u,
  580u,
  564u,
  538u,
  512u,
  539u,
  550u,
  512u,
  582u,
  534u
 };

static const UType JSum_5_11_8_8[]=
 {
  540u,
  550u,
  564u,
  534u,
  539u,
  580u,
  582u,
  512u,
  554u,
  512u,
  538u
 };

static const UType JSum_5_11_8_9[]=
 {
  560u,
  530u,
  564u,
  574u,
  530u,
  498u,
  552u,
  523u,
  570u,
  544u,
  560u
 };

static const PtrLen<const UType> JTable_5_11_8[]=
 {
  Range(JSum_5_11_8_1),
  Range(JSum_5_11_8_2),
  Range(JSum_5_11_8_3),
  Range(JSum_5_11_8_4),
  Range(JSum_5_11_8_5),
  Range(JSum_5_11_8_6),
  Range(JSum_5_11_8_7),
  Range(JSum_5_11_8_8),
  Range(JSum_5_11_8_9)
 };

static const TestSet::JTable JSet_5_11[]=
 {
  { 23u , Range(JTable_5_11_1) },
  { 67u , Range(JTable_5_11_2) },
  { 331u , Range(JTable_5_11_3) },
  { 463u , Range(JTable_5_11_4) },
  { 859u , Range(JTable_5_11_5) },
  { 2003u , Range(JTable_5_11_6) },
  { 2311u , Range(JTable_5_11_7) },
  { 6007u , Range(JTable_5_11_8) }
 };

static const UType JSum_5_13_1_1[]=
 {
  8u,
  6u,
  4u,
  10u,
  6u,
  5u,
  8u,
  8u,
  2u,
  4u,
  2u,
  8u,
  6u
 };

static const UType JSum_5_13_1_2[]=
 {
  8u,
  7u,
  8u,
  5u,
  5u,
  11u,
  3u,
  7u,
  7u,
  6u,
  2u,
  3u,
  5u
 };

static const UType JSum_5_13_1_3[]=
 {
  8u,
  3u,
  4u,
  3u,
  9u,
  4u,
  4u,
  7u,
  7u,
  3u,
  9u,
  7u,
  9u
 };

static const UType JSum_5_13_1_4[]=
 {
  8u,
  2u,
  7u,
  5u,
  7u,
  3u,
  7u,
  11u,
  8u,
  5u,
  6u,
  3u,
  5u
 };

static const UType JSum_5_13_1_5[]=
 {
  8u,
  8u,
  5u,
  3u,
  7u,
  2u,
  5u,
  7u,
  5u,
  11u,
  7u,
  6u,
  3u
 };

static const UType JSum_5_13_1_6[]=
 {
  8u,
  8u,
  4u,
  8u,
  5u,
  10u,
  6u,
  6u,
  2u,
  2u,
  8u,
  6u,
  4u
 };

static const UType JSum_5_13_1_7[]=
 {
  8u,
  8u,
  5u,
  3u,
  7u,
  2u,
  5u,
  7u,
  5u,
  11u,
  7u,
  6u,
  3u
 };

static const UType JSum_5_13_1_8[]=
 {
  8u,
  2u,
  7u,
  5u,
  7u,
  3u,
  7u,
  11u,
  8u,
  5u,
  6u,
  3u,
  5u
 };

static const UType JSum_5_13_1_9[]=
 {
  8u,
  3u,
  4u,
  3u,
  9u,
  4u,
  4u,
  7u,
  7u,
  3u,
  9u,
  7u,
  9u
 };

static const UType JSum_5_13_1_10[]=
 {
  8u,
  7u,
  8u,
  5u,
  5u,
  11u,
  3u,
  7u,
  7u,
  6u,
  2u,
  3u,
  5u
 };

static const UType JSum_5_13_1_11[]=
 {
  8u,
  6u,
  4u,
  10u,
  6u,
  5u,
  8u,
  8u,
  2u,
  4u,
  2u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_5_13_1[]=
 {
  Range(JSum_5_13_1_1),
  Range(JSum_5_13_1_2),
  Range(JSum_5_13_1_3),
  Range(JSum_5_13_1_4),
  Range(JSum_5_13_1_5),
  Range(JSum_5_13_1_6),
  Range(JSum_5_13_1_7),
  Range(JSum_5_13_1_8),
  Range(JSum_5_13_1_9),
  Range(JSum_5_13_1_10),
  Range(JSum_5_13_1_11)
 };

static const UType JSum_5_13_2_1[]=
 {
  8u,
  10u,
  8u,
  8u,
  10u,
  12u,
  10u,
  14u,
  12u,
  14u,
  2u,
  9u,
  12u
 };

static const UType JSum_5_13_2_2[]=
 {
  9u,
  14u,
  4u,
  13u,
  11u,
  10u,
  9u,
  12u,
  13u,
  13u,
  9u,
  7u,
  5u
 };

static const UType JSum_5_13_2_3[]=
 {
  12u,
  15u,
  8u,
  15u,
  9u,
  8u,
  8u,
  7u,
  7u,
  15u,
  9u,
  7u,
  9u
 };

static const UType JSum_5_13_2_4[]=
 {
  9u,
  9u,
  12u,
  11u,
  14u,
  7u,
  13u,
  10u,
  4u,
  5u,
  13u,
  9u,
  13u
 };

static const UType JSum_5_13_2_5[]=
 {
  9u,
  4u,
  11u,
  9u,
  13u,
  9u,
  5u,
  14u,
  13u,
  10u,
  12u,
  13u,
  7u
 };

static const UType JSum_5_13_2_6[]=
 {
  8u,
  9u,
  14u,
  14u,
  12u,
  8u,
  10u,
  12u,
  2u,
  12u,
  10u,
  10u,
  8u
 };

static const UType JSum_5_13_2_7[]=
 {
  9u,
  4u,
  11u,
  9u,
  13u,
  9u,
  5u,
  14u,
  13u,
  10u,
  12u,
  13u,
  7u
 };

static const UType JSum_5_13_2_8[]=
 {
  9u,
  9u,
  12u,
  11u,
  14u,
  7u,
  13u,
  10u,
  4u,
  5u,
  13u,
  9u,
  13u
 };

static const UType JSum_5_13_2_9[]=
 {
  12u,
  15u,
  8u,
  15u,
  9u,
  8u,
  8u,
  7u,
  7u,
  15u,
  9u,
  7u,
  9u
 };

static const UType JSum_5_13_2_10[]=
 {
  9u,
  14u,
  4u,
  13u,
  11u,
  10u,
  9u,
  12u,
  13u,
  13u,
  9u,
  7u,
  5u
 };

static const UType JSum_5_13_2_11[]=
 {
  8u,
  10u,
  8u,
  8u,
  10u,
  12u,
  10u,
  14u,
  12u,
  14u,
  2u,
  9u,
  12u
 };

static const PtrLen<const UType> JTable_5_13_2[]=
 {
  Range(JSum_5_13_2_1),
  Range(JSum_5_13_2_2),
  Range(JSum_5_13_2_3),
  Range(JSum_5_13_2_4),
  Range(JSum_5_13_2_5),
  Range(JSum_5_13_2_6),
  Range(JSum_5_13_2_7),
  Range(JSum_5_13_2_8),
  Range(JSum_5_13_2_9),
  Range(JSum_5_13_2_10),
  Range(JSum_5_13_2_11)
 };

static const UType JSum_5_13_3_1[]=
 {
  52u,
  44u,
  46u,
  44u,
  38u,
  28u,
  42u,
  44u,
  46u,
  34u,
  42u,
  49u,
  36u
 };

static const UType JSum_5_13_3_2[]=
 {
  43u,
  51u,
  49u,
  33u,
  46u,
  31u,
  38u,
  42u,
  37u,
  47u,
  47u,
  46u,
  35u
 };

static const UType JSum_5_13_3_3[]=
 {
  56u,
  40u,
  49u,
  40u,
  37u,
  49u,
  49u,
  37u,
  37u,
  40u,
  37u,
  37u,
  37u
 };

static const UType JSum_5_13_3_4[]=
 {
  43u,
  47u,
  42u,
  46u,
  51u,
  46u,
  37u,
  31u,
  49u,
  35u,
  47u,
  38u,
  33u
 };

static const UType JSum_5_13_3_5[]=
 {
  43u,
  49u,
  46u,
  38u,
  37u,
  47u,
  35u,
  51u,
  33u,
  31u,
  42u,
  47u,
  46u
 };

static const UType JSum_5_13_3_6[]=
 {
  52u,
  49u,
  34u,
  44u,
  28u,
  44u,
  44u,
  36u,
  42u,
  46u,
  42u,
  38u,
  46u
 };

static const UType JSum_5_13_3_7[]=
 {
  43u,
  49u,
  46u,
  38u,
  37u,
  47u,
  35u,
  51u,
  33u,
  31u,
  42u,
  47u,
  46u
 };

static const UType JSum_5_13_3_8[]=
 {
  43u,
  47u,
  42u,
  46u,
  51u,
  46u,
  37u,
  31u,
  49u,
  35u,
  47u,
  38u,
  33u
 };

static const UType JSum_5_13_3_9[]=
 {
  56u,
  40u,
  49u,
  40u,
  37u,
  49u,
  49u,
  37u,
  37u,
  40u,
  37u,
  37u,
  37u
 };

static const UType JSum_5_13_3_10[]=
 {
  43u,
  51u,
  49u,
  33u,
  46u,
  31u,
  38u,
  42u,
  37u,
  47u,
  47u,
  46u,
  35u
 };

static const UType JSum_5_13_3_11[]=
 {
  52u,
  44u,
  46u,
  44u,
  38u,
  28u,
  42u,
  44u,
  46u,
  34u,
  42u,
  49u,
  36u
 };

static const PtrLen<const UType> JTable_5_13_3[]=
 {
  Range(JSum_5_13_3_1),
  Range(JSum_5_13_3_2),
  Range(JSum_5_13_3_3),
  Range(JSum_5_13_3_4),
  Range(JSum_5_13_3_5),
  Range(JSum_5_13_3_6),
  Range(JSum_5_13_3_7),
  Range(JSum_5_13_3_8),
  Range(JSum_5_13_3_9),
  Range(JSum_5_13_3_10),
  Range(JSum_5_13_3_11)
 };

static const UType JSum_5_13_4_1[]=
 {
  86u,
  72u,
  68u,
  64u,
  70u,
  60u,
  58u,
  62u,
  74u,
  60u,
  62u,
  65u,
  56u
 };

static const UType JSum_5_13_4_2[]=
 {
  62u,
  61u,
  75u,
  67u,
  61u,
  59u,
  63u,
  56u,
  71u,
  68u,
  65u,
  87u,
  62u
 };

static const UType JSum_5_13_4_3[]=
 {
  68u,
  57u,
  79u,
  57u,
  63u,
  79u,
  79u,
  64u,
  64u,
  57u,
  63u,
  64u,
  63u
 };

static const UType JSum_5_13_4_4[]=
 {
  62u,
  65u,
  56u,
  61u,
  61u,
  87u,
  71u,
  59u,
  75u,
  62u,
  68u,
  63u,
  67u
 };

static const UType JSum_5_13_4_5[]=
 {
  62u,
  75u,
  61u,
  63u,
  71u,
  65u,
  62u,
  61u,
  67u,
  59u,
  56u,
  68u,
  87u
 };

static const UType JSum_5_13_4_6[]=
 {
  86u,
  65u,
  60u,
  62u,
  60u,
  64u,
  72u,
  56u,
  62u,
  74u,
  58u,
  70u,
  68u
 };

static const UType JSum_5_13_4_7[]=
 {
  62u,
  75u,
  61u,
  63u,
  71u,
  65u,
  62u,
  61u,
  67u,
  59u,
  56u,
  68u,
  87u
 };

static const UType JSum_5_13_4_8[]=
 {
  62u,
  65u,
  56u,
  61u,
  61u,
  87u,
  71u,
  59u,
  75u,
  62u,
  68u,
  63u,
  67u
 };

static const UType JSum_5_13_4_9[]=
 {
  68u,
  57u,
  79u,
  57u,
  63u,
  79u,
  79u,
  64u,
  64u,
  57u,
  63u,
  64u,
  63u
 };

static const UType JSum_5_13_4_10[]=
 {
  62u,
  61u,
  75u,
  67u,
  61u,
  59u,
  63u,
  56u,
  71u,
  68u,
  65u,
  87u,
  62u
 };

static const UType JSum_5_13_4_11[]=
 {
  86u,
  72u,
  68u,
  64u,
  70u,
  60u,
  58u,
  62u,
  74u,
  60u,
  62u,
  65u,
  56u
 };

static const PtrLen<const UType> JTable_5_13_4[]=
 {
  Range(JSum_5_13_4_1),
  Range(JSum_5_13_4_2),
  Range(JSum_5_13_4_3),
  Range(JSum_5_13_4_4),
  Range(JSum_5_13_4_5),
  Range(JSum_5_13_4_6),
  Range(JSum_5_13_4_7),
  Range(JSum_5_13_4_8),
  Range(JSum_5_13_4_9),
  Range(JSum_5_13_4_10),
  Range(JSum_5_13_4_11)
 };

static const UType JSum_5_13_5_1[]=
 {
  74u,
  69u,
  72u,
  62u,
  54u,
  70u,
  78u,
  70u,
  76u,
  72u,
  84u,
  56u,
  72u
 };

static const UType JSum_5_13_5_2[]=
 {
  89u,
  63u,
  71u,
  66u,
  64u,
  63u,
  60u,
  79u,
  69u,
  79u,
  69u,
  63u,
  74u
 };

static const UType JSum_5_13_5_3[]=
 {
  90u,
  63u,
  67u,
  63u,
  78u,
  67u,
  67u,
  65u,
  65u,
  63u,
  78u,
  65u,
  78u
 };

static const UType JSum_5_13_5_4[]=
 {
  89u,
  69u,
  79u,
  64u,
  63u,
  63u,
  69u,
  63u,
  71u,
  74u,
  79u,
  60u,
  66u
 };

static const UType JSum_5_13_5_5[]=
 {
  89u,
  71u,
  64u,
  60u,
  69u,
  69u,
  74u,
  63u,
  66u,
  63u,
  79u,
  79u,
  63u
 };

static const UType JSum_5_13_5_6[]=
 {
  74u,
  56u,
  72u,
  70u,
  70u,
  62u,
  69u,
  72u,
  84u,
  76u,
  78u,
  54u,
  72u
 };

static const UType JSum_5_13_5_7[]=
 {
  89u,
  71u,
  64u,
  60u,
  69u,
  69u,
  74u,
  63u,
  66u,
  63u,
  79u,
  79u,
  63u
 };

static const UType JSum_5_13_5_8[]=
 {
  89u,
  69u,
  79u,
  64u,
  63u,
  63u,
  69u,
  63u,
  71u,
  74u,
  79u,
  60u,
  66u
 };

static const UType JSum_5_13_5_9[]=
 {
  90u,
  63u,
  67u,
  63u,
  78u,
  67u,
  67u,
  65u,
  65u,
  63u,
  78u,
  65u,
  78u
 };

static const UType JSum_5_13_5_10[]=
 {
  89u,
  63u,
  71u,
  66u,
  64u,
  63u,
  60u,
  79u,
  69u,
  79u,
  69u,
  63u,
  74u
 };

static const UType JSum_5_13_5_11[]=
 {
  74u,
  69u,
  72u,
  62u,
  54u,
  70u,
  78u,
  70u,
  76u,
  72u,
  84u,
  56u,
  72u
 };

static const PtrLen<const UType> JTable_5_13_5[]=
 {
  Range(JSum_5_13_5_1),
  Range(JSum_5_13_5_2),
  Range(JSum_5_13_5_3),
  Range(JSum_5_13_5_4),
  Range(JSum_5_13_5_5),
  Range(JSum_5_13_5_6),
  Range(JSum_5_13_5_7),
  Range(JSum_5_13_5_8),
  Range(JSum_5_13_5_9),
  Range(JSum_5_13_5_10),
  Range(JSum_5_13_5_11)
 };

static const UType JSum_5_13_6_1[]=
 {
  160u,
  142u,
  152u,
  138u,
  177u,
  160u,
  154u,
  168u,
  166u,
  134u,
  148u,
  146u,
  156u
 };

static const UType JSum_5_13_6_2[]=
 {
  160u,
  146u,
  134u,
  132u,
  178u,
  152u,
  154u,
  164u,
  150u,
  164u,
  152u,
  162u,
  153u
 };

static const UType JSum_5_13_6_3[]=
 {
  129u,
  162u,
  140u,
  162u,
  156u,
  140u,
  140u,
  166u,
  166u,
  162u,
  156u,
  166u,
  156u
 };

static const UType JSum_5_13_6_4[]=
 {
  160u,
  152u,
  164u,
  178u,
  146u,
  162u,
  150u,
  152u,
  134u,
  153u,
  164u,
  154u,
  132u
 };

static const UType JSum_5_13_6_5[]=
 {
  160u,
  134u,
  178u,
  154u,
  150u,
  152u,
  153u,
  146u,
  132u,
  152u,
  164u,
  164u,
  162u
 };

static const UType JSum_5_13_6_6[]=
 {
  160u,
  146u,
  134u,
  168u,
  160u,
  138u,
  142u,
  156u,
  148u,
  166u,
  154u,
  177u,
  152u
 };

static const UType JSum_5_13_6_7[]=
 {
  160u,
  134u,
  178u,
  154u,
  150u,
  152u,
  153u,
  146u,
  132u,
  152u,
  164u,
  164u,
  162u
 };

static const UType JSum_5_13_6_8[]=
 {
  160u,
  152u,
  164u,
  178u,
  146u,
  162u,
  150u,
  152u,
  134u,
  153u,
  164u,
  154u,
  132u
 };

static const UType JSum_5_13_6_9[]=
 {
  129u,
  162u,
  140u,
  162u,
  156u,
  140u,
  140u,
  166u,
  166u,
  162u,
  156u,
  166u,
  156u
 };

static const UType JSum_5_13_6_10[]=
 {
  160u,
  146u,
  134u,
  132u,
  178u,
  152u,
  154u,
  164u,
  150u,
  164u,
  152u,
  162u,
  153u
 };

static const UType JSum_5_13_6_11[]=
 {
  160u,
  142u,
  152u,
  138u,
  177u,
  160u,
  154u,
  168u,
  166u,
  134u,
  148u,
  146u,
  156u
 };

static const PtrLen<const UType> JTable_5_13_6[]=
 {
  Range(JSum_5_13_6_1),
  Range(JSum_5_13_6_2),
  Range(JSum_5_13_6_3),
  Range(JSum_5_13_6_4),
  Range(JSum_5_13_6_5),
  Range(JSum_5_13_6_6),
  Range(JSum_5_13_6_7),
  Range(JSum_5_13_6_8),
  Range(JSum_5_13_6_9),
  Range(JSum_5_13_6_10),
  Range(JSum_5_13_6_11)
 };

static const UType JSum_5_13_7_1[]=
 {
  204u,
  190u,
  214u,
  226u,
  232u,
  204u,
  216u,
  226u,
  180u,
  212u,
  201u,
  214u,
  210u
 };

static const UType JSum_5_13_7_2[]=
 {
  204u,
  230u,
  204u,
  220u,
  225u,
  210u,
  202u,
  220u,
  202u,
  220u,
  216u,
  174u,
  202u
 };

static const UType JSum_5_13_7_3[]=
 {
  185u,
  220u,
  198u,
  220u,
  202u,
  198u,
  198u,
  228u,
  228u,
  220u,
  202u,
  228u,
  202u
 };

static const UType JSum_5_13_7_4[]=
 {
  204u,
  216u,
  220u,
  225u,
  230u,
  174u,
  202u,
  210u,
  204u,
  202u,
  220u,
  202u,
  220u
 };

static const UType JSum_5_13_7_5[]=
 {
  204u,
  204u,
  225u,
  202u,
  202u,
  216u,
  202u,
  230u,
  220u,
  210u,
  220u,
  220u,
  174u
 };

static const UType JSum_5_13_7_6[]=
 {
  204u,
  214u,
  212u,
  226u,
  204u,
  226u,
  190u,
  210u,
  201u,
  180u,
  216u,
  232u,
  214u
 };

static const UType JSum_5_13_7_7[]=
 {
  204u,
  204u,
  225u,
  202u,
  202u,
  216u,
  202u,
  230u,
  220u,
  210u,
  220u,
  220u,
  174u
 };

static const UType JSum_5_13_7_8[]=
 {
  204u,
  216u,
  220u,
  225u,
  230u,
  174u,
  202u,
  210u,
  204u,
  202u,
  220u,
  202u,
  220u
 };

static const UType JSum_5_13_7_9[]=
 {
  185u,
  220u,
  198u,
  220u,
  202u,
  198u,
  198u,
  228u,
  228u,
  220u,
  202u,
  228u,
  202u
 };

static const UType JSum_5_13_7_10[]=
 {
  204u,
  230u,
  204u,
  220u,
  225u,
  210u,
  202u,
  220u,
  202u,
  220u,
  216u,
  174u,
  202u
 };

static const UType JSum_5_13_7_11[]=
 {
  204u,
  190u,
  214u,
  226u,
  232u,
  204u,
  216u,
  226u,
  180u,
  212u,
  201u,
  214u,
  210u
 };

static const PtrLen<const UType> JTable_5_13_7[]=
 {
  Range(JSum_5_13_7_1),
  Range(JSum_5_13_7_2),
  Range(JSum_5_13_7_3),
  Range(JSum_5_13_7_4),
  Range(JSum_5_13_7_5),
  Range(JSum_5_13_7_6),
  Range(JSum_5_13_7_7),
  Range(JSum_5_13_7_8),
  Range(JSum_5_13_7_9),
  Range(JSum_5_13_7_10),
  Range(JSum_5_13_7_11)
 };

static const UType JSum_5_13_8_1[]=
 {
  478u,
  456u,
  474u,
  446u,
  500u,
  448u,
  458u,
  496u,
  478u,
  436u,
  445u,
  434u,
  456u
 };

static const UType JSum_5_13_8_2[]=
 {
  487u,
  487u,
  460u,
  463u,
  434u,
  457u,
  437u,
  467u,
  453u,
  471u,
  499u,
  426u,
  464u
 };

static const UType JSum_5_13_8_3[]=
 {
  458u,
  451u,
  478u,
  451u,
  433u,
  478u,
  478u,
  487u,
  487u,
  451u,
  433u,
  487u,
  433u
 };

static const UType JSum_5_13_8_4[]=
 {
  487u,
  499u,
  467u,
  434u,
  487u,
  426u,
  453u,
  457u,
  460u,
  464u,
  471u,
  437u,
  463u
 };

static const UType JSum_5_13_8_5[]=
 {
  487u,
  460u,
  434u,
  437u,
  453u,
  499u,
  464u,
  487u,
  463u,
  457u,
  467u,
  471u,
  426u
 };

static const UType JSum_5_13_8_6[]=
 {
  478u,
  434u,
  436u,
  496u,
  448u,
  446u,
  456u,
  456u,
  445u,
  478u,
  458u,
  500u,
  474u
 };

static const UType JSum_5_13_8_7[]=
 {
  487u,
  460u,
  434u,
  437u,
  453u,
  499u,
  464u,
  487u,
  463u,
  457u,
  467u,
  471u,
  426u
 };

static const UType JSum_5_13_8_8[]=
 {
  487u,
  499u,
  467u,
  434u,
  487u,
  426u,
  453u,
  457u,
  460u,
  464u,
  471u,
  437u,
  463u
 };

static const UType JSum_5_13_8_9[]=
 {
  458u,
  451u,
  478u,
  451u,
  433u,
  478u,
  478u,
  487u,
  487u,
  451u,
  433u,
  487u,
  433u
 };

static const UType JSum_5_13_8_10[]=
 {
  487u,
  487u,
  460u,
  463u,
  434u,
  457u,
  437u,
  467u,
  453u,
  471u,
  499u,
  426u,
  464u
 };

static const UType JSum_5_13_8_11[]=
 {
  478u,
  456u,
  474u,
  446u,
  500u,
  448u,
  458u,
  496u,
  478u,
  436u,
  445u,
  434u,
  456u
 };

static const PtrLen<const UType> JTable_5_13_8[]=
 {
  Range(JSum_5_13_8_1),
  Range(JSum_5_13_8_2),
  Range(JSum_5_13_8_3),
  Range(JSum_5_13_8_4),
  Range(JSum_5_13_8_5),
  Range(JSum_5_13_8_6),
  Range(JSum_5_13_8_7),
  Range(JSum_5_13_8_8),
  Range(JSum_5_13_8_9),
  Range(JSum_5_13_8_10),
  Range(JSum_5_13_8_11)
 };

static const TestSet::JTable JSet_5_13[]=
 {
  { 79u , Range(JTable_5_13_1) },
  { 131u , Range(JTable_5_13_2) },
  { 547u , Range(JTable_5_13_3) },
  { 859u , Range(JTable_5_13_4) },
  { 911u , Range(JTable_5_13_5) },
  { 2003u , Range(JTable_5_13_6) },
  { 2731u , Range(JTable_5_13_7) },
  { 6007u , Range(JTable_5_13_8) }
 };

static const TestSet PSet5[]=
 {
  { 2u , Range(JSet_5_2) },
  { 3u , Range(JSet_5_3) },
  { 5u , Range(JSet_5_5) },
  { 7u , Range(JSet_5_7) },
  { 11u , Range(JSet_5_11) },
  { 13u , Range(JSet_5_13) }
 };

static const UType QSet5[]=
 {
  3u /* gen = 2 */,
  7u /* gen = 3 */,
  11u /* gen = 2 */,
  23u /* gen = 5 */,
  31u /* gen = 3 */,
  43u /* gen = 3 */,
  67u /* gen = 2 */,
  71u /* gen = 7 */,
  79u /* gen = 3 */,
  131u /* gen = 2 */,
  211u /* gen = 2 */,
  331u /* gen = 3 */,
  463u /* gen = 3 */,
  547u /* gen = 2 */,
  859u /* gen = 2 */,
  911u /* gen = 17 */,
  2003u /* gen = 5 */,
  2311u /* gen = 3 */,
  2731u /* gen = 3 */,
  6007u /* gen = 3 */
 };

static const uint8 P5[]=
 {
  0x4E, 0x75, 0x00, 0x00
 };

static const uint8 Q5[]=
 {
  0xEA, 0x66, 0xC1, 0x5F,  0x6D, 0xD7, 0xB2, 0x38,  0x9E, 0x2E, 0xEE, 0x43,  0x33, 0x42, 0x99, 0x92,
  0x00, 0xDE, 0x20, 0x00
 };

/* Data 6 */

static const TestSet::JTable JSet_6_2[]=
 {
  { 3u , Empty },
  { 7u , Empty },
  { 11u , Empty },
  { 23u , Empty },
  { 31u , Empty },
  { 43u , Empty },
  { 67u , Empty },
  { 71u , Empty },
  { 79u , Empty },
  { 103u , Empty },
  { 131u , Empty },
  { 211u , Empty },
  { 239u , Empty },
  { 331u , Empty },
  { 443u , Empty },
  { 463u , Empty },
  { 547u , Empty },
  { 859u , Empty },
  { 911u , Empty },
  { 1123u , Empty },
  { 1327u , Empty },
  { 1871u , Empty },
  { 2003u , Empty },
  { 2311u , Empty },
  { 2731u , Empty },
  { 3571u , Empty },
  { 6007u , Empty },
  { 9283u , Empty },
  { 46411u , Empty },
  { 72931u , Empty },
  { 102103u , Empty }
 };

static const UType JSum_6_3_1_1[]=
 {
  2u,
  0u,
  3u
 };

static const PtrLen<const UType> JTable_6_3_1[]=
 {
  Range(JSum_6_3_1_1)
 };

static const UType JSum_6_3_2_1[]=
 {
  11u,
  12u,
  6u
 };

static const PtrLen<const UType> JTable_6_3_2[]=
 {
  Range(JSum_6_3_2_1)
 };

static const UType JSum_6_3_3_1[]=
 {
  11u,
  18u,
  12u
 };

static const PtrLen<const UType> JTable_6_3_3[]=
 {
  Range(JSum_6_3_3_1)
 };

static const UType JSum_6_3_4_1[]=
 {
  20u,
  27u,
  18u
 };

static const PtrLen<const UType> JTable_6_3_4[]=
 {
  Range(JSum_6_3_4_1)
 };

static const UType JSum_6_3_5_1[]=
 {
  20u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_6_3_5[]=
 {
  Range(JSum_6_3_5_1)
 };

static const UType JSum_6_3_6_1[]=
 {
  38u,
  36u,
  27u
 };

static const PtrLen<const UType> JTable_6_3_6[]=
 {
  Range(JSum_6_3_6_1)
 };

static const UType JSum_6_3_7_1[]=
 {
  74u,
  75u,
  60u
 };

static const PtrLen<const UType> JTable_6_3_7[]=
 {
  Range(JSum_6_3_7_1)
 };

static const UType JSum_6_3_8_1[]=
 {
  110u,
  99u,
  120u
 };

static const PtrLen<const UType> JTable_6_3_8[]=
 {
  Range(JSum_6_3_8_1)
 };

static const UType JSum_6_3_9_1[]=
 {
  146u,
  147u,
  168u
 };

static const PtrLen<const UType> JTable_6_3_9[]=
 {
  Range(JSum_6_3_9_1)
 };

static const UType JSum_6_3_10_1[]=
 {
  182u,
  195u,
  168u
 };

static const PtrLen<const UType> JTable_6_3_10[]=
 {
  Range(JSum_6_3_10_1)
 };

static const UType JSum_6_3_11_1[]=
 {
  290u,
  267u,
  300u
 };

static const PtrLen<const UType> JTable_6_3_11[]=
 {
  Range(JSum_6_3_11_1)
 };

static const UType JSum_6_3_12_1[]=
 {
  362u,
  363u,
  396u
 };

static const PtrLen<const UType> JTable_6_3_12[]=
 {
  Range(JSum_6_3_12_1)
 };

static const UType JSum_6_3_13_1[]=
 {
  443u,
  462u,
  420u
 };

static const PtrLen<const UType> JTable_6_3_13[]=
 {
  Range(JSum_6_3_13_1)
 };

static const UType JSum_6_3_14_1[]=
 {
  740u,
  774u,
  795u
 };

static const PtrLen<const UType> JTable_6_3_14[]=
 {
  Range(JSum_6_3_14_1)
 };

static const UType JSum_6_3_15_1[]=
 {
  875u,
  930u,
  924u
 };

static const PtrLen<const UType> JTable_6_3_15[]=
 {
  Range(JSum_6_3_15_1)
 };

static const UType JSum_6_3_16_1[]=
 {
  1190u,
  1155u,
  1224u
 };

static const PtrLen<const UType> JTable_6_3_16[]=
 {
  Range(JSum_6_3_16_1)
 };

static const UType JSum_6_3_17_1[]=
 {
  2027u,
  2028u,
  1950u
 };

static const PtrLen<const UType> JTable_6_3_17[]=
 {
  Range(JSum_6_3_17_1)
 };

static const UType JSum_6_3_18_1[]=
 {
  3098u,
  3147u,
  3036u
 };

static const PtrLen<const UType> JTable_6_3_18[]=
 {
  Range(JSum_6_3_18_1)
 };

static const UType JSum_6_3_19_1[]=
 {
  15491u,
  15336u,
  15582u
 };

static const PtrLen<const UType> JTable_6_3_19[]=
 {
  Range(JSum_6_3_19_1)
 };

static const UType JSum_6_3_20_1[]=
 {
  24275u,
  24480u,
  24174u
 };

static const PtrLen<const UType> JTable_6_3_20[]=
 {
  Range(JSum_6_3_20_1)
 };

static const UType JSum_6_3_21_1[]=
 {
  33968u,
  33891u,
  34242u
 };

static const PtrLen<const UType> JTable_6_3_21[]=
 {
  Range(JSum_6_3_21_1)
 };

static const TestSet::JTable JSet_6_3[]=
 {
  { 7u , Range(JTable_6_3_1) },
  { 31u , Range(JTable_6_3_2) },
  { 43u , Range(JTable_6_3_3) },
  { 67u , Range(JTable_6_3_4) },
  { 79u , Range(JTable_6_3_5) },
  { 103u , Range(JTable_6_3_6) },
  { 211u , Range(JTable_6_3_7) },
  { 331u , Range(JTable_6_3_8) },
  { 463u , Range(JTable_6_3_9) },
  { 547u , Range(JTable_6_3_10) },
  { 859u , Range(JTable_6_3_11) },
  { 1123u , Range(JTable_6_3_12) },
  { 1327u , Range(JTable_6_3_13) },
  { 2311u , Range(JTable_6_3_14) },
  { 2731u , Range(JTable_6_3_15) },
  { 3571u , Range(JTable_6_3_16) },
  { 6007u , Range(JTable_6_3_17) },
  { 9283u , Range(JTable_6_3_18) },
  { 46411u , Range(JTable_6_3_19) },
  { 72931u , Range(JTable_6_3_20) },
  { 102103u , Range(JTable_6_3_21) }
 };

static const UType JSum_6_5_1_1[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const UType JSum_6_5_1_2[]=
 {
  2u,
  1u,
  4u,
  2u,
  0u
 };

static const UType JSum_6_5_1_3[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const PtrLen<const UType> JTable_6_5_1[]=
 {
  Range(JSum_6_5_1_1),
  Range(JSum_6_5_1_2),
  Range(JSum_6_5_1_3)
 };

static const UType JSum_6_5_2_1[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const UType JSum_6_5_2_2[]=
 {
  8u,
  8u,
  2u,
  6u,
  5u
 };

static const UType JSum_6_5_2_3[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_6_5_2[]=
 {
  Range(JSum_6_5_2_1),
  Range(JSum_6_5_2_2),
  Range(JSum_6_5_2_3)
 };

static const UType JSum_6_5_3_1[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const UType JSum_6_5_3_2[]=
 {
  10u,
  13u,
  20u,
  12u,
  14u
 };

static const UType JSum_6_5_3_3[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const PtrLen<const UType> JTable_6_5_3[]=
 {
  Range(JSum_6_5_3_1),
  Range(JSum_6_5_3_2),
  Range(JSum_6_5_3_3)
 };

static const UType JSum_6_5_4_1[]=
 {
  28u,
  22u,
  20u,
  33u,
  26u
 };

static const UType JSum_6_5_4_2[]=
 {
  28u,
  33u,
  22u,
  26u,
  20u
 };

static const UType JSum_6_5_4_3[]=
 {
  28u,
  22u,
  20u,
  33u,
  26u
 };

static const PtrLen<const UType> JTable_6_5_4[]=
 {
  Range(JSum_6_5_4_1),
  Range(JSum_6_5_4_2),
  Range(JSum_6_5_4_3)
 };

static const UType JSum_6_5_5_1[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const UType JSum_6_5_5_2[]=
 {
  42u,
  33u,
  48u,
  48u,
  38u
 };

static const UType JSum_6_5_5_3[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const PtrLen<const UType> JTable_6_5_5[]=
 {
  Range(JSum_6_5_5_1),
  Range(JSum_6_5_5_2),
  Range(JSum_6_5_5_3)
 };

static const UType JSum_6_5_6_1[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const UType JSum_6_5_6_2[]=
 {
  78u,
  57u,
  60u,
  68u,
  66u
 };

static const UType JSum_6_5_6_3[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const PtrLen<const UType> JTable_6_5_6[]=
 {
  Range(JSum_6_5_6_1),
  Range(JSum_6_5_6_2),
  Range(JSum_6_5_6_3)
 };

static const UType JSum_6_5_7_1[]=
 {
  197u,
  190u,
  162u,
  184u,
  176u
 };

static const UType JSum_6_5_7_2[]=
 {
  197u,
  184u,
  190u,
  176u,
  162u
 };

static const UType JSum_6_5_7_3[]=
 {
  197u,
  190u,
  162u,
  184u,
  176u
 };

static const PtrLen<const UType> JTable_6_5_7[]=
 {
  Range(JSum_6_5_7_1),
  Range(JSum_6_5_7_2),
  Range(JSum_6_5_7_3)
 };

static const UType JSum_6_5_8_1[]=
 {
  390u,
  376u,
  386u,
  341u,
  376u
 };

static const UType JSum_6_5_8_2[]=
 {
  390u,
  341u,
  376u,
  376u,
  386u
 };

static const UType JSum_6_5_8_3[]=
 {
  390u,
  376u,
  386u,
  341u,
  376u
 };

static const PtrLen<const UType> JTable_6_5_8[]=
 {
  Range(JSum_6_5_8_1),
  Range(JSum_6_5_8_2),
  Range(JSum_6_5_8_3)
 };

static const UType JSum_6_5_9_1[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const UType JSum_6_5_9_2[]=
 {
  432u,
  450u,
  477u,
  464u,
  486u
 };

static const UType JSum_6_5_9_3[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const PtrLen<const UType> JTable_6_5_9[]=
 {
  Range(JSum_6_5_9_1),
  Range(JSum_6_5_9_2),
  Range(JSum_6_5_9_3)
 };

static const UType JSum_6_5_10_1[]=
 {
  513u,
  576u,
  558u,
  540u,
  542u
 };

static const UType JSum_6_5_10_2[]=
 {
  513u,
  540u,
  576u,
  542u,
  558u
 };

static const UType JSum_6_5_10_3[]=
 {
  513u,
  576u,
  558u,
  540u,
  542u
 };

static const PtrLen<const UType> JTable_6_5_10[]=
 {
  Range(JSum_6_5_10_1),
  Range(JSum_6_5_10_2),
  Range(JSum_6_5_10_3)
 };

static const UType JSum_6_5_11_1[]=
 {
  750u,
  696u,
  716u,
  681u,
  726u
 };

static const UType JSum_6_5_11_2[]=
 {
  750u,
  681u,
  696u,
  726u,
  716u
 };

static const UType JSum_6_5_11_3[]=
 {
  750u,
  696u,
  716u,
  681u,
  726u
 };

static const PtrLen<const UType> JTable_6_5_11[]=
 {
  Range(JSum_6_5_11_1),
  Range(JSum_6_5_11_2),
  Range(JSum_6_5_11_3)
 };

static const UType JSum_6_5_12_1[]=
 {
  9152u,
  9332u,
  9266u,
  9410u,
  9249u
 };

static const UType JSum_6_5_12_2[]=
 {
  9152u,
  9410u,
  9332u,
  9249u,
  9266u
 };

static const UType JSum_6_5_12_3[]=
 {
  9152u,
  9332u,
  9266u,
  9410u,
  9249u
 };

static const PtrLen<const UType> JTable_6_5_12[]=
 {
  Range(JSum_6_5_12_1),
  Range(JSum_6_5_12_2),
  Range(JSum_6_5_12_3)
 };

static const UType JSum_6_5_13_1[]=
 {
  14778u,
  14544u,
  14609u,
  14454u,
  14544u
 };

static const UType JSum_6_5_13_2[]=
 {
  14778u,
  14454u,
  14544u,
  14544u,
  14609u
 };

static const UType JSum_6_5_13_3[]=
 {
  14778u,
  14544u,
  14609u,
  14454u,
  14544u
 };

static const PtrLen<const UType> JTable_6_5_13[]=
 {
  Range(JSum_6_5_13_1),
  Range(JSum_6_5_13_2),
  Range(JSum_6_5_13_3)
 };

static const TestSet::JTable JSet_6_5[]=
 {
  { 11u , Range(JTable_6_5_1) },
  { 31u , Range(JTable_6_5_2) },
  { 71u , Range(JTable_6_5_3) },
  { 131u , Range(JTable_6_5_4) },
  { 211u , Range(JTable_6_5_5) },
  { 331u , Range(JTable_6_5_6) },
  { 911u , Range(JTable_6_5_7) },
  { 1871u , Range(JTable_6_5_8) },
  { 2311u , Range(JTable_6_5_9) },
  { 2731u , Range(JTable_6_5_10) },
  { 3571u , Range(JTable_6_5_11) },
  { 46411u , Range(JTable_6_5_12) },
  { 72931u , Range(JTable_6_5_13) }
 };

static const UType JSum_6_7_1_1[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const UType JSum_6_7_1_2[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_6_7_1_3[]=
 {
  6u,
  4u,
  6u,
  4u,
  10u,
  8u,
  3u
 };

static const UType JSum_6_7_1_4[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_6_7_1_5[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const PtrLen<const UType> JTable_6_7_1[]=
 {
  Range(JSum_6_7_1_1),
  Range(JSum_6_7_1_2),
  Range(JSum_6_7_1_3),
  Range(JSum_6_7_1_4),
  Range(JSum_6_7_1_5)
 };

static const UType JSum_6_7_2_1[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const UType JSum_6_7_2_2[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_6_7_2_3[]=
 {
  12u,
  8u,
  12u,
  6u,
  6u,
  14u,
  11u
 };

static const UType JSum_6_7_2_4[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_6_7_2_5[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_6_7_2[]=
 {
  Range(JSum_6_7_2_1),
  Range(JSum_6_7_2_2),
  Range(JSum_6_7_2_3),
  Range(JSum_6_7_2_4),
  Range(JSum_6_7_2_5)
 };

static const UType JSum_6_7_3_1[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const UType JSum_6_7_3_2[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_6_7_3_3[]=
 {
  22u,
  27u,
  28u,
  30u,
  30u,
  32u,
  40u
 };

static const UType JSum_6_7_3_4[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_6_7_3_5[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_6_7_3[]=
 {
  Range(JSum_6_7_3_1),
  Range(JSum_6_7_3_2),
  Range(JSum_6_7_3_3),
  Range(JSum_6_7_3_4),
  Range(JSum_6_7_3_5)
 };

static const UType JSum_6_7_4_1[]=
 {
  42u,
  27u,
  36u,
  32u,
  26u,
  36u,
  38u
 };

static const UType JSum_6_7_4_2[]=
 {
  27u,
  30u,
  30u,
  40u,
  30u,
  40u,
  40u
 };

static const UType JSum_6_7_4_3[]=
 {
  42u,
  36u,
  32u,
  27u,
  38u,
  26u,
  36u
 };

static const UType JSum_6_7_4_4[]=
 {
  27u,
  30u,
  30u,
  40u,
  30u,
  40u,
  40u
 };

static const UType JSum_6_7_4_5[]=
 {
  42u,
  27u,
  36u,
  32u,
  26u,
  36u,
  38u
 };

static const PtrLen<const UType> JTable_6_7_4[]=
 {
  Range(JSum_6_7_4_1),
  Range(JSum_6_7_4_2),
  Range(JSum_6_7_4_3),
  Range(JSum_6_7_4_4),
  Range(JSum_6_7_4_5)
 };

static const UType JSum_6_7_5_1[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const UType JSum_6_7_5_2[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_6_7_5_3[]=
 {
  66u,
  66u,
  78u,
  60u,
  60u,
  56u,
  75u
 };

static const UType JSum_6_7_5_4[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_6_7_5_5[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const PtrLen<const UType> JTable_6_7_5[]=
 {
  Range(JSum_6_7_5_1),
  Range(JSum_6_7_5_2),
  Range(JSum_6_7_5_3),
  Range(JSum_6_7_5_4),
  Range(JSum_6_7_5_5)
 };

static const UType JSum_6_7_6_1[]=
 {
  84u,
  86u,
  60u,
  78u,
  78u,
  75u,
  84u
 };

static const UType JSum_6_7_6_2[]=
 {
  59u,
  78u,
  78u,
  84u,
  78u,
  84u,
  84u
 };

static const UType JSum_6_7_6_3[]=
 {
  84u,
  75u,
  78u,
  86u,
  84u,
  78u,
  60u
 };

static const UType JSum_6_7_6_4[]=
 {
  59u,
  78u,
  78u,
  84u,
  78u,
  84u,
  84u
 };

static const UType JSum_6_7_6_5[]=
 {
  84u,
  86u,
  60u,
  78u,
  78u,
  75u,
  84u
 };

static const PtrLen<const UType> JTable_6_7_6[]=
 {
  Range(JSum_6_7_6_1),
  Range(JSum_6_7_6_2),
  Range(JSum_6_7_6_3),
  Range(JSum_6_7_6_4),
  Range(JSum_6_7_6_5)
 };

static const UType JSum_6_7_7_1[]=
 {
  134u,
  132u,
  116u,
  116u,
  147u,
  126u,
  138u
 };

static const UType JSum_6_7_7_2[]=
 {
  123u,
  142u,
  142u,
  120u,
  142u,
  120u,
  120u
 };

static const UType JSum_6_7_7_3[]=
 {
  134u,
  126u,
  116u,
  132u,
  138u,
  147u,
  116u
 };

static const UType JSum_6_7_7_4[]=
 {
  123u,
  142u,
  142u,
  120u,
  142u,
  120u,
  120u
 };

static const UType JSum_6_7_7_5[]=
 {
  134u,
  132u,
  116u,
  116u,
  147u,
  126u,
  138u
 };

static const PtrLen<const UType> JTable_6_7_7[]=
 {
  Range(JSum_6_7_7_1),
  Range(JSum_6_7_7_2),
  Range(JSum_6_7_7_3),
  Range(JSum_6_7_7_4),
  Range(JSum_6_7_7_5)
 };

static const UType JSum_6_7_8_1[]=
 {
  291u,
  272u,
  288u,
  320u,
  278u,
  282u,
  270u
 };

static const UType JSum_6_7_8_2[]=
 {
  315u,
  292u,
  292u,
  270u,
  292u,
  270u,
  270u
 };

static const UType JSum_6_7_8_3[]=
 {
  291u,
  282u,
  320u,
  272u,
  270u,
  278u,
  288u
 };

static const UType JSum_6_7_8_4[]=
 {
  315u,
  292u,
  292u,
  270u,
  292u,
  270u,
  270u
 };

static const UType JSum_6_7_8_5[]=
 {
  291u,
  272u,
  288u,
  320u,
  278u,
  282u,
  270u
 };

static const PtrLen<const UType> JTable_6_7_8[]=
 {
  Range(JSum_6_7_8_1),
  Range(JSum_6_7_8_2),
  Range(JSum_6_7_8_3),
  Range(JSum_6_7_8_4),
  Range(JSum_6_7_8_5)
 };

static const UType JSum_6_7_9_1[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const UType JSum_6_7_9_2[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_6_7_9_3[]=
 {
  352u,
  348u,
  310u,
  318u,
  318u,
  347u,
  316u
 };

static const UType JSum_6_7_9_4[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_6_7_9_5[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const PtrLen<const UType> JTable_6_7_9[]=
 {
  Range(JSum_6_7_9_1),
  Range(JSum_6_7_9_2),
  Range(JSum_6_7_9_3),
  Range(JSum_6_7_9_4),
  Range(JSum_6_7_9_5)
 };

static const UType JSum_6_7_10_1[]=
 {
  379u,
  364u,
  406u,
  382u,
  392u,
  424u,
  382u
 };

static const UType JSum_6_7_10_2[]=
 {
  419u,
  400u,
  400u,
  370u,
  400u,
  370u,
  370u
 };

static const UType JSum_6_7_10_3[]=
 {
  379u,
  424u,
  382u,
  364u,
  382u,
  392u,
  406u
 };

static const UType JSum_6_7_10_4[]=
 {
  419u,
  400u,
  400u,
  370u,
  400u,
  370u,
  370u
 };

static const UType JSum_6_7_10_5[]=
 {
  379u,
  364u,
  406u,
  382u,
  392u,
  424u,
  382u
 };

static const PtrLen<const UType> JTable_6_7_10[]=
 {
  Range(JSum_6_7_10_1),
  Range(JSum_6_7_10_2),
  Range(JSum_6_7_10_3),
  Range(JSum_6_7_10_4),
  Range(JSum_6_7_10_5)
 };

static const UType JSum_6_7_11_1[]=
 {
  498u,
  528u,
  522u,
  516u,
  482u,
  483u,
  540u
 };

static const UType JSum_6_7_11_2[]=
 {
  491u,
  534u,
  534u,
  492u,
  534u,
  492u,
  492u
 };

static const UType JSum_6_7_11_3[]=
 {
  498u,
  483u,
  516u,
  528u,
  540u,
  482u,
  522u
 };

static const UType JSum_6_7_11_4[]=
 {
  491u,
  534u,
  534u,
  492u,
  534u,
  492u,
  492u
 };

static const UType JSum_6_7_11_5[]=
 {
  498u,
  528u,
  522u,
  516u,
  482u,
  483u,
  540u
 };

static const PtrLen<const UType> JTable_6_7_11[]=
 {
  Range(JSum_6_7_11_1),
  Range(JSum_6_7_11_2),
  Range(JSum_6_7_11_3),
  Range(JSum_6_7_11_4),
  Range(JSum_6_7_11_5)
 };

static const UType JSum_6_7_12_1[]=
 {
  844u,
  834u,
  820u,
  898u,
  848u,
  870u,
  891u
 };

static const UType JSum_6_7_12_2[]=
 {
  899u,
  874u,
  874u,
  828u,
  874u,
  828u,
  828u
 };

static const UType JSum_6_7_12_3[]=
 {
  844u,
  870u,
  898u,
  834u,
  891u,
  848u,
  820u
 };

static const UType JSum_6_7_12_4[]=
 {
  899u,
  874u,
  874u,
  828u,
  874u,
  828u,
  828u
 };

static const UType JSum_6_7_12_5[]=
 {
  844u,
  834u,
  820u,
  898u,
  848u,
  870u,
  891u
 };

static const PtrLen<const UType> JTable_6_7_12[]=
 {
  Range(JSum_6_7_12_1),
  Range(JSum_6_7_12_2),
  Range(JSum_6_7_12_3),
  Range(JSum_6_7_12_4),
  Range(JSum_6_7_12_5)
 };

static const UType JSum_6_7_13_1[]=
 {
  1314u,
  1306u,
  1404u,
  1324u,
  1306u,
  1331u,
  1296u
 };

static const UType JSum_6_7_13_2[]=
 {
  1403u,
  1300u,
  1300u,
  1326u,
  1300u,
  1326u,
  1326u
 };

static const UType JSum_6_7_13_3[]=
 {
  1314u,
  1331u,
  1324u,
  1306u,
  1296u,
  1306u,
  1404u
 };

static const UType JSum_6_7_13_4[]=
 {
  1403u,
  1300u,
  1300u,
  1326u,
  1300u,
  1326u,
  1326u
 };

static const UType JSum_6_7_13_5[]=
 {
  1314u,
  1306u,
  1404u,
  1324u,
  1306u,
  1331u,
  1296u
 };

static const PtrLen<const UType> JTable_6_7_13[]=
 {
  Range(JSum_6_7_13_1),
  Range(JSum_6_7_13_2),
  Range(JSum_6_7_13_3),
  Range(JSum_6_7_13_4),
  Range(JSum_6_7_13_5)
 };

static const UType JSum_6_7_14_1[]=
 {
  6510u,
  6576u,
  6768u,
  6612u,
  6683u,
  6618u,
  6642u
 };

static const UType JSum_6_7_14_2[]=
 {
  6611u,
  6714u,
  6714u,
  6552u,
  6714u,
  6552u,
  6552u
 };

static const UType JSum_6_7_14_3[]=
 {
  6510u,
  6618u,
  6612u,
  6576u,
  6642u,
  6683u,
  6768u
 };

static const UType JSum_6_7_14_4[]=
 {
  6611u,
  6714u,
  6714u,
  6552u,
  6714u,
  6552u,
  6552u
 };

static const UType JSum_6_7_14_5[]=
 {
  6510u,
  6576u,
  6768u,
  6612u,
  6683u,
  6618u,
  6642u
 };

static const PtrLen<const UType> JTable_6_7_14[]=
 {
  Range(JSum_6_7_14_1),
  Range(JSum_6_7_14_2),
  Range(JSum_6_7_14_3),
  Range(JSum_6_7_14_4),
  Range(JSum_6_7_14_5)
 };

static const UType JSum_6_7_15_1[]=
 {
  14674u,
  14526u,
  14794u,
  14496u,
  14448u,
  14528u,
  14635u
 };

static const UType JSum_6_7_15_2[]=
 {
  14771u,
  14466u,
  14466u,
  14644u,
  14466u,
  14644u,
  14644u
 };

static const UType JSum_6_7_15_3[]=
 {
  14674u,
  14528u,
  14496u,
  14526u,
  14635u,
  14448u,
  14794u
 };

static const UType JSum_6_7_15_4[]=
 {
  14771u,
  14466u,
  14466u,
  14644u,
  14466u,
  14644u,
  14644u
 };

static const UType JSum_6_7_15_5[]=
 {
  14674u,
  14526u,
  14794u,
  14496u,
  14448u,
  14528u,
  14635u
 };

static const PtrLen<const UType> JTable_6_7_15[]=
 {
  Range(JSum_6_7_15_1),
  Range(JSum_6_7_15_2),
  Range(JSum_6_7_15_3),
  Range(JSum_6_7_15_4),
  Range(JSum_6_7_15_5)
 };

static const TestSet::JTable JSet_6_7[]=
 {
  { 43u , Range(JTable_6_7_1) },
  { 71u , Range(JTable_6_7_2) },
  { 211u , Range(JTable_6_7_3) },
  { 239u , Range(JTable_6_7_4) },
  { 463u , Range(JTable_6_7_5) },
  { 547u , Range(JTable_6_7_6) },
  { 911u , Range(JTable_6_7_7) },
  { 2003u , Range(JTable_6_7_8) },
  { 2311u , Range(JTable_6_7_9) },
  { 2731u , Range(JTable_6_7_10) },
  { 3571u , Range(JTable_6_7_11) },
  { 6007u , Range(JTable_6_7_12) },
  { 9283u , Range(JTable_6_7_13) },
  { 46411u , Range(JTable_6_7_14) },
  { 102103u , Range(JTable_6_7_15) }
 };

static const UType JSum_6_11_1_1[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const UType JSum_6_11_1_2[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_6_11_1_3[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_6_11_1_4[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_6_11_1_5[]=
 {
  0u,
  2u,
  3u,
  4u,
  2u,
  2u,
  0u,
  2u,
  0u,
  2u,
  4u
 };

static const UType JSum_6_11_1_6[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_6_11_1_7[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_6_11_1_8[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_6_11_1_9[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const PtrLen<const UType> JTable_6_11_1[]=
 {
  Range(JSum_6_11_1_1),
  Range(JSum_6_11_1_2),
  Range(JSum_6_11_1_3),
  Range(JSum_6_11_1_4),
  Range(JSum_6_11_1_5),
  Range(JSum_6_11_1_6),
  Range(JSum_6_11_1_7),
  Range(JSum_6_11_1_8),
  Range(JSum_6_11_1_9)
 };

static const UType JSum_6_11_2_1[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const UType JSum_6_11_2_2[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_6_11_2_3[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_6_11_2_4[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_6_11_2_5[]=
 {
  8u,
  3u,
  2u,
  6u,
  6u,
  10u,
  4u,
  6u,
  8u,
  8u,
  4u
 };

static const UType JSum_6_11_2_6[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_6_11_2_7[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_6_11_2_8[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_6_11_2_9[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const PtrLen<const UType> JTable_6_11_2[]=
 {
  Range(JSum_6_11_2_1),
  Range(JSum_6_11_2_2),
  Range(JSum_6_11_2_3),
  Range(JSum_6_11_2_4),
  Range(JSum_6_11_2_5),
  Range(JSum_6_11_2_6),
  Range(JSum_6_11_2_7),
  Range(JSum_6_11_2_8),
  Range(JSum_6_11_2_9)
 };

static const UType JSum_6_11_3_1[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const UType JSum_6_11_3_2[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_6_11_3_3[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_6_11_3_4[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_6_11_3_5[]=
 {
  27u,
  24u,
  32u,
  30u,
  38u,
  34u,
  28u,
  24u,
  40u,
  26u,
  26u
 };

static const UType JSum_6_11_3_6[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_6_11_3_7[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_6_11_3_8[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_6_11_3_9[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const PtrLen<const UType> JTable_6_11_3[]=
 {
  Range(JSum_6_11_3_1),
  Range(JSum_6_11_3_2),
  Range(JSum_6_11_3_3),
  Range(JSum_6_11_3_4),
  Range(JSum_6_11_3_5),
  Range(JSum_6_11_3_6),
  Range(JSum_6_11_3_7),
  Range(JSum_6_11_3_8),
  Range(JSum_6_11_3_9)
 };

static const UType JSum_6_11_4_1[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const UType JSum_6_11_4_2[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_6_11_4_3[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_6_11_4_4[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_6_11_4_5[]=
 {
  44u,
  35u,
  42u,
  54u,
  50u,
  36u,
  44u,
  34u,
  46u,
  36u,
  40u
 };

static const UType JSum_6_11_4_6[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_6_11_4_7[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_6_11_4_8[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_6_11_4_9[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const PtrLen<const UType> JTable_6_11_4[]=
 {
  Range(JSum_6_11_4_1),
  Range(JSum_6_11_4_2),
  Range(JSum_6_11_4_3),
  Range(JSum_6_11_4_4),
  Range(JSum_6_11_4_5),
  Range(JSum_6_11_4_6),
  Range(JSum_6_11_4_7),
  Range(JSum_6_11_4_8),
  Range(JSum_6_11_4_9)
 };

static const UType JSum_6_11_5_1[]=
 {
  84u,
  76u,
  74u,
  90u,
  80u,
  84u,
  62u,
  74u,
  76u,
  67u,
  90u
 };

static const UType JSum_6_11_5_2[]=
 {
  77u,
  72u,
  86u,
  63u,
  80u,
  79u,
  75u,
  87u,
  94u,
  76u,
  68u
 };

static const UType JSum_6_11_5_3[]=
 {
  77u,
  94u,
  79u,
  86u,
  68u,
  87u,
  80u,
  72u,
  76u,
  75u,
  63u
 };

static const UType JSum_6_11_5_4[]=
 {
  77u,
  86u,
  80u,
  75u,
  94u,
  68u,
  72u,
  63u,
  79u,
  87u,
  76u
 };

static const UType JSum_6_11_5_5[]=
 {
  84u,
  67u,
  74u,
  84u,
  90u,
  76u,
  90u,
  76u,
  62u,
  80u,
  74u
 };

static const UType JSum_6_11_5_6[]=
 {
  77u,
  86u,
  80u,
  75u,
  94u,
  68u,
  72u,
  63u,
  79u,
  87u,
  76u
 };

static const UType JSum_6_11_5_7[]=
 {
  77u,
  94u,
  79u,
  86u,
  68u,
  87u,
  80u,
  72u,
  76u,
  75u,
  63u
 };

static const UType JSum_6_11_5_8[]=
 {
  77u,
  72u,
  86u,
  63u,
  80u,
  79u,
  75u,
  87u,
  94u,
  76u,
  68u
 };

static const UType JSum_6_11_5_9[]=
 {
  84u,
  76u,
  74u,
  90u,
  80u,
  84u,
  62u,
  74u,
  76u,
  67u,
  90u
 };

static const PtrLen<const UType> JTable_6_11_5[]=
 {
  Range(JSum_6_11_5_1),
  Range(JSum_6_11_5_2),
  Range(JSum_6_11_5_3),
  Range(JSum_6_11_5_4),
  Range(JSum_6_11_5_5),
  Range(JSum_6_11_5_6),
  Range(JSum_6_11_5_7),
  Range(JSum_6_11_5_8),
  Range(JSum_6_11_5_9)
 };

static const UType JSum_6_11_6_1[]=
 {
  104u,
  92u,
  92u,
  118u,
  108u,
  118u,
  90u,
  102u,
  104u,
  91u,
  102u
 };

static const UType JSum_6_11_6_2[]=
 {
  88u,
  110u,
  107u,
  80u,
  102u,
  100u,
  110u,
  108u,
  114u,
  100u,
  102u
 };

static const UType JSum_6_11_6_3[]=
 {
  88u,
  114u,
  100u,
  107u,
  102u,
  108u,
  102u,
  110u,
  100u,
  110u,
  80u
 };

static const UType JSum_6_11_6_4[]=
 {
  88u,
  107u,
  102u,
  110u,
  114u,
  102u,
  110u,
  80u,
  100u,
  108u,
  100u
 };

static const UType JSum_6_11_6_5[]=
 {
  104u,
  91u,
  102u,
  118u,
  118u,
  92u,
  102u,
  104u,
  90u,
  108u,
  92u
 };

static const UType JSum_6_11_6_6[]=
 {
  88u,
  107u,
  102u,
  110u,
  114u,
  102u,
  110u,
  80u,
  100u,
  108u,
  100u
 };

static const UType JSum_6_11_6_7[]=
 {
  88u,
  114u,
  100u,
  107u,
  102u,
  108u,
  102u,
  110u,
  100u,
  110u,
  80u
 };

static const UType JSum_6_11_6_8[]=
 {
  88u,
  110u,
  107u,
  80u,
  102u,
  100u,
  110u,
  108u,
  114u,
  100u,
  102u
 };

static const UType JSum_6_11_6_9[]=
 {
  104u,
  92u,
  92u,
  118u,
  108u,
  118u,
  90u,
  102u,
  104u,
  91u,
  102u
 };

static const PtrLen<const UType> JTable_6_11_6[]=
 {
  Range(JSum_6_11_6_1),
  Range(JSum_6_11_6_2),
  Range(JSum_6_11_6_3),
  Range(JSum_6_11_6_4),
  Range(JSum_6_11_6_5),
  Range(JSum_6_11_6_6),
  Range(JSum_6_11_6_7),
  Range(JSum_6_11_6_8),
  Range(JSum_6_11_6_9)
 };

static const UType JSum_6_11_7_1[]=
 {
  184u,
  166u,
  188u,
  152u,
  164u,
  166u,
  170u,
  174u,
  148u,
  170u,
  187u
 };

static const UType JSum_6_11_7_2[]=
 {
  146u,
  182u,
  157u,
  182u,
  189u,
  169u,
  161u,
  178u,
  178u,
  166u,
  161u
 };

static const UType JSum_6_11_7_3[]=
 {
  146u,
  178u,
  169u,
  157u,
  161u,
  178u,
  189u,
  182u,
  166u,
  161u,
  182u
 };

static const UType JSum_6_11_7_4[]=
 {
  146u,
  157u,
  189u,
  161u,
  178u,
  161u,
  182u,
  182u,
  169u,
  178u,
  166u
 };

static const UType JSum_6_11_7_5[]=
 {
  184u,
  170u,
  174u,
  166u,
  152u,
  166u,
  187u,
  148u,
  170u,
  164u,
  188u
 };

static const UType JSum_6_11_7_6[]=
 {
  146u,
  157u,
  189u,
  161u,
  178u,
  161u,
  182u,
  182u,
  169u,
  178u,
  166u
 };

static const UType JSum_6_11_7_7[]=
 {
  146u,
  178u,
  169u,
  157u,
  161u,
  178u,
  189u,
  182u,
  166u,
  161u,
  182u
 };

static const UType JSum_6_11_7_8[]=
 {
  146u,
  182u,
  157u,
  182u,
  189u,
  169u,
  161u,
  178u,
  178u,
  166u,
  161u
 };

static const UType JSum_6_11_7_9[]=
 {
  184u,
  166u,
  188u,
  152u,
  164u,
  166u,
  170u,
  174u,
  148u,
  170u,
  187u
 };

static const PtrLen<const UType> JTable_6_11_7[]=
 {
  Range(JSum_6_11_7_1),
  Range(JSum_6_11_7_2),
  Range(JSum_6_11_7_3),
  Range(JSum_6_11_7_4),
  Range(JSum_6_11_7_5),
  Range(JSum_6_11_7_6),
  Range(JSum_6_11_7_7),
  Range(JSum_6_11_7_8),
  Range(JSum_6_11_7_9)
 };

static const UType JSum_6_11_8_1[]=
 {
  188u,
  192u,
  186u,
  170u,
  202u,
  188u,
  164u,
  172u,
  162u,
  198u,
  179u
 };

static const UType JSum_6_11_8_2[]=
 {
  182u,
  187u,
  184u,
  188u,
  190u,
  192u,
  180u,
  166u,
  154u,
  204u,
  174u
 };

static const UType JSum_6_11_8_3[]=
 {
  182u,
  154u,
  192u,
  184u,
  174u,
  166u,
  190u,
  187u,
  204u,
  180u,
  188u
 };

static const UType JSum_6_11_8_4[]=
 {
  182u,
  184u,
  190u,
  180u,
  154u,
  174u,
  187u,
  188u,
  192u,
  166u,
  204u
 };

static const UType JSum_6_11_8_5[]=
 {
  188u,
  198u,
  172u,
  188u,
  170u,
  192u,
  179u,
  162u,
  164u,
  202u,
  186u
 };

static const UType JSum_6_11_8_6[]=
 {
  182u,
  184u,
  190u,
  180u,
  154u,
  174u,
  187u,
  188u,
  192u,
  166u,
  204u
 };

static const UType JSum_6_11_8_7[]=
 {
  182u,
  154u,
  192u,
  184u,
  174u,
  166u,
  190u,
  187u,
  204u,
  180u,
  188u
 };

static const UType JSum_6_11_8_8[]=
 {
  182u,
  187u,
  184u,
  188u,
  190u,
  192u,
  180u,
  166u,
  154u,
  204u,
  174u
 };

static const UType JSum_6_11_8_9[]=
 {
  188u,
  192u,
  186u,
  170u,
  202u,
  188u,
  164u,
  172u,
  162u,
  198u,
  179u
 };

static const PtrLen<const UType> JTable_6_11_8[]=
 {
  Range(JSum_6_11_8_1),
  Range(JSum_6_11_8_2),
  Range(JSum_6_11_8_3),
  Range(JSum_6_11_8_4),
  Range(JSum_6_11_8_5),
  Range(JSum_6_11_8_6),
  Range(JSum_6_11_8_7),
  Range(JSum_6_11_8_8),
  Range(JSum_6_11_8_9)
 };

static const UType JSum_6_11_9_1[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const UType JSum_6_11_9_2[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_6_11_9_3[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_6_11_9_4[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_6_11_9_5[]=
 {
  198u,
  208u,
  224u,
  206u,
  210u,
  204u,
  236u,
  222u,
  194u,
  220u,
  187u
 };

static const UType JSum_6_11_9_6[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_6_11_9_7[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_6_11_9_8[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_6_11_9_9[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const PtrLen<const UType> JTable_6_11_9[]=
 {
  Range(JSum_6_11_9_1),
  Range(JSum_6_11_9_2),
  Range(JSum_6_11_9_3),
  Range(JSum_6_11_9_4),
  Range(JSum_6_11_9_5),
  Range(JSum_6_11_9_6),
  Range(JSum_6_11_9_7),
  Range(JSum_6_11_9_8),
  Range(JSum_6_11_9_9)
 };

static const UType JSum_6_11_10_1[]=
 {
  560u,
  530u,
  564u,
  574u,
  530u,
  498u,
  552u,
  523u,
  570u,
  544u,
  560u
 };

static const UType JSum_6_11_10_2[]=
 {
  540u,
  550u,
  564u,
  534u,
  539u,
  580u,
  582u,
  512u,
  554u,
  512u,
  538u
 };

static const UType JSum_6_11_10_3[]=
 {
  540u,
  554u,
  580u,
  564u,
  538u,
  512u,
  539u,
  550u,
  512u,
  582u,
  534u
 };

static const UType JSum_6_11_10_4[]=
 {
  540u,
  564u,
  539u,
  582u,
  554u,
  538u,
  550u,
  534u,
  580u,
  512u,
  512u
 };

static const UType JSum_6_11_10_5[]=
 {
  560u,
  544u,
  523u,
  498u,
  574u,
  530u,
  560u,
  570u,
  552u,
  530u,
  564u
 };

static const UType JSum_6_11_10_6[]=
 {
  540u,
  564u,
  539u,
  582u,
  554u,
  538u,
  550u,
  534u,
  580u,
  512u,
  512u
 };

static const UType JSum_6_11_10_7[]=
 {
  540u,
  554u,
  580u,
  564u,
  538u,
  512u,
  539u,
  550u,
  512u,
  582u,
  534u
 };

static const UType JSum_6_11_10_8[]=
 {
  540u,
  550u,
  564u,
  534u,
  539u,
  580u,
  582u,
  512u,
  554u,
  512u,
  538u
 };

static const UType JSum_6_11_10_9[]=
 {
  560u,
  530u,
  564u,
  574u,
  530u,
  498u,
  552u,
  523u,
  570u,
  544u,
  560u
 };

static const PtrLen<const UType> JTable_6_11_10[]=
 {
  Range(JSum_6_11_10_1),
  Range(JSum_6_11_10_2),
  Range(JSum_6_11_10_3),
  Range(JSum_6_11_10_4),
  Range(JSum_6_11_10_5),
  Range(JSum_6_11_10_6),
  Range(JSum_6_11_10_7),
  Range(JSum_6_11_10_8),
  Range(JSum_6_11_10_9)
 };

static const UType JSum_6_11_11_1[]=
 {
  6780u,
  6606u,
  6547u,
  6704u,
  6634u,
  6610u,
  6498u,
  6584u,
  6642u,
  6728u,
  6596u
 };

static const UType JSum_6_11_11_2[]=
 {
  6763u,
  6590u,
  6556u,
  6630u,
  6501u,
  6605u,
  6713u,
  6684u,
  6539u,
  6708u,
  6640u
 };

static const UType JSum_6_11_11_3[]=
 {
  6763u,
  6539u,
  6605u,
  6556u,
  6640u,
  6684u,
  6501u,
  6590u,
  6708u,
  6713u,
  6630u
 };

static const UType JSum_6_11_11_4[]=
 {
  6763u,
  6556u,
  6501u,
  6713u,
  6539u,
  6640u,
  6590u,
  6630u,
  6605u,
  6684u,
  6708u
 };

static const UType JSum_6_11_11_5[]=
 {
  6780u,
  6728u,
  6584u,
  6610u,
  6704u,
  6606u,
  6596u,
  6642u,
  6498u,
  6634u,
  6547u
 };

static const UType JSum_6_11_11_6[]=
 {
  6763u,
  6556u,
  6501u,
  6713u,
  6539u,
  6640u,
  6590u,
  6630u,
  6605u,
  6684u,
  6708u
 };

static const UType JSum_6_11_11_7[]=
 {
  6763u,
  6539u,
  6605u,
  6556u,
  6640u,
  6684u,
  6501u,
  6590u,
  6708u,
  6713u,
  6630u
 };

static const UType JSum_6_11_11_8[]=
 {
  6763u,
  6590u,
  6556u,
  6630u,
  6501u,
  6605u,
  6713u,
  6684u,
  6539u,
  6708u,
  6640u
 };

static const UType JSum_6_11_11_9[]=
 {
  6780u,
  6606u,
  6547u,
  6704u,
  6634u,
  6610u,
  6498u,
  6584u,
  6642u,
  6728u,
  6596u
 };

static const PtrLen<const UType> JTable_6_11_11[]=
 {
  Range(JSum_6_11_11_1),
  Range(JSum_6_11_11_2),
  Range(JSum_6_11_11_3),
  Range(JSum_6_11_11_4),
  Range(JSum_6_11_11_5),
  Range(JSum_6_11_11_6),
  Range(JSum_6_11_11_7),
  Range(JSum_6_11_11_8),
  Range(JSum_6_11_11_9)
 };

static const UType JSum_6_11_12_1[]=
 {
  9438u,
  9340u,
  9347u,
  9254u,
  9228u,
  9432u,
  9254u,
  9186u,
  9212u,
  9268u,
  9142u
 };

static const UType JSum_6_11_12_2[]=
 {
  9201u,
  9290u,
  9234u,
  9276u,
  9299u,
  9143u,
  9499u,
  9390u,
  9283u,
  9208u,
  9278u
 };

static const UType JSum_6_11_12_3[]=
 {
  9201u,
  9283u,
  9143u,
  9234u,
  9278u,
  9390u,
  9299u,
  9290u,
  9208u,
  9499u,
  9276u
 };

static const UType JSum_6_11_12_4[]=
 {
  9201u,
  9234u,
  9299u,
  9499u,
  9283u,
  9278u,
  9290u,
  9276u,
  9143u,
  9390u,
  9208u
 };

static const UType JSum_6_11_12_5[]=
 {
  9438u,
  9268u,
  9186u,
  9432u,
  9254u,
  9340u,
  9142u,
  9212u,
  9254u,
  9228u,
  9347u
 };

static const UType JSum_6_11_12_6[]=
 {
  9201u,
  9234u,
  9299u,
  9499u,
  9283u,
  9278u,
  9290u,
  9276u,
  9143u,
  9390u,
  9208u
 };

static const UType JSum_6_11_12_7[]=
 {
  9201u,
  9283u,
  9143u,
  9234u,
  9278u,
  9390u,
  9299u,
  9290u,
  9208u,
  9499u,
  9276u
 };

static const UType JSum_6_11_12_8[]=
 {
  9201u,
  9290u,
  9234u,
  9276u,
  9299u,
  9143u,
  9499u,
  9390u,
  9283u,
  9208u,
  9278u
 };

static const UType JSum_6_11_12_9[]=
 {
  9438u,
  9340u,
  9347u,
  9254u,
  9228u,
  9432u,
  9254u,
  9186u,
  9212u,
  9268u,
  9142u
 };

static const PtrLen<const UType> JTable_6_11_12[]=
 {
  Range(JSum_6_11_12_1),
  Range(JSum_6_11_12_2),
  Range(JSum_6_11_12_3),
  Range(JSum_6_11_12_4),
  Range(JSum_6_11_12_5),
  Range(JSum_6_11_12_6),
  Range(JSum_6_11_12_7),
  Range(JSum_6_11_12_8),
  Range(JSum_6_11_12_9)
 };

static const TestSet::JTable JSet_6_11[]=
 {
  { 23u , Range(JTable_6_11_1) },
  { 67u , Range(JTable_6_11_2) },
  { 331u , Range(JTable_6_11_3) },
  { 463u , Range(JTable_6_11_4) },
  { 859u , Range(JTable_6_11_5) },
  { 1123u , Range(JTable_6_11_6) },
  { 1871u , Range(JTable_6_11_7) },
  { 2003u , Range(JTable_6_11_8) },
  { 2311u , Range(JTable_6_11_9) },
  { 6007u , Range(JTable_6_11_10) },
  { 72931u , Range(JTable_6_11_11) },
  { 102103u , Range(JTable_6_11_12) }
 };

static const UType JSum_6_13_1_1[]=
 {
  8u,
  6u,
  4u,
  10u,
  6u,
  5u,
  8u,
  8u,
  2u,
  4u,
  2u,
  8u,
  6u
 };

static const UType JSum_6_13_1_2[]=
 {
  8u,
  7u,
  8u,
  5u,
  5u,
  11u,
  3u,
  7u,
  7u,
  6u,
  2u,
  3u,
  5u
 };

static const UType JSum_6_13_1_3[]=
 {
  8u,
  3u,
  4u,
  3u,
  9u,
  4u,
  4u,
  7u,
  7u,
  3u,
  9u,
  7u,
  9u
 };

static const UType JSum_6_13_1_4[]=
 {
  8u,
  2u,
  7u,
  5u,
  7u,
  3u,
  7u,
  11u,
  8u,
  5u,
  6u,
  3u,
  5u
 };

static const UType JSum_6_13_1_5[]=
 {
  8u,
  8u,
  5u,
  3u,
  7u,
  2u,
  5u,
  7u,
  5u,
  11u,
  7u,
  6u,
  3u
 };

static const UType JSum_6_13_1_6[]=
 {
  8u,
  8u,
  4u,
  8u,
  5u,
  10u,
  6u,
  6u,
  2u,
  2u,
  8u,
  6u,
  4u
 };

static const UType JSum_6_13_1_7[]=
 {
  8u,
  8u,
  5u,
  3u,
  7u,
  2u,
  5u,
  7u,
  5u,
  11u,
  7u,
  6u,
  3u
 };

static const UType JSum_6_13_1_8[]=
 {
  8u,
  2u,
  7u,
  5u,
  7u,
  3u,
  7u,
  11u,
  8u,
  5u,
  6u,
  3u,
  5u
 };

static const UType JSum_6_13_1_9[]=
 {
  8u,
  3u,
  4u,
  3u,
  9u,
  4u,
  4u,
  7u,
  7u,
  3u,
  9u,
  7u,
  9u
 };

static const UType JSum_6_13_1_10[]=
 {
  8u,
  7u,
  8u,
  5u,
  5u,
  11u,
  3u,
  7u,
  7u,
  6u,
  2u,
  3u,
  5u
 };

static const UType JSum_6_13_1_11[]=
 {
  8u,
  6u,
  4u,
  10u,
  6u,
  5u,
  8u,
  8u,
  2u,
  4u,
  2u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_6_13_1[]=
 {
  Range(JSum_6_13_1_1),
  Range(JSum_6_13_1_2),
  Range(JSum_6_13_1_3),
  Range(JSum_6_13_1_4),
  Range(JSum_6_13_1_5),
  Range(JSum_6_13_1_6),
  Range(JSum_6_13_1_7),
  Range(JSum_6_13_1_8),
  Range(JSum_6_13_1_9),
  Range(JSum_6_13_1_10),
  Range(JSum_6_13_1_11)
 };

static const UType JSum_6_13_2_1[]=
 {
  8u,
  10u,
  8u,
  8u,
  10u,
  12u,
  10u,
  14u,
  12u,
  14u,
  2u,
  9u,
  12u
 };

static const UType JSum_6_13_2_2[]=
 {
  9u,
  14u,
  4u,
  13u,
  11u,
  10u,
  9u,
  12u,
  13u,
  13u,
  9u,
  7u,
  5u
 };

static const UType JSum_6_13_2_3[]=
 {
  12u,
  15u,
  8u,
  15u,
  9u,
  8u,
  8u,
  7u,
  7u,
  15u,
  9u,
  7u,
  9u
 };

static const UType JSum_6_13_2_4[]=
 {
  9u,
  9u,
  12u,
  11u,
  14u,
  7u,
  13u,
  10u,
  4u,
  5u,
  13u,
  9u,
  13u
 };

static const UType JSum_6_13_2_5[]=
 {
  9u,
  4u,
  11u,
  9u,
  13u,
  9u,
  5u,
  14u,
  13u,
  10u,
  12u,
  13u,
  7u
 };

static const UType JSum_6_13_2_6[]=
 {
  8u,
  9u,
  14u,
  14u,
  12u,
  8u,
  10u,
  12u,
  2u,
  12u,
  10u,
  10u,
  8u
 };

static const UType JSum_6_13_2_7[]=
 {
  9u,
  4u,
  11u,
  9u,
  13u,
  9u,
  5u,
  14u,
  13u,
  10u,
  12u,
  13u,
  7u
 };

static const UType JSum_6_13_2_8[]=
 {
  9u,
  9u,
  12u,
  11u,
  14u,
  7u,
  13u,
  10u,
  4u,
  5u,
  13u,
  9u,
  13u
 };

static const UType JSum_6_13_2_9[]=
 {
  12u,
  15u,
  8u,
  15u,
  9u,
  8u,
  8u,
  7u,
  7u,
  15u,
  9u,
  7u,
  9u
 };

static const UType JSum_6_13_2_10[]=
 {
  9u,
  14u,
  4u,
  13u,
  11u,
  10u,
  9u,
  12u,
  13u,
  13u,
  9u,
  7u,
  5u
 };

static const UType JSum_6_13_2_11[]=
 {
  8u,
  10u,
  8u,
  8u,
  10u,
  12u,
  10u,
  14u,
  12u,
  14u,
  2u,
  9u,
  12u
 };

static const PtrLen<const UType> JTable_6_13_2[]=
 {
  Range(JSum_6_13_2_1),
  Range(JSum_6_13_2_2),
  Range(JSum_6_13_2_3),
  Range(JSum_6_13_2_4),
  Range(JSum_6_13_2_5),
  Range(JSum_6_13_2_6),
  Range(JSum_6_13_2_7),
  Range(JSum_6_13_2_8),
  Range(JSum_6_13_2_9),
  Range(JSum_6_13_2_10),
  Range(JSum_6_13_2_11)
 };

static const UType JSum_6_13_3_1[]=
 {
  28u,
  42u,
  42u,
  30u,
  44u,
  30u,
  36u,
  32u,
  32u,
  34u,
  34u,
  33u,
  24u
 };

static const UType JSum_6_13_3_2[]=
 {
  37u,
  37u,
  39u,
  30u,
  43u,
  27u,
  33u,
  42u,
  32u,
  27u,
  24u,
  35u,
  35u
 };

static const UType JSum_6_13_3_3[]=
 {
  18u,
  31u,
  39u,
  31u,
  38u,
  39u,
  39u,
  33u,
  33u,
  31u,
  38u,
  33u,
  38u
 };

static const UType JSum_6_13_3_4[]=
 {
  37u,
  24u,
  42u,
  43u,
  37u,
  35u,
  32u,
  27u,
  39u,
  35u,
  27u,
  33u,
  30u
 };

static const UType JSum_6_13_3_5[]=
 {
  37u,
  39u,
  43u,
  33u,
  32u,
  24u,
  35u,
  37u,
  30u,
  27u,
  42u,
  27u,
  35u
 };

static const UType JSum_6_13_3_6[]=
 {
  28u,
  33u,
  34u,
  32u,
  30u,
  30u,
  42u,
  24u,
  34u,
  32u,
  36u,
  44u,
  42u
 };

static const UType JSum_6_13_3_7[]=
 {
  37u,
  39u,
  43u,
  33u,
  32u,
  24u,
  35u,
  37u,
  30u,
  27u,
  42u,
  27u,
  35u
 };

static const UType JSum_6_13_3_8[]=
 {
  37u,
  24u,
  42u,
  43u,
  37u,
  35u,
  32u,
  27u,
  39u,
  35u,
  27u,
  33u,
  30u
 };

static const UType JSum_6_13_3_9[]=
 {
  18u,
  31u,
  39u,
  31u,
  38u,
  39u,
  39u,
  33u,
  33u,
  31u,
  38u,
  33u,
  38u
 };

static const UType JSum_6_13_3_10[]=
 {
  37u,
  37u,
  39u,
  30u,
  43u,
  27u,
  33u,
  42u,
  32u,
  27u,
  24u,
  35u,
  35u
 };

static const UType JSum_6_13_3_11[]=
 {
  28u,
  42u,
  42u,
  30u,
  44u,
  30u,
  36u,
  32u,
  32u,
  34u,
  34u,
  33u,
  24u
 };

static const PtrLen<const UType> JTable_6_13_3[]=
 {
  Range(JSum_6_13_3_1),
  Range(JSum_6_13_3_2),
  Range(JSum_6_13_3_3),
  Range(JSum_6_13_3_4),
  Range(JSum_6_13_3_5),
  Range(JSum_6_13_3_6),
  Range(JSum_6_13_3_7),
  Range(JSum_6_13_3_8),
  Range(JSum_6_13_3_9),
  Range(JSum_6_13_3_10),
  Range(JSum_6_13_3_11)
 };

static const UType JSum_6_13_4_1[]=
 {
  52u,
  44u,
  46u,
  44u,
  38u,
  28u,
  42u,
  44u,
  46u,
  34u,
  42u,
  49u,
  36u
 };

static const UType JSum_6_13_4_2[]=
 {
  43u,
  51u,
  49u,
  33u,
  46u,
  31u,
  38u,
  42u,
  37u,
  47u,
  47u,
  46u,
  35u
 };

static const UType JSum_6_13_4_3[]=
 {
  56u,
  40u,
  49u,
  40u,
  37u,
  49u,
  49u,
  37u,
  37u,
  40u,
  37u,
  37u,
  37u
 };

static const UType JSum_6_13_4_4[]=
 {
  43u,
  47u,
  42u,
  46u,
  51u,
  46u,
  37u,
  31u,
  49u,
  35u,
  47u,
  38u,
  33u
 };

static const UType JSum_6_13_4_5[]=
 {
  43u,
  49u,
  46u,
  38u,
  37u,
  47u,
  35u,
  51u,
  33u,
  31u,
  42u,
  47u,
  46u
 };

static const UType JSum_6_13_4_6[]=
 {
  52u,
  49u,
  34u,
  44u,
  28u,
  44u,
  44u,
  36u,
  42u,
  46u,
  42u,
  38u,
  46u
 };

static const UType JSum_6_13_4_7[]=
 {
  43u,
  49u,
  46u,
  38u,
  37u,
  47u,
  35u,
  51u,
  33u,
  31u,
  42u,
  47u,
  46u
 };

static const UType JSum_6_13_4_8[]=
 {
  43u,
  47u,
  42u,
  46u,
  51u,
  46u,
  37u,
  31u,
  49u,
  35u,
  47u,
  38u,
  33u
 };

static const UType JSum_6_13_4_9[]=
 {
  56u,
  40u,
  49u,
  40u,
  37u,
  49u,
  49u,
  37u,
  37u,
  40u,
  37u,
  37u,
  37u
 };

static const UType JSum_6_13_4_10[]=
 {
  43u,
  51u,
  49u,
  33u,
  46u,
  31u,
  38u,
  42u,
  37u,
  47u,
  47u,
  46u,
  35u
 };

static const UType JSum_6_13_4_11[]=
 {
  52u,
  44u,
  46u,
  44u,
  38u,
  28u,
  42u,
  44u,
  46u,
  34u,
  42u,
  49u,
  36u
 };

static const PtrLen<const UType> JTable_6_13_4[]=
 {
  Range(JSum_6_13_4_1),
  Range(JSum_6_13_4_2),
  Range(JSum_6_13_4_3),
  Range(JSum_6_13_4_4),
  Range(JSum_6_13_4_5),
  Range(JSum_6_13_4_6),
  Range(JSum_6_13_4_7),
  Range(JSum_6_13_4_8),
  Range(JSum_6_13_4_9),
  Range(JSum_6_13_4_10),
  Range(JSum_6_13_4_11)
 };

static const UType JSum_6_13_5_1[]=
 {
  86u,
  72u,
  68u,
  64u,
  70u,
  60u,
  58u,
  62u,
  74u,
  60u,
  62u,
  65u,
  56u
 };

static const UType JSum_6_13_5_2[]=
 {
  62u,
  61u,
  75u,
  67u,
  61u,
  59u,
  63u,
  56u,
  71u,
  68u,
  65u,
  87u,
  62u
 };

static const UType JSum_6_13_5_3[]=
 {
  68u,
  57u,
  79u,
  57u,
  63u,
  79u,
  79u,
  64u,
  64u,
  57u,
  63u,
  64u,
  63u
 };

static const UType JSum_6_13_5_4[]=
 {
  62u,
  65u,
  56u,
  61u,
  61u,
  87u,
  71u,
  59u,
  75u,
  62u,
  68u,
  63u,
  67u
 };

static const UType JSum_6_13_5_5[]=
 {
  62u,
  75u,
  61u,
  63u,
  71u,
  65u,
  62u,
  61u,
  67u,
  59u,
  56u,
  68u,
  87u
 };

static const UType JSum_6_13_5_6[]=
 {
  86u,
  65u,
  60u,
  62u,
  60u,
  64u,
  72u,
  56u,
  62u,
  74u,
  58u,
  70u,
  68u
 };

static const UType JSum_6_13_5_7[]=
 {
  62u,
  75u,
  61u,
  63u,
  71u,
  65u,
  62u,
  61u,
  67u,
  59u,
  56u,
  68u,
  87u
 };

static const UType JSum_6_13_5_8[]=
 {
  62u,
  65u,
  56u,
  61u,
  61u,
  87u,
  71u,
  59u,
  75u,
  62u,
  68u,
  63u,
  67u
 };

static const UType JSum_6_13_5_9[]=
 {
  68u,
  57u,
  79u,
  57u,
  63u,
  79u,
  79u,
  64u,
  64u,
  57u,
  63u,
  64u,
  63u
 };

static const UType JSum_6_13_5_10[]=
 {
  62u,
  61u,
  75u,
  67u,
  61u,
  59u,
  63u,
  56u,
  71u,
  68u,
  65u,
  87u,
  62u
 };

static const UType JSum_6_13_5_11[]=
 {
  86u,
  72u,
  68u,
  64u,
  70u,
  60u,
  58u,
  62u,
  74u,
  60u,
  62u,
  65u,
  56u
 };

static const PtrLen<const UType> JTable_6_13_5[]=
 {
  Range(JSum_6_13_5_1),
  Range(JSum_6_13_5_2),
  Range(JSum_6_13_5_3),
  Range(JSum_6_13_5_4),
  Range(JSum_6_13_5_5),
  Range(JSum_6_13_5_6),
  Range(JSum_6_13_5_7),
  Range(JSum_6_13_5_8),
  Range(JSum_6_13_5_9),
  Range(JSum_6_13_5_10),
  Range(JSum_6_13_5_11)
 };

static const UType JSum_6_13_6_1[]=
 {
  74u,
  69u,
  72u,
  62u,
  54u,
  70u,
  78u,
  70u,
  76u,
  72u,
  84u,
  56u,
  72u
 };

static const UType JSum_6_13_6_2[]=
 {
  89u,
  63u,
  71u,
  66u,
  64u,
  63u,
  60u,
  79u,
  69u,
  79u,
  69u,
  63u,
  74u
 };

static const UType JSum_6_13_6_3[]=
 {
  90u,
  63u,
  67u,
  63u,
  78u,
  67u,
  67u,
  65u,
  65u,
  63u,
  78u,
  65u,
  78u
 };

static const UType JSum_6_13_6_4[]=
 {
  89u,
  69u,
  79u,
  64u,
  63u,
  63u,
  69u,
  63u,
  71u,
  74u,
  79u,
  60u,
  66u
 };

static const UType JSum_6_13_6_5[]=
 {
  89u,
  71u,
  64u,
  60u,
  69u,
  69u,
  74u,
  63u,
  66u,
  63u,
  79u,
  79u,
  63u
 };

static const UType JSum_6_13_6_6[]=
 {
  74u,
  56u,
  72u,
  70u,
  70u,
  62u,
  69u,
  72u,
  84u,
  76u,
  78u,
  54u,
  72u
 };

static const UType JSum_6_13_6_7[]=
 {
  89u,
  71u,
  64u,
  60u,
  69u,
  69u,
  74u,
  63u,
  66u,
  63u,
  79u,
  79u,
  63u
 };

static const UType JSum_6_13_6_8[]=
 {
  89u,
  69u,
  79u,
  64u,
  63u,
  63u,
  69u,
  63u,
  71u,
  74u,
  79u,
  60u,
  66u
 };

static const UType JSum_6_13_6_9[]=
 {
  90u,
  63u,
  67u,
  63u,
  78u,
  67u,
  67u,
  65u,
  65u,
  63u,
  78u,
  65u,
  78u
 };

static const UType JSum_6_13_6_10[]=
 {
  89u,
  63u,
  71u,
  66u,
  64u,
  63u,
  60u,
  79u,
  69u,
  79u,
  69u,
  63u,
  74u
 };

static const UType JSum_6_13_6_11[]=
 {
  74u,
  69u,
  72u,
  62u,
  54u,
  70u,
  78u,
  70u,
  76u,
  72u,
  84u,
  56u,
  72u
 };

static const PtrLen<const UType> JTable_6_13_6[]=
 {
  Range(JSum_6_13_6_1),
  Range(JSum_6_13_6_2),
  Range(JSum_6_13_6_3),
  Range(JSum_6_13_6_4),
  Range(JSum_6_13_6_5),
  Range(JSum_6_13_6_6),
  Range(JSum_6_13_6_7),
  Range(JSum_6_13_6_8),
  Range(JSum_6_13_6_9),
  Range(JSum_6_13_6_10),
  Range(JSum_6_13_6_11)
 };

static const UType JSum_6_13_7_1[]=
 {
  114u,
  110u,
  104u,
  92u,
  108u,
  90u,
  82u,
  116u,
  101u,
  106u,
  92u,
  104u,
  106u
 };

static const UType JSum_6_13_7_2[]=
 {
  92u,
  106u,
  86u,
  104u,
  100u,
  114u,
  114u,
  104u,
  104u,
  86u,
  114u,
  109u,
  92u
 };

static const UType JSum_6_13_7_3[]=
 {
  77u,
  94u,
  102u,
  94u,
  112u,
  102u,
  102u,
  108u,
  108u,
  94u,
  112u,
  108u,
  112u
 };

static const UType JSum_6_13_7_4[]=
 {
  92u,
  114u,
  104u,
  100u,
  106u,
  109u,
  104u,
  114u,
  86u,
  92u,
  86u,
  114u,
  104u
 };

static const UType JSum_6_13_7_5[]=
 {
  92u,
  86u,
  100u,
  114u,
  104u,
  114u,
  92u,
  106u,
  104u,
  114u,
  104u,
  86u,
  109u
 };

static const UType JSum_6_13_7_6[]=
 {
  114u,
  104u,
  106u,
  116u,
  90u,
  92u,
  110u,
  106u,
  92u,
  101u,
  82u,
  108u,
  104u
 };

static const UType JSum_6_13_7_7[]=
 {
  92u,
  86u,
  100u,
  114u,
  104u,
  114u,
  92u,
  106u,
  104u,
  114u,
  104u,
  86u,
  109u
 };

static const UType JSum_6_13_7_8[]=
 {
  92u,
  114u,
  104u,
  100u,
  106u,
  109u,
  104u,
  114u,
  86u,
  92u,
  86u,
  114u,
  104u
 };

static const UType JSum_6_13_7_9[]=
 {
  77u,
  94u,
  102u,
  94u,
  112u,
  102u,
  102u,
  108u,
  108u,
  94u,
  112u,
  108u,
  112u
 };

static const UType JSum_6_13_7_10[]=
 {
  92u,
  106u,
  86u,
  104u,
  100u,
  114u,
  114u,
  104u,
  104u,
  86u,
  114u,
  109u,
  92u
 };

static const UType JSum_6_13_7_11[]=
 {
  114u,
  110u,
  104u,
  92u,
  108u,
  90u,
  82u,
  116u,
  101u,
  106u,
  92u,
  104u,
  106u
 };

static const PtrLen<const UType> JTable_6_13_7[]=
 {
  Range(JSum_6_13_7_1),
  Range(JSum_6_13_7_2),
  Range(JSum_6_13_7_3),
  Range(JSum_6_13_7_4),
  Range(JSum_6_13_7_5),
  Range(JSum_6_13_7_6),
  Range(JSum_6_13_7_7),
  Range(JSum_6_13_7_8),
  Range(JSum_6_13_7_9),
  Range(JSum_6_13_7_10),
  Range(JSum_6_13_7_11)
 };

static const UType JSum_6_13_8_1[]=
 {
  160u,
  142u,
  152u,
  138u,
  177u,
  160u,
  154u,
  168u,
  166u,
  134u,
  148u,
  146u,
  156u
 };

static const UType JSum_6_13_8_2[]=
 {
  160u,
  146u,
  134u,
  132u,
  178u,
  152u,
  154u,
  164u,
  150u,
  164u,
  152u,
  162u,
  153u
 };

static const UType JSum_6_13_8_3[]=
 {
  129u,
  162u,
  140u,
  162u,
  156u,
  140u,
  140u,
  166u,
  166u,
  162u,
  156u,
  166u,
  156u
 };

static const UType JSum_6_13_8_4[]=
 {
  160u,
  152u,
  164u,
  178u,
  146u,
  162u,
  150u,
  152u,
  134u,
  153u,
  164u,
  154u,
  132u
 };

static const UType JSum_6_13_8_5[]=
 {
  160u,
  134u,
  178u,
  154u,
  150u,
  152u,
  153u,
  146u,
  132u,
  152u,
  164u,
  164u,
  162u
 };

static const UType JSum_6_13_8_6[]=
 {
  160u,
  146u,
  134u,
  168u,
  160u,
  138u,
  142u,
  156u,
  148u,
  166u,
  154u,
  177u,
  152u
 };

static const UType JSum_6_13_8_7[]=
 {
  160u,
  134u,
  178u,
  154u,
  150u,
  152u,
  153u,
  146u,
  132u,
  152u,
  164u,
  164u,
  162u
 };

static const UType JSum_6_13_8_8[]=
 {
  160u,
  152u,
  164u,
  178u,
  146u,
  162u,
  150u,
  152u,
  134u,
  153u,
  164u,
  154u,
  132u
 };

static const UType JSum_6_13_8_9[]=
 {
  129u,
  162u,
  140u,
  162u,
  156u,
  140u,
  140u,
  166u,
  166u,
  162u,
  156u,
  166u,
  156u
 };

static const UType JSum_6_13_8_10[]=
 {
  160u,
  146u,
  134u,
  132u,
  178u,
  152u,
  154u,
  164u,
  150u,
  164u,
  152u,
  162u,
  153u
 };

static const UType JSum_6_13_8_11[]=
 {
  160u,
  142u,
  152u,
  138u,
  177u,
  160u,
  154u,
  168u,
  166u,
  134u,
  148u,
  146u,
  156u
 };

static const PtrLen<const UType> JTable_6_13_8[]=
 {
  Range(JSum_6_13_8_1),
  Range(JSum_6_13_8_2),
  Range(JSum_6_13_8_3),
  Range(JSum_6_13_8_4),
  Range(JSum_6_13_8_5),
  Range(JSum_6_13_8_6),
  Range(JSum_6_13_8_7),
  Range(JSum_6_13_8_8),
  Range(JSum_6_13_8_9),
  Range(JSum_6_13_8_10),
  Range(JSum_6_13_8_11)
 };

static const UType JSum_6_13_9_1[]=
 {
  204u,
  190u,
  214u,
  226u,
  232u,
  204u,
  216u,
  226u,
  180u,
  212u,
  201u,
  214u,
  210u
 };

static const UType JSum_6_13_9_2[]=
 {
  204u,
  230u,
  204u,
  220u,
  225u,
  210u,
  202u,
  220u,
  202u,
  220u,
  216u,
  174u,
  202u
 };

static const UType JSum_6_13_9_3[]=
 {
  185u,
  220u,
  198u,
  220u,
  202u,
  198u,
  198u,
  228u,
  228u,
  220u,
  202u,
  228u,
  202u
 };

static const UType JSum_6_13_9_4[]=
 {
  204u,
  216u,
  220u,
  225u,
  230u,
  174u,
  202u,
  210u,
  204u,
  202u,
  220u,
  202u,
  220u
 };

static const UType JSum_6_13_9_5[]=
 {
  204u,
  204u,
  225u,
  202u,
  202u,
  216u,
  202u,
  230u,
  220u,
  210u,
  220u,
  220u,
  174u
 };

static const UType JSum_6_13_9_6[]=
 {
  204u,
  214u,
  212u,
  226u,
  204u,
  226u,
  190u,
  210u,
  201u,
  180u,
  216u,
  232u,
  214u
 };

static const UType JSum_6_13_9_7[]=
 {
  204u,
  204u,
  225u,
  202u,
  202u,
  216u,
  202u,
  230u,
  220u,
  210u,
  220u,
  220u,
  174u
 };

static const UType JSum_6_13_9_8[]=
 {
  204u,
  216u,
  220u,
  225u,
  230u,
  174u,
  202u,
  210u,
  204u,
  202u,
  220u,
  202u,
  220u
 };

static const UType JSum_6_13_9_9[]=
 {
  185u,
  220u,
  198u,
  220u,
  202u,
  198u,
  198u,
  228u,
  228u,
  220u,
  202u,
  228u,
  202u
 };

static const UType JSum_6_13_9_10[]=
 {
  204u,
  230u,
  204u,
  220u,
  225u,
  210u,
  202u,
  220u,
  202u,
  220u,
  216u,
  174u,
  202u
 };

static const UType JSum_6_13_9_11[]=
 {
  204u,
  190u,
  214u,
  226u,
  232u,
  204u,
  216u,
  226u,
  180u,
  212u,
  201u,
  214u,
  210u
 };

static const PtrLen<const UType> JTable_6_13_9[]=
 {
  Range(JSum_6_13_9_1),
  Range(JSum_6_13_9_2),
  Range(JSum_6_13_9_3),
  Range(JSum_6_13_9_4),
  Range(JSum_6_13_9_5),
  Range(JSum_6_13_9_6),
  Range(JSum_6_13_9_7),
  Range(JSum_6_13_9_8),
  Range(JSum_6_13_9_9),
  Range(JSum_6_13_9_10),
  Range(JSum_6_13_9_11)
 };

static const UType JSum_6_13_10_1[]=
 {
  478u,
  456u,
  474u,
  446u,
  500u,
  448u,
  458u,
  496u,
  478u,
  436u,
  445u,
  434u,
  456u
 };

static const UType JSum_6_13_10_2[]=
 {
  487u,
  487u,
  460u,
  463u,
  434u,
  457u,
  437u,
  467u,
  453u,
  471u,
  499u,
  426u,
  464u
 };

static const UType JSum_6_13_10_3[]=
 {
  458u,
  451u,
  478u,
  451u,
  433u,
  478u,
  478u,
  487u,
  487u,
  451u,
  433u,
  487u,
  433u
 };

static const UType JSum_6_13_10_4[]=
 {
  487u,
  499u,
  467u,
  434u,
  487u,
  426u,
  453u,
  457u,
  460u,
  464u,
  471u,
  437u,
  463u
 };

static const UType JSum_6_13_10_5[]=
 {
  487u,
  460u,
  434u,
  437u,
  453u,
  499u,
  464u,
  487u,
  463u,
  457u,
  467u,
  471u,
  426u
 };

static const UType JSum_6_13_10_6[]=
 {
  478u,
  434u,
  436u,
  496u,
  448u,
  446u,
  456u,
  456u,
  445u,
  478u,
  458u,
  500u,
  474u
 };

static const UType JSum_6_13_10_7[]=
 {
  487u,
  460u,
  434u,
  437u,
  453u,
  499u,
  464u,
  487u,
  463u,
  457u,
  467u,
  471u,
  426u
 };

static const UType JSum_6_13_10_8[]=
 {
  487u,
  499u,
  467u,
  434u,
  487u,
  426u,
  453u,
  457u,
  460u,
  464u,
  471u,
  437u,
  463u
 };

static const UType JSum_6_13_10_9[]=
 {
  458u,
  451u,
  478u,
  451u,
  433u,
  478u,
  478u,
  487u,
  487u,
  451u,
  433u,
  487u,
  433u
 };

static const UType JSum_6_13_10_10[]=
 {
  487u,
  487u,
  460u,
  463u,
  434u,
  457u,
  437u,
  467u,
  453u,
  471u,
  499u,
  426u,
  464u
 };

static const UType JSum_6_13_10_11[]=
 {
  478u,
  456u,
  474u,
  446u,
  500u,
  448u,
  458u,
  496u,
  478u,
  436u,
  445u,
  434u,
  456u
 };

static const PtrLen<const UType> JTable_6_13_10[]=
 {
  Range(JSum_6_13_10_1),
  Range(JSum_6_13_10_2),
  Range(JSum_6_13_10_3),
  Range(JSum_6_13_10_4),
  Range(JSum_6_13_10_5),
  Range(JSum_6_13_10_6),
  Range(JSum_6_13_10_7),
  Range(JSum_6_13_10_8),
  Range(JSum_6_13_10_9),
  Range(JSum_6_13_10_10),
  Range(JSum_6_13_10_11)
 };

static const UType JSum_6_13_11_1[]=
 {
  718u,
  734u,
  766u,
  720u,
  702u,
  712u,
  734u,
  656u,
  728u,
  716u,
  702u,
  713u,
  680u
 };

static const UType JSum_6_13_11_2[]=
 {
  710u,
  712u,
  728u,
  746u,
  732u,
  722u,
  704u,
  689u,
  722u,
  760u,
  654u,
  708u,
  694u
 };

static const UType JSum_6_13_11_3[]=
 {
  689u,
  730u,
  726u,
  730u,
  736u,
  726u,
  726u,
  672u,
  672u,
  730u,
  736u,
  672u,
  736u
 };

static const UType JSum_6_13_11_4[]=
 {
  710u,
  654u,
  689u,
  732u,
  712u,
  708u,
  722u,
  722u,
  728u,
  694u,
  760u,
  704u,
  746u
 };

static const UType JSum_6_13_11_5[]=
 {
  710u,
  728u,
  732u,
  704u,
  722u,
  654u,
  694u,
  712u,
  746u,
  722u,
  689u,
  760u,
  708u
 };

static const UType JSum_6_13_11_6[]=
 {
  718u,
  713u,
  716u,
  656u,
  712u,
  720u,
  734u,
  680u,
  702u,
  728u,
  734u,
  702u,
  766u
 };

static const UType JSum_6_13_11_7[]=
 {
  710u,
  728u,
  732u,
  704u,
  722u,
  654u,
  694u,
  712u,
  746u,
  722u,
  689u,
  760u,
  708u
 };

static const UType JSum_6_13_11_8[]=
 {
  710u,
  654u,
  689u,
  732u,
  712u,
  708u,
  722u,
  722u,
  728u,
  694u,
  760u,
  704u,
  746u
 };

static const UType JSum_6_13_11_9[]=
 {
  689u,
  730u,
  726u,
  730u,
  736u,
  726u,
  726u,
  672u,
  672u,
  730u,
  736u,
  672u,
  736u
 };

static const UType JSum_6_13_11_10[]=
 {
  710u,
  712u,
  728u,
  746u,
  732u,
  722u,
  704u,
  689u,
  722u,
  760u,
  654u,
  708u,
  694u
 };

static const UType JSum_6_13_11_11[]=
 {
  718u,
  734u,
  766u,
  720u,
  702u,
  712u,
  734u,
  656u,
  728u,
  716u,
  702u,
  713u,
  680u
 };

static const PtrLen<const UType> JTable_6_13_11[]=
 {
  Range(JSum_6_13_11_1),
  Range(JSum_6_13_11_2),
  Range(JSum_6_13_11_3),
  Range(JSum_6_13_11_4),
  Range(JSum_6_13_11_5),
  Range(JSum_6_13_11_6),
  Range(JSum_6_13_11_7),
  Range(JSum_6_13_11_8),
  Range(JSum_6_13_11_9),
  Range(JSum_6_13_11_10),
  Range(JSum_6_13_11_11)
 };

static const UType JSum_6_13_12_1[]=
 {
  3658u,
  3632u,
  3522u,
  3524u,
  3514u,
  3484u,
  3649u,
  3530u,
  3608u,
  3574u,
  3636u,
  3558u,
  3520u
 };

static const UType JSum_6_13_12_2[]=
 {
  3534u,
  3553u,
  3575u,
  3620u,
  3553u,
  3544u,
  3559u,
  3653u,
  3627u,
  3569u,
  3547u,
  3649u,
  3426u
 };

static const UType JSum_6_13_12_3[]=
 {
  3530u,
  3493u,
  3658u,
  3493u,
  3577u,
  3658u,
  3658u,
  3565u,
  3565u,
  3493u,
  3577u,
  3565u,
  3577u
 };

static const UType JSum_6_13_12_4[]=
 {
  3534u,
  3547u,
  3653u,
  3553u,
  3553u,
  3649u,
  3627u,
  3544u,
  3575u,
  3426u,
  3569u,
  3559u,
  3620u
 };

static const UType JSum_6_13_12_5[]=
 {
  3534u,
  3575u,
  3553u,
  3559u,
  3627u,
  3547u,
  3426u,
  3553u,
  3620u,
  3544u,
  3653u,
  3569u,
  3649u
 };

static const UType JSum_6_13_12_6[]=
 {
  3658u,
  3558u,
  3574u,
  3530u,
  3484u,
  3524u,
  3632u,
  3520u,
  3636u,
  3608u,
  3649u,
  3514u,
  3522u
 };

static const UType JSum_6_13_12_7[]=
 {
  3534u,
  3575u,
  3553u,
  3559u,
  3627u,
  3547u,
  3426u,
  3553u,
  3620u,
  3544u,
  3653u,
  3569u,
  3649u
 };

static const UType JSum_6_13_12_8[]=
 {
  3534u,
  3547u,
  3653u,
  3553u,
  3553u,
  3649u,
  3627u,
  3544u,
  3575u,
  3426u,
  3569u,
  3559u,
  3620u
 };

static const UType JSum_6_13_12_9[]=
 {
  3530u,
  3493u,
  3658u,
  3493u,
  3577u,
  3658u,
  3658u,
  3565u,
  3565u,
  3493u,
  3577u,
  3565u,
  3577u
 };

static const UType JSum_6_13_12_10[]=
 {
  3534u,
  3553u,
  3575u,
  3620u,
  3553u,
  3544u,
  3559u,
  3653u,
  3627u,
  3569u,
  3547u,
  3649u,
  3426u
 };

static const UType JSum_6_13_12_11[]=
 {
  3658u,
  3632u,
  3522u,
  3524u,
  3514u,
  3484u,
  3649u,
  3530u,
  3608u,
  3574u,
  3636u,
  3558u,
  3520u
 };

static const PtrLen<const UType> JTable_6_13_12[]=
 {
  Range(JSum_6_13_12_1),
  Range(JSum_6_13_12_2),
  Range(JSum_6_13_12_3),
  Range(JSum_6_13_12_4),
  Range(JSum_6_13_12_5),
  Range(JSum_6_13_12_6),
  Range(JSum_6_13_12_7),
  Range(JSum_6_13_12_8),
  Range(JSum_6_13_12_9),
  Range(JSum_6_13_12_10),
  Range(JSum_6_13_12_11)
 };

static const UType JSum_6_13_13_1[]=
 {
  5682u,
  5610u,
  5630u,
  5521u,
  5600u,
  5660u,
  5612u,
  5752u,
  5594u,
  5630u,
  5644u,
  5540u,
  5454u
 };

static const UType JSum_6_13_13_2[]=
 {
  5517u,
  5613u,
  5699u,
  5557u,
  5699u,
  5672u,
  5587u,
  5549u,
  5693u,
  5654u,
  5626u,
  5459u,
  5604u
 };

static const UType JSum_6_13_13_3[]=
 {
  5720u,
  5553u,
  5713u,
  5553u,
  5592u,
  5713u,
  5713u,
  5545u,
  5545u,
  5553u,
  5592u,
  5545u,
  5592u
 };

static const UType JSum_6_13_13_4[]=
 {
  5517u,
  5626u,
  5549u,
  5699u,
  5613u,
  5459u,
  5693u,
  5672u,
  5699u,
  5604u,
  5654u,
  5587u,
  5557u
 };

static const UType JSum_6_13_13_5[]=
 {
  5517u,
  5699u,
  5699u,
  5587u,
  5693u,
  5626u,
  5604u,
  5613u,
  5557u,
  5672u,
  5549u,
  5654u,
  5459u
 };

static const UType JSum_6_13_13_6[]=
 {
  5682u,
  5540u,
  5630u,
  5752u,
  5660u,
  5521u,
  5610u,
  5454u,
  5644u,
  5594u,
  5612u,
  5600u,
  5630u
 };

static const UType JSum_6_13_13_7[]=
 {
  5517u,
  5699u,
  5699u,
  5587u,
  5693u,
  5626u,
  5604u,
  5613u,
  5557u,
  5672u,
  5549u,
  5654u,
  5459u
 };

static const UType JSum_6_13_13_8[]=
 {
  5517u,
  5626u,
  5549u,
  5699u,
  5613u,
  5459u,
  5693u,
  5672u,
  5699u,
  5604u,
  5654u,
  5587u,
  5557u
 };

static const UType JSum_6_13_13_9[]=
 {
  5720u,
  5553u,
  5713u,
  5553u,
  5592u,
  5713u,
  5713u,
  5545u,
  5545u,
  5553u,
  5592u,
  5545u,
  5592u
 };

static const UType JSum_6_13_13_10[]=
 {
  5517u,
  5613u,
  5699u,
  5557u,
  5699u,
  5672u,
  5587u,
  5549u,
  5693u,
  5654u,
  5626u,
  5459u,
  5604u
 };

static const UType JSum_6_13_13_11[]=
 {
  5682u,
  5610u,
  5630u,
  5521u,
  5600u,
  5660u,
  5612u,
  5752u,
  5594u,
  5630u,
  5644u,
  5540u,
  5454u
 };

static const PtrLen<const UType> JTable_6_13_13[]=
 {
  Range(JSum_6_13_13_1),
  Range(JSum_6_13_13_2),
  Range(JSum_6_13_13_3),
  Range(JSum_6_13_13_4),
  Range(JSum_6_13_13_5),
  Range(JSum_6_13_13_6),
  Range(JSum_6_13_13_7),
  Range(JSum_6_13_13_8),
  Range(JSum_6_13_13_9),
  Range(JSum_6_13_13_10),
  Range(JSum_6_13_13_11)
 };

static const UType JSum_6_13_14_1[]=
 {
  7876u,
  7954u,
  7912u,
  7802u,
  7978u,
  7788u,
  7760u,
  7694u,
  7885u,
  7948u,
  7782u,
  7926u,
  7796u
 };

static const UType JSum_6_13_14_2[]=
 {
  7813u,
  7853u,
  7904u,
  7887u,
  7879u,
  7823u,
  7873u,
  7699u,
  7894u,
  7691u,
  7848u,
  8034u,
  7903u
 };

static const UType JSum_6_13_14_3[]=
 {
  7814u,
  7882u,
  7945u,
  7882u,
  7711u,
  7945u,
  7945u,
  7891u,
  7891u,
  7882u,
  7711u,
  7891u,
  7711u
 };

static const UType JSum_6_13_14_4[]=
 {
  7813u,
  7848u,
  7699u,
  7879u,
  7853u,
  8034u,
  7894u,
  7823u,
  7904u,
  7903u,
  7691u,
  7873u,
  7887u
 };

static const UType JSum_6_13_14_5[]=
 {
  7813u,
  7904u,
  7879u,
  7873u,
  7894u,
  7848u,
  7903u,
  7853u,
  7887u,
  7823u,
  7699u,
  7691u,
  8034u
 };

static const UType JSum_6_13_14_6[]=
 {
  7876u,
  7926u,
  7948u,
  7694u,
  7788u,
  7802u,
  7954u,
  7796u,
  7782u,
  7885u,
  7760u,
  7978u,
  7912u
 };

static const UType JSum_6_13_14_7[]=
 {
  7813u,
  7904u,
  7879u,
  7873u,
  7894u,
  7848u,
  7903u,
  7853u,
  7887u,
  7823u,
  7699u,
  7691u,
  8034u
 };

static const UType JSum_6_13_14_8[]=
 {
  7813u,
  7848u,
  7699u,
  7879u,
  7853u,
  8034u,
  7894u,
  7823u,
  7904u,
  7903u,
  7691u,
  7873u,
  7887u
 };

static const UType JSum_6_13_14_9[]=
 {
  7814u,
  7882u,
  7945u,
  7882u,
  7711u,
  7945u,
  7945u,
  7891u,
  7891u,
  7882u,
  7711u,
  7891u,
  7711u
 };

static const UType JSum_6_13_14_10[]=
 {
  7813u,
  7853u,
  7904u,
  7887u,
  7879u,
  7823u,
  7873u,
  7699u,
  7894u,
  7691u,
  7848u,
  8034u,
  7903u
 };

static const UType JSum_6_13_14_11[]=
 {
  7876u,
  7954u,
  7912u,
  7802u,
  7978u,
  7788u,
  7760u,
  7694u,
  7885u,
  7948u,
  7782u,
  7926u,
  7796u
 };

static const PtrLen<const UType> JTable_6_13_14[]=
 {
  Range(JSum_6_13_14_1),
  Range(JSum_6_13_14_2),
  Range(JSum_6_13_14_3),
  Range(JSum_6_13_14_4),
  Range(JSum_6_13_14_5),
  Range(JSum_6_13_14_6),
  Range(JSum_6_13_14_7),
  Range(JSum_6_13_14_8),
  Range(JSum_6_13_14_9),
  Range(JSum_6_13_14_10),
  Range(JSum_6_13_14_11)
 };

static const TestSet::JTable JSet_6_13[]=
 {
  { 79u , Range(JTable_6_13_1) },
  { 131u , Range(JTable_6_13_2) },
  { 443u , Range(JTable_6_13_3) },
  { 547u , Range(JTable_6_13_4) },
  { 859u , Range(JTable_6_13_5) },
  { 911u , Range(JTable_6_13_6) },
  { 1327u , Range(JTable_6_13_7) },
  { 2003u , Range(JTable_6_13_8) },
  { 2731u , Range(JTable_6_13_9) },
  { 6007u , Range(JTable_6_13_10) },
  { 9283u , Range(JTable_6_13_11) },
  { 46411u , Range(JTable_6_13_12) },
  { 72931u , Range(JTable_6_13_13) },
  { 102103u , Range(JTable_6_13_14) }
 };

static const UType JSum_6_17_1_1[]=
 {
  8u,
  8u,
  6u,
  6u,
  8u,
  10u,
  4u,
  2u,
  8u,
  0u,
  6u,
  6u,
  8u,
  6u,
  5u,
  4u,
  6u
 };

static const UType JSum_6_17_1_2[]=
 {
  9u,
  8u,
  2u,
  9u,
  7u,
  8u,
  3u,
  2u,
  3u,
  6u,
  6u,
  8u,
  5u,
  7u,
  7u,
  8u,
  3u
 };

static const UType JSum_6_17_1_3[]=
 {
  7u,
  6u,
  3u,
  6u,
  3u,
  5u,
  6u,
  12u,
  3u,
  7u,
  10u,
  7u,
  7u,
  3u,
  4u,
  6u,
  6u
 };

static const UType JSum_6_17_1_4[]=
 {
  7u,
  3u,
  7u,
  5u,
  6u,
  4u,
  10u,
  6u,
  3u,
  6u,
  7u,
  12u,
  6u,
  6u,
  7u,
  3u,
  3u
 };

static const UType JSum_6_17_1_5[]=
 {
  9u,
  7u,
  8u,
  3u,
  8u,
  2u,
  3u,
  7u,
  6u,
  2u,
  7u,
  8u,
  8u,
  5u,
  6u,
  3u,
  9u
 };

static const UType JSum_6_17_1_6[]=
 {
  7u,
  6u,
  6u,
  7u,
  7u,
  6u,
  6u,
  3u,
  12u,
  10u,
  3u,
  6u,
  3u,
  5u,
  3u,
  7u,
  4u
 };

static const UType JSum_6_17_1_7[]=
 {
  9u,
  2u,
  7u,
  3u,
  3u,
  6u,
  5u,
  7u,
  3u,
  8u,
  9u,
  8u,
  2u,
  6u,
  8u,
  7u,
  8u
 };

static const UType JSum_6_17_1_8[]=
 {
  8u,
  4u,
  6u,
  6u,
  0u,
  2u,
  10u,
  6u,
  8u,
  6u,
  5u,
  8u,
  6u,
  8u,
  4u,
  8u,
  6u
 };

static const UType JSum_6_17_1_9[]=
 {
  9u,
  2u,
  7u,
  3u,
  3u,
  6u,
  5u,
  7u,
  3u,
  8u,
  9u,
  8u,
  2u,
  6u,
  8u,
  7u,
  8u
 };

static const UType JSum_6_17_1_10[]=
 {
  7u,
  6u,
  6u,
  7u,
  7u,
  6u,
  6u,
  3u,
  12u,
  10u,
  3u,
  6u,
  3u,
  5u,
  3u,
  7u,
  4u
 };

static const UType JSum_6_17_1_11[]=
 {
  9u,
  7u,
  8u,
  3u,
  8u,
  2u,
  3u,
  7u,
  6u,
  2u,
  7u,
  8u,
  8u,
  5u,
  6u,
  3u,
  9u
 };

static const UType JSum_6_17_1_12[]=
 {
  7u,
  3u,
  7u,
  5u,
  6u,
  4u,
  10u,
  6u,
  3u,
  6u,
  7u,
  12u,
  6u,
  6u,
  7u,
  3u,
  3u
 };

static const UType JSum_6_17_1_13[]=
 {
  7u,
  6u,
  3u,
  6u,
  3u,
  5u,
  6u,
  12u,
  3u,
  7u,
  10u,
  7u,
  7u,
  3u,
  4u,
  6u,
  6u
 };

static const UType JSum_6_17_1_14[]=
 {
  9u,
  8u,
  2u,
  9u,
  7u,
  8u,
  3u,
  2u,
  3u,
  6u,
  6u,
  8u,
  5u,
  7u,
  7u,
  8u,
  3u
 };

static const UType JSum_6_17_1_15[]=
 {
  8u,
  8u,
  6u,
  6u,
  8u,
  10u,
  4u,
  2u,
  8u,
  0u,
  6u,
  6u,
  8u,
  6u,
  5u,
  4u,
  6u
 };

static const PtrLen<const UType> JTable_6_17_1[]=
 {
  Range(JSum_6_17_1_1),
  Range(JSum_6_17_1_2),
  Range(JSum_6_17_1_3),
  Range(JSum_6_17_1_4),
  Range(JSum_6_17_1_5),
  Range(JSum_6_17_1_6),
  Range(JSum_6_17_1_7),
  Range(JSum_6_17_1_8),
  Range(JSum_6_17_1_9),
  Range(JSum_6_17_1_10),
  Range(JSum_6_17_1_11),
  Range(JSum_6_17_1_12),
  Range(JSum_6_17_1_13),
  Range(JSum_6_17_1_14),
  Range(JSum_6_17_1_15)
 };

static const UType JSum_6_17_2_1[]=
 {
  16u,
  10u,
  16u,
  14u,
  21u,
  16u,
  14u,
  12u,
  10u,
  12u,
  10u,
  12u,
  20u,
  10u,
  10u,
  20u,
  14u
 };

static const UType JSum_6_17_2_2[]=
 {
  13u,
  13u,
  11u,
  14u,
  13u,
  9u,
  14u,
  12u,
  17u,
  15u,
  10u,
  17u,
  12u,
  13u,
  14u,
  26u,
  14u
 };

static const UType JSum_6_17_2_3[]=
 {
  12u,
  13u,
  16u,
  9u,
  21u,
  12u,
  8u,
  11u,
  15u,
  12u,
  15u,
  13u,
  15u,
  18u,
  22u,
  12u,
  13u
 };

static const UType JSum_6_17_2_4[]=
 {
  12u,
  18u,
  12u,
  12u,
  13u,
  22u,
  15u,
  8u,
  16u,
  12u,
  13u,
  11u,
  9u,
  13u,
  15u,
  15u,
  21u
 };

static const UType JSum_6_17_2_5[]=
 {
  13u,
  14u,
  17u,
  17u,
  9u,
  11u,
  14u,
  13u,
  10u,
  12u,
  13u,
  13u,
  26u,
  12u,
  15u,
  14u,
  14u
 };

static const UType JSum_6_17_2_6[]=
 {
  12u,
  9u,
  8u,
  12u,
  15u,
  12u,
  13u,
  21u,
  11u,
  15u,
  18u,
  13u,
  16u,
  12u,
  15u,
  13u,
  22u
 };

static const UType JSum_6_17_2_7[]=
 {
  13u,
  11u,
  13u,
  14u,
  17u,
  10u,
  12u,
  14u,
  14u,
  13u,
  14u,
  9u,
  12u,
  15u,
  17u,
  13u,
  26u
 };

static const UType JSum_6_17_2_8[]=
 {
  16u,
  20u,
  10u,
  12u,
  12u,
  12u,
  16u,
  14u,
  10u,
  14u,
  10u,
  20u,
  10u,
  10u,
  14u,
  21u,
  16u
 };

static const UType JSum_6_17_2_9[]=
 {
  13u,
  11u,
  13u,
  14u,
  17u,
  10u,
  12u,
  14u,
  14u,
  13u,
  14u,
  9u,
  12u,
  15u,
  17u,
  13u,
  26u
 };

static const UType JSum_6_17_2_10[]=
 {
  12u,
  9u,
  8u,
  12u,
  15u,
  12u,
  13u,
  21u,
  11u,
  15u,
  18u,
  13u,
  16u,
  12u,
  15u,
  13u,
  22u
 };

static const UType JSum_6_17_2_11[]=
 {
  13u,
  14u,
  17u,
  17u,
  9u,
  11u,
  14u,
  13u,
  10u,
  12u,
  13u,
  13u,
  26u,
  12u,
  15u,
  14u,
  14u
 };

static const UType JSum_6_17_2_12[]=
 {
  12u,
  18u,
  12u,
  12u,
  13u,
  22u,
  15u,
  8u,
  16u,
  12u,
  13u,
  11u,
  9u,
  13u,
  15u,
  15u,
  21u
 };

static const UType JSum_6_17_2_13[]=
 {
  12u,
  13u,
  16u,
  9u,
  21u,
  12u,
  8u,
  11u,
  15u,
  12u,
  15u,
  13u,
  15u,
  18u,
  22u,
  12u,
  13u
 };

static const UType JSum_6_17_2_14[]=
 {
  13u,
  13u,
  11u,
  14u,
  13u,
  9u,
  14u,
  12u,
  17u,
  15u,
  10u,
  17u,
  12u,
  13u,
  14u,
  26u,
  14u
 };

static const UType JSum_6_17_2_15[]=
 {
  16u,
  10u,
  16u,
  14u,
  21u,
  16u,
  14u,
  12u,
  10u,
  12u,
  10u,
  12u,
  20u,
  10u,
  10u,
  20u,
  14u
 };

static const PtrLen<const UType> JTable_6_17_2[]=
 {
  Range(JSum_6_17_2_1),
  Range(JSum_6_17_2_2),
  Range(JSum_6_17_2_3),
  Range(JSum_6_17_2_4),
  Range(JSum_6_17_2_5),
  Range(JSum_6_17_2_6),
  Range(JSum_6_17_2_7),
  Range(JSum_6_17_2_8),
  Range(JSum_6_17_2_9),
  Range(JSum_6_17_2_10),
  Range(JSum_6_17_2_11),
  Range(JSum_6_17_2_12),
  Range(JSum_6_17_2_13),
  Range(JSum_6_17_2_14),
  Range(JSum_6_17_2_15)
 };

static const UType JSum_6_17_3_1[]=
 {
  22u,
  32u,
  26u,
  34u,
  28u,
  24u,
  28u,
  30u,
  22u,
  18u,
  28u,
  28u,
  26u,
  28u,
  18u,
  17u,
  32u
 };

static const UType JSum_6_17_3_2[]=
 {
  31u,
  30u,
  26u,
  31u,
  26u,
  20u,
  27u,
  38u,
  21u,
  29u,
  21u,
  29u,
  26u,
  19u,
  22u,
  20u,
  25u
 };

static const UType JSum_6_17_3_3[]=
 {
  19u,
  29u,
  35u,
  21u,
  30u,
  21u,
  30u,
  30u,
  29u,
  30u,
  22u,
  23u,
  19u,
  22u,
  22u,
  33u,
  26u
 };

static const UType JSum_6_17_3_4[]=
 {
  19u,
  22u,
  30u,
  21u,
  29u,
  22u,
  22u,
  30u,
  35u,
  33u,
  23u,
  30u,
  21u,
  26u,
  19u,
  29u,
  30u
 };

static const UType JSum_6_17_3_5[]=
 {
  31u,
  22u,
  29u,
  21u,
  20u,
  26u,
  25u,
  19u,
  21u,
  38u,
  26u,
  30u,
  20u,
  26u,
  29u,
  27u,
  31u
 };

static const UType JSum_6_17_3_6[]=
 {
  19u,
  21u,
  30u,
  30u,
  19u,
  33u,
  29u,
  30u,
  30u,
  22u,
  22u,
  26u,
  35u,
  21u,
  29u,
  23u,
  22u
 };

static const UType JSum_6_17_3_7[]=
 {
  31u,
  26u,
  26u,
  27u,
  21u,
  21u,
  26u,
  22u,
  25u,
  30u,
  31u,
  20u,
  38u,
  29u,
  29u,
  19u,
  20u
 };

static const UType JSum_6_17_3_8[]=
 {
  22u,
  17u,
  28u,
  28u,
  18u,
  30u,
  24u,
  34u,
  32u,
  32u,
  18u,
  26u,
  28u,
  22u,
  28u,
  28u,
  26u
 };

static const UType JSum_6_17_3_9[]=
 {
  31u,
  26u,
  26u,
  27u,
  21u,
  21u,
  26u,
  22u,
  25u,
  30u,
  31u,
  20u,
  38u,
  29u,
  29u,
  19u,
  20u
 };

static const UType JSum_6_17_3_10[]=
 {
  19u,
  21u,
  30u,
  30u,
  19u,
  33u,
  29u,
  30u,
  30u,
  22u,
  22u,
  26u,
  35u,
  21u,
  29u,
  23u,
  22u
 };

static const UType JSum_6_17_3_11[]=
 {
  31u,
  22u,
  29u,
  21u,
  20u,
  26u,
  25u,
  19u,
  21u,
  38u,
  26u,
  30u,
  20u,
  26u,
  29u,
  27u,
  31u
 };

static const UType JSum_6_17_3_12[]=
 {
  19u,
  22u,
  30u,
  21u,
  29u,
  22u,
  22u,
  30u,
  35u,
  33u,
  23u,
  30u,
  21u,
  26u,
  19u,
  29u,
  30u
 };

static const UType JSum_6_17_3_13[]=
 {
  19u,
  29u,
  35u,
  21u,
  30u,
  21u,
  30u,
  30u,
  29u,
  30u,
  22u,
  23u,
  19u,
  22u,
  22u,
  33u,
  26u
 };

static const UType JSum_6_17_3_14[]=
 {
  31u,
  30u,
  26u,
  31u,
  26u,
  20u,
  27u,
  38u,
  21u,
  29u,
  21u,
  29u,
  26u,
  19u,
  22u,
  20u,
  25u
 };

static const UType JSum_6_17_3_15[]=
 {
  22u,
  32u,
  26u,
  34u,
  28u,
  24u,
  28u,
  30u,
  22u,
  18u,
  28u,
  28u,
  26u,
  28u,
  18u,
  17u,
  32u
 };

static const PtrLen<const UType> JTable_6_17_3[]=
 {
  Range(JSum_6_17_3_1),
  Range(JSum_6_17_3_2),
  Range(JSum_6_17_3_3),
  Range(JSum_6_17_3_4),
  Range(JSum_6_17_3_5),
  Range(JSum_6_17_3_6),
  Range(JSum_6_17_3_7),
  Range(JSum_6_17_3_8),
  Range(JSum_6_17_3_9),
  Range(JSum_6_17_3_10),
  Range(JSum_6_17_3_11),
  Range(JSum_6_17_3_12),
  Range(JSum_6_17_3_13),
  Range(JSum_6_17_3_14),
  Range(JSum_6_17_3_15)
 };

static const UType JSum_6_17_4_1[]=
 {
  64u,
  76u,
  68u,
  84u,
  72u,
  56u,
  62u,
  68u,
  66u,
  62u,
  54u,
  74u,
  62u,
  66u,
  60u,
  73u,
  54u
 };

static const UType JSum_6_17_4_2[]=
 {
  60u,
  72u,
  62u,
  61u,
  67u,
  60u,
  58u,
  75u,
  66u,
  77u,
  83u,
  60u,
  65u,
  54u,
  77u,
  65u,
  59u
 };

static const UType JSum_6_17_4_3[]=
 {
  68u,
  69u,
  69u,
  64u,
  45u,
  70u,
  64u,
  71u,
  61u,
  56u,
  74u,
  62u,
  69u,
  65u,
  61u,
  70u,
  83u
 };

static const UType JSum_6_17_4_4[]=
 {
  68u,
  65u,
  56u,
  70u,
  69u,
  61u,
  74u,
  64u,
  69u,
  70u,
  62u,
  71u,
  64u,
  83u,
  69u,
  61u,
  45u
 };

static const UType JSum_6_17_4_5[]=
 {
  60u,
  77u,
  60u,
  66u,
  60u,
  62u,
  59u,
  54u,
  83u,
  75u,
  67u,
  72u,
  65u,
  65u,
  77u,
  58u,
  61u
 };

static const UType JSum_6_17_4_6[]=
 {
  68u,
  64u,
  64u,
  56u,
  69u,
  70u,
  69u,
  45u,
  71u,
  74u,
  65u,
  83u,
  69u,
  70u,
  61u,
  62u,
  61u
 };

static const UType JSum_6_17_4_7[]=
 {
  60u,
  62u,
  67u,
  58u,
  66u,
  83u,
  65u,
  77u,
  59u,
  72u,
  61u,
  60u,
  75u,
  77u,
  60u,
  54u,
  65u
 };

static const UType JSum_6_17_4_8[]=
 {
  64u,
  73u,
  66u,
  74u,
  62u,
  68u,
  56u,
  84u,
  76u,
  54u,
  60u,
  62u,
  54u,
  66u,
  62u,
  72u,
  68u
 };

static const UType JSum_6_17_4_9[]=
 {
  60u,
  62u,
  67u,
  58u,
  66u,
  83u,
  65u,
  77u,
  59u,
  72u,
  61u,
  60u,
  75u,
  77u,
  60u,
  54u,
  65u
 };

static const UType JSum_6_17_4_10[]=
 {
  68u,
  64u,
  64u,
  56u,
  69u,
  70u,
  69u,
  45u,
  71u,
  74u,
  65u,
  83u,
  69u,
  70u,
  61u,
  62u,
  61u
 };

static const UType JSum_6_17_4_11[]=
 {
  60u,
  77u,
  60u,
  66u,
  60u,
  62u,
  59u,
  54u,
  83u,
  75u,
  67u,
  72u,
  65u,
  65u,
  77u,
  58u,
  61u
 };

static const UType JSum_6_17_4_12[]=
 {
  68u,
  65u,
  56u,
  70u,
  69u,
  61u,
  74u,
  64u,
  69u,
  70u,
  62u,
  71u,
  64u,
  83u,
  69u,
  61u,
  45u
 };

static const UType JSum_6_17_4_13[]=
 {
  68u,
  69u,
  69u,
  64u,
  45u,
  70u,
  64u,
  71u,
  61u,
  56u,
  74u,
  62u,
  69u,
  65u,
  61u,
  70u,
  83u
 };

static const UType JSum_6_17_4_14[]=
 {
  60u,
  72u,
  62u,
  61u,
  67u,
  60u,
  58u,
  75u,
  66u,
  77u,
  83u,
  60u,
  65u,
  54u,
  77u,
  65u,
  59u
 };

static const UType JSum_6_17_4_15[]=
 {
  64u,
  76u,
  68u,
  84u,
  72u,
  56u,
  62u,
  68u,
  66u,
  62u,
  54u,
  74u,
  62u,
  66u,
  60u,
  73u,
  54u
 };

static const PtrLen<const UType> JTable_6_17_4[]=
 {
  Range(JSum_6_17_4_1),
  Range(JSum_6_17_4_2),
  Range(JSum_6_17_4_3),
  Range(JSum_6_17_4_4),
  Range(JSum_6_17_4_5),
  Range(JSum_6_17_4_6),
  Range(JSum_6_17_4_7),
  Range(JSum_6_17_4_8),
  Range(JSum_6_17_4_9),
  Range(JSum_6_17_4_10),
  Range(JSum_6_17_4_11),
  Range(JSum_6_17_4_12),
  Range(JSum_6_17_4_13),
  Range(JSum_6_17_4_14),
  Range(JSum_6_17_4_15)
 };

static const UType JSum_6_17_5_1[]=
 {
  72u,
  66u,
  80u,
  88u,
  74u,
  68u,
  74u,
  74u,
  72u,
  82u,
  90u,
  90u,
  80u,
  69u,
  94u,
  68u,
  84u
 };

static const UType JSum_6_17_5_2[]=
 {
  76u,
  81u,
  86u,
  81u,
  72u,
  70u,
  57u,
  89u,
  77u,
  68u,
  83u,
  88u,
  80u,
  87u,
  75u,
  87u,
  68u
 };

static const UType JSum_6_17_5_3[]=
 {
  76u,
  80u,
  85u,
  82u,
  83u,
  76u,
  86u,
  93u,
  69u,
  57u,
  84u,
  64u,
  83u,
  76u,
  83u,
  77u,
  71u
 };

static const UType JSum_6_17_5_4[]=
 {
  76u,
  76u,
  57u,
  76u,
  80u,
  83u,
  84u,
  86u,
  85u,
  77u,
  64u,
  93u,
  82u,
  71u,
  83u,
  69u,
  83u
 };

static const UType JSum_6_17_5_5[]=
 {
  76u,
  75u,
  88u,
  77u,
  70u,
  86u,
  68u,
  87u,
  83u,
  89u,
  72u,
  81u,
  87u,
  80u,
  68u,
  57u,
  81u
 };

static const UType JSum_6_17_5_6[]=
 {
  76u,
  82u,
  86u,
  57u,
  83u,
  77u,
  80u,
  83u,
  93u,
  84u,
  76u,
  71u,
  85u,
  76u,
  69u,
  64u,
  83u
 };

static const UType JSum_6_17_5_7[]=
 {
  76u,
  86u,
  72u,
  57u,
  77u,
  83u,
  80u,
  75u,
  68u,
  81u,
  81u,
  70u,
  89u,
  68u,
  88u,
  87u,
  87u
 };

static const UType JSum_6_17_5_8[]=
 {
  72u,
  68u,
  69u,
  90u,
  82u,
  74u,
  68u,
  88u,
  66u,
  84u,
  94u,
  80u,
  90u,
  72u,
  74u,
  74u,
  80u
 };

static const UType JSum_6_17_5_9[]=
 {
  76u,
  86u,
  72u,
  57u,
  77u,
  83u,
  80u,
  75u,
  68u,
  81u,
  81u,
  70u,
  89u,
  68u,
  88u,
  87u,
  87u
 };

static const UType JSum_6_17_5_10[]=
 {
  76u,
  82u,
  86u,
  57u,
  83u,
  77u,
  80u,
  83u,
  93u,
  84u,
  76u,
  71u,
  85u,
  76u,
  69u,
  64u,
  83u
 };

static const UType JSum_6_17_5_11[]=
 {
  76u,
  75u,
  88u,
  77u,
  70u,
  86u,
  68u,
  87u,
  83u,
  89u,
  72u,
  81u,
  87u,
  80u,
  68u,
  57u,
  81u
 };

static const UType JSum_6_17_5_12[]=
 {
  76u,
  76u,
  57u,
  76u,
  80u,
  83u,
  84u,
  86u,
  85u,
  77u,
  64u,
  93u,
  82u,
  71u,
  83u,
  69u,
  83u
 };

static const UType JSum_6_17_5_13[]=
 {
  76u,
  80u,
  85u,
  82u,
  83u,
  76u,
  86u,
  93u,
  69u,
  57u,
  84u,
  64u,
  83u,
  76u,
  83u,
  77u,
  71u
 };

static const UType JSum_6_17_5_14[]=
 {
  76u,
  81u,
  86u,
  81u,
  72u,
  70u,
  57u,
  89u,
  77u,
  68u,
  83u,
  88u,
  80u,
  87u,
  75u,
  87u,
  68u
 };

static const UType JSum_6_17_5_15[]=
 {
  72u,
  66u,
  80u,
  88u,
  74u,
  68u,
  74u,
  74u,
  72u,
  82u,
  90u,
  90u,
  80u,
  69u,
  94u,
  68u,
  84u
 };

static const PtrLen<const UType> JTable_6_17_5[]=
 {
  Range(JSum_6_17_5_1),
  Range(JSum_6_17_5_2),
  Range(JSum_6_17_5_3),
  Range(JSum_6_17_5_4),
  Range(JSum_6_17_5_5),
  Range(JSum_6_17_5_6),
  Range(JSum_6_17_5_7),
  Range(JSum_6_17_5_8),
  Range(JSum_6_17_5_9),
  Range(JSum_6_17_5_10),
  Range(JSum_6_17_5_11),
  Range(JSum_6_17_5_12),
  Range(JSum_6_17_5_13),
  Range(JSum_6_17_5_14),
  Range(JSum_6_17_5_15)
 };

static const UType JSum_6_17_6_1[]=
 {
  118u,
  104u,
  124u,
  116u,
  110u,
  88u,
  106u,
  108u,
  94u,
  116u,
  114u,
  116u,
  110u,
  110u,
  126u,
  116u,
  93u
 };

static const UType JSum_6_17_6_2[]=
 {
  106u,
  126u,
  103u,
  128u,
  96u,
  101u,
  119u,
  121u,
  121u,
  110u,
  115u,
  110u,
  99u,
  97u,
  114u,
  106u,
  97u
 };

static const UType JSum_6_17_6_3[]=
 {
  126u,
  107u,
  93u,
  110u,
  103u,
  106u,
  109u,
  111u,
  121u,
  97u,
  106u,
  100u,
  125u,
  116u,
  130u,
  107u,
  102u
 };

static const UType JSum_6_17_6_4[]=
 {
  126u,
  116u,
  97u,
  106u,
  107u,
  130u,
  106u,
  109u,
  93u,
  107u,
  100u,
  111u,
  110u,
  102u,
  125u,
  121u,
  103u
 };

static const UType JSum_6_17_6_5[]=
 {
  106u,
  114u,
  110u,
  121u,
  101u,
  103u,
  97u,
  97u,
  115u,
  121u,
  96u,
  126u,
  106u,
  99u,
  110u,
  119u,
  128u
 };

static const UType JSum_6_17_6_6[]=
 {
  126u,
  110u,
  109u,
  97u,
  125u,
  107u,
  107u,
  103u,
  111u,
  106u,
  116u,
  102u,
  93u,
  106u,
  121u,
  100u,
  130u
 };

static const UType JSum_6_17_6_7[]=
 {
  106u,
  103u,
  96u,
  119u,
  121u,
  115u,
  99u,
  114u,
  97u,
  126u,
  128u,
  101u,
  121u,
  110u,
  110u,
  97u,
  106u
 };

static const UType JSum_6_17_6_8[]=
 {
  118u,
  116u,
  110u,
  116u,
  116u,
  108u,
  88u,
  116u,
  104u,
  93u,
  126u,
  110u,
  114u,
  94u,
  106u,
  110u,
  124u
 };

static const UType JSum_6_17_6_9[]=
 {
  106u,
  103u,
  96u,
  119u,
  121u,
  115u,
  99u,
  114u,
  97u,
  126u,
  128u,
  101u,
  121u,
  110u,
  110u,
  97u,
  106u
 };

static const UType JSum_6_17_6_10[]=
 {
  126u,
  110u,
  109u,
  97u,
  125u,
  107u,
  107u,
  103u,
  111u,
  106u,
  116u,
  102u,
  93u,
  106u,
  121u,
  100u,
  130u
 };

static const UType JSum_6_17_6_11[]=
 {
  106u,
  114u,
  110u,
  121u,
  101u,
  103u,
  97u,
  97u,
  115u,
  121u,
  96u,
  126u,
  106u,
  99u,
  110u,
  119u,
  128u
 };

static const UType JSum_6_17_6_12[]=
 {
  126u,
  116u,
  97u,
  106u,
  107u,
  130u,
  106u,
  109u,
  93u,
  107u,
  100u,
  111u,
  110u,
  102u,
  125u,
  121u,
  103u
 };

static const UType JSum_6_17_6_13[]=
 {
  126u,
  107u,
  93u,
  110u,
  103u,
  106u,
  109u,
  111u,
  121u,
  97u,
  106u,
  100u,
  125u,
  116u,
  130u,
  107u,
  102u
 };

static const UType JSum_6_17_6_14[]=
 {
  106u,
  126u,
  103u,
  128u,
  96u,
  101u,
  119u,
  121u,
  121u,
  110u,
  115u,
  110u,
  99u,
  97u,
  114u,
  106u,
  97u
 };

static const UType JSum_6_17_6_15[]=
 {
  118u,
  104u,
  124u,
  116u,
  110u,
  88u,
  106u,
  108u,
  94u,
  116u,
  114u,
  116u,
  110u,
  110u,
  126u,
  116u,
  93u
 };

static const PtrLen<const UType> JTable_6_17_6[]=
 {
  Range(JSum_6_17_6_1),
  Range(JSum_6_17_6_2),
  Range(JSum_6_17_6_3),
  Range(JSum_6_17_6_4),
  Range(JSum_6_17_6_5),
  Range(JSum_6_17_6_6),
  Range(JSum_6_17_6_7),
  Range(JSum_6_17_6_8),
  Range(JSum_6_17_6_9),
  Range(JSum_6_17_6_10),
  Range(JSum_6_17_6_11),
  Range(JSum_6_17_6_12),
  Range(JSum_6_17_6_13),
  Range(JSum_6_17_6_14),
  Range(JSum_6_17_6_15)
 };

static const UType JSum_6_17_7_1[]=
 {
  206u,
  202u,
  222u,
  168u,
  216u,
  210u,
  196u,
  206u,
  220u,
  226u,
  226u,
  208u,
  200u,
  204u,
  222u,
  225u,
  212u
 };

static const UType JSum_6_17_7_2[]=
 {
  198u,
  201u,
  236u,
  190u,
  220u,
  190u,
  190u,
  224u,
  232u,
  216u,
  210u,
  222u,
  222u,
  208u,
  200u,
  206u,
  204u
 };

static const UType JSum_6_17_7_3[]=
 {
  212u,
  238u,
  208u,
  206u,
  204u,
  218u,
  200u,
  212u,
  202u,
  196u,
  217u,
  230u,
  176u,
  202u,
  202u,
  220u,
  226u
 };

static const UType JSum_6_17_7_4[]=
 {
  212u,
  202u,
  196u,
  218u,
  238u,
  202u,
  217u,
  200u,
  208u,
  220u,
  230u,
  212u,
  206u,
  226u,
  176u,
  202u,
  204u
 };

static const UType JSum_6_17_7_5[]=
 {
  198u,
  200u,
  222u,
  232u,
  190u,
  236u,
  204u,
  208u,
  210u,
  224u,
  220u,
  201u,
  206u,
  222u,
  216u,
  190u,
  190u
 };

static const UType JSum_6_17_7_6[]=
 {
  212u,
  206u,
  200u,
  196u,
  176u,
  220u,
  238u,
  204u,
  212u,
  217u,
  202u,
  226u,
  208u,
  218u,
  202u,
  230u,
  202u
 };

static const UType JSum_6_17_7_7[]=
 {
  198u,
  236u,
  220u,
  190u,
  232u,
  210u,
  222u,
  200u,
  204u,
  201u,
  190u,
  190u,
  224u,
  216u,
  222u,
  208u,
  206u
 };

static const UType JSum_6_17_7_8[]=
 {
  206u,
  225u,
  204u,
  208u,
  226u,
  206u,
  210u,
  168u,
  202u,
  212u,
  222u,
  200u,
  226u,
  220u,
  196u,
  216u,
  222u
 };

static const UType JSum_6_17_7_9[]=
 {
  198u,
  236u,
  220u,
  190u,
  232u,
  210u,
  222u,
  200u,
  204u,
  201u,
  190u,
  190u,
  224u,
  216u,
  222u,
  208u,
  206u
 };

static const UType JSum_6_17_7_10[]=
 {
  212u,
  206u,
  200u,
  196u,
  176u,
  220u,
  238u,
  204u,
  212u,
  217u,
  202u,
  226u,
  208u,
  218u,
  202u,
  230u,
  202u
 };

static const UType JSum_6_17_7_11[]=
 {
  198u,
  200u,
  222u,
  232u,
  190u,
  236u,
  204u,
  208u,
  210u,
  224u,
  220u,
  201u,
  206u,
  222u,
  216u,
  190u,
  190u
 };

static const UType JSum_6_17_7_12[]=
 {
  212u,
  202u,
  196u,
  218u,
  238u,
  202u,
  217u,
  200u,
  208u,
  220u,
  230u,
  212u,
  206u,
  226u,
  176u,
  202u,
  204u
 };

static const UType JSum_6_17_7_13[]=
 {
  212u,
  238u,
  208u,
  206u,
  204u,
  218u,
  200u,
  212u,
  202u,
  196u,
  217u,
  230u,
  176u,
  202u,
  202u,
  220u,
  226u
 };

static const UType JSum_6_17_7_14[]=
 {
  198u,
  201u,
  236u,
  190u,
  220u,
  190u,
  190u,
  224u,
  232u,
  216u,
  210u,
  222u,
  222u,
  208u,
  200u,
  206u,
  204u
 };

static const UType JSum_6_17_7_15[]=
 {
  206u,
  202u,
  222u,
  168u,
  216u,
  210u,
  196u,
  206u,
  220u,
  226u,
  226u,
  208u,
  200u,
  204u,
  222u,
  225u,
  212u
 };

static const PtrLen<const UType> JTable_6_17_7[]=
 {
  Range(JSum_6_17_7_1),
  Range(JSum_6_17_7_2),
  Range(JSum_6_17_7_3),
  Range(JSum_6_17_7_4),
  Range(JSum_6_17_7_5),
  Range(JSum_6_17_7_6),
  Range(JSum_6_17_7_7),
  Range(JSum_6_17_7_8),
  Range(JSum_6_17_7_9),
  Range(JSum_6_17_7_10),
  Range(JSum_6_17_7_11),
  Range(JSum_6_17_7_12),
  Range(JSum_6_17_7_13),
  Range(JSum_6_17_7_14),
  Range(JSum_6_17_7_15)
 };

static const UType JSum_6_17_8_1[]=
 {
  552u,
  530u,
  548u,
  546u,
  570u,
  532u,
  518u,
  524u,
  538u,
  524u,
  536u,
  618u,
  532u,
  554u,
  544u,
  553u,
  562u
 };

static const UType JSum_6_17_8_2[]=
 {
  562u,
  540u,
  566u,
  539u,
  535u,
  551u,
  554u,
  505u,
  516u,
  531u,
  557u,
  566u,
  585u,
  526u,
  538u,
  589u,
  521u
 };

static const UType JSum_6_17_8_3[]=
 {
  510u,
  557u,
  529u,
  532u,
  583u,
  572u,
  547u,
  581u,
  519u,
  560u,
  546u,
  546u,
  503u,
  529u,
  566u,
  556u,
  545u
 };

static const UType JSum_6_17_8_4[]=
 {
  510u,
  529u,
  560u,
  572u,
  557u,
  566u,
  546u,
  547u,
  529u,
  556u,
  546u,
  581u,
  532u,
  545u,
  503u,
  519u,
  583u
 };

static const UType JSum_6_17_8_5[]=
 {
  562u,
  538u,
  566u,
  516u,
  551u,
  566u,
  521u,
  526u,
  557u,
  505u,
  535u,
  540u,
  589u,
  585u,
  531u,
  554u,
  539u
 };

static const UType JSum_6_17_8_6[]=
 {
  510u,
  532u,
  547u,
  560u,
  503u,
  556u,
  557u,
  583u,
  581u,
  546u,
  529u,
  545u,
  529u,
  572u,
  519u,
  546u,
  566u
 };

static const UType JSum_6_17_8_7[]=
 {
  562u,
  566u,
  535u,
  554u,
  516u,
  557u,
  585u,
  538u,
  521u,
  540u,
  539u,
  551u,
  505u,
  531u,
  566u,
  526u,
  589u
 };

static const UType JSum_6_17_8_8[]=
 {
  552u,
  553u,
  554u,
  618u,
  524u,
  524u,
  532u,
  546u,
  530u,
  562u,
  544u,
  532u,
  536u,
  538u,
  518u,
  570u,
  548u
 };

static const UType JSum_6_17_8_9[]=
 {
  562u,
  566u,
  535u,
  554u,
  516u,
  557u,
  585u,
  538u,
  521u,
  540u,
  539u,
  551u,
  505u,
  531u,
  566u,
  526u,
  589u
 };

static const UType JSum_6_17_8_10[]=
 {
  510u,
  532u,
  547u,
  560u,
  503u,
  556u,
  557u,
  583u,
  581u,
  546u,
  529u,
  545u,
  529u,
  572u,
  519u,
  546u,
  566u
 };

static const UType JSum_6_17_8_11[]=
 {
  562u,
  538u,
  566u,
  516u,
  551u,
  566u,
  521u,
  526u,
  557u,
  505u,
  535u,
  540u,
  589u,
  585u,
  531u,
  554u,
  539u
 };

static const UType JSum_6_17_8_12[]=
 {
  510u,
  529u,
  560u,
  572u,
  557u,
  566u,
  546u,
  547u,
  529u,
  556u,
  546u,
  581u,
  532u,
  545u,
  503u,
  519u,
  583u
 };

static const UType JSum_6_17_8_13[]=
 {
  510u,
  557u,
  529u,
  532u,
  583u,
  572u,
  547u,
  581u,
  519u,
  560u,
  546u,
  546u,
  503u,
  529u,
  566u,
  556u,
  545u
 };

static const UType JSum_6_17_8_14[]=
 {
  562u,
  540u,
  566u,
  539u,
  535u,
  551u,
  554u,
  505u,
  516u,
  531u,
  557u,
  566u,
  585u,
  526u,
  538u,
  589u,
  521u
 };

static const UType JSum_6_17_8_15[]=
 {
  552u,
  530u,
  548u,
  546u,
  570u,
  532u,
  518u,
  524u,
  538u,
  524u,
  536u,
  618u,
  532u,
  554u,
  544u,
  553u,
  562u
 };

static const PtrLen<const UType> JTable_6_17_8[]=
 {
  Range(JSum_6_17_8_1),
  Range(JSum_6_17_8_2),
  Range(JSum_6_17_8_3),
  Range(JSum_6_17_8_4),
  Range(JSum_6_17_8_5),
  Range(JSum_6_17_8_6),
  Range(JSum_6_17_8_7),
  Range(JSum_6_17_8_8),
  Range(JSum_6_17_8_9),
  Range(JSum_6_17_8_10),
  Range(JSum_6_17_8_11),
  Range(JSum_6_17_8_12),
  Range(JSum_6_17_8_13),
  Range(JSum_6_17_8_14),
  Range(JSum_6_17_8_15)
 };

static const UType JSum_6_17_9_1[]=
 {
  2698u,
  2704u,
  2638u,
  2748u,
  2720u,
  2704u,
  2806u,
  2718u,
  2790u,
  2760u,
  2774u,
  2692u,
  2774u,
  2678u,
  2641u,
  2764u,
  2800u
 };

static const UType JSum_6_17_9_2[]=
 {
  2746u,
  2708u,
  2738u,
  2752u,
  2786u,
  2748u,
  2742u,
  2688u,
  2770u,
  2734u,
  2681u,
  2580u,
  2764u,
  2746u,
  2704u,
  2818u,
  2704u
 };

static const UType JSum_6_17_9_3[]=
 {
  2672u,
  2778u,
  2724u,
  2810u,
  2698u,
  2702u,
  2776u,
  2766u,
  2700u,
  2804u,
  2752u,
  2682u,
  2624u,
  2714u,
  2676u,
  2777u,
  2754u
 };

static const UType JSum_6_17_9_4[]=
 {
  2672u,
  2714u,
  2804u,
  2702u,
  2778u,
  2676u,
  2752u,
  2776u,
  2724u,
  2777u,
  2682u,
  2766u,
  2810u,
  2754u,
  2624u,
  2700u,
  2698u
 };

static const UType JSum_6_17_9_5[]=
 {
  2746u,
  2704u,
  2580u,
  2770u,
  2748u,
  2738u,
  2704u,
  2746u,
  2681u,
  2688u,
  2786u,
  2708u,
  2818u,
  2764u,
  2734u,
  2742u,
  2752u
 };

static const UType JSum_6_17_9_6[]=
 {
  2672u,
  2810u,
  2776u,
  2804u,
  2624u,
  2777u,
  2778u,
  2698u,
  2766u,
  2752u,
  2714u,
  2754u,
  2724u,
  2702u,
  2700u,
  2682u,
  2676u
 };

static const UType JSum_6_17_9_7[]=
 {
  2746u,
  2738u,
  2786u,
  2742u,
  2770u,
  2681u,
  2764u,
  2704u,
  2704u,
  2708u,
  2752u,
  2748u,
  2688u,
  2734u,
  2580u,
  2746u,
  2818u
 };

static const UType JSum_6_17_9_8[]=
 {
  2698u,
  2764u,
  2678u,
  2692u,
  2760u,
  2718u,
  2704u,
  2748u,
  2704u,
  2800u,
  2641u,
  2774u,
  2774u,
  2790u,
  2806u,
  2720u,
  2638u
 };

static const UType JSum_6_17_9_9[]=
 {
  2746u,
  2738u,
  2786u,
  2742u,
  2770u,
  2681u,
  2764u,
  2704u,
  2704u,
  2708u,
  2752u,
  2748u,
  2688u,
  2734u,
  2580u,
  2746u,
  2818u
 };

static const UType JSum_6_17_9_10[]=
 {
  2672u,
  2810u,
  2776u,
  2804u,
  2624u,
  2777u,
  2778u,
  2698u,
  2766u,
  2752u,
  2714u,
  2754u,
  2724u,
  2702u,
  2700u,
  2682u,
  2676u
 };

static const UType JSum_6_17_9_11[]=
 {
  2746u,
  2704u,
  2580u,
  2770u,
  2748u,
  2738u,
  2704u,
  2746u,
  2681u,
  2688u,
  2786u,
  2708u,
  2818u,
  2764u,
  2734u,
  2742u,
  2752u
 };

static const UType JSum_6_17_9_12[]=
 {
  2672u,
  2714u,
  2804u,
  2702u,
  2778u,
  2676u,
  2752u,
  2776u,
  2724u,
  2777u,
  2682u,
  2766u,
  2810u,
  2754u,
  2624u,
  2700u,
  2698u
 };

static const UType JSum_6_17_9_13[]=
 {
  2672u,
  2778u,
  2724u,
  2810u,
  2698u,
  2702u,
  2776u,
  2766u,
  2700u,
  2804u,
  2752u,
  2682u,
  2624u,
  2714u,
  2676u,
  2777u,
  2754u
 };

static const UType JSum_6_17_9_14[]=
 {
  2746u,
  2708u,
  2738u,
  2752u,
  2786u,
  2748u,
  2742u,
  2688u,
  2770u,
  2734u,
  2681u,
  2580u,
  2764u,
  2746u,
  2704u,
  2818u,
  2704u
 };

static const UType JSum_6_17_9_15[]=
 {
  2698u,
  2704u,
  2638u,
  2748u,
  2720u,
  2704u,
  2806u,
  2718u,
  2790u,
  2760u,
  2774u,
  2692u,
  2774u,
  2678u,
  2641u,
  2764u,
  2800u
 };

static const PtrLen<const UType> JTable_6_17_9[]=
 {
  Range(JSum_6_17_9_1),
  Range(JSum_6_17_9_2),
  Range(JSum_6_17_9_3),
  Range(JSum_6_17_9_4),
  Range(JSum_6_17_9_5),
  Range(JSum_6_17_9_6),
  Range(JSum_6_17_9_7),
  Range(JSum_6_17_9_8),
  Range(JSum_6_17_9_9),
  Range(JSum_6_17_9_10),
  Range(JSum_6_17_9_11),
  Range(JSum_6_17_9_12),
  Range(JSum_6_17_9_13),
  Range(JSum_6_17_9_14),
  Range(JSum_6_17_9_15)
 };

static const UType JSum_6_17_10_1[]=
 {
  4196u,
  4346u,
  4344u,
  4268u,
  4218u,
  4282u,
  4230u,
  4380u,
  4276u,
  4428u,
  4314u,
  4286u,
  4328u,
  4214u,
  4288u,
  4329u,
  4202u
 };

static const UType JSum_6_17_10_2[]=
 {
  4296u,
  4192u,
  4302u,
  4350u,
  4363u,
  4155u,
  4271u,
  4284u,
  4166u,
  4325u,
  4283u,
  4368u,
  4303u,
  4301u,
  4349u,
  4355u,
  4266u
 };

static const UType JSum_6_17_10_3[]=
 {
  4336u,
  4329u,
  4387u,
  4132u,
  4246u,
  4277u,
  4263u,
  4215u,
  4304u,
  4310u,
  4318u,
  4272u,
  4362u,
  4315u,
  4299u,
  4197u,
  4367u
 };

static const UType JSum_6_17_10_4[]=
 {
  4336u,
  4315u,
  4310u,
  4277u,
  4329u,
  4299u,
  4318u,
  4263u,
  4387u,
  4197u,
  4272u,
  4215u,
  4132u,
  4367u,
  4362u,
  4304u,
  4246u
 };

static const UType JSum_6_17_10_5[]=
 {
  4296u,
  4349u,
  4368u,
  4166u,
  4155u,
  4302u,
  4266u,
  4301u,
  4283u,
  4284u,
  4363u,
  4192u,
  4355u,
  4303u,
  4325u,
  4271u,
  4350u
 };

static const UType JSum_6_17_10_6[]=
 {
  4336u,
  4132u,
  4263u,
  4310u,
  4362u,
  4197u,
  4329u,
  4246u,
  4215u,
  4318u,
  4315u,
  4367u,
  4387u,
  4277u,
  4304u,
  4272u,
  4299u
 };

static const UType JSum_6_17_10_7[]=
 {
  4296u,
  4302u,
  4363u,
  4271u,
  4166u,
  4283u,
  4303u,
  4349u,
  4266u,
  4192u,
  4350u,
  4155u,
  4284u,
  4325u,
  4368u,
  4301u,
  4355u
 };

static const UType JSum_6_17_10_8[]=
 {
  4196u,
  4329u,
  4214u,
  4286u,
  4428u,
  4380u,
  4282u,
  4268u,
  4346u,
  4202u,
  4288u,
  4328u,
  4314u,
  4276u,
  4230u,
  4218u,
  4344u
 };

static const UType JSum_6_17_10_9[]=
 {
  4296u,
  4302u,
  4363u,
  4271u,
  4166u,
  4283u,
  4303u,
  4349u,
  4266u,
  4192u,
  4350u,
  4155u,
  4284u,
  4325u,
  4368u,
  4301u,
  4355u
 };

static const UType JSum_6_17_10_10[]=
 {
  4336u,
  4132u,
  4263u,
  4310u,
  4362u,
  4197u,
  4329u,
  4246u,
  4215u,
  4318u,
  4315u,
  4367u,
  4387u,
  4277u,
  4304u,
  4272u,
  4299u
 };

static const UType JSum_6_17_10_11[]=
 {
  4296u,
  4349u,
  4368u,
  4166u,
  4155u,
  4302u,
  4266u,
  4301u,
  4283u,
  4284u,
  4363u,
  4192u,
  4355u,
  4303u,
  4325u,
  4271u,
  4350u
 };

static const UType JSum_6_17_10_12[]=
 {
  4336u,
  4315u,
  4310u,
  4277u,
  4329u,
  4299u,
  4318u,
  4263u,
  4387u,
  4197u,
  4272u,
  4215u,
  4132u,
  4367u,
  4362u,
  4304u,
  4246u
 };

static const UType JSum_6_17_10_13[]=
 {
  4336u,
  4329u,
  4387u,
  4132u,
  4246u,
  4277u,
  4263u,
  4215u,
  4304u,
  4310u,
  4318u,
  4272u,
  4362u,
  4315u,
  4299u,
  4197u,
  4367u
 };

static const UType JSum_6_17_10_14[]=
 {
  4296u,
  4192u,
  4302u,
  4350u,
  4363u,
  4155u,
  4271u,
  4284u,
  4166u,
  4325u,
  4283u,
  4368u,
  4303u,
  4301u,
  4349u,
  4355u,
  4266u
 };

static const UType JSum_6_17_10_15[]=
 {
  4196u,
  4346u,
  4344u,
  4268u,
  4218u,
  4282u,
  4230u,
  4380u,
  4276u,
  4428u,
  4314u,
  4286u,
  4328u,
  4214u,
  4288u,
  4329u,
  4202u
 };

static const PtrLen<const UType> JTable_6_17_10[]=
 {
  Range(JSum_6_17_10_1),
  Range(JSum_6_17_10_2),
  Range(JSum_6_17_10_3),
  Range(JSum_6_17_10_4),
  Range(JSum_6_17_10_5),
  Range(JSum_6_17_10_6),
  Range(JSum_6_17_10_7),
  Range(JSum_6_17_10_8),
  Range(JSum_6_17_10_9),
  Range(JSum_6_17_10_10),
  Range(JSum_6_17_10_11),
  Range(JSum_6_17_10_12),
  Range(JSum_6_17_10_13),
  Range(JSum_6_17_10_14),
  Range(JSum_6_17_10_15)
 };

static const UType JSum_6_17_11_1[]=
 {
  5926u,
  6228u,
  6013u,
  6042u,
  6032u,
  5976u,
  5962u,
  6072u,
  6022u,
  6032u,
  6038u,
  5972u,
  5854u,
  6008u,
  6010u,
  5948u,
  5966u
 };

static const UType JSum_6_17_11_2[]=
 {
  5889u,
  6061u,
  5889u,
  6013u,
  6086u,
  5936u,
  5959u,
  6020u,
  6004u,
  5939u,
  6122u,
  6152u,
  6067u,
  5973u,
  5956u,
  5967u,
  6068u
 };

static const UType JSum_6_17_11_3[]=
 {
  6035u,
  6040u,
  5980u,
  5893u,
  5941u,
  6003u,
  5997u,
  5884u,
  6095u,
  6066u,
  5987u,
  6079u,
  6098u,
  5976u,
  6007u,
  5878u,
  6142u
 };

static const UType JSum_6_17_11_4[]=
 {
  6035u,
  5976u,
  6066u,
  6003u,
  6040u,
  6007u,
  5987u,
  5997u,
  5980u,
  5878u,
  6079u,
  5884u,
  5893u,
  6142u,
  6098u,
  6095u,
  5941u
 };

static const UType JSum_6_17_11_5[]=
 {
  5889u,
  5956u,
  6152u,
  6004u,
  5936u,
  5889u,
  6068u,
  5973u,
  6122u,
  6020u,
  6086u,
  6061u,
  5967u,
  6067u,
  5939u,
  5959u,
  6013u
 };

static const UType JSum_6_17_11_6[]=
 {
  6035u,
  5893u,
  5997u,
  6066u,
  6098u,
  5878u,
  6040u,
  5941u,
  5884u,
  5987u,
  5976u,
  6142u,
  5980u,
  6003u,
  6095u,
  6079u,
  6007u
 };

static const UType JSum_6_17_11_7[]=
 {
  5889u,
  5889u,
  6086u,
  5959u,
  6004u,
  6122u,
  6067u,
  5956u,
  6068u,
  6061u,
  6013u,
  5936u,
  6020u,
  5939u,
  6152u,
  5973u,
  5967u
 };

static const UType JSum_6_17_11_8[]=
 {
  5926u,
  5948u,
  6008u,
  5972u,
  6032u,
  6072u,
  5976u,
  6042u,
  6228u,
  5966u,
  6010u,
  5854u,
  6038u,
  6022u,
  5962u,
  6032u,
  6013u
 };

static const UType JSum_6_17_11_9[]=
 {
  5889u,
  5889u,
  6086u,
  5959u,
  6004u,
  6122u,
  6067u,
  5956u,
  6068u,
  6061u,
  6013u,
  5936u,
  6020u,
  5939u,
  6152u,
  5973u,
  5967u
 };

static const UType JSum_6_17_11_10[]=
 {
  6035u,
  5893u,
  5997u,
  6066u,
  6098u,
  5878u,
  6040u,
  5941u,
  5884u,
  5987u,
  5976u,
  6142u,
  5980u,
  6003u,
  6095u,
  6079u,
  6007u
 };

static const UType JSum_6_17_11_11[]=
 {
  5889u,
  5956u,
  6152u,
  6004u,
  5936u,
  5889u,
  6068u,
  5973u,
  6122u,
  6020u,
  6086u,
  6061u,
  5967u,
  6067u,
  5939u,
  5959u,
  6013u
 };

static const UType JSum_6_17_11_12[]=
 {
  6035u,
  5976u,
  6066u,
  6003u,
  6040u,
  6007u,
  5987u,
  5997u,
  5980u,
  5878u,
  6079u,
  5884u,
  5893u,
  6142u,
  6098u,
  6095u,
  5941u
 };

static const UType JSum_6_17_11_13[]=
 {
  6035u,
  6040u,
  5980u,
  5893u,
  5941u,
  6003u,
  5997u,
  5884u,
  6095u,
  6066u,
  5987u,
  6079u,
  6098u,
  5976u,
  6007u,
  5878u,
  6142u
 };

static const UType JSum_6_17_11_14[]=
 {
  5889u,
  6061u,
  5889u,
  6013u,
  6086u,
  5936u,
  5959u,
  6020u,
  6004u,
  5939u,
  6122u,
  6152u,
  6067u,
  5973u,
  5956u,
  5967u,
  6068u
 };

static const UType JSum_6_17_11_15[]=
 {
  5926u,
  6228u,
  6013u,
  6042u,
  6032u,
  5976u,
  5962u,
  6072u,
  6022u,
  6032u,
  6038u,
  5972u,
  5854u,
  6008u,
  6010u,
  5948u,
  5966u
 };

static const PtrLen<const UType> JTable_6_17_11[]=
 {
  Range(JSum_6_17_11_1),
  Range(JSum_6_17_11_2),
  Range(JSum_6_17_11_3),
  Range(JSum_6_17_11_4),
  Range(JSum_6_17_11_5),
  Range(JSum_6_17_11_6),
  Range(JSum_6_17_11_7),
  Range(JSum_6_17_11_8),
  Range(JSum_6_17_11_9),
  Range(JSum_6_17_11_10),
  Range(JSum_6_17_11_11),
  Range(JSum_6_17_11_12),
  Range(JSum_6_17_11_13),
  Range(JSum_6_17_11_14),
  Range(JSum_6_17_11_15)
 };

static const TestSet::JTable JSet_6_17[]=
 {
  { 103u , Range(JTable_6_17_1) },
  { 239u , Range(JTable_6_17_2) },
  { 443u , Range(JTable_6_17_3) },
  { 1123u , Range(JTable_6_17_4) },
  { 1327u , Range(JTable_6_17_5) },
  { 1871u , Range(JTable_6_17_6) },
  { 3571u , Range(JTable_6_17_7) },
  { 9283u , Range(JTable_6_17_8) },
  { 46411u , Range(JTable_6_17_9) },
  { 72931u , Range(JTable_6_17_10) },
  { 102103u , Range(JTable_6_17_11) }
 };

static const TestSet PSet6[]=
 {
  { 2u , Range(JSet_6_2) },
  { 3u , Range(JSet_6_3) },
  { 5u , Range(JSet_6_5) },
  { 7u , Range(JSet_6_7) },
  { 11u , Range(JSet_6_11) },
  { 13u , Range(JSet_6_13) },
  { 17u , Range(JSet_6_17) }
 };

static const UType QSet6[]=
 {
  3u /* gen = 2 */,
  7u /* gen = 3 */,
  11u /* gen = 2 */,
  23u /* gen = 5 */,
  31u /* gen = 3 */,
  43u /* gen = 3 */,
  67u /* gen = 2 */,
  71u /* gen = 7 */,
  79u /* gen = 3 */,
  103u /* gen = 5 */,
  131u /* gen = 2 */,
  211u /* gen = 2 */,
  239u /* gen = 7 */,
  331u /* gen = 3 */,
  443u /* gen = 2 */,
  463u /* gen = 3 */,
  547u /* gen = 2 */,
  859u /* gen = 2 */,
  911u /* gen = 17 */,
  1123u /* gen = 2 */,
  1327u /* gen = 3 */,
  1871u /* gen = 14 */,
  2003u /* gen = 5 */,
  2311u /* gen = 3 */,
  2731u /* gen = 3 */,
  3571u /* gen = 2 */,
  6007u /* gen = 3 */,
  9283u /* gen = 2 */,
  46411u /* gen = 3 */,
  72931u /* gen = 10 */,
  102103u /* gen = 5 */
 };

static const uint8 P6[]=
 {
  0x2E, 0xCA, 0x07, 0x00
 };

static const uint8 Q6[]=
 {
  0x66, 0xAD, 0x1A, 0x46,  0xD3, 0x4F, 0x6D, 0xDC,  0x38, 0xBB, 0xDC, 0x21,  0x2E, 0x89, 0x1A, 0x8B,
  0xF5, 0x6F, 0x56, 0xE9,  0x07, 0x3F, 0x3A, 0x88,  0xC7, 0x98, 0x24, 0x30,  0x57, 0x8F, 0x3E, 0xEC,
  0x6E, 0xA5, 0x21, 0x00
 };

/* Data 7 */

static const TestSet::JTable JSet_7_2[]=
 {
  { 3u , Empty },
  { 7u , Empty },
  { 11u , Empty },
  { 23u , Empty },
  { 31u , Empty },
  { 43u , Empty },
  { 67u , Empty },
  { 71u , Empty },
  { 79u , Empty },
  { 103u , Empty },
  { 131u , Empty },
  { 191u , Empty },
  { 211u , Empty },
  { 239u , Empty },
  { 331u , Empty },
  { 419u , Empty },
  { 443u , Empty },
  { 463u , Empty },
  { 547u , Empty },
  { 571u , Empty },
  { 647u , Empty },
  { 859u , Empty },
  { 911u , Empty },
  { 1123u , Empty },
  { 1327u , Empty },
  { 1483u , Empty },
  { 1871u , Empty },
  { 2003u , Empty },
  { 2311u , Empty },
  { 2731u , Empty },
  { 2927u , Empty },
  { 3571u , Empty },
  { 4523u , Empty },
  { 6007u , Empty },
  { 6271u , Empty },
  { 7411u , Empty },
  { 8779u , Empty },
  { 9283u , Empty },
  { 13567u , Empty },
  { 17291u , Empty },
  { 21319u , Empty },
  { 35531u , Empty },
  { 38039u , Empty },
  { 43891u , Empty },
  { 46411u , Empty },
  { 51871u , Empty },
  { 58787u , Empty },
  { 72931u , Empty },
  { 102103u , Empty },
  { 106591u , Empty },
  { 461891u , Empty },
  { 1939939u , Empty },
  { 3233231u , Empty }
 };

static const UType JSum_7_3_1_1[]=
 {
  2u,
  0u,
  3u
 };

static const PtrLen<const UType> JTable_7_3_1[]=
 {
  Range(JSum_7_3_1_1)
 };

static const UType JSum_7_3_2_1[]=
 {
  11u,
  12u,
  6u
 };

static const PtrLen<const UType> JTable_7_3_2[]=
 {
  Range(JSum_7_3_2_1)
 };

static const UType JSum_7_3_3_1[]=
 {
  11u,
  18u,
  12u
 };

static const PtrLen<const UType> JTable_7_3_3[]=
 {
  Range(JSum_7_3_3_1)
 };

static const UType JSum_7_3_4_1[]=
 {
  20u,
  27u,
  18u
 };

static const PtrLen<const UType> JTable_7_3_4[]=
 {
  Range(JSum_7_3_4_1)
 };

static const UType JSum_7_3_5_1[]=
 {
  20u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_7_3_5[]=
 {
  Range(JSum_7_3_5_1)
 };

static const UType JSum_7_3_6_1[]=
 {
  38u,
  36u,
  27u
 };

static const PtrLen<const UType> JTable_7_3_6[]=
 {
  Range(JSum_7_3_6_1)
 };

static const UType JSum_7_3_7_1[]=
 {
  74u,
  75u,
  60u
 };

static const PtrLen<const UType> JTable_7_3_7[]=
 {
  Range(JSum_7_3_7_1)
 };

static const UType JSum_7_3_8_1[]=
 {
  110u,
  99u,
  120u
 };

static const PtrLen<const UType> JTable_7_3_8[]=
 {
  Range(JSum_7_3_8_1)
 };

static const UType JSum_7_3_9_1[]=
 {
  146u,
  147u,
  168u
 };

static const PtrLen<const UType> JTable_7_3_9[]=
 {
  Range(JSum_7_3_9_1)
 };

static const UType JSum_7_3_10_1[]=
 {
  182u,
  195u,
  168u
 };

static const PtrLen<const UType> JTable_7_3_10[]=
 {
  Range(JSum_7_3_10_1)
 };

static const UType JSum_7_3_11_1[]=
 {
  200u,
  174u,
  195u
 };

static const PtrLen<const UType> JTable_7_3_11[]=
 {
  Range(JSum_7_3_11_1)
 };

static const UType JSum_7_3_12_1[]=
 {
  290u,
  267u,
  300u
 };

static const PtrLen<const UType> JTable_7_3_12[]=
 {
  Range(JSum_7_3_12_1)
 };

static const UType JSum_7_3_13_1[]=
 {
  362u,
  363u,
  396u
 };

static const PtrLen<const UType> JTable_7_3_13[]=
 {
  Range(JSum_7_3_13_1)
 };

static const UType JSum_7_3_14_1[]=
 {
  443u,
  462u,
  420u
 };

static const PtrLen<const UType> JTable_7_3_14[]=
 {
  Range(JSum_7_3_14_1)
 };

static const UType JSum_7_3_15_1[]=
 {
  506u,
  507u,
  468u
 };

static const PtrLen<const UType> JTable_7_3_15[]=
 {
  Range(JSum_7_3_15_1)
 };

static const UType JSum_7_3_16_1[]=
 {
  740u,
  774u,
  795u
 };

static const PtrLen<const UType> JTable_7_3_16[]=
 {
  Range(JSum_7_3_16_1)
 };

static const UType JSum_7_3_17_1[]=
 {
  875u,
  930u,
  924u
 };

static const PtrLen<const UType> JTable_7_3_17[]=
 {
  Range(JSum_7_3_17_1)
 };

static const UType JSum_7_3_18_1[]=
 {
  1190u,
  1155u,
  1224u
 };

static const PtrLen<const UType> JTable_7_3_18[]=
 {
  Range(JSum_7_3_18_1)
 };

static const UType JSum_7_3_19_1[]=
 {
  2027u,
  2028u,
  1950u
 };

static const PtrLen<const UType> JTable_7_3_19[]=
 {
  Range(JSum_7_3_19_1)
 };

static const UType JSum_7_3_20_1[]=
 {
  2099u,
  2130u,
  2040u
 };

static const PtrLen<const UType> JTable_7_3_20[]=
 {
  Range(JSum_7_3_20_1)
 };

static const UType JSum_7_3_21_1[]=
 {
  2432u,
  2451u,
  2526u
 };

static const PtrLen<const UType> JTable_7_3_21[]=
 {
  Range(JSum_7_3_21_1)
 };

static const UType JSum_7_3_22_1[]=
 {
  2891u,
  2988u,
  2898u
 };

static const PtrLen<const UType> JTable_7_3_22[]=
 {
  Range(JSum_7_3_22_1)
 };

static const UType JSum_7_3_23_1[]=
 {
  3098u,
  3147u,
  3036u
 };

static const PtrLen<const UType> JTable_7_3_23[]=
 {
  Range(JSum_7_3_23_1)
 };

static const UType JSum_7_3_24_1[]=
 {
  4592u,
  4458u,
  4515u
 };

static const PtrLen<const UType> JTable_7_3_24[]=
 {
  Range(JSum_7_3_24_1)
 };

static const UType JSum_7_3_25_1[]=
 {
  7058u,
  7203u,
  7056u
 };

static const PtrLen<const UType> JTable_7_3_25[]=
 {
  Range(JSum_7_3_25_1)
 };

static const UType JSum_7_3_26_1[]=
 {
  14699u,
  14490u,
  14700u
 };

static const PtrLen<const UType> JTable_7_3_26[]=
 {
  Range(JSum_7_3_26_1)
 };

static const UType JSum_7_3_27_1[]=
 {
  15491u,
  15336u,
  15582u
 };

static const PtrLen<const UType> JTable_7_3_27[]=
 {
  Range(JSum_7_3_27_1)
 };

static const UType JSum_7_3_28_1[]=
 {
  17147u,
  17316u,
  17406u
 };

static const PtrLen<const UType> JTable_7_3_28[]=
 {
  Range(JSum_7_3_28_1)
 };

static const UType JSum_7_3_29_1[]=
 {
  24275u,
  24480u,
  24174u
 };

static const PtrLen<const UType> JTable_7_3_29[]=
 {
  Range(JSum_7_3_29_1)
 };

static const UType JSum_7_3_30_1[]=
 {
  33968u,
  33891u,
  34242u
 };

static const PtrLen<const UType> JTable_7_3_30[]=
 {
  Range(JSum_7_3_30_1)
 };

static const UType JSum_7_3_31_1[]=
 {
  35552u,
  35706u,
  35331u
 };

static const PtrLen<const UType> JTable_7_3_31[]=
 {
  Range(JSum_7_3_31_1)
 };

static const UType JSum_7_3_32_1[]=
 {
  647570u,
  646107u,
  646260u
 };

static const PtrLen<const UType> JTable_7_3_32[]=
 {
  Range(JSum_7_3_32_1)
 };

static const TestSet::JTable JSet_7_3[]=
 {
  { 7u , Range(JTable_7_3_1) },
  { 31u , Range(JTable_7_3_2) },
  { 43u , Range(JTable_7_3_3) },
  { 67u , Range(JTable_7_3_4) },
  { 79u , Range(JTable_7_3_5) },
  { 103u , Range(JTable_7_3_6) },
  { 211u , Range(JTable_7_3_7) },
  { 331u , Range(JTable_7_3_8) },
  { 463u , Range(JTable_7_3_9) },
  { 547u , Range(JTable_7_3_10) },
  { 571u , Range(JTable_7_3_11) },
  { 859u , Range(JTable_7_3_12) },
  { 1123u , Range(JTable_7_3_13) },
  { 1327u , Range(JTable_7_3_14) },
  { 1483u , Range(JTable_7_3_15) },
  { 2311u , Range(JTable_7_3_16) },
  { 2731u , Range(JTable_7_3_17) },
  { 3571u , Range(JTable_7_3_18) },
  { 6007u , Range(JTable_7_3_19) },
  { 6271u , Range(JTable_7_3_20) },
  { 7411u , Range(JTable_7_3_21) },
  { 8779u , Range(JTable_7_3_22) },
  { 9283u , Range(JTable_7_3_23) },
  { 13567u , Range(JTable_7_3_24) },
  { 21319u , Range(JTable_7_3_25) },
  { 43891u , Range(JTable_7_3_26) },
  { 46411u , Range(JTable_7_3_27) },
  { 51871u , Range(JTable_7_3_28) },
  { 72931u , Range(JTable_7_3_29) },
  { 102103u , Range(JTable_7_3_30) },
  { 106591u , Range(JTable_7_3_31) },
  { 1939939u , Range(JTable_7_3_32) }
 };

static const UType JSum_7_5_1_1[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const UType JSum_7_5_1_2[]=
 {
  2u,
  1u,
  4u,
  2u,
  0u
 };

static const UType JSum_7_5_1_3[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const PtrLen<const UType> JTable_7_5_1[]=
 {
  Range(JSum_7_5_1_1),
  Range(JSum_7_5_1_2),
  Range(JSum_7_5_1_3)
 };

static const UType JSum_7_5_2_1[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const UType JSum_7_5_2_2[]=
 {
  8u,
  8u,
  2u,
  6u,
  5u
 };

static const UType JSum_7_5_2_3[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_7_5_2[]=
 {
  Range(JSum_7_5_2_1),
  Range(JSum_7_5_2_2),
  Range(JSum_7_5_2_3)
 };

static const UType JSum_7_5_3_1[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const UType JSum_7_5_3_2[]=
 {
  10u,
  13u,
  20u,
  12u,
  14u
 };

static const UType JSum_7_5_3_3[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const PtrLen<const UType> JTable_7_5_3[]=
 {
  Range(JSum_7_5_3_1),
  Range(JSum_7_5_3_2),
  Range(JSum_7_5_3_3)
 };

static const UType JSum_7_5_4_1[]=
 {
  28u,
  22u,
  20u,
  33u,
  26u
 };

static const UType JSum_7_5_4_2[]=
 {
  28u,
  33u,
  22u,
  26u,
  20u
 };

static const UType JSum_7_5_4_3[]=
 {
  28u,
  22u,
  20u,
  33u,
  26u
 };

static const PtrLen<const UType> JTable_7_5_4[]=
 {
  Range(JSum_7_5_4_1),
  Range(JSum_7_5_4_2),
  Range(JSum_7_5_4_3)
 };

static const UType JSum_7_5_5_1[]=
 {
  46u,
  38u,
  29u,
  40u,
  36u
 };

static const UType JSum_7_5_5_2[]=
 {
  46u,
  40u,
  38u,
  36u,
  29u
 };

static const UType JSum_7_5_5_3[]=
 {
  46u,
  38u,
  29u,
  40u,
  36u
 };

static const PtrLen<const UType> JTable_7_5_5[]=
 {
  Range(JSum_7_5_5_1),
  Range(JSum_7_5_5_2),
  Range(JSum_7_5_5_3)
 };

static const UType JSum_7_5_6_1[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const UType JSum_7_5_6_2[]=
 {
  42u,
  33u,
  48u,
  48u,
  38u
 };

static const UType JSum_7_5_6_3[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const PtrLen<const UType> JTable_7_5_6[]=
 {
  Range(JSum_7_5_6_1),
  Range(JSum_7_5_6_2),
  Range(JSum_7_5_6_3)
 };

static const UType JSum_7_5_7_1[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const UType JSum_7_5_7_2[]=
 {
  78u,
  57u,
  60u,
  68u,
  66u
 };

static const UType JSum_7_5_7_3[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const PtrLen<const UType> JTable_7_5_7[]=
 {
  Range(JSum_7_5_7_1),
  Range(JSum_7_5_7_2),
  Range(JSum_7_5_7_3)
 };

static const UType JSum_7_5_8_1[]=
 {
  105u,
  114u,
  102u,
  120u,
  128u
 };

static const UType JSum_7_5_8_2[]=
 {
  105u,
  120u,
  114u,
  128u,
  102u
 };

static const UType JSum_7_5_8_3[]=
 {
  105u,
  114u,
  102u,
  120u,
  128u
 };

static const PtrLen<const UType> JTable_7_5_8[]=
 {
  Range(JSum_7_5_8_1),
  Range(JSum_7_5_8_2),
  Range(JSum_7_5_8_3)
 };

static const UType JSum_7_5_9_1[]=
 {
  197u,
  190u,
  162u,
  184u,
  176u
 };

static const UType JSum_7_5_9_2[]=
 {
  197u,
  184u,
  190u,
  176u,
  162u
 };

static const UType JSum_7_5_9_3[]=
 {
  197u,
  190u,
  162u,
  184u,
  176u
 };

static const PtrLen<const UType> JTable_7_5_9[]=
 {
  Range(JSum_7_5_9_1),
  Range(JSum_7_5_9_2),
  Range(JSum_7_5_9_3)
 };

static const UType JSum_7_5_10_1[]=
 {
  390u,
  376u,
  386u,
  341u,
  376u
 };

static const UType JSum_7_5_10_2[]=
 {
  390u,
  341u,
  376u,
  376u,
  386u
 };

static const UType JSum_7_5_10_3[]=
 {
  390u,
  376u,
  386u,
  341u,
  376u
 };

static const PtrLen<const UType> JTable_7_5_10[]=
 {
  Range(JSum_7_5_10_1),
  Range(JSum_7_5_10_2),
  Range(JSum_7_5_10_3)
 };

static const UType JSum_7_5_11_1[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const UType JSum_7_5_11_2[]=
 {
  432u,
  450u,
  477u,
  464u,
  486u
 };

static const UType JSum_7_5_11_3[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const PtrLen<const UType> JTable_7_5_11[]=
 {
  Range(JSum_7_5_11_1),
  Range(JSum_7_5_11_2),
  Range(JSum_7_5_11_3)
 };

static const UType JSum_7_5_12_1[]=
 {
  513u,
  576u,
  558u,
  540u,
  542u
 };

static const UType JSum_7_5_12_2[]=
 {
  513u,
  540u,
  576u,
  542u,
  558u
 };

static const UType JSum_7_5_12_3[]=
 {
  513u,
  576u,
  558u,
  540u,
  542u
 };

static const PtrLen<const UType> JTable_7_5_12[]=
 {
  Range(JSum_7_5_12_1),
  Range(JSum_7_5_12_2),
  Range(JSum_7_5_12_3)
 };

static const UType JSum_7_5_13_1[]=
 {
  750u,
  696u,
  716u,
  681u,
  726u
 };

static const UType JSum_7_5_13_2[]=
 {
  750u,
  681u,
  696u,
  726u,
  716u
 };

static const UType JSum_7_5_13_3[]=
 {
  750u,
  696u,
  716u,
  681u,
  726u
 };

static const PtrLen<const UType> JTable_7_5_13[]=
 {
  Range(JSum_7_5_13_1),
  Range(JSum_7_5_13_2),
  Range(JSum_7_5_13_3)
 };

static const UType JSum_7_5_14_1[]=
 {
  1260u,
  1301u,
  1206u,
  1236u,
  1266u
 };

static const UType JSum_7_5_14_2[]=
 {
  1260u,
  1236u,
  1301u,
  1266u,
  1206u
 };

static const UType JSum_7_5_14_3[]=
 {
  1260u,
  1301u,
  1206u,
  1236u,
  1266u
 };

static const PtrLen<const UType> JTable_7_5_14[]=
 {
  Range(JSum_7_5_14_1),
  Range(JSum_7_5_14_2),
  Range(JSum_7_5_14_3)
 };

static const UType JSum_7_5_15_1[]=
 {
  1472u,
  1466u,
  1464u,
  1457u,
  1550u
 };

static const UType JSum_7_5_15_2[]=
 {
  1472u,
  1457u,
  1466u,
  1550u,
  1464u
 };

static const UType JSum_7_5_15_3[]=
 {
  1472u,
  1466u,
  1464u,
  1457u,
  1550u
 };

static const PtrLen<const UType> JTable_7_5_15[]=
 {
  Range(JSum_7_5_15_1),
  Range(JSum_7_5_15_2),
  Range(JSum_7_5_15_3)
 };

static const UType JSum_7_5_16_1[]=
 {
  3481u,
  3440u,
  3368u,
  3526u,
  3474u
 };

static const UType JSum_7_5_16_2[]=
 {
  3481u,
  3526u,
  3440u,
  3474u,
  3368u
 };

static const UType JSum_7_5_16_3[]=
 {
  3481u,
  3440u,
  3368u,
  3526u,
  3474u
 };

static const PtrLen<const UType> JTable_7_5_16[]=
 {
  Range(JSum_7_5_16_1),
  Range(JSum_7_5_16_2),
  Range(JSum_7_5_16_3)
 };

static const UType JSum_7_5_17_1[]=
 {
  7153u,
  7118u,
  7172u,
  7126u,
  6960u
 };

static const UType JSum_7_5_17_2[]=
 {
  7153u,
  7126u,
  7118u,
  6960u,
  7172u
 };

static const UType JSum_7_5_17_3[]=
 {
  7153u,
  7118u,
  7172u,
  7126u,
  6960u
 };

static const PtrLen<const UType> JTable_7_5_17[]=
 {
  Range(JSum_7_5_17_1),
  Range(JSum_7_5_17_2),
  Range(JSum_7_5_17_3)
 };

static const UType JSum_7_5_18_1[]=
 {
  8841u,
  8616u,
  8790u,
  8844u,
  8798u
 };

static const UType JSum_7_5_18_2[]=
 {
  8841u,
  8844u,
  8616u,
  8798u,
  8790u
 };

static const UType JSum_7_5_18_3[]=
 {
  8841u,
  8616u,
  8790u,
  8844u,
  8798u
 };

static const PtrLen<const UType> JTable_7_5_18[]=
 {
  Range(JSum_7_5_18_1),
  Range(JSum_7_5_18_2),
  Range(JSum_7_5_18_3)
 };

static const UType JSum_7_5_19_1[]=
 {
  9152u,
  9332u,
  9266u,
  9410u,
  9249u
 };

static const UType JSum_7_5_19_2[]=
 {
  9152u,
  9410u,
  9332u,
  9249u,
  9266u
 };

static const UType JSum_7_5_19_3[]=
 {
  9152u,
  9332u,
  9266u,
  9410u,
  9249u
 };

static const PtrLen<const UType> JTable_7_5_19[]=
 {
  Range(JSum_7_5_19_1),
  Range(JSum_7_5_19_2),
  Range(JSum_7_5_19_3)
 };

static const UType JSum_7_5_20_1[]=
 {
  10230u,
  10400u,
  10334u,
  10508u,
  10397u
 };

static const UType JSum_7_5_20_2[]=
 {
  10230u,
  10508u,
  10400u,
  10397u,
  10334u
 };

static const UType JSum_7_5_20_3[]=
 {
  10230u,
  10400u,
  10334u,
  10508u,
  10397u
 };

static const PtrLen<const UType> JTable_7_5_20[]=
 {
  Range(JSum_7_5_20_1),
  Range(JSum_7_5_20_2),
  Range(JSum_7_5_20_3)
 };

static const UType JSum_7_5_21_1[]=
 {
  14778u,
  14544u,
  14609u,
  14454u,
  14544u
 };

static const UType JSum_7_5_21_2[]=
 {
  14778u,
  14454u,
  14544u,
  14544u,
  14609u
 };

static const UType JSum_7_5_21_3[]=
 {
  14778u,
  14544u,
  14609u,
  14454u,
  14544u
 };

static const PtrLen<const UType> JTable_7_5_21[]=
 {
  Range(JSum_7_5_21_1),
  Range(JSum_7_5_21_2),
  Range(JSum_7_5_21_3)
 };

static const UType JSum_7_5_22_1[]=
 {
  21356u,
  21290u,
  21548u,
  21221u,
  21174u
 };

static const UType JSum_7_5_22_2[]=
 {
  21356u,
  21221u,
  21290u,
  21174u,
  21548u
 };

static const UType JSum_7_5_22_3[]=
 {
  21356u,
  21290u,
  21548u,
  21221u,
  21174u
 };

static const PtrLen<const UType> JTable_7_5_22[]=
 {
  Range(JSum_7_5_22_1),
  Range(JSum_7_5_22_2),
  Range(JSum_7_5_22_3)
 };

static const UType JSum_7_5_23_1[]=
 {
  92146u,
  92906u,
  92345u,
  92224u,
  92268u
 };

static const UType JSum_7_5_23_2[]=
 {
  92146u,
  92224u,
  92906u,
  92268u,
  92345u
 };

static const UType JSum_7_5_23_3[]=
 {
  92146u,
  92906u,
  92345u,
  92224u,
  92268u
 };

static const PtrLen<const UType> JTable_7_5_23[]=
 {
  Range(JSum_7_5_23_1),
  Range(JSum_7_5_23_2),
  Range(JSum_7_5_23_3)
 };

static const UType JSum_7_5_24_1[]=
 {
  646618u,
  647024u,
  645924u,
  645869u,
  647794u
 };

static const UType JSum_7_5_24_2[]=
 {
  646618u,
  645869u,
  647024u,
  647794u,
  645924u
 };

static const UType JSum_7_5_24_3[]=
 {
  646618u,
  647024u,
  645924u,
  645869u,
  647794u
 };

static const PtrLen<const UType> JTable_7_5_24[]=
 {
  Range(JSum_7_5_24_1),
  Range(JSum_7_5_24_2),
  Range(JSum_7_5_24_3)
 };

static const TestSet::JTable JSet_7_5[]=
 {
  { 11u , Range(JTable_7_5_1) },
  { 31u , Range(JTable_7_5_2) },
  { 71u , Range(JTable_7_5_3) },
  { 131u , Range(JTable_7_5_4) },
  { 191u , Range(JTable_7_5_5) },
  { 211u , Range(JTable_7_5_6) },
  { 331u , Range(JTable_7_5_7) },
  { 571u , Range(JTable_7_5_8) },
  { 911u , Range(JTable_7_5_9) },
  { 1871u , Range(JTable_7_5_10) },
  { 2311u , Range(JTable_7_5_11) },
  { 2731u , Range(JTable_7_5_12) },
  { 3571u , Range(JTable_7_5_13) },
  { 6271u , Range(JTable_7_5_14) },
  { 7411u , Range(JTable_7_5_15) },
  { 17291u , Range(JTable_7_5_16) },
  { 35531u , Range(JTable_7_5_17) },
  { 43891u , Range(JTable_7_5_18) },
  { 46411u , Range(JTable_7_5_19) },
  { 51871u , Range(JTable_7_5_20) },
  { 72931u , Range(JTable_7_5_21) },
  { 106591u , Range(JTable_7_5_22) },
  { 461891u , Range(JTable_7_5_23) },
  { 3233231u , Range(JTable_7_5_24) }
 };

static const UType JSum_7_7_1_1[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const UType JSum_7_7_1_2[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_7_7_1_3[]=
 {
  6u,
  4u,
  6u,
  4u,
  10u,
  8u,
  3u
 };

static const UType JSum_7_7_1_4[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_7_7_1_5[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const PtrLen<const UType> JTable_7_7_1[]=
 {
  Range(JSum_7_7_1_1),
  Range(JSum_7_7_1_2),
  Range(JSum_7_7_1_3),
  Range(JSum_7_7_1_4),
  Range(JSum_7_7_1_5)
 };

static const UType JSum_7_7_2_1[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const UType JSum_7_7_2_2[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_7_7_2_3[]=
 {
  12u,
  8u,
  12u,
  6u,
  6u,
  14u,
  11u
 };

static const UType JSum_7_7_2_4[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_7_7_2_5[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_7_7_2[]=
 {
  Range(JSum_7_7_2_1),
  Range(JSum_7_7_2_2),
  Range(JSum_7_7_2_3),
  Range(JSum_7_7_2_4),
  Range(JSum_7_7_2_5)
 };

static const UType JSum_7_7_3_1[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const UType JSum_7_7_3_2[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_7_7_3_3[]=
 {
  22u,
  27u,
  28u,
  30u,
  30u,
  32u,
  40u
 };

static const UType JSum_7_7_3_4[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_7_7_3_5[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_7_7_3[]=
 {
  Range(JSum_7_7_3_1),
  Range(JSum_7_7_3_2),
  Range(JSum_7_7_3_3),
  Range(JSum_7_7_3_4),
  Range(JSum_7_7_3_5)
 };

static const UType JSum_7_7_4_1[]=
 {
  42u,
  27u,
  36u,
  32u,
  26u,
  36u,
  38u
 };

static const UType JSum_7_7_4_2[]=
 {
  27u,
  30u,
  30u,
  40u,
  30u,
  40u,
  40u
 };

static const UType JSum_7_7_4_3[]=
 {
  42u,
  36u,
  32u,
  27u,
  38u,
  26u,
  36u
 };

static const UType JSum_7_7_4_4[]=
 {
  27u,
  30u,
  30u,
  40u,
  30u,
  40u,
  40u
 };

static const UType JSum_7_7_4_5[]=
 {
  42u,
  27u,
  36u,
  32u,
  26u,
  36u,
  38u
 };

static const PtrLen<const UType> JTable_7_7_4[]=
 {
  Range(JSum_7_7_4_1),
  Range(JSum_7_7_4_2),
  Range(JSum_7_7_4_3),
  Range(JSum_7_7_4_4),
  Range(JSum_7_7_4_5)
 };

static const UType JSum_7_7_5_1[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const UType JSum_7_7_5_2[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_7_7_5_3[]=
 {
  66u,
  66u,
  78u,
  60u,
  60u,
  56u,
  75u
 };

static const UType JSum_7_7_5_4[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_7_7_5_5[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const PtrLen<const UType> JTable_7_7_5[]=
 {
  Range(JSum_7_7_5_1),
  Range(JSum_7_7_5_2),
  Range(JSum_7_7_5_3),
  Range(JSum_7_7_5_4),
  Range(JSum_7_7_5_5)
 };

static const UType JSum_7_7_6_1[]=
 {
  84u,
  86u,
  60u,
  78u,
  78u,
  75u,
  84u
 };

static const UType JSum_7_7_6_2[]=
 {
  59u,
  78u,
  78u,
  84u,
  78u,
  84u,
  84u
 };

static const UType JSum_7_7_6_3[]=
 {
  84u,
  75u,
  78u,
  86u,
  84u,
  78u,
  60u
 };

static const UType JSum_7_7_6_4[]=
 {
  59u,
  78u,
  78u,
  84u,
  78u,
  84u,
  84u
 };

static const UType JSum_7_7_6_5[]=
 {
  84u,
  86u,
  60u,
  78u,
  78u,
  75u,
  84u
 };

static const PtrLen<const UType> JTable_7_7_6[]=
 {
  Range(JSum_7_7_6_1),
  Range(JSum_7_7_6_2),
  Range(JSum_7_7_6_3),
  Range(JSum_7_7_6_4),
  Range(JSum_7_7_6_5)
 };

static const UType JSum_7_7_7_1[]=
 {
  134u,
  132u,
  116u,
  116u,
  147u,
  126u,
  138u
 };

static const UType JSum_7_7_7_2[]=
 {
  123u,
  142u,
  142u,
  120u,
  142u,
  120u,
  120u
 };

static const UType JSum_7_7_7_3[]=
 {
  134u,
  126u,
  116u,
  132u,
  138u,
  147u,
  116u
 };

static const UType JSum_7_7_7_4[]=
 {
  123u,
  142u,
  142u,
  120u,
  142u,
  120u,
  120u
 };

static const UType JSum_7_7_7_5[]=
 {
  134u,
  132u,
  116u,
  116u,
  147u,
  126u,
  138u
 };

static const PtrLen<const UType> JTable_7_7_7[]=
 {
  Range(JSum_7_7_7_1),
  Range(JSum_7_7_7_2),
  Range(JSum_7_7_7_3),
  Range(JSum_7_7_7_4),
  Range(JSum_7_7_7_5)
 };

static const UType JSum_7_7_8_1[]=
 {
  291u,
  272u,
  288u,
  320u,
  278u,
  282u,
  270u
 };

static const UType JSum_7_7_8_2[]=
 {
  315u,
  292u,
  292u,
  270u,
  292u,
  270u,
  270u
 };

static const UType JSum_7_7_8_3[]=
 {
  291u,
  282u,
  320u,
  272u,
  270u,
  278u,
  288u
 };

static const UType JSum_7_7_8_4[]=
 {
  315u,
  292u,
  292u,
  270u,
  292u,
  270u,
  270u
 };

static const UType JSum_7_7_8_5[]=
 {
  291u,
  272u,
  288u,
  320u,
  278u,
  282u,
  270u
 };

static const PtrLen<const UType> JTable_7_7_8[]=
 {
  Range(JSum_7_7_8_1),
  Range(JSum_7_7_8_2),
  Range(JSum_7_7_8_3),
  Range(JSum_7_7_8_4),
  Range(JSum_7_7_8_5)
 };

static const UType JSum_7_7_9_1[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const UType JSum_7_7_9_2[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_7_7_9_3[]=
 {
  352u,
  348u,
  310u,
  318u,
  318u,
  347u,
  316u
 };

static const UType JSum_7_7_9_4[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_7_7_9_5[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const PtrLen<const UType> JTable_7_7_9[]=
 {
  Range(JSum_7_7_9_1),
  Range(JSum_7_7_9_2),
  Range(JSum_7_7_9_3),
  Range(JSum_7_7_9_4),
  Range(JSum_7_7_9_5)
 };

static const UType JSum_7_7_10_1[]=
 {
  379u,
  364u,
  406u,
  382u,
  392u,
  424u,
  382u
 };

static const UType JSum_7_7_10_2[]=
 {
  419u,
  400u,
  400u,
  370u,
  400u,
  370u,
  370u
 };

static const UType JSum_7_7_10_3[]=
 {
  379u,
  424u,
  382u,
  364u,
  382u,
  392u,
  406u
 };

static const UType JSum_7_7_10_4[]=
 {
  419u,
  400u,
  400u,
  370u,
  400u,
  370u,
  370u
 };

static const UType JSum_7_7_10_5[]=
 {
  379u,
  364u,
  406u,
  382u,
  392u,
  424u,
  382u
 };

static const PtrLen<const UType> JTable_7_7_10[]=
 {
  Range(JSum_7_7_10_1),
  Range(JSum_7_7_10_2),
  Range(JSum_7_7_10_3),
  Range(JSum_7_7_10_4),
  Range(JSum_7_7_10_5)
 };

static const UType JSum_7_7_11_1[]=
 {
  408u,
  394u,
  418u,
  408u,
  424u,
  414u,
  459u
 };

static const UType JSum_7_7_11_2[]=
 {
  435u,
  396u,
  396u,
  434u,
  396u,
  434u,
  434u
 };

static const UType JSum_7_7_11_3[]=
 {
  408u,
  414u,
  408u,
  394u,
  459u,
  424u,
  418u
 };

static const UType JSum_7_7_11_4[]=
 {
  435u,
  396u,
  396u,
  434u,
  396u,
  434u,
  434u
 };

static const UType JSum_7_7_11_5[]=
 {
  408u,
  394u,
  418u,
  408u,
  424u,
  414u,
  459u
 };

static const PtrLen<const UType> JTable_7_7_11[]=
 {
  Range(JSum_7_7_11_1),
  Range(JSum_7_7_11_2),
  Range(JSum_7_7_11_3),
  Range(JSum_7_7_11_4),
  Range(JSum_7_7_11_5)
 };

static const UType JSum_7_7_12_1[]=
 {
  498u,
  528u,
  522u,
  516u,
  482u,
  483u,
  540u
 };

static const UType JSum_7_7_12_2[]=
 {
  491u,
  534u,
  534u,
  492u,
  534u,
  492u,
  492u
 };

static const UType JSum_7_7_12_3[]=
 {
  498u,
  483u,
  516u,
  528u,
  540u,
  482u,
  522u
 };

static const UType JSum_7_7_12_4[]=
 {
  491u,
  534u,
  534u,
  492u,
  534u,
  492u,
  492u
 };

static const UType JSum_7_7_12_5[]=
 {
  498u,
  528u,
  522u,
  516u,
  482u,
  483u,
  540u
 };

static const PtrLen<const UType> JTable_7_7_12[]=
 {
  Range(JSum_7_7_12_1),
  Range(JSum_7_7_12_2),
  Range(JSum_7_7_12_3),
  Range(JSum_7_7_12_4),
  Range(JSum_7_7_12_5)
 };

static const UType JSum_7_7_13_1[]=
 {
  656u,
  674u,
  636u,
  656u,
  651u,
  594u,
  654u
 };

static const UType JSum_7_7_13_2[]=
 {
  603u,
  636u,
  636u,
  670u,
  636u,
  670u,
  670u
 };

static const UType JSum_7_7_13_3[]=
 {
  656u,
  594u,
  656u,
  674u,
  654u,
  651u,
  636u
 };

static const UType JSum_7_7_13_4[]=
 {
  603u,
  636u,
  636u,
  670u,
  636u,
  670u,
  670u
 };

static const UType JSum_7_7_13_5[]=
 {
  656u,
  674u,
  636u,
  656u,
  651u,
  594u,
  654u
 };

static const PtrLen<const UType> JTable_7_7_13[]=
 {
  Range(JSum_7_7_13_1),
  Range(JSum_7_7_13_2),
  Range(JSum_7_7_13_3),
  Range(JSum_7_7_13_4),
  Range(JSum_7_7_13_5)
 };

static const UType JSum_7_7_14_1[]=
 {
  844u,
  834u,
  820u,
  898u,
  848u,
  870u,
  891u
 };

static const UType JSum_7_7_14_2[]=
 {
  899u,
  874u,
  874u,
  828u,
  874u,
  828u,
  828u
 };

static const UType JSum_7_7_14_3[]=
 {
  844u,
  870u,
  898u,
  834u,
  891u,
  848u,
  820u
 };

static const UType JSum_7_7_14_4[]=
 {
  899u,
  874u,
  874u,
  828u,
  874u,
  828u,
  828u
 };

static const UType JSum_7_7_14_5[]=
 {
  844u,
  834u,
  820u,
  898u,
  848u,
  870u,
  891u
 };

static const PtrLen<const UType> JTable_7_7_14[]=
 {
  Range(JSum_7_7_14_1),
  Range(JSum_7_7_14_2),
  Range(JSum_7_7_14_3),
  Range(JSum_7_7_14_4),
  Range(JSum_7_7_14_5)
 };

static const UType JSum_7_7_15_1[]=
 {
  1256u,
  1324u,
  1234u,
  1243u,
  1264u,
  1210u,
  1246u
 };

static const UType JSum_7_7_15_2[]=
 {
  1283u,
  1216u,
  1216u,
  1282u,
  1216u,
  1282u,
  1282u
 };

static const UType JSum_7_7_15_3[]=
 {
  1256u,
  1210u,
  1243u,
  1324u,
  1246u,
  1264u,
  1234u
 };

static const UType JSum_7_7_15_4[]=
 {
  1283u,
  1216u,
  1216u,
  1282u,
  1216u,
  1282u,
  1282u
 };

static const UType JSum_7_7_15_5[]=
 {
  1256u,
  1324u,
  1234u,
  1243u,
  1264u,
  1210u,
  1246u
 };

static const PtrLen<const UType> JTable_7_7_15[]=
 {
  Range(JSum_7_7_15_1),
  Range(JSum_7_7_15_2),
  Range(JSum_7_7_15_3),
  Range(JSum_7_7_15_4),
  Range(JSum_7_7_15_5)
 };

static const UType JSum_7_7_16_1[]=
 {
  1314u,
  1306u,
  1404u,
  1324u,
  1306u,
  1331u,
  1296u
 };

static const UType JSum_7_7_16_2[]=
 {
  1403u,
  1300u,
  1300u,
  1326u,
  1300u,
  1326u,
  1326u
 };

static const UType JSum_7_7_16_3[]=
 {
  1314u,
  1331u,
  1324u,
  1306u,
  1296u,
  1306u,
  1404u
 };

static const UType JSum_7_7_16_4[]=
 {
  1403u,
  1300u,
  1300u,
  1326u,
  1300u,
  1326u,
  1326u
 };

static const UType JSum_7_7_16_5[]=
 {
  1314u,
  1306u,
  1404u,
  1324u,
  1306u,
  1331u,
  1296u
 };

static const PtrLen<const UType> JTable_7_7_16[]=
 {
  Range(JSum_7_7_16_1),
  Range(JSum_7_7_16_2),
  Range(JSum_7_7_16_3),
  Range(JSum_7_7_16_4),
  Range(JSum_7_7_16_5)
 };

static const UType JSum_7_7_17_1[]=
 {
  1966u,
  1900u,
  1915u,
  1954u,
  1868u,
  1984u,
  1978u
 };

static const UType JSum_7_7_17_2[]=
 {
  1859u,
  1978u,
  1978u,
  1924u,
  1978u,
  1924u,
  1924u
 };

static const UType JSum_7_7_17_3[]=
 {
  1966u,
  1984u,
  1954u,
  1900u,
  1978u,
  1868u,
  1915u
 };

static const UType JSum_7_7_17_4[]=
 {
  1859u,
  1978u,
  1978u,
  1924u,
  1978u,
  1924u,
  1924u
 };

static const UType JSum_7_7_17_5[]=
 {
  1966u,
  1900u,
  1915u,
  1954u,
  1868u,
  1984u,
  1978u
 };

static const PtrLen<const UType> JTable_7_7_17[]=
 {
  Range(JSum_7_7_17_1),
  Range(JSum_7_7_17_2),
  Range(JSum_7_7_17_3),
  Range(JSum_7_7_17_4),
  Range(JSum_7_7_17_5)
 };

static const UType JSum_7_7_18_1[]=
 {
  2556u,
  2490u,
  2472u,
  2398u,
  2478u,
  2467u,
  2428u
 };

static const UType JSum_7_7_18_2[]=
 {
  2451u,
  2522u,
  2522u,
  2424u,
  2522u,
  2424u,
  2424u
 };

static const UType JSum_7_7_18_3[]=
 {
  2556u,
  2467u,
  2398u,
  2490u,
  2428u,
  2478u,
  2472u
 };

static const UType JSum_7_7_18_4[]=
 {
  2451u,
  2522u,
  2522u,
  2424u,
  2522u,
  2424u,
  2424u
 };

static const UType JSum_7_7_18_5[]=
 {
  2556u,
  2490u,
  2472u,
  2398u,
  2478u,
  2467u,
  2428u
 };

static const PtrLen<const UType> JTable_7_7_18[]=
 {
  Range(JSum_7_7_18_1),
  Range(JSum_7_7_18_2),
  Range(JSum_7_7_18_3),
  Range(JSum_7_7_18_4),
  Range(JSum_7_7_18_5)
 };

static const UType JSum_7_7_19_1[]=
 {
  5454u,
  5475u,
  5540u,
  5366u,
  5460u,
  5426u,
  5316u
 };

static const UType JSum_7_7_19_2[]=
 {
  5355u,
  5382u,
  5382u,
  5512u,
  5382u,
  5512u,
  5512u
 };

static const UType JSum_7_7_19_3[]=
 {
  5454u,
  5426u,
  5366u,
  5475u,
  5316u,
  5460u,
  5540u
 };

static const UType JSum_7_7_19_4[]=
 {
  5355u,
  5382u,
  5382u,
  5512u,
  5382u,
  5512u,
  5512u
 };

static const UType JSum_7_7_19_5[]=
 {
  5454u,
  5475u,
  5540u,
  5366u,
  5460u,
  5426u,
  5316u
 };

static const PtrLen<const UType> JTable_7_7_19[]=
 {
  Range(JSum_7_7_19_1),
  Range(JSum_7_7_19_2),
  Range(JSum_7_7_19_3),
  Range(JSum_7_7_19_4),
  Range(JSum_7_7_19_5)
 };

static const UType JSum_7_7_20_1[]=
 {
  6226u,
  6202u,
  6331u,
  6208u,
  6344u,
  6382u,
  6196u
 };

static const UType JSum_7_7_20_2[]=
 {
  6443u,
  6262u,
  6262u,
  6220u,
  6262u,
  6220u,
  6220u
 };

static const UType JSum_7_7_20_3[]=
 {
  6226u,
  6382u,
  6208u,
  6202u,
  6196u,
  6344u,
  6331u
 };

static const UType JSum_7_7_20_4[]=
 {
  6443u,
  6262u,
  6262u,
  6220u,
  6262u,
  6220u,
  6220u
 };

static const UType JSum_7_7_20_5[]=
 {
  6226u,
  6202u,
  6331u,
  6208u,
  6344u,
  6382u,
  6196u
 };

static const PtrLen<const UType> JTable_7_7_20[]=
 {
  Range(JSum_7_7_20_1),
  Range(JSum_7_7_20_2),
  Range(JSum_7_7_20_3),
  Range(JSum_7_7_20_4),
  Range(JSum_7_7_20_5)
 };

static const UType JSum_7_7_21_1[]=
 {
  6510u,
  6576u,
  6768u,
  6612u,
  6683u,
  6618u,
  6642u
 };

static const UType JSum_7_7_21_2[]=
 {
  6611u,
  6714u,
  6714u,
  6552u,
  6714u,
  6552u,
  6552u
 };

static const UType JSum_7_7_21_3[]=
 {
  6510u,
  6618u,
  6612u,
  6576u,
  6642u,
  6683u,
  6768u
 };

static const UType JSum_7_7_21_4[]=
 {
  6611u,
  6714u,
  6714u,
  6552u,
  6714u,
  6552u,
  6552u
 };

static const UType JSum_7_7_21_5[]=
 {
  6510u,
  6576u,
  6768u,
  6612u,
  6683u,
  6618u,
  6642u
 };

static const PtrLen<const UType> JTable_7_7_21[]=
 {
  Range(JSum_7_7_21_1),
  Range(JSum_7_7_21_2),
  Range(JSum_7_7_21_3),
  Range(JSum_7_7_21_4),
  Range(JSum_7_7_21_5)
 };

static const UType JSum_7_7_22_1[]=
 {
  7444u,
  7402u,
  7532u,
  7266u,
  7344u,
  7414u,
  7467u
 };

static const UType JSum_7_7_22_2[]=
 {
  7379u,
  7330u,
  7330u,
  7500u,
  7330u,
  7500u,
  7500u
 };

static const UType JSum_7_7_22_3[]=
 {
  7444u,
  7414u,
  7266u,
  7402u,
  7467u,
  7344u,
  7532u
 };

static const UType JSum_7_7_22_4[]=
 {
  7379u,
  7330u,
  7330u,
  7500u,
  7330u,
  7500u,
  7500u
 };

static const UType JSum_7_7_22_5[]=
 {
  7444u,
  7402u,
  7532u,
  7266u,
  7344u,
  7414u,
  7467u
 };

static const PtrLen<const UType> JTable_7_7_22[]=
 {
  Range(JSum_7_7_22_1),
  Range(JSum_7_7_22_2),
  Range(JSum_7_7_22_3),
  Range(JSum_7_7_22_4),
  Range(JSum_7_7_22_5)
 };

static const UType JSum_7_7_23_1[]=
 {
  8464u,
  8344u,
  8358u,
  8278u,
  8484u,
  8523u,
  8334u
 };

static const UType JSum_7_7_23_2[]=
 {
  8595u,
  8394u,
  8394u,
  8336u,
  8394u,
  8336u,
  8336u
 };

static const UType JSum_7_7_23_3[]=
 {
  8464u,
  8523u,
  8278u,
  8344u,
  8334u,
  8484u,
  8358u
 };

static const UType JSum_7_7_23_4[]=
 {
  8595u,
  8394u,
  8394u,
  8336u,
  8394u,
  8336u,
  8336u
 };

static const UType JSum_7_7_23_5[]=
 {
  8464u,
  8344u,
  8358u,
  8278u,
  8484u,
  8523u,
  8334u
 };

static const PtrLen<const UType> JTable_7_7_23[]=
 {
  Range(JSum_7_7_23_1),
  Range(JSum_7_7_23_2),
  Range(JSum_7_7_23_3),
  Range(JSum_7_7_23_4),
  Range(JSum_7_7_23_5)
 };

static const UType JSum_7_7_24_1[]=
 {
  14674u,
  14526u,
  14794u,
  14496u,
  14448u,
  14528u,
  14635u
 };

static const UType JSum_7_7_24_2[]=
 {
  14771u,
  14466u,
  14466u,
  14644u,
  14466u,
  14644u,
  14644u
 };

static const UType JSum_7_7_24_3[]=
 {
  14674u,
  14528u,
  14496u,
  14526u,
  14635u,
  14448u,
  14794u
 };

static const UType JSum_7_7_24_4[]=
 {
  14771u,
  14466u,
  14466u,
  14644u,
  14466u,
  14644u,
  14644u
 };

static const UType JSum_7_7_24_5[]=
 {
  14674u,
  14526u,
  14794u,
  14496u,
  14448u,
  14528u,
  14635u
 };

static const PtrLen<const UType> JTable_7_7_24[]=
 {
  Range(JSum_7_7_24_1),
  Range(JSum_7_7_24_2),
  Range(JSum_7_7_24_3),
  Range(JSum_7_7_24_4),
  Range(JSum_7_7_24_5)
 };

static const UType JSum_7_7_25_1[]=
 {
  276232u,
  277856u,
  277078u,
  277378u,
  277426u,
  277243u,
  276724u
 };

static const UType JSum_7_7_25_2[]=
 {
  276659u,
  277696u,
  277696u,
  276730u,
  277696u,
  276730u,
  276730u
 };

static const UType JSum_7_7_25_3[]=
 {
  276232u,
  277243u,
  277378u,
  277856u,
  276724u,
  277426u,
  277078u
 };

static const UType JSum_7_7_25_4[]=
 {
  276659u,
  277696u,
  277696u,
  276730u,
  277696u,
  276730u,
  276730u
 };

static const UType JSum_7_7_25_5[]=
 {
  276232u,
  277856u,
  277078u,
  277378u,
  277426u,
  277243u,
  276724u
 };

static const PtrLen<const UType> JTable_7_7_25[]=
 {
  Range(JSum_7_7_25_1),
  Range(JSum_7_7_25_2),
  Range(JSum_7_7_25_3),
  Range(JSum_7_7_25_4),
  Range(JSum_7_7_25_5)
 };

static const UType JSum_7_7_26_1[]=
 {
  462819u,
  461092u,
  461434u,
  461352u,
  462622u,
  461616u,
  462294u
 };

static const UType JSum_7_7_26_2[]=
 {
  463419u,
  461550u,
  461550u,
  461720u,
  461550u,
  461720u,
  461720u
 };

static const UType JSum_7_7_26_3[]=
 {
  462819u,
  461616u,
  461352u,
  461092u,
  462294u,
  462622u,
  461434u
 };

static const UType JSum_7_7_26_4[]=
 {
  463419u,
  461550u,
  461550u,
  461720u,
  461550u,
  461720u,
  461720u
 };

static const UType JSum_7_7_26_5[]=
 {
  462819u,
  461092u,
  461434u,
  461352u,
  462622u,
  461616u,
  462294u
 };

static const PtrLen<const UType> JTable_7_7_26[]=
 {
  Range(JSum_7_7_26_1),
  Range(JSum_7_7_26_2),
  Range(JSum_7_7_26_3),
  Range(JSum_7_7_26_4),
  Range(JSum_7_7_26_5)
 };

static const TestSet::JTable JSet_7_7[]=
 {
  { 43u , Range(JTable_7_7_1) },
  { 71u , Range(JTable_7_7_2) },
  { 211u , Range(JTable_7_7_3) },
  { 239u , Range(JTable_7_7_4) },
  { 463u , Range(JTable_7_7_5) },
  { 547u , Range(JTable_7_7_6) },
  { 911u , Range(JTable_7_7_7) },
  { 2003u , Range(JTable_7_7_8) },
  { 2311u , Range(JTable_7_7_9) },
  { 2731u , Range(JTable_7_7_10) },
  { 2927u , Range(JTable_7_7_11) },
  { 3571u , Range(JTable_7_7_12) },
  { 4523u , Range(JTable_7_7_13) },
  { 6007u , Range(JTable_7_7_14) },
  { 8779u , Range(JTable_7_7_15) },
  { 9283u , Range(JTable_7_7_16) },
  { 13567u , Range(JTable_7_7_17) },
  { 17291u , Range(JTable_7_7_18) },
  { 38039u , Range(JTable_7_7_19) },
  { 43891u , Range(JTable_7_7_20) },
  { 46411u , Range(JTable_7_7_21) },
  { 51871u , Range(JTable_7_7_22) },
  { 58787u , Range(JTable_7_7_23) },
  { 102103u , Range(JTable_7_7_24) },
  { 1939939u , Range(JTable_7_7_25) },
  { 3233231u , Range(JTable_7_7_26) }
 };

static const UType JSum_7_11_1_1[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const UType JSum_7_11_1_2[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_7_11_1_3[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_7_11_1_4[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_7_11_1_5[]=
 {
  0u,
  2u,
  3u,
  4u,
  2u,
  2u,
  0u,
  2u,
  0u,
  2u,
  4u
 };

static const UType JSum_7_11_1_6[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_7_11_1_7[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_7_11_1_8[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_7_11_1_9[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const PtrLen<const UType> JTable_7_11_1[]=
 {
  Range(JSum_7_11_1_1),
  Range(JSum_7_11_1_2),
  Range(JSum_7_11_1_3),
  Range(JSum_7_11_1_4),
  Range(JSum_7_11_1_5),
  Range(JSum_7_11_1_6),
  Range(JSum_7_11_1_7),
  Range(JSum_7_11_1_8),
  Range(JSum_7_11_1_9)
 };

static const UType JSum_7_11_2_1[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const UType JSum_7_11_2_2[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_7_11_2_3[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_7_11_2_4[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_7_11_2_5[]=
 {
  8u,
  3u,
  2u,
  6u,
  6u,
  10u,
  4u,
  6u,
  8u,
  8u,
  4u
 };

static const UType JSum_7_11_2_6[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_7_11_2_7[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_7_11_2_8[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_7_11_2_9[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const PtrLen<const UType> JTable_7_11_2[]=
 {
  Range(JSum_7_11_2_1),
  Range(JSum_7_11_2_2),
  Range(JSum_7_11_2_3),
  Range(JSum_7_11_2_4),
  Range(JSum_7_11_2_5),
  Range(JSum_7_11_2_6),
  Range(JSum_7_11_2_7),
  Range(JSum_7_11_2_8),
  Range(JSum_7_11_2_9)
 };

static const UType JSum_7_11_3_1[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const UType JSum_7_11_3_2[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_7_11_3_3[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_7_11_3_4[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_7_11_3_5[]=
 {
  27u,
  24u,
  32u,
  30u,
  38u,
  34u,
  28u,
  24u,
  40u,
  26u,
  26u
 };

static const UType JSum_7_11_3_6[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_7_11_3_7[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_7_11_3_8[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_7_11_3_9[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const PtrLen<const UType> JTable_7_11_3[]=
 {
  Range(JSum_7_11_3_1),
  Range(JSum_7_11_3_2),
  Range(JSum_7_11_3_3),
  Range(JSum_7_11_3_4),
  Range(JSum_7_11_3_5),
  Range(JSum_7_11_3_6),
  Range(JSum_7_11_3_7),
  Range(JSum_7_11_3_8),
  Range(JSum_7_11_3_9)
 };

static const UType JSum_7_11_4_1[]=
 {
  44u,
  40u,
  30u,
  32u,
  30u,
  48u,
  34u,
  42u,
  44u,
  35u,
  38u
 };

static const UType JSum_7_11_4_2[]=
 {
  40u,
  42u,
  35u,
  36u,
  54u,
  34u,
  36u,
  32u,
  34u,
  34u,
  40u
 };

static const UType JSum_7_11_4_3[]=
 {
  40u,
  34u,
  34u,
  35u,
  40u,
  32u,
  54u,
  42u,
  34u,
  36u,
  36u
 };

static const UType JSum_7_11_4_4[]=
 {
  40u,
  35u,
  54u,
  36u,
  34u,
  40u,
  42u,
  36u,
  34u,
  32u,
  34u
 };

static const UType JSum_7_11_4_5[]=
 {
  44u,
  35u,
  42u,
  48u,
  32u,
  40u,
  38u,
  44u,
  34u,
  30u,
  30u
 };

static const UType JSum_7_11_4_6[]=
 {
  40u,
  35u,
  54u,
  36u,
  34u,
  40u,
  42u,
  36u,
  34u,
  32u,
  34u
 };

static const UType JSum_7_11_4_7[]=
 {
  40u,
  34u,
  34u,
  35u,
  40u,
  32u,
  54u,
  42u,
  34u,
  36u,
  36u
 };

static const UType JSum_7_11_4_8[]=
 {
  40u,
  42u,
  35u,
  36u,
  54u,
  34u,
  36u,
  32u,
  34u,
  34u,
  40u
 };

static const UType JSum_7_11_4_9[]=
 {
  44u,
  40u,
  30u,
  32u,
  30u,
  48u,
  34u,
  42u,
  44u,
  35u,
  38u
 };

static const PtrLen<const UType> JTable_7_11_4[]=
 {
  Range(JSum_7_11_4_1),
  Range(JSum_7_11_4_2),
  Range(JSum_7_11_4_3),
  Range(JSum_7_11_4_4),
  Range(JSum_7_11_4_5),
  Range(JSum_7_11_4_6),
  Range(JSum_7_11_4_7),
  Range(JSum_7_11_4_8),
  Range(JSum_7_11_4_9)
 };

static const UType JSum_7_11_5_1[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const UType JSum_7_11_5_2[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_7_11_5_3[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_7_11_5_4[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_7_11_5_5[]=
 {
  44u,
  35u,
  42u,
  54u,
  50u,
  36u,
  44u,
  34u,
  46u,
  36u,
  40u
 };

static const UType JSum_7_11_5_6[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_7_11_5_7[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_7_11_5_8[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_7_11_5_9[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const PtrLen<const UType> JTable_7_11_5[]=
 {
  Range(JSum_7_11_5_1),
  Range(JSum_7_11_5_2),
  Range(JSum_7_11_5_3),
  Range(JSum_7_11_5_4),
  Range(JSum_7_11_5_5),
  Range(JSum_7_11_5_6),
  Range(JSum_7_11_5_7),
  Range(JSum_7_11_5_8),
  Range(JSum_7_11_5_9)
 };

static const UType JSum_7_11_6_1[]=
 {
  84u,
  76u,
  74u,
  90u,
  80u,
  84u,
  62u,
  74u,
  76u,
  67u,
  90u
 };

static const UType JSum_7_11_6_2[]=
 {
  77u,
  72u,
  86u,
  63u,
  80u,
  79u,
  75u,
  87u,
  94u,
  76u,
  68u
 };

static const UType JSum_7_11_6_3[]=
 {
  77u,
  94u,
  79u,
  86u,
  68u,
  87u,
  80u,
  72u,
  76u,
  75u,
  63u
 };

static const UType JSum_7_11_6_4[]=
 {
  77u,
  86u,
  80u,
  75u,
  94u,
  68u,
  72u,
  63u,
  79u,
  87u,
  76u
 };

static const UType JSum_7_11_6_5[]=
 {
  84u,
  67u,
  74u,
  84u,
  90u,
  76u,
  90u,
  76u,
  62u,
  80u,
  74u
 };

static const UType JSum_7_11_6_6[]=
 {
  77u,
  86u,
  80u,
  75u,
  94u,
  68u,
  72u,
  63u,
  79u,
  87u,
  76u
 };

static const UType JSum_7_11_6_7[]=
 {
  77u,
  94u,
  79u,
  86u,
  68u,
  87u,
  80u,
  72u,
  76u,
  75u,
  63u
 };

static const UType JSum_7_11_6_8[]=
 {
  77u,
  72u,
  86u,
  63u,
  80u,
  79u,
  75u,
  87u,
  94u,
  76u,
  68u
 };

static const UType JSum_7_11_6_9[]=
 {
  84u,
  76u,
  74u,
  90u,
  80u,
  84u,
  62u,
  74u,
  76u,
  67u,
  90u
 };

static const PtrLen<const UType> JTable_7_11_6[]=
 {
  Range(JSum_7_11_6_1),
  Range(JSum_7_11_6_2),
  Range(JSum_7_11_6_3),
  Range(JSum_7_11_6_4),
  Range(JSum_7_11_6_5),
  Range(JSum_7_11_6_6),
  Range(JSum_7_11_6_7),
  Range(JSum_7_11_6_8),
  Range(JSum_7_11_6_9)
 };

static const UType JSum_7_11_7_1[]=
 {
  104u,
  92u,
  92u,
  118u,
  108u,
  118u,
  90u,
  102u,
  104u,
  91u,
  102u
 };

static const UType JSum_7_11_7_2[]=
 {
  88u,
  110u,
  107u,
  80u,
  102u,
  100u,
  110u,
  108u,
  114u,
  100u,
  102u
 };

static const UType JSum_7_11_7_3[]=
 {
  88u,
  114u,
  100u,
  107u,
  102u,
  108u,
  102u,
  110u,
  100u,
  110u,
  80u
 };

static const UType JSum_7_11_7_4[]=
 {
  88u,
  107u,
  102u,
  110u,
  114u,
  102u,
  110u,
  80u,
  100u,
  108u,
  100u
 };

static const UType JSum_7_11_7_5[]=
 {
  104u,
  91u,
  102u,
  118u,
  118u,
  92u,
  102u,
  104u,
  90u,
  108u,
  92u
 };

static const UType JSum_7_11_7_6[]=
 {
  88u,
  107u,
  102u,
  110u,
  114u,
  102u,
  110u,
  80u,
  100u,
  108u,
  100u
 };

static const UType JSum_7_11_7_7[]=
 {
  88u,
  114u,
  100u,
  107u,
  102u,
  108u,
  102u,
  110u,
  100u,
  110u,
  80u
 };

static const UType JSum_7_11_7_8[]=
 {
  88u,
  110u,
  107u,
  80u,
  102u,
  100u,
  110u,
  108u,
  114u,
  100u,
  102u
 };

static const UType JSum_7_11_7_9[]=
 {
  104u,
  92u,
  92u,
  118u,
  108u,
  118u,
  90u,
  102u,
  104u,
  91u,
  102u
 };

static const PtrLen<const UType> JTable_7_11_7[]=
 {
  Range(JSum_7_11_7_1),
  Range(JSum_7_11_7_2),
  Range(JSum_7_11_7_3),
  Range(JSum_7_11_7_4),
  Range(JSum_7_11_7_5),
  Range(JSum_7_11_7_6),
  Range(JSum_7_11_7_7),
  Range(JSum_7_11_7_8),
  Range(JSum_7_11_7_9)
 };

static const UType JSum_7_11_8_1[]=
 {
  184u,
  166u,
  188u,
  152u,
  164u,
  166u,
  170u,
  174u,
  148u,
  170u,
  187u
 };

static const UType JSum_7_11_8_2[]=
 {
  146u,
  182u,
  157u,
  182u,
  189u,
  169u,
  161u,
  178u,
  178u,
  166u,
  161u
 };

static const UType JSum_7_11_8_3[]=
 {
  146u,
  178u,
  169u,
  157u,
  161u,
  178u,
  189u,
  182u,
  166u,
  161u,
  182u
 };

static const UType JSum_7_11_8_4[]=
 {
  146u,
  157u,
  189u,
  161u,
  178u,
  161u,
  182u,
  182u,
  169u,
  178u,
  166u
 };

static const UType JSum_7_11_8_5[]=
 {
  184u,
  170u,
  174u,
  166u,
  152u,
  166u,
  187u,
  148u,
  170u,
  164u,
  188u
 };

static const UType JSum_7_11_8_6[]=
 {
  146u,
  157u,
  189u,
  161u,
  178u,
  161u,
  182u,
  182u,
  169u,
  178u,
  166u
 };

static const UType JSum_7_11_8_7[]=
 {
  146u,
  178u,
  169u,
  157u,
  161u,
  178u,
  189u,
  182u,
  166u,
  161u,
  182u
 };

static const UType JSum_7_11_8_8[]=
 {
  146u,
  182u,
  157u,
  182u,
  189u,
  169u,
  161u,
  178u,
  178u,
  166u,
  161u
 };

static const UType JSum_7_11_8_9[]=
 {
  184u,
  166u,
  188u,
  152u,
  164u,
  166u,
  170u,
  174u,
  148u,
  170u,
  187u
 };

static const PtrLen<const UType> JTable_7_11_8[]=
 {
  Range(JSum_7_11_8_1),
  Range(JSum_7_11_8_2),
  Range(JSum_7_11_8_3),
  Range(JSum_7_11_8_4),
  Range(JSum_7_11_8_5),
  Range(JSum_7_11_8_6),
  Range(JSum_7_11_8_7),
  Range(JSum_7_11_8_8),
  Range(JSum_7_11_8_9)
 };

static const UType JSum_7_11_9_1[]=
 {
  188u,
  192u,
  186u,
  170u,
  202u,
  188u,
  164u,
  172u,
  162u,
  198u,
  179u
 };

static const UType JSum_7_11_9_2[]=
 {
  182u,
  187u,
  184u,
  188u,
  190u,
  192u,
  180u,
  166u,
  154u,
  204u,
  174u
 };

static const UType JSum_7_11_9_3[]=
 {
  182u,
  154u,
  192u,
  184u,
  174u,
  166u,
  190u,
  187u,
  204u,
  180u,
  188u
 };

static const UType JSum_7_11_9_4[]=
 {
  182u,
  184u,
  190u,
  180u,
  154u,
  174u,
  187u,
  188u,
  192u,
  166u,
  204u
 };

static const UType JSum_7_11_9_5[]=
 {
  188u,
  198u,
  172u,
  188u,
  170u,
  192u,
  179u,
  162u,
  164u,
  202u,
  186u
 };

static const UType JSum_7_11_9_6[]=
 {
  182u,
  184u,
  190u,
  180u,
  154u,
  174u,
  187u,
  188u,
  192u,
  166u,
  204u
 };

static const UType JSum_7_11_9_7[]=
 {
  182u,
  154u,
  192u,
  184u,
  174u,
  166u,
  190u,
  187u,
  204u,
  180u,
  188u
 };

static const UType JSum_7_11_9_8[]=
 {
  182u,
  187u,
  184u,
  188u,
  190u,
  192u,
  180u,
  166u,
  154u,
  204u,
  174u
 };

static const UType JSum_7_11_9_9[]=
 {
  188u,
  192u,
  186u,
  170u,
  202u,
  188u,
  164u,
  172u,
  162u,
  198u,
  179u
 };

static const PtrLen<const UType> JTable_7_11_9[]=
 {
  Range(JSum_7_11_9_1),
  Range(JSum_7_11_9_2),
  Range(JSum_7_11_9_3),
  Range(JSum_7_11_9_4),
  Range(JSum_7_11_9_5),
  Range(JSum_7_11_9_6),
  Range(JSum_7_11_9_7),
  Range(JSum_7_11_9_8),
  Range(JSum_7_11_9_9)
 };

static const UType JSum_7_11_10_1[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const UType JSum_7_11_10_2[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_7_11_10_3[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_7_11_10_4[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_7_11_10_5[]=
 {
  198u,
  208u,
  224u,
  206u,
  210u,
  204u,
  236u,
  222u,
  194u,
  220u,
  187u
 };

static const UType JSum_7_11_10_6[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_7_11_10_7[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_7_11_10_8[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_7_11_10_9[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const PtrLen<const UType> JTable_7_11_10[]=
 {
  Range(JSum_7_11_10_1),
  Range(JSum_7_11_10_2),
  Range(JSum_7_11_10_3),
  Range(JSum_7_11_10_4),
  Range(JSum_7_11_10_5),
  Range(JSum_7_11_10_6),
  Range(JSum_7_11_10_7),
  Range(JSum_7_11_10_8),
  Range(JSum_7_11_10_9)
 };

static const UType JSum_7_11_11_1[]=
 {
  272u,
  230u,
  254u,
  288u,
  256u,
  264u,
  267u,
  278u,
  270u,
  286u,
  260u
 };

static const UType JSum_7_11_11_2[]=
 {
  252u,
  286u,
  268u,
  244u,
  238u,
  275u,
  264u,
  286u,
  258u,
  276u,
  278u
 };

static const UType JSum_7_11_11_3[]=
 {
  252u,
  258u,
  275u,
  268u,
  278u,
  286u,
  238u,
  286u,
  276u,
  264u,
  244u
 };

static const UType JSum_7_11_11_4[]=
 {
  252u,
  268u,
  238u,
  264u,
  258u,
  278u,
  286u,
  244u,
  275u,
  286u,
  276u
 };

static const UType JSum_7_11_11_5[]=
 {
  272u,
  286u,
  278u,
  264u,
  288u,
  230u,
  260u,
  270u,
  267u,
  256u,
  254u
 };

static const UType JSum_7_11_11_6[]=
 {
  252u,
  268u,
  238u,
  264u,
  258u,
  278u,
  286u,
  244u,
  275u,
  286u,
  276u
 };

static const UType JSum_7_11_11_7[]=
 {
  252u,
  258u,
  275u,
  268u,
  278u,
  286u,
  238u,
  286u,
  276u,
  264u,
  244u
 };

static const UType JSum_7_11_11_8[]=
 {
  252u,
  286u,
  268u,
  244u,
  238u,
  275u,
  264u,
  286u,
  258u,
  276u,
  278u
 };

static const UType JSum_7_11_11_9[]=
 {
  272u,
  230u,
  254u,
  288u,
  256u,
  264u,
  267u,
  278u,
  270u,
  286u,
  260u
 };

static const PtrLen<const UType> JTable_7_11_11[]=
 {
  Range(JSum_7_11_11_1),
  Range(JSum_7_11_11_2),
  Range(JSum_7_11_11_3),
  Range(JSum_7_11_11_4),
  Range(JSum_7_11_11_5),
  Range(JSum_7_11_11_6),
  Range(JSum_7_11_11_7),
  Range(JSum_7_11_11_8),
  Range(JSum_7_11_11_9)
 };

static const UType JSum_7_11_12_1[]=
 {
  560u,
  530u,
  564u,
  574u,
  530u,
  498u,
  552u,
  523u,
  570u,
  544u,
  560u
 };

static const UType JSum_7_11_12_2[]=
 {
  540u,
  550u,
  564u,
  534u,
  539u,
  580u,
  582u,
  512u,
  554u,
  512u,
  538u
 };

static const UType JSum_7_11_12_3[]=
 {
  540u,
  554u,
  580u,
  564u,
  538u,
  512u,
  539u,
  550u,
  512u,
  582u,
  534u
 };

static const UType JSum_7_11_12_4[]=
 {
  540u,
  564u,
  539u,
  582u,
  554u,
  538u,
  550u,
  534u,
  580u,
  512u,
  512u
 };

static const UType JSum_7_11_12_5[]=
 {
  560u,
  544u,
  523u,
  498u,
  574u,
  530u,
  560u,
  570u,
  552u,
  530u,
  564u
 };

static const UType JSum_7_11_12_6[]=
 {
  540u,
  564u,
  539u,
  582u,
  554u,
  538u,
  550u,
  534u,
  580u,
  512u,
  512u
 };

static const UType JSum_7_11_12_7[]=
 {
  540u,
  554u,
  580u,
  564u,
  538u,
  512u,
  539u,
  550u,
  512u,
  582u,
  534u
 };

static const UType JSum_7_11_12_8[]=
 {
  540u,
  550u,
  564u,
  534u,
  539u,
  580u,
  582u,
  512u,
  554u,
  512u,
  538u
 };

static const UType JSum_7_11_12_9[]=
 {
  560u,
  530u,
  564u,
  574u,
  530u,
  498u,
  552u,
  523u,
  570u,
  544u,
  560u
 };

static const PtrLen<const UType> JTable_7_11_12[]=
 {
  Range(JSum_7_11_12_1),
  Range(JSum_7_11_12_2),
  Range(JSum_7_11_12_3),
  Range(JSum_7_11_12_4),
  Range(JSum_7_11_12_5),
  Range(JSum_7_11_12_6),
  Range(JSum_7_11_12_7),
  Range(JSum_7_11_12_8),
  Range(JSum_7_11_12_9)
 };

static const UType JSum_7_11_13_1[]=
 {
  558u,
  608u,
  570u,
  592u,
  574u,
  524u,
  550u,
  588u,
  570u,
  548u,
  587u
 };

static const UType JSum_7_11_13_2[]=
 {
  573u,
  556u,
  518u,
  571u,
  604u,
  558u,
  590u,
  555u,
  599u,
  575u,
  570u
 };

static const UType JSum_7_11_13_3[]=
 {
  573u,
  599u,
  558u,
  518u,
  570u,
  555u,
  604u,
  556u,
  575u,
  590u,
  571u
 };

static const UType JSum_7_11_13_4[]=
 {
  573u,
  518u,
  604u,
  590u,
  599u,
  570u,
  556u,
  571u,
  558u,
  555u,
  575u
 };

static const UType JSum_7_11_13_5[]=
 {
  558u,
  548u,
  588u,
  524u,
  592u,
  608u,
  587u,
  570u,
  550u,
  574u,
  570u
 };

static const UType JSum_7_11_13_6[]=
 {
  573u,
  518u,
  604u,
  590u,
  599u,
  570u,
  556u,
  571u,
  558u,
  555u,
  575u
 };

static const UType JSum_7_11_13_7[]=
 {
  573u,
  599u,
  558u,
  518u,
  570u,
  555u,
  604u,
  556u,
  575u,
  590u,
  571u
 };

static const UType JSum_7_11_13_8[]=
 {
  573u,
  556u,
  518u,
  571u,
  604u,
  558u,
  590u,
  555u,
  599u,
  575u,
  570u
 };

static const UType JSum_7_11_13_9[]=
 {
  558u,
  608u,
  570u,
  592u,
  574u,
  524u,
  550u,
  588u,
  570u,
  548u,
  587u
 };

static const PtrLen<const UType> JTable_7_11_13[]=
 {
  Range(JSum_7_11_13_1),
  Range(JSum_7_11_13_2),
  Range(JSum_7_11_13_3),
  Range(JSum_7_11_13_4),
  Range(JSum_7_11_13_5),
  Range(JSum_7_11_13_6),
  Range(JSum_7_11_13_7),
  Range(JSum_7_11_13_8),
  Range(JSum_7_11_13_9)
 };

static const UType JSum_7_11_14_1[]=
 {
  792u,
  828u,
  824u,
  750u,
  842u,
  814u,
  812u,
  776u,
  771u,
  778u,
  790u
 };

static const UType JSum_7_11_14_2[]=
 {
  782u,
  819u,
  774u,
  784u,
  799u,
  792u,
  785u,
  851u,
  811u,
  830u,
  750u
 };

static const UType JSum_7_11_14_3[]=
 {
  782u,
  811u,
  792u,
  774u,
  750u,
  851u,
  799u,
  819u,
  830u,
  785u,
  784u
 };

static const UType JSum_7_11_14_4[]=
 {
  782u,
  774u,
  799u,
  785u,
  811u,
  750u,
  819u,
  784u,
  792u,
  851u,
  830u
 };

static const UType JSum_7_11_14_5[]=
 {
  792u,
  778u,
  776u,
  814u,
  750u,
  828u,
  790u,
  771u,
  812u,
  842u,
  824u
 };

static const UType JSum_7_11_14_6[]=
 {
  782u,
  774u,
  799u,
  785u,
  811u,
  750u,
  819u,
  784u,
  792u,
  851u,
  830u
 };

static const UType JSum_7_11_14_7[]=
 {
  782u,
  811u,
  792u,
  774u,
  750u,
  851u,
  799u,
  819u,
  830u,
  785u,
  784u
 };

static const UType JSum_7_11_14_8[]=
 {
  782u,
  819u,
  774u,
  784u,
  799u,
  792u,
  785u,
  851u,
  811u,
  830u,
  750u
 };

static const UType JSum_7_11_14_9[]=
 {
  792u,
  828u,
  824u,
  750u,
  842u,
  814u,
  812u,
  776u,
  771u,
  778u,
  790u
 };

static const PtrLen<const UType> JTable_7_11_14[]=
 {
  Range(JSum_7_11_14_1),
  Range(JSum_7_11_14_2),
  Range(JSum_7_11_14_3),
  Range(JSum_7_11_14_4),
  Range(JSum_7_11_14_5),
  Range(JSum_7_11_14_6),
  Range(JSum_7_11_14_7),
  Range(JSum_7_11_14_8),
  Range(JSum_7_11_14_9)
 };

static const UType JSum_7_11_15_1[]=
 {
  1966u,
  1938u,
  1922u,
  1952u,
  1996u,
  1988u,
  1860u,
  1964u,
  1875u,
  1902u,
  1954u
 };

static const UType JSum_7_11_15_2[]=
 {
  1968u,
  1875u,
  1940u,
  1962u,
  1883u,
  1960u,
  1883u,
  1943u,
  1917u,
  1972u,
  2014u
 };

static const UType JSum_7_11_15_3[]=
 {
  1968u,
  1917u,
  1960u,
  1940u,
  2014u,
  1943u,
  1883u,
  1875u,
  1972u,
  1883u,
  1962u
 };

static const UType JSum_7_11_15_4[]=
 {
  1968u,
  1940u,
  1883u,
  1883u,
  1917u,
  2014u,
  1875u,
  1962u,
  1960u,
  1943u,
  1972u
 };

static const UType JSum_7_11_15_5[]=
 {
  1966u,
  1902u,
  1964u,
  1988u,
  1952u,
  1938u,
  1954u,
  1875u,
  1860u,
  1996u,
  1922u
 };

static const UType JSum_7_11_15_6[]=
 {
  1968u,
  1940u,
  1883u,
  1883u,
  1917u,
  2014u,
  1875u,
  1962u,
  1960u,
  1943u,
  1972u
 };

static const UType JSum_7_11_15_7[]=
 {
  1968u,
  1917u,
  1960u,
  1940u,
  2014u,
  1943u,
  1883u,
  1875u,
  1972u,
  1883u,
  1962u
 };

static const UType JSum_7_11_15_8[]=
 {
  1968u,
  1875u,
  1940u,
  1962u,
  1883u,
  1960u,
  1883u,
  1943u,
  1917u,
  1972u,
  2014u
 };

static const UType JSum_7_11_15_9[]=
 {
  1966u,
  1938u,
  1922u,
  1952u,
  1996u,
  1988u,
  1860u,
  1964u,
  1875u,
  1902u,
  1954u
 };

static const PtrLen<const UType> JTable_7_11_15[]=
 {
  Range(JSum_7_11_15_1),
  Range(JSum_7_11_15_2),
  Range(JSum_7_11_15_3),
  Range(JSum_7_11_15_4),
  Range(JSum_7_11_15_5),
  Range(JSum_7_11_15_6),
  Range(JSum_7_11_15_7),
  Range(JSum_7_11_15_8),
  Range(JSum_7_11_15_9)
 };

static const UType JSum_7_11_16_1[]=
 {
  3188u,
  3202u,
  3283u,
  3180u,
  3354u,
  3284u,
  3182u,
  3200u,
  3198u,
  3260u,
  3198u
 };

static const UType JSum_7_11_16_2[]=
 {
  3175u,
  3222u,
  3204u,
  3260u,
  3239u,
  3211u,
  3207u,
  3388u,
  3213u,
  3214u,
  3196u
 };

static const UType JSum_7_11_16_3[]=
 {
  3175u,
  3213u,
  3211u,
  3204u,
  3196u,
  3388u,
  3239u,
  3222u,
  3214u,
  3207u,
  3260u
 };

static const UType JSum_7_11_16_4[]=
 {
  3175u,
  3204u,
  3239u,
  3207u,
  3213u,
  3196u,
  3222u,
  3260u,
  3211u,
  3388u,
  3214u
 };

static const UType JSum_7_11_16_5[]=
 {
  3188u,
  3260u,
  3200u,
  3284u,
  3180u,
  3202u,
  3198u,
  3198u,
  3182u,
  3354u,
  3283u
 };

static const UType JSum_7_11_16_6[]=
 {
  3175u,
  3204u,
  3239u,
  3207u,
  3213u,
  3196u,
  3222u,
  3260u,
  3211u,
  3388u,
  3214u
 };

static const UType JSum_7_11_16_7[]=
 {
  3175u,
  3213u,
  3211u,
  3204u,
  3196u,
  3388u,
  3239u,
  3222u,
  3214u,
  3207u,
  3260u
 };

static const UType JSum_7_11_16_8[]=
 {
  3175u,
  3222u,
  3204u,
  3260u,
  3239u,
  3211u,
  3207u,
  3388u,
  3213u,
  3214u,
  3196u
 };

static const UType JSum_7_11_16_9[]=
 {
  3188u,
  3202u,
  3283u,
  3180u,
  3354u,
  3284u,
  3182u,
  3200u,
  3198u,
  3260u,
  3198u
 };

static const PtrLen<const UType> JTable_7_11_16[]=
 {
  Range(JSum_7_11_16_1),
  Range(JSum_7_11_16_2),
  Range(JSum_7_11_16_3),
  Range(JSum_7_11_16_4),
  Range(JSum_7_11_16_5),
  Range(JSum_7_11_16_6),
  Range(JSum_7_11_16_7),
  Range(JSum_7_11_16_8),
  Range(JSum_7_11_16_9)
 };

static const UType JSum_7_11_17_1[]=
 {
  3515u,
  3408u,
  3526u,
  3432u,
  3482u,
  3370u,
  3364u,
  3492u,
  3526u,
  3444u,
  3478u
 };

static const UType JSum_7_11_17_2[]=
 {
  3464u,
  3510u,
  3433u,
  3410u,
  3468u,
  3320u,
  3489u,
  3527u,
  3497u,
  3424u,
  3495u
 };

static const UType JSum_7_11_17_3[]=
 {
  3464u,
  3497u,
  3320u,
  3433u,
  3495u,
  3527u,
  3468u,
  3510u,
  3424u,
  3489u,
  3410u
 };

static const UType JSum_7_11_17_4[]=
 {
  3464u,
  3433u,
  3468u,
  3489u,
  3497u,
  3495u,
  3510u,
  3410u,
  3320u,
  3527u,
  3424u
 };

static const UType JSum_7_11_17_5[]=
 {
  3515u,
  3444u,
  3492u,
  3370u,
  3432u,
  3408u,
  3478u,
  3526u,
  3364u,
  3482u,
  3526u
 };

static const UType JSum_7_11_17_6[]=
 {
  3464u,
  3433u,
  3468u,
  3489u,
  3497u,
  3495u,
  3510u,
  3410u,
  3320u,
  3527u,
  3424u
 };

static const UType JSum_7_11_17_7[]=
 {
  3464u,
  3497u,
  3320u,
  3433u,
  3495u,
  3527u,
  3468u,
  3510u,
  3424u,
  3489u,
  3410u
 };

static const UType JSum_7_11_17_8[]=
 {
  3464u,
  3510u,
  3433u,
  3410u,
  3468u,
  3320u,
  3489u,
  3527u,
  3497u,
  3424u,
  3495u
 };

static const UType JSum_7_11_17_9[]=
 {
  3515u,
  3408u,
  3526u,
  3432u,
  3482u,
  3370u,
  3364u,
  3492u,
  3526u,
  3444u,
  3478u
 };

static const PtrLen<const UType> JTable_7_11_17[]=
 {
  Range(JSum_7_11_17_1),
  Range(JSum_7_11_17_2),
  Range(JSum_7_11_17_3),
  Range(JSum_7_11_17_4),
  Range(JSum_7_11_17_5),
  Range(JSum_7_11_17_6),
  Range(JSum_7_11_17_7),
  Range(JSum_7_11_17_8),
  Range(JSum_7_11_17_9)
 };

static const UType JSum_7_11_18_1[]=
 {
  4020u,
  3994u,
  3968u,
  4026u,
  4050u,
  4027u,
  3936u,
  4048u,
  3842u,
  3944u,
  4034u
 };

static const UType JSum_7_11_18_2[]=
 {
  3974u,
  4009u,
  4005u,
  3811u,
  4020u,
  4011u,
  4046u,
  4030u,
  3993u,
  4016u,
  3974u
 };

static const UType JSum_7_11_18_3[]=
 {
  3974u,
  3993u,
  4011u,
  4005u,
  3974u,
  4030u,
  4020u,
  4009u,
  4016u,
  4046u,
  3811u
 };

static const UType JSum_7_11_18_4[]=
 {
  3974u,
  4005u,
  4020u,
  4046u,
  3993u,
  3974u,
  4009u,
  3811u,
  4011u,
  4030u,
  4016u
 };

static const UType JSum_7_11_18_5[]=
 {
  4020u,
  3944u,
  4048u,
  4027u,
  4026u,
  3994u,
  4034u,
  3842u,
  3936u,
  4050u,
  3968u
 };

static const UType JSum_7_11_18_6[]=
 {
  3974u,
  4005u,
  4020u,
  4046u,
  3993u,
  3974u,
  4009u,
  3811u,
  4011u,
  4030u,
  4016u
 };

static const UType JSum_7_11_18_7[]=
 {
  3974u,
  3993u,
  4011u,
  4005u,
  3974u,
  4030u,
  4020u,
  4009u,
  4016u,
  4046u,
  3811u
 };

static const UType JSum_7_11_18_8[]=
 {
  3974u,
  4009u,
  4005u,
  3811u,
  4020u,
  4011u,
  4046u,
  4030u,
  3993u,
  4016u,
  3974u
 };

static const UType JSum_7_11_18_9[]=
 {
  4020u,
  3994u,
  3968u,
  4026u,
  4050u,
  4027u,
  3936u,
  4048u,
  3842u,
  3944u,
  4034u
 };

static const PtrLen<const UType> JTable_7_11_18[]=
 {
  Range(JSum_7_11_18_1),
  Range(JSum_7_11_18_2),
  Range(JSum_7_11_18_3),
  Range(JSum_7_11_18_4),
  Range(JSum_7_11_18_5),
  Range(JSum_7_11_18_6),
  Range(JSum_7_11_18_7),
  Range(JSum_7_11_18_8),
  Range(JSum_7_11_18_9)
 };

static const UType JSum_7_11_19_1[]=
 {
  6780u,
  6606u,
  6547u,
  6704u,
  6634u,
  6610u,
  6498u,
  6584u,
  6642u,
  6728u,
  6596u
 };

static const UType JSum_7_11_19_2[]=
 {
  6763u,
  6590u,
  6556u,
  6630u,
  6501u,
  6605u,
  6713u,
  6684u,
  6539u,
  6708u,
  6640u
 };

static const UType JSum_7_11_19_3[]=
 {
  6763u,
  6539u,
  6605u,
  6556u,
  6640u,
  6684u,
  6501u,
  6590u,
  6708u,
  6713u,
  6630u
 };

static const UType JSum_7_11_19_4[]=
 {
  6763u,
  6556u,
  6501u,
  6713u,
  6539u,
  6640u,
  6590u,
  6630u,
  6605u,
  6684u,
  6708u
 };

static const UType JSum_7_11_19_5[]=
 {
  6780u,
  6728u,
  6584u,
  6610u,
  6704u,
  6606u,
  6596u,
  6642u,
  6498u,
  6634u,
  6547u
 };

static const UType JSum_7_11_19_6[]=
 {
  6763u,
  6556u,
  6501u,
  6713u,
  6539u,
  6640u,
  6590u,
  6630u,
  6605u,
  6684u,
  6708u
 };

static const UType JSum_7_11_19_7[]=
 {
  6763u,
  6539u,
  6605u,
  6556u,
  6640u,
  6684u,
  6501u,
  6590u,
  6708u,
  6713u,
  6630u
 };

static const UType JSum_7_11_19_8[]=
 {
  6763u,
  6590u,
  6556u,
  6630u,
  6501u,
  6605u,
  6713u,
  6684u,
  6539u,
  6708u,
  6640u
 };

static const UType JSum_7_11_19_9[]=
 {
  6780u,
  6606u,
  6547u,
  6704u,
  6634u,
  6610u,
  6498u,
  6584u,
  6642u,
  6728u,
  6596u
 };

static const PtrLen<const UType> JTable_7_11_19[]=
 {
  Range(JSum_7_11_19_1),
  Range(JSum_7_11_19_2),
  Range(JSum_7_11_19_3),
  Range(JSum_7_11_19_4),
  Range(JSum_7_11_19_5),
  Range(JSum_7_11_19_6),
  Range(JSum_7_11_19_7),
  Range(JSum_7_11_19_8),
  Range(JSum_7_11_19_9)
 };

static const UType JSum_7_11_20_1[]=
 {
  9438u,
  9340u,
  9347u,
  9254u,
  9228u,
  9432u,
  9254u,
  9186u,
  9212u,
  9268u,
  9142u
 };

static const UType JSum_7_11_20_2[]=
 {
  9201u,
  9290u,
  9234u,
  9276u,
  9299u,
  9143u,
  9499u,
  9390u,
  9283u,
  9208u,
  9278u
 };

static const UType JSum_7_11_20_3[]=
 {
  9201u,
  9283u,
  9143u,
  9234u,
  9278u,
  9390u,
  9299u,
  9290u,
  9208u,
  9499u,
  9276u
 };

static const UType JSum_7_11_20_4[]=
 {
  9201u,
  9234u,
  9299u,
  9499u,
  9283u,
  9278u,
  9290u,
  9276u,
  9143u,
  9390u,
  9208u
 };

static const UType JSum_7_11_20_5[]=
 {
  9438u,
  9268u,
  9186u,
  9432u,
  9254u,
  9340u,
  9142u,
  9212u,
  9254u,
  9228u,
  9347u
 };

static const UType JSum_7_11_20_6[]=
 {
  9201u,
  9234u,
  9299u,
  9499u,
  9283u,
  9278u,
  9290u,
  9276u,
  9143u,
  9390u,
  9208u
 };

static const UType JSum_7_11_20_7[]=
 {
  9201u,
  9283u,
  9143u,
  9234u,
  9278u,
  9390u,
  9299u,
  9290u,
  9208u,
  9499u,
  9276u
 };

static const UType JSum_7_11_20_8[]=
 {
  9201u,
  9290u,
  9234u,
  9276u,
  9299u,
  9143u,
  9499u,
  9390u,
  9283u,
  9208u,
  9278u
 };

static const UType JSum_7_11_20_9[]=
 {
  9438u,
  9340u,
  9347u,
  9254u,
  9228u,
  9432u,
  9254u,
  9186u,
  9212u,
  9268u,
  9142u
 };

static const PtrLen<const UType> JTable_7_11_20[]=
 {
  Range(JSum_7_11_20_1),
  Range(JSum_7_11_20_2),
  Range(JSum_7_11_20_3),
  Range(JSum_7_11_20_4),
  Range(JSum_7_11_20_5),
  Range(JSum_7_11_20_6),
  Range(JSum_7_11_20_7),
  Range(JSum_7_11_20_8),
  Range(JSum_7_11_20_9)
 };

static const UType JSum_7_11_21_1[]=
 {
  9563u,
  9654u,
  9568u,
  9830u,
  9672u,
  9804u,
  9802u,
  9606u,
  9616u,
  9770u,
  9704u
 };

static const UType JSum_7_11_21_2[]=
 {
  9688u,
  9723u,
  9736u,
  9801u,
  9639u,
  9821u,
  9496u,
  9552u,
  9734u,
  9737u,
  9662u
 };

static const UType JSum_7_11_21_3[]=
 {
  9688u,
  9734u,
  9821u,
  9736u,
  9662u,
  9552u,
  9639u,
  9723u,
  9737u,
  9496u,
  9801u
 };

static const UType JSum_7_11_21_4[]=
 {
  9688u,
  9736u,
  9639u,
  9496u,
  9734u,
  9662u,
  9723u,
  9801u,
  9821u,
  9552u,
  9737u
 };

static const UType JSum_7_11_21_5[]=
 {
  9563u,
  9770u,
  9606u,
  9804u,
  9830u,
  9654u,
  9704u,
  9616u,
  9802u,
  9672u,
  9568u
 };

static const UType JSum_7_11_21_6[]=
 {
  9688u,
  9736u,
  9639u,
  9496u,
  9734u,
  9662u,
  9723u,
  9801u,
  9821u,
  9552u,
  9737u
 };

static const UType JSum_7_11_21_7[]=
 {
  9688u,
  9734u,
  9821u,
  9736u,
  9662u,
  9552u,
  9639u,
  9723u,
  9737u,
  9496u,
  9801u
 };

static const UType JSum_7_11_21_8[]=
 {
  9688u,
  9723u,
  9736u,
  9801u,
  9639u,
  9821u,
  9496u,
  9552u,
  9734u,
  9737u,
  9662u
 };

static const UType JSum_7_11_21_9[]=
 {
  9563u,
  9654u,
  9568u,
  9830u,
  9672u,
  9804u,
  9802u,
  9606u,
  9616u,
  9770u,
  9704u
 };

static const PtrLen<const UType> JTable_7_11_21[]=
 {
  Range(JSum_7_11_21_1),
  Range(JSum_7_11_21_2),
  Range(JSum_7_11_21_3),
  Range(JSum_7_11_21_4),
  Range(JSum_7_11_21_5),
  Range(JSum_7_11_21_6),
  Range(JSum_7_11_21_7),
  Range(JSum_7_11_21_8),
  Range(JSum_7_11_21_9)
 };

static const UType JSum_7_11_22_1[]=
 {
  42011u,
  42050u,
  42108u,
  42354u,
  41908u,
  41876u,
  41750u,
  41974u,
  42200u,
  41610u,
  42048u
 };

static const UType JSum_7_11_22_2[]=
 {
  42104u,
  42315u,
  41580u,
  41833u,
  41803u,
  42129u,
  42012u,
  41968u,
  41978u,
  42217u,
  41950u
 };

static const UType JSum_7_11_22_3[]=
 {
  42104u,
  41978u,
  42129u,
  41580u,
  41950u,
  41968u,
  41803u,
  42315u,
  42217u,
  42012u,
  41833u
 };

static const UType JSum_7_11_22_4[]=
 {
  42104u,
  41580u,
  41803u,
  42012u,
  41978u,
  41950u,
  42315u,
  41833u,
  42129u,
  41968u,
  42217u
 };

static const UType JSum_7_11_22_5[]=
 {
  42011u,
  41610u,
  41974u,
  41876u,
  42354u,
  42050u,
  42048u,
  42200u,
  41750u,
  41908u,
  42108u
 };

static const UType JSum_7_11_22_6[]=
 {
  42104u,
  41580u,
  41803u,
  42012u,
  41978u,
  41950u,
  42315u,
  41833u,
  42129u,
  41968u,
  42217u
 };

static const UType JSum_7_11_22_7[]=
 {
  42104u,
  41978u,
  42129u,
  41580u,
  41950u,
  41968u,
  41803u,
  42315u,
  42217u,
  42012u,
  41833u
 };

static const UType JSum_7_11_22_8[]=
 {
  42104u,
  42315u,
  41580u,
  41833u,
  41803u,
  42129u,
  42012u,
  41968u,
  41978u,
  42217u,
  41950u
 };

static const UType JSum_7_11_22_9[]=
 {
  42011u,
  42050u,
  42108u,
  42354u,
  41908u,
  41876u,
  41750u,
  41974u,
  42200u,
  41610u,
  42048u
 };

static const PtrLen<const UType> JTable_7_11_22[]=
 {
  Range(JSum_7_11_22_1),
  Range(JSum_7_11_22_2),
  Range(JSum_7_11_22_3),
  Range(JSum_7_11_22_4),
  Range(JSum_7_11_22_5),
  Range(JSum_7_11_22_6),
  Range(JSum_7_11_22_7),
  Range(JSum_7_11_22_8),
  Range(JSum_7_11_22_9)
 };

static const UType JSum_7_11_23_1[]=
 {
  176070u,
  176460u,
  176814u,
  176510u,
  176476u,
  176268u,
  175846u,
  176216u,
  175646u,
  177139u,
  176492u
 };

static const UType JSum_7_11_23_2[]=
 {
  175625u,
  176476u,
  177050u,
  176627u,
  176554u,
  175929u,
  176563u,
  176477u,
  176202u,
  175818u,
  176616u
 };

static const UType JSum_7_11_23_3[]=
 {
  175625u,
  176202u,
  175929u,
  177050u,
  176616u,
  176477u,
  176554u,
  176476u,
  175818u,
  176563u,
  176627u
 };

static const UType JSum_7_11_23_4[]=
 {
  175625u,
  177050u,
  176554u,
  176563u,
  176202u,
  176616u,
  176476u,
  176627u,
  175929u,
  176477u,
  175818u
 };

static const UType JSum_7_11_23_5[]=
 {
  176070u,
  177139u,
  176216u,
  176268u,
  176510u,
  176460u,
  176492u,
  175646u,
  175846u,
  176476u,
  176814u
 };

static const UType JSum_7_11_23_6[]=
 {
  175625u,
  177050u,
  176554u,
  176563u,
  176202u,
  176616u,
  176476u,
  176627u,
  175929u,
  176477u,
  175818u
 };

static const UType JSum_7_11_23_7[]=
 {
  175625u,
  176202u,
  175929u,
  177050u,
  176616u,
  176477u,
  176554u,
  176476u,
  175818u,
  176563u,
  176627u
 };

static const UType JSum_7_11_23_8[]=
 {
  175625u,
  176476u,
  177050u,
  176627u,
  176554u,
  175929u,
  176563u,
  176477u,
  176202u,
  175818u,
  176616u
 };

static const UType JSum_7_11_23_9[]=
 {
  176070u,
  176460u,
  176814u,
  176510u,
  176476u,
  176268u,
  175846u,
  176216u,
  175646u,
  177139u,
  176492u
 };

static const PtrLen<const UType> JTable_7_11_23[]=
 {
  Range(JSum_7_11_23_1),
  Range(JSum_7_11_23_2),
  Range(JSum_7_11_23_3),
  Range(JSum_7_11_23_4),
  Range(JSum_7_11_23_5),
  Range(JSum_7_11_23_6),
  Range(JSum_7_11_23_7),
  Range(JSum_7_11_23_8),
  Range(JSum_7_11_23_9)
 };

static const UType JSum_7_11_24_1[]=
 {
  293954u,
  294212u,
  294418u,
  294164u,
  292816u,
  293316u,
  294456u,
  293387u,
  294462u,
  293826u,
  294218u
 };

static const UType JSum_7_11_24_2[]=
 {
  294100u,
  294408u,
  293778u,
  293830u,
  294195u,
  294492u,
  294668u,
  292834u,
  294062u,
  293404u,
  293458u
 };

static const UType JSum_7_11_24_3[]=
 {
  294100u,
  294062u,
  294492u,
  293778u,
  293458u,
  292834u,
  294195u,
  294408u,
  293404u,
  294668u,
  293830u
 };

static const UType JSum_7_11_24_4[]=
 {
  294100u,
  293778u,
  294195u,
  294668u,
  294062u,
  293458u,
  294408u,
  293830u,
  294492u,
  292834u,
  293404u
 };

static const UType JSum_7_11_24_5[]=
 {
  293954u,
  293826u,
  293387u,
  293316u,
  294164u,
  294212u,
  294218u,
  294462u,
  294456u,
  292816u,
  294418u
 };

static const UType JSum_7_11_24_6[]=
 {
  294100u,
  293778u,
  294195u,
  294668u,
  294062u,
  293458u,
  294408u,
  293830u,
  294492u,
  292834u,
  293404u
 };

static const UType JSum_7_11_24_7[]=
 {
  294100u,
  294062u,
  294492u,
  293778u,
  293458u,
  292834u,
  294195u,
  294408u,
  293404u,
  294668u,
  293830u
 };

static const UType JSum_7_11_24_8[]=
 {
  294100u,
  294408u,
  293778u,
  293830u,
  294195u,
  294492u,
  294668u,
  292834u,
  294062u,
  293404u,
  293458u
 };

static const UType JSum_7_11_24_9[]=
 {
  293954u,
  294212u,
  294418u,
  294164u,
  292816u,
  293316u,
  294456u,
  293387u,
  294462u,
  293826u,
  294218u
 };

static const PtrLen<const UType> JTable_7_11_24[]=
 {
  Range(JSum_7_11_24_1),
  Range(JSum_7_11_24_2),
  Range(JSum_7_11_24_3),
  Range(JSum_7_11_24_4),
  Range(JSum_7_11_24_5),
  Range(JSum_7_11_24_6),
  Range(JSum_7_11_24_7),
  Range(JSum_7_11_24_8),
  Range(JSum_7_11_24_9)
 };

static const TestSet::JTable JSet_7_11[]=
 {
  { 23u , Range(JTable_7_11_1) },
  { 67u , Range(JTable_7_11_2) },
  { 331u , Range(JTable_7_11_3) },
  { 419u , Range(JTable_7_11_4) },
  { 463u , Range(JTable_7_11_5) },
  { 859u , Range(JTable_7_11_6) },
  { 1123u , Range(JTable_7_11_7) },
  { 1871u , Range(JTable_7_11_8) },
  { 2003u , Range(JTable_7_11_9) },
  { 2311u , Range(JTable_7_11_10) },
  { 2927u , Range(JTable_7_11_11) },
  { 6007u , Range(JTable_7_11_12) },
  { 6271u , Range(JTable_7_11_13) },
  { 8779u , Range(JTable_7_11_14) },
  { 21319u , Range(JTable_7_11_15) },
  { 35531u , Range(JTable_7_11_16) },
  { 38039u , Range(JTable_7_11_17) },
  { 43891u , Range(JTable_7_11_18) },
  { 72931u , Range(JTable_7_11_19) },
  { 102103u , Range(JTable_7_11_20) },
  { 106591u , Range(JTable_7_11_21) },
  { 461891u , Range(JTable_7_11_22) },
  { 1939939u , Range(JTable_7_11_23) },
  { 3233231u , Range(JTable_7_11_24) }
 };

static const UType JSum_7_13_1_1[]=
 {
  8u,
  6u,
  4u,
  10u,
  6u,
  5u,
  8u,
  8u,
  2u,
  4u,
  2u,
  8u,
  6u
 };

static const UType JSum_7_13_1_2[]=
 {
  8u,
  7u,
  8u,
  5u,
  5u,
  11u,
  3u,
  7u,
  7u,
  6u,
  2u,
  3u,
  5u
 };

static const UType JSum_7_13_1_3[]=
 {
  8u,
  3u,
  4u,
  3u,
  9u,
  4u,
  4u,
  7u,
  7u,
  3u,
  9u,
  7u,
  9u
 };

static const UType JSum_7_13_1_4[]=
 {
  8u,
  2u,
  7u,
  5u,
  7u,
  3u,
  7u,
  11u,
  8u,
  5u,
  6u,
  3u,
  5u
 };

static const UType JSum_7_13_1_5[]=
 {
  8u,
  8u,
  5u,
  3u,
  7u,
  2u,
  5u,
  7u,
  5u,
  11u,
  7u,
  6u,
  3u
 };

static const UType JSum_7_13_1_6[]=
 {
  8u,
  8u,
  4u,
  8u,
  5u,
  10u,
  6u,
  6u,
  2u,
  2u,
  8u,
  6u,
  4u
 };

static const UType JSum_7_13_1_7[]=
 {
  8u,
  8u,
  5u,
  3u,
  7u,
  2u,
  5u,
  7u,
  5u,
  11u,
  7u,
  6u,
  3u
 };

static const UType JSum_7_13_1_8[]=
 {
  8u,
  2u,
  7u,
  5u,
  7u,
  3u,
  7u,
  11u,
  8u,
  5u,
  6u,
  3u,
  5u
 };

static const UType JSum_7_13_1_9[]=
 {
  8u,
  3u,
  4u,
  3u,
  9u,
  4u,
  4u,
  7u,
  7u,
  3u,
  9u,
  7u,
  9u
 };

static const UType JSum_7_13_1_10[]=
 {
  8u,
  7u,
  8u,
  5u,
  5u,
  11u,
  3u,
  7u,
  7u,
  6u,
  2u,
  3u,
  5u
 };

static const UType JSum_7_13_1_11[]=
 {
  8u,
  6u,
  4u,
  10u,
  6u,
  5u,
  8u,
  8u,
  2u,
  4u,
  2u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_7_13_1[]=
 {
  Range(JSum_7_13_1_1),
  Range(JSum_7_13_1_2),
  Range(JSum_7_13_1_3),
  Range(JSum_7_13_1_4),
  Range(JSum_7_13_1_5),
  Range(JSum_7_13_1_6),
  Range(JSum_7_13_1_7),
  Range(JSum_7_13_1_8),
  Range(JSum_7_13_1_9),
  Range(JSum_7_13_1_10),
  Range(JSum_7_13_1_11)
 };

static const UType JSum_7_13_2_1[]=
 {
  8u,
  10u,
  8u,
  8u,
  10u,
  12u,
  10u,
  14u,
  12u,
  14u,
  2u,
  9u,
  12u
 };

static const UType JSum_7_13_2_2[]=
 {
  9u,
  14u,
  4u,
  13u,
  11u,
  10u,
  9u,
  12u,
  13u,
  13u,
  9u,
  7u,
  5u
 };

static const UType JSum_7_13_2_3[]=
 {
  12u,
  15u,
  8u,
  15u,
  9u,
  8u,
  8u,
  7u,
  7u,
  15u,
  9u,
  7u,
  9u
 };

static const UType JSum_7_13_2_4[]=
 {
  9u,
  9u,
  12u,
  11u,
  14u,
  7u,
  13u,
  10u,
  4u,
  5u,
  13u,
  9u,
  13u
 };

static const UType JSum_7_13_2_5[]=
 {
  9u,
  4u,
  11u,
  9u,
  13u,
  9u,
  5u,
  14u,
  13u,
  10u,
  12u,
  13u,
  7u
 };

static const UType JSum_7_13_2_6[]=
 {
  8u,
  9u,
  14u,
  14u,
  12u,
  8u,
  10u,
  12u,
  2u,
  12u,
  10u,
  10u,
  8u
 };

static const UType JSum_7_13_2_7[]=
 {
  9u,
  4u,
  11u,
  9u,
  13u,
  9u,
  5u,
  14u,
  13u,
  10u,
  12u,
  13u,
  7u
 };

static const UType JSum_7_13_2_8[]=
 {
  9u,
  9u,
  12u,
  11u,
  14u,
  7u,
  13u,
  10u,
  4u,
  5u,
  13u,
  9u,
  13u
 };

static const UType JSum_7_13_2_9[]=
 {
  12u,
  15u,
  8u,
  15u,
  9u,
  8u,
  8u,
  7u,
  7u,
  15u,
  9u,
  7u,
  9u
 };

static const UType JSum_7_13_2_10[]=
 {
  9u,
  14u,
  4u,
  13u,
  11u,
  10u,
  9u,
  12u,
  13u,
  13u,
  9u,
  7u,
  5u
 };

static const UType JSum_7_13_2_11[]=
 {
  8u,
  10u,
  8u,
  8u,
  10u,
  12u,
  10u,
  14u,
  12u,
  14u,
  2u,
  9u,
  12u
 };

static const PtrLen<const UType> JTable_7_13_2[]=
 {
  Range(JSum_7_13_2_1),
  Range(JSum_7_13_2_2),
  Range(JSum_7_13_2_3),
  Range(JSum_7_13_2_4),
  Range(JSum_7_13_2_5),
  Range(JSum_7_13_2_6),
  Range(JSum_7_13_2_7),
  Range(JSum_7_13_2_8),
  Range(JSum_7_13_2_9),
  Range(JSum_7_13_2_10),
  Range(JSum_7_13_2_11)
 };

static const UType JSum_7_13_3_1[]=
 {
  28u,
  42u,
  42u,
  30u,
  44u,
  30u,
  36u,
  32u,
  32u,
  34u,
  34u,
  33u,
  24u
 };

static const UType JSum_7_13_3_2[]=
 {
  37u,
  37u,
  39u,
  30u,
  43u,
  27u,
  33u,
  42u,
  32u,
  27u,
  24u,
  35u,
  35u
 };

static const UType JSum_7_13_3_3[]=
 {
  18u,
  31u,
  39u,
  31u,
  38u,
  39u,
  39u,
  33u,
  33u,
  31u,
  38u,
  33u,
  38u
 };

static const UType JSum_7_13_3_4[]=
 {
  37u,
  24u,
  42u,
  43u,
  37u,
  35u,
  32u,
  27u,
  39u,
  35u,
  27u,
  33u,
  30u
 };

static const UType JSum_7_13_3_5[]=
 {
  37u,
  39u,
  43u,
  33u,
  32u,
  24u,
  35u,
  37u,
  30u,
  27u,
  42u,
  27u,
  35u
 };

static const UType JSum_7_13_3_6[]=
 {
  28u,
  33u,
  34u,
  32u,
  30u,
  30u,
  42u,
  24u,
  34u,
  32u,
  36u,
  44u,
  42u
 };

static const UType JSum_7_13_3_7[]=
 {
  37u,
  39u,
  43u,
  33u,
  32u,
  24u,
  35u,
  37u,
  30u,
  27u,
  42u,
  27u,
  35u
 };

static const UType JSum_7_13_3_8[]=
 {
  37u,
  24u,
  42u,
  43u,
  37u,
  35u,
  32u,
  27u,
  39u,
  35u,
  27u,
  33u,
  30u
 };

static const UType JSum_7_13_3_9[]=
 {
  18u,
  31u,
  39u,
  31u,
  38u,
  39u,
  39u,
  33u,
  33u,
  31u,
  38u,
  33u,
  38u
 };

static const UType JSum_7_13_3_10[]=
 {
  37u,
  37u,
  39u,
  30u,
  43u,
  27u,
  33u,
  42u,
  32u,
  27u,
  24u,
  35u,
  35u
 };

static const UType JSum_7_13_3_11[]=
 {
  28u,
  42u,
  42u,
  30u,
  44u,
  30u,
  36u,
  32u,
  32u,
  34u,
  34u,
  33u,
  24u
 };

static const PtrLen<const UType> JTable_7_13_3[]=
 {
  Range(JSum_7_13_3_1),
  Range(JSum_7_13_3_2),
  Range(JSum_7_13_3_3),
  Range(JSum_7_13_3_4),
  Range(JSum_7_13_3_5),
  Range(JSum_7_13_3_6),
  Range(JSum_7_13_3_7),
  Range(JSum_7_13_3_8),
  Range(JSum_7_13_3_9),
  Range(JSum_7_13_3_10),
  Range(JSum_7_13_3_11)
 };

static const UType JSum_7_13_4_1[]=
 {
  52u,
  44u,
  46u,
  44u,
  38u,
  28u,
  42u,
  44u,
  46u,
  34u,
  42u,
  49u,
  36u
 };

static const UType JSum_7_13_4_2[]=
 {
  43u,
  51u,
  49u,
  33u,
  46u,
  31u,
  38u,
  42u,
  37u,
  47u,
  47u,
  46u,
  35u
 };

static const UType JSum_7_13_4_3[]=
 {
  56u,
  40u,
  49u,
  40u,
  37u,
  49u,
  49u,
  37u,
  37u,
  40u,
  37u,
  37u,
  37u
 };

static const UType JSum_7_13_4_4[]=
 {
  43u,
  47u,
  42u,
  46u,
  51u,
  46u,
  37u,
  31u,
  49u,
  35u,
  47u,
  38u,
  33u
 };

static const UType JSum_7_13_4_5[]=
 {
  43u,
  49u,
  46u,
  38u,
  37u,
  47u,
  35u,
  51u,
  33u,
  31u,
  42u,
  47u,
  46u
 };

static const UType JSum_7_13_4_6[]=
 {
  52u,
  49u,
  34u,
  44u,
  28u,
  44u,
  44u,
  36u,
  42u,
  46u,
  42u,
  38u,
  46u
 };

static const UType JSum_7_13_4_7[]=
 {
  43u,
  49u,
  46u,
  38u,
  37u,
  47u,
  35u,
  51u,
  33u,
  31u,
  42u,
  47u,
  46u
 };

static const UType JSum_7_13_4_8[]=
 {
  43u,
  47u,
  42u,
  46u,
  51u,
  46u,
  37u,
  31u,
  49u,
  35u,
  47u,
  38u,
  33u
 };

static const UType JSum_7_13_4_9[]=
 {
  56u,
  40u,
  49u,
  40u,
  37u,
  49u,
  49u,
  37u,
  37u,
  40u,
  37u,
  37u,
  37u
 };

static const UType JSum_7_13_4_10[]=
 {
  43u,
  51u,
  49u,
  33u,
  46u,
  31u,
  38u,
  42u,
  37u,
  47u,
  47u,
  46u,
  35u
 };

static const UType JSum_7_13_4_11[]=
 {
  52u,
  44u,
  46u,
  44u,
  38u,
  28u,
  42u,
  44u,
  46u,
  34u,
  42u,
  49u,
  36u
 };

static const PtrLen<const UType> JTable_7_13_4[]=
 {
  Range(JSum_7_13_4_1),
  Range(JSum_7_13_4_2),
  Range(JSum_7_13_4_3),
  Range(JSum_7_13_4_4),
  Range(JSum_7_13_4_5),
  Range(JSum_7_13_4_6),
  Range(JSum_7_13_4_7),
  Range(JSum_7_13_4_8),
  Range(JSum_7_13_4_9),
  Range(JSum_7_13_4_10),
  Range(JSum_7_13_4_11)
 };

static const UType JSum_7_13_5_1[]=
 {
  86u,
  72u,
  68u,
  64u,
  70u,
  60u,
  58u,
  62u,
  74u,
  60u,
  62u,
  65u,
  56u
 };

static const UType JSum_7_13_5_2[]=
 {
  62u,
  61u,
  75u,
  67u,
  61u,
  59u,
  63u,
  56u,
  71u,
  68u,
  65u,
  87u,
  62u
 };

static const UType JSum_7_13_5_3[]=
 {
  68u,
  57u,
  79u,
  57u,
  63u,
  79u,
  79u,
  64u,
  64u,
  57u,
  63u,
  64u,
  63u
 };

static const UType JSum_7_13_5_4[]=
 {
  62u,
  65u,
  56u,
  61u,
  61u,
  87u,
  71u,
  59u,
  75u,
  62u,
  68u,
  63u,
  67u
 };

static const UType JSum_7_13_5_5[]=
 {
  62u,
  75u,
  61u,
  63u,
  71u,
  65u,
  62u,
  61u,
  67u,
  59u,
  56u,
  68u,
  87u
 };

static const UType JSum_7_13_5_6[]=
 {
  86u,
  65u,
  60u,
  62u,
  60u,
  64u,
  72u,
  56u,
  62u,
  74u,
  58u,
  70u,
  68u
 };

static const UType JSum_7_13_5_7[]=
 {
  62u,
  75u,
  61u,
  63u,
  71u,
  65u,
  62u,
  61u,
  67u,
  59u,
  56u,
  68u,
  87u
 };

static const UType JSum_7_13_5_8[]=
 {
  62u,
  65u,
  56u,
  61u,
  61u,
  87u,
  71u,
  59u,
  75u,
  62u,
  68u,
  63u,
  67u
 };

static const UType JSum_7_13_5_9[]=
 {
  68u,
  57u,
  79u,
  57u,
  63u,
  79u,
  79u,
  64u,
  64u,
  57u,
  63u,
  64u,
  63u
 };

static const UType JSum_7_13_5_10[]=
 {
  62u,
  61u,
  75u,
  67u,
  61u,
  59u,
  63u,
  56u,
  71u,
  68u,
  65u,
  87u,
  62u
 };

static const UType JSum_7_13_5_11[]=
 {
  86u,
  72u,
  68u,
  64u,
  70u,
  60u,
  58u,
  62u,
  74u,
  60u,
  62u,
  65u,
  56u
 };

static const PtrLen<const UType> JTable_7_13_5[]=
 {
  Range(JSum_7_13_5_1),
  Range(JSum_7_13_5_2),
  Range(JSum_7_13_5_3),
  Range(JSum_7_13_5_4),
  Range(JSum_7_13_5_5),
  Range(JSum_7_13_5_6),
  Range(JSum_7_13_5_7),
  Range(JSum_7_13_5_8),
  Range(JSum_7_13_5_9),
  Range(JSum_7_13_5_10),
  Range(JSum_7_13_5_11)
 };

static const UType JSum_7_13_6_1[]=
 {
  74u,
  69u,
  72u,
  62u,
  54u,
  70u,
  78u,
  70u,
  76u,
  72u,
  84u,
  56u,
  72u
 };

static const UType JSum_7_13_6_2[]=
 {
  89u,
  63u,
  71u,
  66u,
  64u,
  63u,
  60u,
  79u,
  69u,
  79u,
  69u,
  63u,
  74u
 };

static const UType JSum_7_13_6_3[]=
 {
  90u,
  63u,
  67u,
  63u,
  78u,
  67u,
  67u,
  65u,
  65u,
  63u,
  78u,
  65u,
  78u
 };

static const UType JSum_7_13_6_4[]=
 {
  89u,
  69u,
  79u,
  64u,
  63u,
  63u,
  69u,
  63u,
  71u,
  74u,
  79u,
  60u,
  66u
 };

static const UType JSum_7_13_6_5[]=
 {
  89u,
  71u,
  64u,
  60u,
  69u,
  69u,
  74u,
  63u,
  66u,
  63u,
  79u,
  79u,
  63u
 };

static const UType JSum_7_13_6_6[]=
 {
  74u,
  56u,
  72u,
  70u,
  70u,
  62u,
  69u,
  72u,
  84u,
  76u,
  78u,
  54u,
  72u
 };

static const UType JSum_7_13_6_7[]=
 {
  89u,
  71u,
  64u,
  60u,
  69u,
  69u,
  74u,
  63u,
  66u,
  63u,
  79u,
  79u,
  63u
 };

static const UType JSum_7_13_6_8[]=
 {
  89u,
  69u,
  79u,
  64u,
  63u,
  63u,
  69u,
  63u,
  71u,
  74u,
  79u,
  60u,
  66u
 };

static const UType JSum_7_13_6_9[]=
 {
  90u,
  63u,
  67u,
  63u,
  78u,
  67u,
  67u,
  65u,
  65u,
  63u,
  78u,
  65u,
  78u
 };

static const UType JSum_7_13_6_10[]=
 {
  89u,
  63u,
  71u,
  66u,
  64u,
  63u,
  60u,
  79u,
  69u,
  79u,
  69u,
  63u,
  74u
 };

static const UType JSum_7_13_6_11[]=
 {
  74u,
  69u,
  72u,
  62u,
  54u,
  70u,
  78u,
  70u,
  76u,
  72u,
  84u,
  56u,
  72u
 };

static const PtrLen<const UType> JTable_7_13_6[]=
 {
  Range(JSum_7_13_6_1),
  Range(JSum_7_13_6_2),
  Range(JSum_7_13_6_3),
  Range(JSum_7_13_6_4),
  Range(JSum_7_13_6_5),
  Range(JSum_7_13_6_6),
  Range(JSum_7_13_6_7),
  Range(JSum_7_13_6_8),
  Range(JSum_7_13_6_9),
  Range(JSum_7_13_6_10),
  Range(JSum_7_13_6_11)
 };

static const UType JSum_7_13_7_1[]=
 {
  114u,
  110u,
  104u,
  92u,
  108u,
  90u,
  82u,
  116u,
  101u,
  106u,
  92u,
  104u,
  106u
 };

static const UType JSum_7_13_7_2[]=
 {
  92u,
  106u,
  86u,
  104u,
  100u,
  114u,
  114u,
  104u,
  104u,
  86u,
  114u,
  109u,
  92u
 };

static const UType JSum_7_13_7_3[]=
 {
  77u,
  94u,
  102u,
  94u,
  112u,
  102u,
  102u,
  108u,
  108u,
  94u,
  112u,
  108u,
  112u
 };

static const UType JSum_7_13_7_4[]=
 {
  92u,
  114u,
  104u,
  100u,
  106u,
  109u,
  104u,
  114u,
  86u,
  92u,
  86u,
  114u,
  104u
 };

static const UType JSum_7_13_7_5[]=
 {
  92u,
  86u,
  100u,
  114u,
  104u,
  114u,
  92u,
  106u,
  104u,
  114u,
  104u,
  86u,
  109u
 };

static const UType JSum_7_13_7_6[]=
 {
  114u,
  104u,
  106u,
  116u,
  90u,
  92u,
  110u,
  106u,
  92u,
  101u,
  82u,
  108u,
  104u
 };

static const UType JSum_7_13_7_7[]=
 {
  92u,
  86u,
  100u,
  114u,
  104u,
  114u,
  92u,
  106u,
  104u,
  114u,
  104u,
  86u,
  109u
 };

static const UType JSum_7_13_7_8[]=
 {
  92u,
  114u,
  104u,
  100u,
  106u,
  109u,
  104u,
  114u,
  86u,
  92u,
  86u,
  114u,
  104u
 };

static const UType JSum_7_13_7_9[]=
 {
  77u,
  94u,
  102u,
  94u,
  112u,
  102u,
  102u,
  108u,
  108u,
  94u,
  112u,
  108u,
  112u
 };

static const UType JSum_7_13_7_10[]=
 {
  92u,
  106u,
  86u,
  104u,
  100u,
  114u,
  114u,
  104u,
  104u,
  86u,
  114u,
  109u,
  92u
 };

static const UType JSum_7_13_7_11[]=
 {
  114u,
  110u,
  104u,
  92u,
  108u,
  90u,
  82u,
  116u,
  101u,
  106u,
  92u,
  104u,
  106u
 };

static const PtrLen<const UType> JTable_7_13_7[]=
 {
  Range(JSum_7_13_7_1),
  Range(JSum_7_13_7_2),
  Range(JSum_7_13_7_3),
  Range(JSum_7_13_7_4),
  Range(JSum_7_13_7_5),
  Range(JSum_7_13_7_6),
  Range(JSum_7_13_7_7),
  Range(JSum_7_13_7_8),
  Range(JSum_7_13_7_9),
  Range(JSum_7_13_7_10),
  Range(JSum_7_13_7_11)
 };

static const UType JSum_7_13_8_1[]=
 {
  126u,
  100u,
  96u,
  108u,
  120u,
  110u,
  126u,
  106u,
  110u,
  132u,
  110u,
  121u,
  116u
 };

static const UType JSum_7_13_8_2[]=
 {
  110u,
  127u,
  107u,
  87u,
  113u,
  115u,
  117u,
  122u,
  117u,
  108u,
  129u,
  109u,
  120u
 };

static const UType JSum_7_13_8_3[]=
 {
  104u,
  105u,
  105u,
  105u,
  129u,
  105u,
  105u,
  120u,
  120u,
  105u,
  129u,
  120u,
  129u
 };

static const UType JSum_7_13_8_4[]=
 {
  110u,
  129u,
  122u,
  113u,
  127u,
  109u,
  117u,
  115u,
  107u,
  120u,
  108u,
  117u,
  87u
 };

static const UType JSum_7_13_8_5[]=
 {
  110u,
  107u,
  113u,
  117u,
  117u,
  129u,
  120u,
  127u,
  87u,
  115u,
  122u,
  108u,
  109u
 };

static const UType JSum_7_13_8_6[]=
 {
  126u,
  121u,
  132u,
  106u,
  110u,
  108u,
  100u,
  116u,
  110u,
  110u,
  126u,
  120u,
  96u
 };

static const UType JSum_7_13_8_7[]=
 {
  110u,
  107u,
  113u,
  117u,
  117u,
  129u,
  120u,
  127u,
  87u,
  115u,
  122u,
  108u,
  109u
 };

static const UType JSum_7_13_8_8[]=
 {
  110u,
  129u,
  122u,
  113u,
  127u,
  109u,
  117u,
  115u,
  107u,
  120u,
  108u,
  117u,
  87u
 };

static const UType JSum_7_13_8_9[]=
 {
  104u,
  105u,
  105u,
  105u,
  129u,
  105u,
  105u,
  120u,
  120u,
  105u,
  129u,
  120u,
  129u
 };

static const UType JSum_7_13_8_10[]=
 {
  110u,
  127u,
  107u,
  87u,
  113u,
  115u,
  117u,
  122u,
  117u,
  108u,
  129u,
  109u,
  120u
 };

static const UType JSum_7_13_8_11[]=
 {
  126u,
  100u,
  96u,
  108u,
  120u,
  110u,
  126u,
  106u,
  110u,
  132u,
  110u,
  121u,
  116u
 };

static const PtrLen<const UType> JTable_7_13_8[]=
 {
  Range(JSum_7_13_8_1),
  Range(JSum_7_13_8_2),
  Range(JSum_7_13_8_3),
  Range(JSum_7_13_8_4),
  Range(JSum_7_13_8_5),
  Range(JSum_7_13_8_6),
  Range(JSum_7_13_8_7),
  Range(JSum_7_13_8_8),
  Range(JSum_7_13_8_9),
  Range(JSum_7_13_8_10),
  Range(JSum_7_13_8_11)
 };

static const UType JSum_7_13_9_1[]=
 {
  160u,
  142u,
  152u,
  138u,
  177u,
  160u,
  154u,
  168u,
  166u,
  134u,
  148u,
  146u,
  156u
 };

static const UType JSum_7_13_9_2[]=
 {
  160u,
  146u,
  134u,
  132u,
  178u,
  152u,
  154u,
  164u,
  150u,
  164u,
  152u,
  162u,
  153u
 };

static const UType JSum_7_13_9_3[]=
 {
  129u,
  162u,
  140u,
  162u,
  156u,
  140u,
  140u,
  166u,
  166u,
  162u,
  156u,
  166u,
  156u
 };

static const UType JSum_7_13_9_4[]=
 {
  160u,
  152u,
  164u,
  178u,
  146u,
  162u,
  150u,
  152u,
  134u,
  153u,
  164u,
  154u,
  132u
 };

static const UType JSum_7_13_9_5[]=
 {
  160u,
  134u,
  178u,
  154u,
  150u,
  152u,
  153u,
  146u,
  132u,
  152u,
  164u,
  164u,
  162u
 };

static const UType JSum_7_13_9_6[]=
 {
  160u,
  146u,
  134u,
  168u,
  160u,
  138u,
  142u,
  156u,
  148u,
  166u,
  154u,
  177u,
  152u
 };

static const UType JSum_7_13_9_7[]=
 {
  160u,
  134u,
  178u,
  154u,
  150u,
  152u,
  153u,
  146u,
  132u,
  152u,
  164u,
  164u,
  162u
 };

static const UType JSum_7_13_9_8[]=
 {
  160u,
  152u,
  164u,
  178u,
  146u,
  162u,
  150u,
  152u,
  134u,
  153u,
  164u,
  154u,
  132u
 };

static const UType JSum_7_13_9_9[]=
 {
  129u,
  162u,
  140u,
  162u,
  156u,
  140u,
  140u,
  166u,
  166u,
  162u,
  156u,
  166u,
  156u
 };

static const UType JSum_7_13_9_10[]=
 {
  160u,
  146u,
  134u,
  132u,
  178u,
  152u,
  154u,
  164u,
  150u,
  164u,
  152u,
  162u,
  153u
 };

static const UType JSum_7_13_9_11[]=
 {
  160u,
  142u,
  152u,
  138u,
  177u,
  160u,
  154u,
  168u,
  166u,
  134u,
  148u,
  146u,
  156u
 };

static const PtrLen<const UType> JTable_7_13_9[]=
 {
  Range(JSum_7_13_9_1),
  Range(JSum_7_13_9_2),
  Range(JSum_7_13_9_3),
  Range(JSum_7_13_9_4),
  Range(JSum_7_13_9_5),
  Range(JSum_7_13_9_6),
  Range(JSum_7_13_9_7),
  Range(JSum_7_13_9_8),
  Range(JSum_7_13_9_9),
  Range(JSum_7_13_9_10),
  Range(JSum_7_13_9_11)
 };

static const UType JSum_7_13_10_1[]=
 {
  204u,
  190u,
  214u,
  226u,
  232u,
  204u,
  216u,
  226u,
  180u,
  212u,
  201u,
  214u,
  210u
 };

static const UType JSum_7_13_10_2[]=
 {
  204u,
  230u,
  204u,
  220u,
  225u,
  210u,
  202u,
  220u,
  202u,
  220u,
  216u,
  174u,
  202u
 };

static const UType JSum_7_13_10_3[]=
 {
  185u,
  220u,
  198u,
  220u,
  202u,
  198u,
  198u,
  228u,
  228u,
  220u,
  202u,
  228u,
  202u
 };

static const UType JSum_7_13_10_4[]=
 {
  204u,
  216u,
  220u,
  225u,
  230u,
  174u,
  202u,
  210u,
  204u,
  202u,
  220u,
  202u,
  220u
 };

static const UType JSum_7_13_10_5[]=
 {
  204u,
  204u,
  225u,
  202u,
  202u,
  216u,
  202u,
  230u,
  220u,
  210u,
  220u,
  220u,
  174u
 };

static const UType JSum_7_13_10_6[]=
 {
  204u,
  214u,
  212u,
  226u,
  204u,
  226u,
  190u,
  210u,
  201u,
  180u,
  216u,
  232u,
  214u
 };

static const UType JSum_7_13_10_7[]=
 {
  204u,
  204u,
  225u,
  202u,
  202u,
  216u,
  202u,
  230u,
  220u,
  210u,
  220u,
  220u,
  174u
 };

static const UType JSum_7_13_10_8[]=
 {
  204u,
  216u,
  220u,
  225u,
  230u,
  174u,
  202u,
  210u,
  204u,
  202u,
  220u,
  202u,
  220u
 };

static const UType JSum_7_13_10_9[]=
 {
  185u,
  220u,
  198u,
  220u,
  202u,
  198u,
  198u,
  228u,
  228u,
  220u,
  202u,
  228u,
  202u
 };

static const UType JSum_7_13_10_10[]=
 {
  204u,
  230u,
  204u,
  220u,
  225u,
  210u,
  202u,
  220u,
  202u,
  220u,
  216u,
  174u,
  202u
 };

static const UType JSum_7_13_10_11[]=
 {
  204u,
  190u,
  214u,
  226u,
  232u,
  204u,
  216u,
  226u,
  180u,
  212u,
  201u,
  214u,
  210u
 };

static const PtrLen<const UType> JTable_7_13_10[]=
 {
  Range(JSum_7_13_10_1),
  Range(JSum_7_13_10_2),
  Range(JSum_7_13_10_3),
  Range(JSum_7_13_10_4),
  Range(JSum_7_13_10_5),
  Range(JSum_7_13_10_6),
  Range(JSum_7_13_10_7),
  Range(JSum_7_13_10_8),
  Range(JSum_7_13_10_9),
  Range(JSum_7_13_10_10),
  Range(JSum_7_13_10_11)
 };

static const UType JSum_7_13_11_1[]=
 {
  478u,
  456u,
  474u,
  446u,
  500u,
  448u,
  458u,
  496u,
  478u,
  436u,
  445u,
  434u,
  456u
 };

static const UType JSum_7_13_11_2[]=
 {
  487u,
  487u,
  460u,
  463u,
  434u,
  457u,
  437u,
  467u,
  453u,
  471u,
  499u,
  426u,
  464u
 };

static const UType JSum_7_13_11_3[]=
 {
  458u,
  451u,
  478u,
  451u,
  433u,
  478u,
  478u,
  487u,
  487u,
  451u,
  433u,
  487u,
  433u
 };

static const UType JSum_7_13_11_4[]=
 {
  487u,
  499u,
  467u,
  434u,
  487u,
  426u,
  453u,
  457u,
  460u,
  464u,
  471u,
  437u,
  463u
 };

static const UType JSum_7_13_11_5[]=
 {
  487u,
  460u,
  434u,
  437u,
  453u,
  499u,
  464u,
  487u,
  463u,
  457u,
  467u,
  471u,
  426u
 };

static const UType JSum_7_13_11_6[]=
 {
  478u,
  434u,
  436u,
  496u,
  448u,
  446u,
  456u,
  456u,
  445u,
  478u,
  458u,
  500u,
  474u
 };

static const UType JSum_7_13_11_7[]=
 {
  487u,
  460u,
  434u,
  437u,
  453u,
  499u,
  464u,
  487u,
  463u,
  457u,
  467u,
  471u,
  426u
 };

static const UType JSum_7_13_11_8[]=
 {
  487u,
  499u,
  467u,
  434u,
  487u,
  426u,
  453u,
  457u,
  460u,
  464u,
  471u,
  437u,
  463u
 };

static const UType JSum_7_13_11_9[]=
 {
  458u,
  451u,
  478u,
  451u,
  433u,
  478u,
  478u,
  487u,
  487u,
  451u,
  433u,
  487u,
  433u
 };

static const UType JSum_7_13_11_10[]=
 {
  487u,
  487u,
  460u,
  463u,
  434u,
  457u,
  437u,
  467u,
  453u,
  471u,
  499u,
  426u,
  464u
 };

static const UType JSum_7_13_11_11[]=
 {
  478u,
  456u,
  474u,
  446u,
  500u,
  448u,
  458u,
  496u,
  478u,
  436u,
  445u,
  434u,
  456u
 };

static const PtrLen<const UType> JTable_7_13_11[]=
 {
  Range(JSum_7_13_11_1),
  Range(JSum_7_13_11_2),
  Range(JSum_7_13_11_3),
  Range(JSum_7_13_11_4),
  Range(JSum_7_13_11_5),
  Range(JSum_7_13_11_6),
  Range(JSum_7_13_11_7),
  Range(JSum_7_13_11_8),
  Range(JSum_7_13_11_9),
  Range(JSum_7_13_11_10),
  Range(JSum_7_13_11_11)
 };

static const UType JSum_7_13_12_1[]=
 {
  548u,
  608u,
  576u,
  568u,
  602u,
  560u,
  562u,
  566u,
  602u,
  562u,
  534u,
  537u,
  584u
 };

static const UType JSum_7_13_12_2[]=
 {
  537u,
  546u,
  568u,
  605u,
  569u,
  550u,
  587u,
  596u,
  547u,
  609u,
  563u,
  581u,
  551u
 };

static const UType JSum_7_13_12_3[]=
 {
  626u,
  589u,
  546u,
  589u,
  553u,
  546u,
  546u,
  573u,
  573u,
  589u,
  553u,
  573u,
  553u
 };

static const UType JSum_7_13_12_4[]=
 {
  537u,
  563u,
  596u,
  569u,
  546u,
  581u,
  547u,
  550u,
  568u,
  551u,
  609u,
  587u,
  605u
 };

static const UType JSum_7_13_12_5[]=
 {
  537u,
  568u,
  569u,
  587u,
  547u,
  563u,
  551u,
  546u,
  605u,
  550u,
  596u,
  609u,
  581u
 };

static const UType JSum_7_13_12_6[]=
 {
  548u,
  537u,
  562u,
  566u,
  560u,
  568u,
  608u,
  584u,
  534u,
  602u,
  562u,
  602u,
  576u
 };

static const UType JSum_7_13_12_7[]=
 {
  537u,
  568u,
  569u,
  587u,
  547u,
  563u,
  551u,
  546u,
  605u,
  550u,
  596u,
  609u,
  581u
 };

static const UType JSum_7_13_12_8[]=
 {
  537u,
  563u,
  596u,
  569u,
  546u,
  581u,
  547u,
  550u,
  568u,
  551u,
  609u,
  587u,
  605u
 };

static const UType JSum_7_13_12_9[]=
 {
  626u,
  589u,
  546u,
  589u,
  553u,
  546u,
  546u,
  573u,
  573u,
  589u,
  553u,
  573u,
  553u
 };

static const UType JSum_7_13_12_10[]=
 {
  537u,
  546u,
  568u,
  605u,
  569u,
  550u,
  587u,
  596u,
  547u,
  609u,
  563u,
  581u,
  551u
 };

static const UType JSum_7_13_12_11[]=
 {
  548u,
  608u,
  576u,
  568u,
  602u,
  560u,
  562u,
  566u,
  602u,
  562u,
  534u,
  537u,
  584u
 };

static const PtrLen<const UType> JTable_7_13_12[]=
 {
  Range(JSum_7_13_12_1),
  Range(JSum_7_13_12_2),
  Range(JSum_7_13_12_3),
  Range(JSum_7_13_12_4),
  Range(JSum_7_13_12_5),
  Range(JSum_7_13_12_6),
  Range(JSum_7_13_12_7),
  Range(JSum_7_13_12_8),
  Range(JSum_7_13_12_9),
  Range(JSum_7_13_12_10),
  Range(JSum_7_13_12_11)
 };

static const UType JSum_7_13_13_1[]=
 {
  718u,
  734u,
  766u,
  720u,
  702u,
  712u,
  734u,
  656u,
  728u,
  716u,
  702u,
  713u,
  680u
 };

static const UType JSum_7_13_13_2[]=
 {
  710u,
  712u,
  728u,
  746u,
  732u,
  722u,
  704u,
  689u,
  722u,
  760u,
  654u,
  708u,
  694u
 };

static const UType JSum_7_13_13_3[]=
 {
  689u,
  730u,
  726u,
  730u,
  736u,
  726u,
  726u,
  672u,
  672u,
  730u,
  736u,
  672u,
  736u
 };

static const UType JSum_7_13_13_4[]=
 {
  710u,
  654u,
  689u,
  732u,
  712u,
  708u,
  722u,
  722u,
  728u,
  694u,
  760u,
  704u,
  746u
 };

static const UType JSum_7_13_13_5[]=
 {
  710u,
  728u,
  732u,
  704u,
  722u,
  654u,
  694u,
  712u,
  746u,
  722u,
  689u,
  760u,
  708u
 };

static const UType JSum_7_13_13_6[]=
 {
  718u,
  713u,
  716u,
  656u,
  712u,
  720u,
  734u,
  680u,
  702u,
  728u,
  734u,
  702u,
  766u
 };

static const UType JSum_7_13_13_7[]=
 {
  710u,
  728u,
  732u,
  704u,
  722u,
  654u,
  694u,
  712u,
  746u,
  722u,
  689u,
  760u,
  708u
 };

static const UType JSum_7_13_13_8[]=
 {
  710u,
  654u,
  689u,
  732u,
  712u,
  708u,
  722u,
  722u,
  728u,
  694u,
  760u,
  704u,
  746u
 };

static const UType JSum_7_13_13_9[]=
 {
  689u,
  730u,
  726u,
  730u,
  736u,
  726u,
  726u,
  672u,
  672u,
  730u,
  736u,
  672u,
  736u
 };

static const UType JSum_7_13_13_10[]=
 {
  710u,
  712u,
  728u,
  746u,
  732u,
  722u,
  704u,
  689u,
  722u,
  760u,
  654u,
  708u,
  694u
 };

static const UType JSum_7_13_13_11[]=
 {
  718u,
  734u,
  766u,
  720u,
  702u,
  712u,
  734u,
  656u,
  728u,
  716u,
  702u,
  713u,
  680u
 };

static const PtrLen<const UType> JTable_7_13_13[]=
 {
  Range(JSum_7_13_13_1),
  Range(JSum_7_13_13_2),
  Range(JSum_7_13_13_3),
  Range(JSum_7_13_13_4),
  Range(JSum_7_13_13_5),
  Range(JSum_7_13_13_6),
  Range(JSum_7_13_13_7),
  Range(JSum_7_13_13_8),
  Range(JSum_7_13_13_9),
  Range(JSum_7_13_13_10),
  Range(JSum_7_13_13_11)
 };

static const UType JSum_7_13_14_1[]=
 {
  1324u,
  1272u,
  1302u,
  1360u,
  1394u,
  1338u,
  1320u,
  1342u,
  1358u,
  1281u,
  1376u,
  1296u,
  1326u
 };

static const UType JSum_7_13_14_2[]=
 {
  1304u,
  1350u,
  1377u,
  1247u,
  1329u,
  1308u,
  1321u,
  1305u,
  1363u,
  1379u,
  1359u,
  1314u,
  1333u
 };

static const UType JSum_7_13_14_3[]=
 {
  1260u,
  1372u,
  1353u,
  1372u,
  1325u,
  1353u,
  1353u,
  1293u,
  1293u,
  1372u,
  1325u,
  1293u,
  1325u
 };

static const UType JSum_7_13_14_4[]=
 {
  1304u,
  1359u,
  1305u,
  1329u,
  1350u,
  1314u,
  1363u,
  1308u,
  1377u,
  1333u,
  1379u,
  1321u,
  1247u
 };

static const UType JSum_7_13_14_5[]=
 {
  1304u,
  1377u,
  1329u,
  1321u,
  1363u,
  1359u,
  1333u,
  1350u,
  1247u,
  1308u,
  1305u,
  1379u,
  1314u
 };

static const UType JSum_7_13_14_6[]=
 {
  1324u,
  1296u,
  1281u,
  1342u,
  1338u,
  1360u,
  1272u,
  1326u,
  1376u,
  1358u,
  1320u,
  1394u,
  1302u
 };

static const UType JSum_7_13_14_7[]=
 {
  1304u,
  1377u,
  1329u,
  1321u,
  1363u,
  1359u,
  1333u,
  1350u,
  1247u,
  1308u,
  1305u,
  1379u,
  1314u
 };

static const UType JSum_7_13_14_8[]=
 {
  1304u,
  1359u,
  1305u,
  1329u,
  1350u,
  1314u,
  1363u,
  1308u,
  1377u,
  1333u,
  1379u,
  1321u,
  1247u
 };

static const UType JSum_7_13_14_9[]=
 {
  1260u,
  1372u,
  1353u,
  1372u,
  1325u,
  1353u,
  1353u,
  1293u,
  1293u,
  1372u,
  1325u,
  1293u,
  1325u
 };

static const UType JSum_7_13_14_10[]=
 {
  1304u,
  1350u,
  1377u,
  1247u,
  1329u,
  1308u,
  1321u,
  1305u,
  1363u,
  1379u,
  1359u,
  1314u,
  1333u
 };

static const UType JSum_7_13_14_11[]=
 {
  1324u,
  1272u,
  1302u,
  1360u,
  1394u,
  1338u,
  1320u,
  1342u,
  1358u,
  1281u,
  1376u,
  1296u,
  1326u
 };

static const PtrLen<const UType> JTable_7_13_14[]=
 {
  Range(JSum_7_13_14_1),
  Range(JSum_7_13_14_2),
  Range(JSum_7_13_14_3),
  Range(JSum_7_13_14_4),
  Range(JSum_7_13_14_5),
  Range(JSum_7_13_14_6),
  Range(JSum_7_13_14_7),
  Range(JSum_7_13_14_8),
  Range(JSum_7_13_14_9),
  Range(JSum_7_13_14_10),
  Range(JSum_7_13_14_11)
 };

static const UType JSum_7_13_15_1[]=
 {
  2912u,
  2846u,
  2864u,
  2924u,
  2904u,
  3037u,
  2906u,
  2918u,
  2926u,
  2976u,
  2970u,
  2868u,
  2986u
 };

static const UType JSum_7_13_15_2[]=
 {
  3023u,
  2916u,
  2908u,
  2893u,
  2971u,
  2959u,
  2852u,
  2859u,
  2907u,
  2907u,
  2969u,
  3001u,
  2872u
 };

static const UType JSum_7_13_15_3[]=
 {
  2910u,
  2870u,
  3009u,
  2870u,
  2941u,
  3009u,
  3009u,
  2889u,
  2889u,
  2870u,
  2941u,
  2889u,
  2941u
 };

static const UType JSum_7_13_15_4[]=
 {
  3023u,
  2969u,
  2859u,
  2971u,
  2916u,
  3001u,
  2907u,
  2959u,
  2908u,
  2872u,
  2907u,
  2852u,
  2893u
 };

static const UType JSum_7_13_15_5[]=
 {
  3023u,
  2908u,
  2971u,
  2852u,
  2907u,
  2969u,
  2872u,
  2916u,
  2893u,
  2959u,
  2859u,
  2907u,
  3001u
 };

static const UType JSum_7_13_15_6[]=
 {
  2912u,
  2868u,
  2976u,
  2918u,
  3037u,
  2924u,
  2846u,
  2986u,
  2970u,
  2926u,
  2906u,
  2904u,
  2864u
 };

static const UType JSum_7_13_15_7[]=
 {
  3023u,
  2908u,
  2971u,
  2852u,
  2907u,
  2969u,
  2872u,
  2916u,
  2893u,
  2959u,
  2859u,
  2907u,
  3001u
 };

static const UType JSum_7_13_15_8[]=
 {
  3023u,
  2969u,
  2859u,
  2971u,
  2916u,
  3001u,
  2907u,
  2959u,
  2908u,
  2872u,
  2907u,
  2852u,
  2893u
 };

static const UType JSum_7_13_15_9[]=
 {
  2910u,
  2870u,
  3009u,
  2870u,
  2941u,
  3009u,
  3009u,
  2889u,
  2889u,
  2870u,
  2941u,
  2889u,
  2941u
 };

static const UType JSum_7_13_15_10[]=
 {
  3023u,
  2916u,
  2908u,
  2893u,
  2971u,
  2959u,
  2852u,
  2859u,
  2907u,
  2907u,
  2969u,
  3001u,
  2872u
 };

static const UType JSum_7_13_15_11[]=
 {
  2912u,
  2846u,
  2864u,
  2924u,
  2904u,
  3037u,
  2906u,
  2918u,
  2926u,
  2976u,
  2970u,
  2868u,
  2986u
 };

static const PtrLen<const UType> JTable_7_13_15[]=
 {
  Range(JSum_7_13_15_1),
  Range(JSum_7_13_15_2),
  Range(JSum_7_13_15_3),
  Range(JSum_7_13_15_4),
  Range(JSum_7_13_15_5),
  Range(JSum_7_13_15_6),
  Range(JSum_7_13_15_7),
  Range(JSum_7_13_15_8),
  Range(JSum_7_13_15_9),
  Range(JSum_7_13_15_10),
  Range(JSum_7_13_15_11)
 };

static const UType JSum_7_13_16_1[]=
 {
  3658u,
  3632u,
  3522u,
  3524u,
  3514u,
  3484u,
  3649u,
  3530u,
  3608u,
  3574u,
  3636u,
  3558u,
  3520u
 };

static const UType JSum_7_13_16_2[]=
 {
  3534u,
  3553u,
  3575u,
  3620u,
  3553u,
  3544u,
  3559u,
  3653u,
  3627u,
  3569u,
  3547u,
  3649u,
  3426u
 };

static const UType JSum_7_13_16_3[]=
 {
  3530u,
  3493u,
  3658u,
  3493u,
  3577u,
  3658u,
  3658u,
  3565u,
  3565u,
  3493u,
  3577u,
  3565u,
  3577u
 };

static const UType JSum_7_13_16_4[]=
 {
  3534u,
  3547u,
  3653u,
  3553u,
  3553u,
  3649u,
  3627u,
  3544u,
  3575u,
  3426u,
  3569u,
  3559u,
  3620u
 };

static const UType JSum_7_13_16_5[]=
 {
  3534u,
  3575u,
  3553u,
  3559u,
  3627u,
  3547u,
  3426u,
  3553u,
  3620u,
  3544u,
  3653u,
  3569u,
  3649u
 };

static const UType JSum_7_13_16_6[]=
 {
  3658u,
  3558u,
  3574u,
  3530u,
  3484u,
  3524u,
  3632u,
  3520u,
  3636u,
  3608u,
  3649u,
  3514u,
  3522u
 };

static const UType JSum_7_13_16_7[]=
 {
  3534u,
  3575u,
  3553u,
  3559u,
  3627u,
  3547u,
  3426u,
  3553u,
  3620u,
  3544u,
  3653u,
  3569u,
  3649u
 };

static const UType JSum_7_13_16_8[]=
 {
  3534u,
  3547u,
  3653u,
  3553u,
  3553u,
  3649u,
  3627u,
  3544u,
  3575u,
  3426u,
  3569u,
  3559u,
  3620u
 };

static const UType JSum_7_13_16_9[]=
 {
  3530u,
  3493u,
  3658u,
  3493u,
  3577u,
  3658u,
  3658u,
  3565u,
  3565u,
  3493u,
  3577u,
  3565u,
  3577u
 };

static const UType JSum_7_13_16_10[]=
 {
  3534u,
  3553u,
  3575u,
  3620u,
  3553u,
  3544u,
  3559u,
  3653u,
  3627u,
  3569u,
  3547u,
  3649u,
  3426u
 };

static const UType JSum_7_13_16_11[]=
 {
  3658u,
  3632u,
  3522u,
  3524u,
  3514u,
  3484u,
  3649u,
  3530u,
  3608u,
  3574u,
  3636u,
  3558u,
  3520u
 };

static const PtrLen<const UType> JTable_7_13_16[]=
 {
  Range(JSum_7_13_16_1),
  Range(JSum_7_13_16_2),
  Range(JSum_7_13_16_3),
  Range(JSum_7_13_16_4),
  Range(JSum_7_13_16_5),
  Range(JSum_7_13_16_6),
  Range(JSum_7_13_16_7),
  Range(JSum_7_13_16_8),
  Range(JSum_7_13_16_9),
  Range(JSum_7_13_16_10),
  Range(JSum_7_13_16_11)
 };

static const UType JSum_7_13_17_1[]=
 {
  3956u,
  4090u,
  3917u,
  3944u,
  3978u,
  3972u,
  3976u,
  4086u,
  3974u,
  4096u,
  4012u,
  3958u,
  3910u
 };

static const UType JSum_7_13_17_2[]=
 {
  4024u,
  3932u,
  4027u,
  3931u,
  3844u,
  4039u,
  4004u,
  4053u,
  3919u,
  4011u,
  4011u,
  4025u,
  4049u
 };

static const UType JSum_7_13_17_3[]=
 {
  3986u,
  4069u,
  3946u,
  4069u,
  4033u,
  3946u,
  3946u,
  3913u,
  3913u,
  4069u,
  4033u,
  3913u,
  4033u
 };

static const UType JSum_7_13_17_4[]=
 {
  4024u,
  4011u,
  4053u,
  3844u,
  3932u,
  4025u,
  3919u,
  4039u,
  4027u,
  4049u,
  4011u,
  4004u,
  3931u
 };

static const UType JSum_7_13_17_5[]=
 {
  4024u,
  4027u,
  3844u,
  4004u,
  3919u,
  4011u,
  4049u,
  3932u,
  3931u,
  4039u,
  4053u,
  4011u,
  4025u
 };

static const UType JSum_7_13_17_6[]=
 {
  3956u,
  3958u,
  4096u,
  4086u,
  3972u,
  3944u,
  4090u,
  3910u,
  4012u,
  3974u,
  3976u,
  3978u,
  3917u
 };

static const UType JSum_7_13_17_7[]=
 {
  4024u,
  4027u,
  3844u,
  4004u,
  3919u,
  4011u,
  4049u,
  3932u,
  3931u,
  4039u,
  4053u,
  4011u,
  4025u
 };

static const UType JSum_7_13_17_8[]=
 {
  4024u,
  4011u,
  4053u,
  3844u,
  3932u,
  4025u,
  3919u,
  4039u,
  4027u,
  4049u,
  4011u,
  4004u,
  3931u
 };

static const UType JSum_7_13_17_9[]=
 {
  3986u,
  4069u,
  3946u,
  4069u,
  4033u,
  3946u,
  3946u,
  3913u,
  3913u,
  4069u,
  4033u,
  3913u,
  4033u
 };

static const UType JSum_7_13_17_10[]=
 {
  4024u,
  3932u,
  4027u,
  3931u,
  3844u,
  4039u,
  4004u,
  4053u,
  3919u,
  4011u,
  4011u,
  4025u,
  4049u
 };

static const UType JSum_7_13_17_11[]=
 {
  3956u,
  4090u,
  3917u,
  3944u,
  3978u,
  3972u,
  3976u,
  4086u,
  3974u,
  4096u,
  4012u,
  3958u,
  3910u
 };

static const PtrLen<const UType> JTable_7_13_17[]=
 {
  Range(JSum_7_13_17_1),
  Range(JSum_7_13_17_2),
  Range(JSum_7_13_17_3),
  Range(JSum_7_13_17_4),
  Range(JSum_7_13_17_5),
  Range(JSum_7_13_17_6),
  Range(JSum_7_13_17_7),
  Range(JSum_7_13_17_8),
  Range(JSum_7_13_17_9),
  Range(JSum_7_13_17_10),
  Range(JSum_7_13_17_11)
 };

static const UType JSum_7_13_18_1[]=
 {
  4584u,
  4506u,
  4614u,
  4558u,
  4612u,
  4382u,
  4492u,
  4580u,
  4488u,
  4518u,
  4478u,
  4449u,
  4524u
 };

static const UType JSum_7_13_18_2[]=
 {
  4503u,
  4446u,
  4566u,
  4521u,
  4587u,
  4492u,
  4473u,
  4572u,
  4681u,
  4463u,
  4537u,
  4505u,
  4439u
 };

static const UType JSum_7_13_18_3[]=
 {
  4722u,
  4469u,
  4482u,
  4469u,
  4537u,
  4482u,
  4482u,
  4533u,
  4533u,
  4469u,
  4537u,
  4533u,
  4537u
 };

static const UType JSum_7_13_18_4[]=
 {
  4503u,
  4537u,
  4572u,
  4587u,
  4446u,
  4505u,
  4681u,
  4492u,
  4566u,
  4439u,
  4463u,
  4473u,
  4521u
 };

static const UType JSum_7_13_18_5[]=
 {
  4503u,
  4566u,
  4587u,
  4473u,
  4681u,
  4537u,
  4439u,
  4446u,
  4521u,
  4492u,
  4572u,
  4463u,
  4505u
 };

static const UType JSum_7_13_18_6[]=
 {
  4584u,
  4449u,
  4518u,
  4580u,
  4382u,
  4558u,
  4506u,
  4524u,
  4478u,
  4488u,
  4492u,
  4612u,
  4614u
 };

static const UType JSum_7_13_18_7[]=
 {
  4503u,
  4566u,
  4587u,
  4473u,
  4681u,
  4537u,
  4439u,
  4446u,
  4521u,
  4492u,
  4572u,
  4463u,
  4505u
 };

static const UType JSum_7_13_18_8[]=
 {
  4503u,
  4537u,
  4572u,
  4587u,
  4446u,
  4505u,
  4681u,
  4492u,
  4566u,
  4439u,
  4463u,
  4473u,
  4521u
 };

static const UType JSum_7_13_18_9[]=
 {
  4722u,
  4469u,
  4482u,
  4469u,
  4537u,
  4482u,
  4482u,
  4533u,
  4533u,
  4469u,
  4537u,
  4533u,
  4537u
 };

static const UType JSum_7_13_18_10[]=
 {
  4503u,
  4446u,
  4566u,
  4521u,
  4587u,
  4492u,
  4473u,
  4572u,
  4681u,
  4463u,
  4537u,
  4505u,
  4439u
 };

static const UType JSum_7_13_18_11[]=
 {
  4584u,
  4506u,
  4614u,
  4558u,
  4612u,
  4382u,
  4492u,
  4580u,
  4488u,
  4518u,
  4478u,
  4449u,
  4524u
 };

static const PtrLen<const UType> JTable_7_13_18[]=
 {
  Range(JSum_7_13_18_1),
  Range(JSum_7_13_18_2),
  Range(JSum_7_13_18_3),
  Range(JSum_7_13_18_4),
  Range(JSum_7_13_18_5),
  Range(JSum_7_13_18_6),
  Range(JSum_7_13_18_7),
  Range(JSum_7_13_18_8),
  Range(JSum_7_13_18_9),
  Range(JSum_7_13_18_10),
  Range(JSum_7_13_18_11)
 };

static const UType JSum_7_13_19_1[]=
 {
  5682u,
  5610u,
  5630u,
  5521u,
  5600u,
  5660u,
  5612u,
  5752u,
  5594u,
  5630u,
  5644u,
  5540u,
  5454u
 };

static const UType JSum_7_13_19_2[]=
 {
  5517u,
  5613u,
  5699u,
  5557u,
  5699u,
  5672u,
  5587u,
  5549u,
  5693u,
  5654u,
  5626u,
  5459u,
  5604u
 };

static const UType JSum_7_13_19_3[]=
 {
  5720u,
  5553u,
  5713u,
  5553u,
  5592u,
  5713u,
  5713u,
  5545u,
  5545u,
  5553u,
  5592u,
  5545u,
  5592u
 };

static const UType JSum_7_13_19_4[]=
 {
  5517u,
  5626u,
  5549u,
  5699u,
  5613u,
  5459u,
  5693u,
  5672u,
  5699u,
  5604u,
  5654u,
  5587u,
  5557u
 };

static const UType JSum_7_13_19_5[]=
 {
  5517u,
  5699u,
  5699u,
  5587u,
  5693u,
  5626u,
  5604u,
  5613u,
  5557u,
  5672u,
  5549u,
  5654u,
  5459u
 };

static const UType JSum_7_13_19_6[]=
 {
  5682u,
  5540u,
  5630u,
  5752u,
  5660u,
  5521u,
  5610u,
  5454u,
  5644u,
  5594u,
  5612u,
  5600u,
  5630u
 };

static const UType JSum_7_13_19_7[]=
 {
  5517u,
  5699u,
  5699u,
  5587u,
  5693u,
  5626u,
  5604u,
  5613u,
  5557u,
  5672u,
  5549u,
  5654u,
  5459u
 };

static const UType JSum_7_13_19_8[]=
 {
  5517u,
  5626u,
  5549u,
  5699u,
  5613u,
  5459u,
  5693u,
  5672u,
  5699u,
  5604u,
  5654u,
  5587u,
  5557u
 };

static const UType JSum_7_13_19_9[]=
 {
  5720u,
  5553u,
  5713u,
  5553u,
  5592u,
  5713u,
  5713u,
  5545u,
  5545u,
  5553u,
  5592u,
  5545u,
  5592u
 };

static const UType JSum_7_13_19_10[]=
 {
  5517u,
  5613u,
  5699u,
  5557u,
  5699u,
  5672u,
  5587u,
  5549u,
  5693u,
  5654u,
  5626u,
  5459u,
  5604u
 };

static const UType JSum_7_13_19_11[]=
 {
  5682u,
  5610u,
  5630u,
  5521u,
  5600u,
  5660u,
  5612u,
  5752u,
  5594u,
  5630u,
  5644u,
  5540u,
  5454u
 };

static const PtrLen<const UType> JTable_7_13_19[]=
 {
  Range(JSum_7_13_19_1),
  Range(JSum_7_13_19_2),
  Range(JSum_7_13_19_3),
  Range(JSum_7_13_19_4),
  Range(JSum_7_13_19_5),
  Range(JSum_7_13_19_6),
  Range(JSum_7_13_19_7),
  Range(JSum_7_13_19_8),
  Range(JSum_7_13_19_9),
  Range(JSum_7_13_19_10),
  Range(JSum_7_13_19_11)
 };

static const UType JSum_7_13_20_1[]=
 {
  7876u,
  7954u,
  7912u,
  7802u,
  7978u,
  7788u,
  7760u,
  7694u,
  7885u,
  7948u,
  7782u,
  7926u,
  7796u
 };

static const UType JSum_7_13_20_2[]=
 {
  7813u,
  7853u,
  7904u,
  7887u,
  7879u,
  7823u,
  7873u,
  7699u,
  7894u,
  7691u,
  7848u,
  8034u,
  7903u
 };

static const UType JSum_7_13_20_3[]=
 {
  7814u,
  7882u,
  7945u,
  7882u,
  7711u,
  7945u,
  7945u,
  7891u,
  7891u,
  7882u,
  7711u,
  7891u,
  7711u
 };

static const UType JSum_7_13_20_4[]=
 {
  7813u,
  7848u,
  7699u,
  7879u,
  7853u,
  8034u,
  7894u,
  7823u,
  7904u,
  7903u,
  7691u,
  7873u,
  7887u
 };

static const UType JSum_7_13_20_5[]=
 {
  7813u,
  7904u,
  7879u,
  7873u,
  7894u,
  7848u,
  7903u,
  7853u,
  7887u,
  7823u,
  7699u,
  7691u,
  8034u
 };

static const UType JSum_7_13_20_6[]=
 {
  7876u,
  7926u,
  7948u,
  7694u,
  7788u,
  7802u,
  7954u,
  7796u,
  7782u,
  7885u,
  7760u,
  7978u,
  7912u
 };

static const UType JSum_7_13_20_7[]=
 {
  7813u,
  7904u,
  7879u,
  7873u,
  7894u,
  7848u,
  7903u,
  7853u,
  7887u,
  7823u,
  7699u,
  7691u,
  8034u
 };

static const UType JSum_7_13_20_8[]=
 {
  7813u,
  7848u,
  7699u,
  7879u,
  7853u,
  8034u,
  7894u,
  7823u,
  7904u,
  7903u,
  7691u,
  7873u,
  7887u
 };

static const UType JSum_7_13_20_9[]=
 {
  7814u,
  7882u,
  7945u,
  7882u,
  7711u,
  7945u,
  7945u,
  7891u,
  7891u,
  7882u,
  7711u,
  7891u,
  7711u
 };

static const UType JSum_7_13_20_10[]=
 {
  7813u,
  7853u,
  7904u,
  7887u,
  7879u,
  7823u,
  7873u,
  7699u,
  7894u,
  7691u,
  7848u,
  8034u,
  7903u
 };

static const UType JSum_7_13_20_11[]=
 {
  7876u,
  7954u,
  7912u,
  7802u,
  7978u,
  7788u,
  7760u,
  7694u,
  7885u,
  7948u,
  7782u,
  7926u,
  7796u
 };

static const PtrLen<const UType> JTable_7_13_20[]=
 {
  Range(JSum_7_13_20_1),
  Range(JSum_7_13_20_2),
  Range(JSum_7_13_20_3),
  Range(JSum_7_13_20_4),
  Range(JSum_7_13_20_5),
  Range(JSum_7_13_20_6),
  Range(JSum_7_13_20_7),
  Range(JSum_7_13_20_8),
  Range(JSum_7_13_20_9),
  Range(JSum_7_13_20_10),
  Range(JSum_7_13_20_11)
 };

static const UType JSum_7_13_21_1[]=
 {
  36022u,
  35664u,
  35522u,
  35532u,
  35486u,
  35540u,
  35196u,
  35646u,
  35518u,
  35481u,
  35464u,
  35448u,
  35370u
 };

static const UType JSum_7_13_21_2[]=
 {
  35531u,
  35304u,
  35613u,
  35695u,
  35239u,
  35529u,
  35221u,
  35517u,
  35786u,
  35736u,
  35439u,
  35741u,
  35538u
 };

static const UType JSum_7_13_21_3[]=
 {
  35550u,
  35313u,
  35822u,
  35313u,
  35433u,
  35822u,
  35822u,
  35545u,
  35545u,
  35313u,
  35433u,
  35545u,
  35433u
 };

static const UType JSum_7_13_21_4[]=
 {
  35531u,
  35439u,
  35517u,
  35239u,
  35304u,
  35741u,
  35786u,
  35529u,
  35613u,
  35538u,
  35736u,
  35221u,
  35695u
 };

static const UType JSum_7_13_21_5[]=
 {
  35531u,
  35613u,
  35239u,
  35221u,
  35786u,
  35439u,
  35538u,
  35304u,
  35695u,
  35529u,
  35517u,
  35736u,
  35741u
 };

static const UType JSum_7_13_21_6[]=
 {
  36022u,
  35448u,
  35481u,
  35646u,
  35540u,
  35532u,
  35664u,
  35370u,
  35464u,
  35518u,
  35196u,
  35486u,
  35522u
 };

static const UType JSum_7_13_21_7[]=
 {
  35531u,
  35613u,
  35239u,
  35221u,
  35786u,
  35439u,
  35538u,
  35304u,
  35695u,
  35529u,
  35517u,
  35736u,
  35741u
 };

static const UType JSum_7_13_21_8[]=
 {
  35531u,
  35439u,
  35517u,
  35239u,
  35304u,
  35741u,
  35786u,
  35529u,
  35613u,
  35538u,
  35736u,
  35221u,
  35695u
 };

static const UType JSum_7_13_21_9[]=
 {
  35550u,
  35313u,
  35822u,
  35313u,
  35433u,
  35822u,
  35822u,
  35545u,
  35545u,
  35313u,
  35433u,
  35545u,
  35433u
 };

static const UType JSum_7_13_21_10[]=
 {
  35531u,
  35304u,
  35613u,
  35695u,
  35239u,
  35529u,
  35221u,
  35517u,
  35786u,
  35736u,
  35439u,
  35741u,
  35538u
 };

static const UType JSum_7_13_21_11[]=
 {
  36022u,
  35664u,
  35522u,
  35532u,
  35486u,
  35540u,
  35196u,
  35646u,
  35518u,
  35481u,
  35464u,
  35448u,
  35370u
 };

static const PtrLen<const UType> JTable_7_13_21[]=
 {
  Range(JSum_7_13_21_1),
  Range(JSum_7_13_21_2),
  Range(JSum_7_13_21_3),
  Range(JSum_7_13_21_4),
  Range(JSum_7_13_21_5),
  Range(JSum_7_13_21_6),
  Range(JSum_7_13_21_7),
  Range(JSum_7_13_21_8),
  Range(JSum_7_13_21_9),
  Range(JSum_7_13_21_10),
  Range(JSum_7_13_21_11)
 };

static const UType JSum_7_13_22_1[]=
 {
  149302u,
  149270u,
  149102u,
  149390u,
  149362u,
  149132u,
  149756u,
  149488u,
  149612u,
  148164u,
  149106u,
  149289u,
  148964u
 };

static const UType JSum_7_13_22_2[]=
 {
  149738u,
  149332u,
  149078u,
  149172u,
  149532u,
  149574u,
  149666u,
  149089u,
  148796u,
  148784u,
  149146u,
  149558u,
  148472u
 };

static const UType JSum_7_13_22_3[]=
 {
  149417u,
  149832u,
  148918u,
  149832u,
  149214u,
  148918u,
  148918u,
  148876u,
  148876u,
  149832u,
  149214u,
  148876u,
  149214u
 };

static const UType JSum_7_13_22_4[]=
 {
  149738u,
  149146u,
  149089u,
  149532u,
  149332u,
  149558u,
  148796u,
  149574u,
  149078u,
  148472u,
  148784u,
  149666u,
  149172u
 };

static const UType JSum_7_13_22_5[]=
 {
  149738u,
  149078u,
  149532u,
  149666u,
  148796u,
  149146u,
  148472u,
  149332u,
  149172u,
  149574u,
  149089u,
  148784u,
  149558u
 };

static const UType JSum_7_13_22_6[]=
 {
  149302u,
  149289u,
  148164u,
  149488u,
  149132u,
  149390u,
  149270u,
  148964u,
  149106u,
  149612u,
  149756u,
  149362u,
  149102u
 };

static const UType JSum_7_13_22_7[]=
 {
  149738u,
  149078u,
  149532u,
  149666u,
  148796u,
  149146u,
  148472u,
  149332u,
  149172u,
  149574u,
  149089u,
  148784u,
  149558u
 };

static const UType JSum_7_13_22_8[]=
 {
  149738u,
  149146u,
  149089u,
  149532u,
  149332u,
  149558u,
  148796u,
  149574u,
  149078u,
  148472u,
  148784u,
  149666u,
  149172u
 };

static const UType JSum_7_13_22_9[]=
 {
  149417u,
  149832u,
  148918u,
  149832u,
  149214u,
  148918u,
  148918u,
  148876u,
  148876u,
  149832u,
  149214u,
  148876u,
  149214u
 };

static const UType JSum_7_13_22_10[]=
 {
  149738u,
  149332u,
  149078u,
  149172u,
  149532u,
  149574u,
  149666u,
  149089u,
  148796u,
  148784u,
  149146u,
  149558u,
  148472u
 };

static const UType JSum_7_13_22_11[]=
 {
  149302u,
  149270u,
  149102u,
  149390u,
  149362u,
  149132u,
  149756u,
  149488u,
  149612u,
  148164u,
  149106u,
  149289u,
  148964u
 };

static const PtrLen<const UType> JTable_7_13_22[]=
 {
  Range(JSum_7_13_22_1),
  Range(JSum_7_13_22_2),
  Range(JSum_7_13_22_3),
  Range(JSum_7_13_22_4),
  Range(JSum_7_13_22_5),
  Range(JSum_7_13_22_6),
  Range(JSum_7_13_22_7),
  Range(JSum_7_13_22_8),
  Range(JSum_7_13_22_9),
  Range(JSum_7_13_22_10),
  Range(JSum_7_13_22_11)
 };

static const UType JSum_7_13_23_1[]=
 {
  248612u,
  248556u,
  248504u,
  248800u,
  249360u,
  248432u,
  248490u,
  248830u,
  249634u,
  249086u,
  248102u,
  249042u,
  247781u
 };

static const UType JSum_7_13_23_2[]=
 {
  248536u,
  248535u,
  248027u,
  249391u,
  248529u,
  248371u,
  247984u,
  249117u,
  249181u,
  248929u,
  248882u,
  249506u,
  248241u
 };

static const UType JSum_7_13_23_3[]=
 {
  249396u,
  249361u,
  248733u,
  249361u,
  248204u,
  248733u,
  248733u,
  248313u,
  248313u,
  249361u,
  248204u,
  248313u,
  248204u
 };

static const UType JSum_7_13_23_4[]=
 {
  248536u,
  248882u,
  249117u,
  248529u,
  248535u,
  249506u,
  249181u,
  248371u,
  248027u,
  248241u,
  248929u,
  247984u,
  249391u
 };

static const UType JSum_7_13_23_5[]=
 {
  248536u,
  248027u,
  248529u,
  247984u,
  249181u,
  248882u,
  248241u,
  248535u,
  249391u,
  248371u,
  249117u,
  248929u,
  249506u
 };

static const UType JSum_7_13_23_6[]=
 {
  248612u,
  249042u,
  249086u,
  248830u,
  248432u,
  248800u,
  248556u,
  247781u,
  248102u,
  249634u,
  248490u,
  249360u,
  248504u
 };

static const UType JSum_7_13_23_7[]=
 {
  248536u,
  248027u,
  248529u,
  247984u,
  249181u,
  248882u,
  248241u,
  248535u,
  249391u,
  248371u,
  249117u,
  248929u,
  249506u
 };

static const UType JSum_7_13_23_8[]=
 {
  248536u,
  248882u,
  249117u,
  248529u,
  248535u,
  249506u,
  249181u,
  248371u,
  248027u,
  248241u,
  248929u,
  247984u,
  249391u
 };

static const UType JSum_7_13_23_9[]=
 {
  249396u,
  249361u,
  248733u,
  249361u,
  248204u,
  248733u,
  248733u,
  248313u,
  248313u,
  249361u,
  248204u,
  248313u,
  248204u
 };

static const UType JSum_7_13_23_10[]=
 {
  248536u,
  248535u,
  248027u,
  249391u,
  248529u,
  248371u,
  247984u,
  249117u,
  249181u,
  248929u,
  248882u,
  249506u,
  248241u
 };

static const UType JSum_7_13_23_11[]=
 {
  248612u,
  248556u,
  248504u,
  248800u,
  249360u,
  248432u,
  248490u,
  248830u,
  249634u,
  249086u,
  248102u,
  249042u,
  247781u
 };

static const PtrLen<const UType> JTable_7_13_23[]=
 {
  Range(JSum_7_13_23_1),
  Range(JSum_7_13_23_2),
  Range(JSum_7_13_23_3),
  Range(JSum_7_13_23_4),
  Range(JSum_7_13_23_5),
  Range(JSum_7_13_23_6),
  Range(JSum_7_13_23_7),
  Range(JSum_7_13_23_8),
  Range(JSum_7_13_23_9),
  Range(JSum_7_13_23_10),
  Range(JSum_7_13_23_11)
 };

static const TestSet::JTable JSet_7_13[]=
 {
  { 79u , Range(JTable_7_13_1) },
  { 131u , Range(JTable_7_13_2) },
  { 443u , Range(JTable_7_13_3) },
  { 547u , Range(JTable_7_13_4) },
  { 859u , Range(JTable_7_13_5) },
  { 911u , Range(JTable_7_13_6) },
  { 1327u , Range(JTable_7_13_7) },
  { 1483u , Range(JTable_7_13_8) },
  { 2003u , Range(JTable_7_13_9) },
  { 2731u , Range(JTable_7_13_10) },
  { 6007u , Range(JTable_7_13_11) },
  { 7411u , Range(JTable_7_13_12) },
  { 9283u , Range(JTable_7_13_13) },
  { 17291u , Range(JTable_7_13_14) },
  { 38039u , Range(JTable_7_13_15) },
  { 46411u , Range(JTable_7_13_16) },
  { 51871u , Range(JTable_7_13_17) },
  { 58787u , Range(JTable_7_13_18) },
  { 72931u , Range(JTable_7_13_19) },
  { 102103u , Range(JTable_7_13_20) },
  { 461891u , Range(JTable_7_13_21) },
  { 1939939u , Range(JTable_7_13_22) },
  { 3233231u , Range(JTable_7_13_23) }
 };

static const UType JSum_7_17_1_1[]=
 {
  8u,
  8u,
  6u,
  6u,
  8u,
  10u,
  4u,
  2u,
  8u,
  0u,
  6u,
  6u,
  8u,
  6u,
  5u,
  4u,
  6u
 };

static const UType JSum_7_17_1_2[]=
 {
  9u,
  8u,
  2u,
  9u,
  7u,
  8u,
  3u,
  2u,
  3u,
  6u,
  6u,
  8u,
  5u,
  7u,
  7u,
  8u,
  3u
 };

static const UType JSum_7_17_1_3[]=
 {
  7u,
  6u,
  3u,
  6u,
  3u,
  5u,
  6u,
  12u,
  3u,
  7u,
  10u,
  7u,
  7u,
  3u,
  4u,
  6u,
  6u
 };

static const UType JSum_7_17_1_4[]=
 {
  7u,
  3u,
  7u,
  5u,
  6u,
  4u,
  10u,
  6u,
  3u,
  6u,
  7u,
  12u,
  6u,
  6u,
  7u,
  3u,
  3u
 };

static const UType JSum_7_17_1_5[]=
 {
  9u,
  7u,
  8u,
  3u,
  8u,
  2u,
  3u,
  7u,
  6u,
  2u,
  7u,
  8u,
  8u,
  5u,
  6u,
  3u,
  9u
 };

static const UType JSum_7_17_1_6[]=
 {
  7u,
  6u,
  6u,
  7u,
  7u,
  6u,
  6u,
  3u,
  12u,
  10u,
  3u,
  6u,
  3u,
  5u,
  3u,
  7u,
  4u
 };

static const UType JSum_7_17_1_7[]=
 {
  9u,
  2u,
  7u,
  3u,
  3u,
  6u,
  5u,
  7u,
  3u,
  8u,
  9u,
  8u,
  2u,
  6u,
  8u,
  7u,
  8u
 };

static const UType JSum_7_17_1_8[]=
 {
  8u,
  4u,
  6u,
  6u,
  0u,
  2u,
  10u,
  6u,
  8u,
  6u,
  5u,
  8u,
  6u,
  8u,
  4u,
  8u,
  6u
 };

static const UType JSum_7_17_1_9[]=
 {
  9u,
  2u,
  7u,
  3u,
  3u,
  6u,
  5u,
  7u,
  3u,
  8u,
  9u,
  8u,
  2u,
  6u,
  8u,
  7u,
  8u
 };

static const UType JSum_7_17_1_10[]=
 {
  7u,
  6u,
  6u,
  7u,
  7u,
  6u,
  6u,
  3u,
  12u,
  10u,
  3u,
  6u,
  3u,
  5u,
  3u,
  7u,
  4u
 };

static const UType JSum_7_17_1_11[]=
 {
  9u,
  7u,
  8u,
  3u,
  8u,
  2u,
  3u,
  7u,
  6u,
  2u,
  7u,
  8u,
  8u,
  5u,
  6u,
  3u,
  9u
 };

static const UType JSum_7_17_1_12[]=
 {
  7u,
  3u,
  7u,
  5u,
  6u,
  4u,
  10u,
  6u,
  3u,
  6u,
  7u,
  12u,
  6u,
  6u,
  7u,
  3u,
  3u
 };

static const UType JSum_7_17_1_13[]=
 {
  7u,
  6u,
  3u,
  6u,
  3u,
  5u,
  6u,
  12u,
  3u,
  7u,
  10u,
  7u,
  7u,
  3u,
  4u,
  6u,
  6u
 };

static const UType JSum_7_17_1_14[]=
 {
  9u,
  8u,
  2u,
  9u,
  7u,
  8u,
  3u,
  2u,
  3u,
  6u,
  6u,
  8u,
  5u,
  7u,
  7u,
  8u,
  3u
 };

static const UType JSum_7_17_1_15[]=
 {
  8u,
  8u,
  6u,
  6u,
  8u,
  10u,
  4u,
  2u,
  8u,
  0u,
  6u,
  6u,
  8u,
  6u,
  5u,
  4u,
  6u
 };

static const PtrLen<const UType> JTable_7_17_1[]=
 {
  Range(JSum_7_17_1_1),
  Range(JSum_7_17_1_2),
  Range(JSum_7_17_1_3),
  Range(JSum_7_17_1_4),
  Range(JSum_7_17_1_5),
  Range(JSum_7_17_1_6),
  Range(JSum_7_17_1_7),
  Range(JSum_7_17_1_8),
  Range(JSum_7_17_1_9),
  Range(JSum_7_17_1_10),
  Range(JSum_7_17_1_11),
  Range(JSum_7_17_1_12),
  Range(JSum_7_17_1_13),
  Range(JSum_7_17_1_14),
  Range(JSum_7_17_1_15)
 };

static const UType JSum_7_17_2_1[]=
 {
  16u,
  10u,
  16u,
  14u,
  21u,
  16u,
  14u,
  12u,
  10u,
  12u,
  10u,
  12u,
  20u,
  10u,
  10u,
  20u,
  14u
 };

static const UType JSum_7_17_2_2[]=
 {
  13u,
  13u,
  11u,
  14u,
  13u,
  9u,
  14u,
  12u,
  17u,
  15u,
  10u,
  17u,
  12u,
  13u,
  14u,
  26u,
  14u
 };

static const UType JSum_7_17_2_3[]=
 {
  12u,
  13u,
  16u,
  9u,
  21u,
  12u,
  8u,
  11u,
  15u,
  12u,
  15u,
  13u,
  15u,
  18u,
  22u,
  12u,
  13u
 };

static const UType JSum_7_17_2_4[]=
 {
  12u,
  18u,
  12u,
  12u,
  13u,
  22u,
  15u,
  8u,
  16u,
  12u,
  13u,
  11u,
  9u,
  13u,
  15u,
  15u,
  21u
 };

static const UType JSum_7_17_2_5[]=
 {
  13u,
  14u,
  17u,
  17u,
  9u,
  11u,
  14u,
  13u,
  10u,
  12u,
  13u,
  13u,
  26u,
  12u,
  15u,
  14u,
  14u
 };

static const UType JSum_7_17_2_6[]=
 {
  12u,
  9u,
  8u,
  12u,
  15u,
  12u,
  13u,
  21u,
  11u,
  15u,
  18u,
  13u,
  16u,
  12u,
  15u,
  13u,
  22u
 };

static const UType JSum_7_17_2_7[]=
 {
  13u,
  11u,
  13u,
  14u,
  17u,
  10u,
  12u,
  14u,
  14u,
  13u,
  14u,
  9u,
  12u,
  15u,
  17u,
  13u,
  26u
 };

static const UType JSum_7_17_2_8[]=
 {
  16u,
  20u,
  10u,
  12u,
  12u,
  12u,
  16u,
  14u,
  10u,
  14u,
  10u,
  20u,
  10u,
  10u,
  14u,
  21u,
  16u
 };

static const UType JSum_7_17_2_9[]=
 {
  13u,
  11u,
  13u,
  14u,
  17u,
  10u,
  12u,
  14u,
  14u,
  13u,
  14u,
  9u,
  12u,
  15u,
  17u,
  13u,
  26u
 };

static const UType JSum_7_17_2_10[]=
 {
  12u,
  9u,
  8u,
  12u,
  15u,
  12u,
  13u,
  21u,
  11u,
  15u,
  18u,
  13u,
  16u,
  12u,
  15u,
  13u,
  22u
 };

static const UType JSum_7_17_2_11[]=
 {
  13u,
  14u,
  17u,
  17u,
  9u,
  11u,
  14u,
  13u,
  10u,
  12u,
  13u,
  13u,
  26u,
  12u,
  15u,
  14u,
  14u
 };

static const UType JSum_7_17_2_12[]=
 {
  12u,
  18u,
  12u,
  12u,
  13u,
  22u,
  15u,
  8u,
  16u,
  12u,
  13u,
  11u,
  9u,
  13u,
  15u,
  15u,
  21u
 };

static const UType JSum_7_17_2_13[]=
 {
  12u,
  13u,
  16u,
  9u,
  21u,
  12u,
  8u,
  11u,
  15u,
  12u,
  15u,
  13u,
  15u,
  18u,
  22u,
  12u,
  13u
 };

static const UType JSum_7_17_2_14[]=
 {
  13u,
  13u,
  11u,
  14u,
  13u,
  9u,
  14u,
  12u,
  17u,
  15u,
  10u,
  17u,
  12u,
  13u,
  14u,
  26u,
  14u
 };

static const UType JSum_7_17_2_15[]=
 {
  16u,
  10u,
  16u,
  14u,
  21u,
  16u,
  14u,
  12u,
  10u,
  12u,
  10u,
  12u,
  20u,
  10u,
  10u,
  20u,
  14u
 };

static const PtrLen<const UType> JTable_7_17_2[]=
 {
  Range(JSum_7_17_2_1),
  Range(JSum_7_17_2_2),
  Range(JSum_7_17_2_3),
  Range(JSum_7_17_2_4),
  Range(JSum_7_17_2_5),
  Range(JSum_7_17_2_6),
  Range(JSum_7_17_2_7),
  Range(JSum_7_17_2_8),
  Range(JSum_7_17_2_9),
  Range(JSum_7_17_2_10),
  Range(JSum_7_17_2_11),
  Range(JSum_7_17_2_12),
  Range(JSum_7_17_2_13),
  Range(JSum_7_17_2_14),
  Range(JSum_7_17_2_15)
 };

static const UType JSum_7_17_3_1[]=
 {
  22u,
  32u,
  26u,
  34u,
  28u,
  24u,
  28u,
  30u,
  22u,
  18u,
  28u,
  28u,
  26u,
  28u,
  18u,
  17u,
  32u
 };

static const UType JSum_7_17_3_2[]=
 {
  31u,
  30u,
  26u,
  31u,
  26u,
  20u,
  27u,
  38u,
  21u,
  29u,
  21u,
  29u,
  26u,
  19u,
  22u,
  20u,
  25u
 };

static const UType JSum_7_17_3_3[]=
 {
  19u,
  29u,
  35u,
  21u,
  30u,
  21u,
  30u,
  30u,
  29u,
  30u,
  22u,
  23u,
  19u,
  22u,
  22u,
  33u,
  26u
 };

static const UType JSum_7_17_3_4[]=
 {
  19u,
  22u,
  30u,
  21u,
  29u,
  22u,
  22u,
  30u,
  35u,
  33u,
  23u,
  30u,
  21u,
  26u,
  19u,
  29u,
  30u
 };

static const UType JSum_7_17_3_5[]=
 {
  31u,
  22u,
  29u,
  21u,
  20u,
  26u,
  25u,
  19u,
  21u,
  38u,
  26u,
  30u,
  20u,
  26u,
  29u,
  27u,
  31u
 };

static const UType JSum_7_17_3_6[]=
 {
  19u,
  21u,
  30u,
  30u,
  19u,
  33u,
  29u,
  30u,
  30u,
  22u,
  22u,
  26u,
  35u,
  21u,
  29u,
  23u,
  22u
 };

static const UType JSum_7_17_3_7[]=
 {
  31u,
  26u,
  26u,
  27u,
  21u,
  21u,
  26u,
  22u,
  25u,
  30u,
  31u,
  20u,
  38u,
  29u,
  29u,
  19u,
  20u
 };

static const UType JSum_7_17_3_8[]=
 {
  22u,
  17u,
  28u,
  28u,
  18u,
  30u,
  24u,
  34u,
  32u,
  32u,
  18u,
  26u,
  28u,
  22u,
  28u,
  28u,
  26u
 };

static const UType JSum_7_17_3_9[]=
 {
  31u,
  26u,
  26u,
  27u,
  21u,
  21u,
  26u,
  22u,
  25u,
  30u,
  31u,
  20u,
  38u,
  29u,
  29u,
  19u,
  20u
 };

static const UType JSum_7_17_3_10[]=
 {
  19u,
  21u,
  30u,
  30u,
  19u,
  33u,
  29u,
  30u,
  30u,
  22u,
  22u,
  26u,
  35u,
  21u,
  29u,
  23u,
  22u
 };

static const UType JSum_7_17_3_11[]=
 {
  31u,
  22u,
  29u,
  21u,
  20u,
  26u,
  25u,
  19u,
  21u,
  38u,
  26u,
  30u,
  20u,
  26u,
  29u,
  27u,
  31u
 };

static const UType JSum_7_17_3_12[]=
 {
  19u,
  22u,
  30u,
  21u,
  29u,
  22u,
  22u,
  30u,
  35u,
  33u,
  23u,
  30u,
  21u,
  26u,
  19u,
  29u,
  30u
 };

static const UType JSum_7_17_3_13[]=
 {
  19u,
  29u,
  35u,
  21u,
  30u,
  21u,
  30u,
  30u,
  29u,
  30u,
  22u,
  23u,
  19u,
  22u,
  22u,
  33u,
  26u
 };

static const UType JSum_7_17_3_14[]=
 {
  31u,
  30u,
  26u,
  31u,
  26u,
  20u,
  27u,
  38u,
  21u,
  29u,
  21u,
  29u,
  26u,
  19u,
  22u,
  20u,
  25u
 };

static const UType JSum_7_17_3_15[]=
 {
  22u,
  32u,
  26u,
  34u,
  28u,
  24u,
  28u,
  30u,
  22u,
  18u,
  28u,
  28u,
  26u,
  28u,
  18u,
  17u,
  32u
 };

static const PtrLen<const UType> JTable_7_17_3[]=
 {
  Range(JSum_7_17_3_1),
  Range(JSum_7_17_3_2),
  Range(JSum_7_17_3_3),
  Range(JSum_7_17_3_4),
  Range(JSum_7_17_3_5),
  Range(JSum_7_17_3_6),
  Range(JSum_7_17_3_7),
  Range(JSum_7_17_3_8),
  Range(JSum_7_17_3_9),
  Range(JSum_7_17_3_10),
  Range(JSum_7_17_3_11),
  Range(JSum_7_17_3_12),
  Range(JSum_7_17_3_13),
  Range(JSum_7_17_3_14),
  Range(JSum_7_17_3_15)
 };

static const UType JSum_7_17_4_1[]=
 {
  40u,
  30u,
  42u,
  34u,
  44u,
  46u,
  46u,
  37u,
  36u,
  36u,
  34u,
  40u,
  36u,
  24u,
  42u,
  46u,
  32u
 };

static const UType JSum_7_17_4_2[]=
 {
  47u,
  38u,
  44u,
  31u,
  41u,
  30u,
  42u,
  41u,
  34u,
  38u,
  33u,
  30u,
  45u,
  35u,
  29u,
  39u,
  48u
 };

static const UType JSum_7_17_4_3[]=
 {
  39u,
  39u,
  38u,
  44u,
  37u,
  26u,
  41u,
  29u,
  33u,
  35u,
  50u,
  37u,
  40u,
  36u,
  31u,
  46u,
  44u
 };

static const UType JSum_7_17_4_4[]=
 {
  39u,
  36u,
  35u,
  26u,
  39u,
  31u,
  50u,
  41u,
  38u,
  46u,
  37u,
  29u,
  44u,
  44u,
  40u,
  33u,
  37u
 };

static const UType JSum_7_17_4_5[]=
 {
  47u,
  29u,
  30u,
  34u,
  30u,
  44u,
  48u,
  35u,
  33u,
  41u,
  41u,
  38u,
  39u,
  45u,
  38u,
  42u,
  31u
 };

static const UType JSum_7_17_4_6[]=
 {
  39u,
  44u,
  41u,
  35u,
  40u,
  46u,
  39u,
  37u,
  29u,
  50u,
  36u,
  44u,
  38u,
  26u,
  33u,
  37u,
  31u
 };

static const UType JSum_7_17_4_7[]=
 {
  47u,
  44u,
  41u,
  42u,
  34u,
  33u,
  45u,
  29u,
  48u,
  38u,
  31u,
  30u,
  41u,
  38u,
  30u,
  35u,
  39u
 };

static const UType JSum_7_17_4_8[]=
 {
  40u,
  46u,
  24u,
  40u,
  36u,
  37u,
  46u,
  34u,
  30u,
  32u,
  42u,
  36u,
  34u,
  36u,
  46u,
  44u,
  42u
 };

static const UType JSum_7_17_4_9[]=
 {
  47u,
  44u,
  41u,
  42u,
  34u,
  33u,
  45u,
  29u,
  48u,
  38u,
  31u,
  30u,
  41u,
  38u,
  30u,
  35u,
  39u
 };

static const UType JSum_7_17_4_10[]=
 {
  39u,
  44u,
  41u,
  35u,
  40u,
  46u,
  39u,
  37u,
  29u,
  50u,
  36u,
  44u,
  38u,
  26u,
  33u,
  37u,
  31u
 };

static const UType JSum_7_17_4_11[]=
 {
  47u,
  29u,
  30u,
  34u,
  30u,
  44u,
  48u,
  35u,
  33u,
  41u,
  41u,
  38u,
  39u,
  45u,
  38u,
  42u,
  31u
 };

static const UType JSum_7_17_4_12[]=
 {
  39u,
  36u,
  35u,
  26u,
  39u,
  31u,
  50u,
  41u,
  38u,
  46u,
  37u,
  29u,
  44u,
  44u,
  40u,
  33u,
  37u
 };

static const UType JSum_7_17_4_13[]=
 {
  39u,
  39u,
  38u,
  44u,
  37u,
  26u,
  41u,
  29u,
  33u,
  35u,
  50u,
  37u,
  40u,
  36u,
  31u,
  46u,
  44u
 };

static const UType JSum_7_17_4_14[]=
 {
  47u,
  38u,
  44u,
  31u,
  41u,
  30u,
  42u,
  41u,
  34u,
  38u,
  33u,
  30u,
  45u,
  35u,
  29u,
  39u,
  48u
 };

static const UType JSum_7_17_4_15[]=
 {
  40u,
  30u,
  42u,
  34u,
  44u,
  46u,
  46u,
  37u,
  36u,
  36u,
  34u,
  40u,
  36u,
  24u,
  42u,
  46u,
  32u
 };

static const PtrLen<const UType> JTable_7_17_4[]=
 {
  Range(JSum_7_17_4_1),
  Range(JSum_7_17_4_2),
  Range(JSum_7_17_4_3),
  Range(JSum_7_17_4_4),
  Range(JSum_7_17_4_5),
  Range(JSum_7_17_4_6),
  Range(JSum_7_17_4_7),
  Range(JSum_7_17_4_8),
  Range(JSum_7_17_4_9),
  Range(JSum_7_17_4_10),
  Range(JSum_7_17_4_11),
  Range(JSum_7_17_4_12),
  Range(JSum_7_17_4_13),
  Range(JSum_7_17_4_14),
  Range(JSum_7_17_4_15)
 };

static const UType JSum_7_17_5_1[]=
 {
  64u,
  76u,
  68u,
  84u,
  72u,
  56u,
  62u,
  68u,
  66u,
  62u,
  54u,
  74u,
  62u,
  66u,
  60u,
  73u,
  54u
 };

static const UType JSum_7_17_5_2[]=
 {
  60u,
  72u,
  62u,
  61u,
  67u,
  60u,
  58u,
  75u,
  66u,
  77u,
  83u,
  60u,
  65u,
  54u,
  77u,
  65u,
  59u
 };

static const UType JSum_7_17_5_3[]=
 {
  68u,
  69u,
  69u,
  64u,
  45u,
  70u,
  64u,
  71u,
  61u,
  56u,
  74u,
  62u,
  69u,
  65u,
  61u,
  70u,
  83u
 };

static const UType JSum_7_17_5_4[]=
 {
  68u,
  65u,
  56u,
  70u,
  69u,
  61u,
  74u,
  64u,
  69u,
  70u,
  62u,
  71u,
  64u,
  83u,
  69u,
  61u,
  45u
 };

static const UType JSum_7_17_5_5[]=
 {
  60u,
  77u,
  60u,
  66u,
  60u,
  62u,
  59u,
  54u,
  83u,
  75u,
  67u,
  72u,
  65u,
  65u,
  77u,
  58u,
  61u
 };

static const UType JSum_7_17_5_6[]=
 {
  68u,
  64u,
  64u,
  56u,
  69u,
  70u,
  69u,
  45u,
  71u,
  74u,
  65u,
  83u,
  69u,
  70u,
  61u,
  62u,
  61u
 };

static const UType JSum_7_17_5_7[]=
 {
  60u,
  62u,
  67u,
  58u,
  66u,
  83u,
  65u,
  77u,
  59u,
  72u,
  61u,
  60u,
  75u,
  77u,
  60u,
  54u,
  65u
 };

static const UType JSum_7_17_5_8[]=
 {
  64u,
  73u,
  66u,
  74u,
  62u,
  68u,
  56u,
  84u,
  76u,
  54u,
  60u,
  62u,
  54u,
  66u,
  62u,
  72u,
  68u
 };

static const UType JSum_7_17_5_9[]=
 {
  60u,
  62u,
  67u,
  58u,
  66u,
  83u,
  65u,
  77u,
  59u,
  72u,
  61u,
  60u,
  75u,
  77u,
  60u,
  54u,
  65u
 };

static const UType JSum_7_17_5_10[]=
 {
  68u,
  64u,
  64u,
  56u,
  69u,
  70u,
  69u,
  45u,
  71u,
  74u,
  65u,
  83u,
  69u,
  70u,
  61u,
  62u,
  61u
 };

static const UType JSum_7_17_5_11[]=
 {
  60u,
  77u,
  60u,
  66u,
  60u,
  62u,
  59u,
  54u,
  83u,
  75u,
  67u,
  72u,
  65u,
  65u,
  77u,
  58u,
  61u
 };

static const UType JSum_7_17_5_12[]=
 {
  68u,
  65u,
  56u,
  70u,
  69u,
  61u,
  74u,
  64u,
  69u,
  70u,
  62u,
  71u,
  64u,
  83u,
  69u,
  61u,
  45u
 };

static const UType JSum_7_17_5_13[]=
 {
  68u,
  69u,
  69u,
  64u,
  45u,
  70u,
  64u,
  71u,
  61u,
  56u,
  74u,
  62u,
  69u,
  65u,
  61u,
  70u,
  83u
 };

static const UType JSum_7_17_5_14[]=
 {
  60u,
  72u,
  62u,
  61u,
  67u,
  60u,
  58u,
  75u,
  66u,
  77u,
  83u,
  60u,
  65u,
  54u,
  77u,
  65u,
  59u
 };

static const UType JSum_7_17_5_15[]=
 {
  64u,
  76u,
  68u,
  84u,
  72u,
  56u,
  62u,
  68u,
  66u,
  62u,
  54u,
  74u,
  62u,
  66u,
  60u,
  73u,
  54u
 };

static const PtrLen<const UType> JTable_7_17_5[]=
 {
  Range(JSum_7_17_5_1),
  Range(JSum_7_17_5_2),
  Range(JSum_7_17_5_3),
  Range(JSum_7_17_5_4),
  Range(JSum_7_17_5_5),
  Range(JSum_7_17_5_6),
  Range(JSum_7_17_5_7),
  Range(JSum_7_17_5_8),
  Range(JSum_7_17_5_9),
  Range(JSum_7_17_5_10),
  Range(JSum_7_17_5_11),
  Range(JSum_7_17_5_12),
  Range(JSum_7_17_5_13),
  Range(JSum_7_17_5_14),
  Range(JSum_7_17_5_15)
 };

static const UType JSum_7_17_6_1[]=
 {
  72u,
  66u,
  80u,
  88u,
  74u,
  68u,
  74u,
  74u,
  72u,
  82u,
  90u,
  90u,
  80u,
  69u,
  94u,
  68u,
  84u
 };

static const UType JSum_7_17_6_2[]=
 {
  76u,
  81u,
  86u,
  81u,
  72u,
  70u,
  57u,
  89u,
  77u,
  68u,
  83u,
  88u,
  80u,
  87u,
  75u,
  87u,
  68u
 };

static const UType JSum_7_17_6_3[]=
 {
  76u,
  80u,
  85u,
  82u,
  83u,
  76u,
  86u,
  93u,
  69u,
  57u,
  84u,
  64u,
  83u,
  76u,
  83u,
  77u,
  71u
 };

static const UType JSum_7_17_6_4[]=
 {
  76u,
  76u,
  57u,
  76u,
  80u,
  83u,
  84u,
  86u,
  85u,
  77u,
  64u,
  93u,
  82u,
  71u,
  83u,
  69u,
  83u
 };

static const UType JSum_7_17_6_5[]=
 {
  76u,
  75u,
  88u,
  77u,
  70u,
  86u,
  68u,
  87u,
  83u,
  89u,
  72u,
  81u,
  87u,
  80u,
  68u,
  57u,
  81u
 };

static const UType JSum_7_17_6_6[]=
 {
  76u,
  82u,
  86u,
  57u,
  83u,
  77u,
  80u,
  83u,
  93u,
  84u,
  76u,
  71u,
  85u,
  76u,
  69u,
  64u,
  83u
 };

static const UType JSum_7_17_6_7[]=
 {
  76u,
  86u,
  72u,
  57u,
  77u,
  83u,
  80u,
  75u,
  68u,
  81u,
  81u,
  70u,
  89u,
  68u,
  88u,
  87u,
  87u
 };

static const UType JSum_7_17_6_8[]=
 {
  72u,
  68u,
  69u,
  90u,
  82u,
  74u,
  68u,
  88u,
  66u,
  84u,
  94u,
  80u,
  90u,
  72u,
  74u,
  74u,
  80u
 };

static const UType JSum_7_17_6_9[]=
 {
  76u,
  86u,
  72u,
  57u,
  77u,
  83u,
  80u,
  75u,
  68u,
  81u,
  81u,
  70u,
  89u,
  68u,
  88u,
  87u,
  87u
 };

static const UType JSum_7_17_6_10[]=
 {
  76u,
  82u,
  86u,
  57u,
  83u,
  77u,
  80u,
  83u,
  93u,
  84u,
  76u,
  71u,
  85u,
  76u,
  69u,
  64u,
  83u
 };

static const UType JSum_7_17_6_11[]=
 {
  76u,
  75u,
  88u,
  77u,
  70u,
  86u,
  68u,
  87u,
  83u,
  89u,
  72u,
  81u,
  87u,
  80u,
  68u,
  57u,
  81u
 };

static const UType JSum_7_17_6_12[]=
 {
  76u,
  76u,
  57u,
  76u,
  80u,
  83u,
  84u,
  86u,
  85u,
  77u,
  64u,
  93u,
  82u,
  71u,
  83u,
  69u,
  83u
 };

static const UType JSum_7_17_6_13[]=
 {
  76u,
  80u,
  85u,
  82u,
  83u,
  76u,
  86u,
  93u,
  69u,
  57u,
  84u,
  64u,
  83u,
  76u,
  83u,
  77u,
  71u
 };

static const UType JSum_7_17_6_14[]=
 {
  76u,
  81u,
  86u,
  81u,
  72u,
  70u,
  57u,
  89u,
  77u,
  68u,
  83u,
  88u,
  80u,
  87u,
  75u,
  87u,
  68u
 };

static const UType JSum_7_17_6_15[]=
 {
  72u,
  66u,
  80u,
  88u,
  74u,
  68u,
  74u,
  74u,
  72u,
  82u,
  90u,
  90u,
  80u,
  69u,
  94u,
  68u,
  84u
 };

static const PtrLen<const UType> JTable_7_17_6[]=
 {
  Range(JSum_7_17_6_1),
  Range(JSum_7_17_6_2),
  Range(JSum_7_17_6_3),
  Range(JSum_7_17_6_4),
  Range(JSum_7_17_6_5),
  Range(JSum_7_17_6_6),
  Range(JSum_7_17_6_7),
  Range(JSum_7_17_6_8),
  Range(JSum_7_17_6_9),
  Range(JSum_7_17_6_10),
  Range(JSum_7_17_6_11),
  Range(JSum_7_17_6_12),
  Range(JSum_7_17_6_13),
  Range(JSum_7_17_6_14),
  Range(JSum_7_17_6_15)
 };

static const UType JSum_7_17_7_1[]=
 {
  118u,
  104u,
  124u,
  116u,
  110u,
  88u,
  106u,
  108u,
  94u,
  116u,
  114u,
  116u,
  110u,
  110u,
  126u,
  116u,
  93u
 };

static const UType JSum_7_17_7_2[]=
 {
  106u,
  126u,
  103u,
  128u,
  96u,
  101u,
  119u,
  121u,
  121u,
  110u,
  115u,
  110u,
  99u,
  97u,
  114u,
  106u,
  97u
 };

static const UType JSum_7_17_7_3[]=
 {
  126u,
  107u,
  93u,
  110u,
  103u,
  106u,
  109u,
  111u,
  121u,
  97u,
  106u,
  100u,
  125u,
  116u,
  130u,
  107u,
  102u
 };

static const UType JSum_7_17_7_4[]=
 {
  126u,
  116u,
  97u,
  106u,
  107u,
  130u,
  106u,
  109u,
  93u,
  107u,
  100u,
  111u,
  110u,
  102u,
  125u,
  121u,
  103u
 };

static const UType JSum_7_17_7_5[]=
 {
  106u,
  114u,
  110u,
  121u,
  101u,
  103u,
  97u,
  97u,
  115u,
  121u,
  96u,
  126u,
  106u,
  99u,
  110u,
  119u,
  128u
 };

static const UType JSum_7_17_7_6[]=
 {
  126u,
  110u,
  109u,
  97u,
  125u,
  107u,
  107u,
  103u,
  111u,
  106u,
  116u,
  102u,
  93u,
  106u,
  121u,
  100u,
  130u
 };

static const UType JSum_7_17_7_7[]=
 {
  106u,
  103u,
  96u,
  119u,
  121u,
  115u,
  99u,
  114u,
  97u,
  126u,
  128u,
  101u,
  121u,
  110u,
  110u,
  97u,
  106u
 };

static const UType JSum_7_17_7_8[]=
 {
  118u,
  116u,
  110u,
  116u,
  116u,
  108u,
  88u,
  116u,
  104u,
  93u,
  126u,
  110u,
  114u,
  94u,
  106u,
  110u,
  124u
 };

static const UType JSum_7_17_7_9[]=
 {
  106u,
  103u,
  96u,
  119u,
  121u,
  115u,
  99u,
  114u,
  97u,
  126u,
  128u,
  101u,
  121u,
  110u,
  110u,
  97u,
  106u
 };

static const UType JSum_7_17_7_10[]=
 {
  126u,
  110u,
  109u,
  97u,
  125u,
  107u,
  107u,
  103u,
  111u,
  106u,
  116u,
  102u,
  93u,
  106u,
  121u,
  100u,
  130u
 };

static const UType JSum_7_17_7_11[]=
 {
  106u,
  114u,
  110u,
  121u,
  101u,
  103u,
  97u,
  97u,
  115u,
  121u,
  96u,
  126u,
  106u,
  99u,
  110u,
  119u,
  128u
 };

static const UType JSum_7_17_7_12[]=
 {
  126u,
  116u,
  97u,
  106u,
  107u,
  130u,
  106u,
  109u,
  93u,
  107u,
  100u,
  111u,
  110u,
  102u,
  125u,
  121u,
  103u
 };

static const UType JSum_7_17_7_13[]=
 {
  126u,
  107u,
  93u,
  110u,
  103u,
  106u,
  109u,
  111u,
  121u,
  97u,
  106u,
  100u,
  125u,
  116u,
  130u,
  107u,
  102u
 };

static const UType JSum_7_17_7_14[]=
 {
  106u,
  126u,
  103u,
  128u,
  96u,
  101u,
  119u,
  121u,
  121u,
  110u,
  115u,
  110u,
  99u,
  97u,
  114u,
  106u,
  97u
 };

static const UType JSum_7_17_7_15[]=
 {
  118u,
  104u,
  124u,
  116u,
  110u,
  88u,
  106u,
  108u,
  94u,
  116u,
  114u,
  116u,
  110u,
  110u,
  126u,
  116u,
  93u
 };

static const PtrLen<const UType> JTable_7_17_7[]=
 {
  Range(JSum_7_17_7_1),
  Range(JSum_7_17_7_2),
  Range(JSum_7_17_7_3),
  Range(JSum_7_17_7_4),
  Range(JSum_7_17_7_5),
  Range(JSum_7_17_7_6),
  Range(JSum_7_17_7_7),
  Range(JSum_7_17_7_8),
  Range(JSum_7_17_7_9),
  Range(JSum_7_17_7_10),
  Range(JSum_7_17_7_11),
  Range(JSum_7_17_7_12),
  Range(JSum_7_17_7_13),
  Range(JSum_7_17_7_14),
  Range(JSum_7_17_7_15)
 };

static const UType JSum_7_17_8_1[]=
 {
  206u,
  202u,
  222u,
  168u,
  216u,
  210u,
  196u,
  206u,
  220u,
  226u,
  226u,
  208u,
  200u,
  204u,
  222u,
  225u,
  212u
 };

static const UType JSum_7_17_8_2[]=
 {
  198u,
  201u,
  236u,
  190u,
  220u,
  190u,
  190u,
  224u,
  232u,
  216u,
  210u,
  222u,
  222u,
  208u,
  200u,
  206u,
  204u
 };

static const UType JSum_7_17_8_3[]=
 {
  212u,
  238u,
  208u,
  206u,
  204u,
  218u,
  200u,
  212u,
  202u,
  196u,
  217u,
  230u,
  176u,
  202u,
  202u,
  220u,
  226u
 };

static const UType JSum_7_17_8_4[]=
 {
  212u,
  202u,
  196u,
  218u,
  238u,
  202u,
  217u,
  200u,
  208u,
  220u,
  230u,
  212u,
  206u,
  226u,
  176u,
  202u,
  204u
 };

static const UType JSum_7_17_8_5[]=
 {
  198u,
  200u,
  222u,
  232u,
  190u,
  236u,
  204u,
  208u,
  210u,
  224u,
  220u,
  201u,
  206u,
  222u,
  216u,
  190u,
  190u
 };

static const UType JSum_7_17_8_6[]=
 {
  212u,
  206u,
  200u,
  196u,
  176u,
  220u,
  238u,
  204u,
  212u,
  217u,
  202u,
  226u,
  208u,
  218u,
  202u,
  230u,
  202u
 };

static const UType JSum_7_17_8_7[]=
 {
  198u,
  236u,
  220u,
  190u,
  232u,
  210u,
  222u,
  200u,
  204u,
  201u,
  190u,
  190u,
  224u,
  216u,
  222u,
  208u,
  206u
 };

static const UType JSum_7_17_8_8[]=
 {
  206u,
  225u,
  204u,
  208u,
  226u,
  206u,
  210u,
  168u,
  202u,
  212u,
  222u,
  200u,
  226u,
  220u,
  196u,
  216u,
  222u
 };

static const UType JSum_7_17_8_9[]=
 {
  198u,
  236u,
  220u,
  190u,
  232u,
  210u,
  222u,
  200u,
  204u,
  201u,
  190u,
  190u,
  224u,
  216u,
  222u,
  208u,
  206u
 };

static const UType JSum_7_17_8_10[]=
 {
  212u,
  206u,
  200u,
  196u,
  176u,
  220u,
  238u,
  204u,
  212u,
  217u,
  202u,
  226u,
  208u,
  218u,
  202u,
  230u,
  202u
 };

static const UType JSum_7_17_8_11[]=
 {
  198u,
  200u,
  222u,
  232u,
  190u,
  236u,
  204u,
  208u,
  210u,
  224u,
  220u,
  201u,
  206u,
  222u,
  216u,
  190u,
  190u
 };

static const UType JSum_7_17_8_12[]=
 {
  212u,
  202u,
  196u,
  218u,
  238u,
  202u,
  217u,
  200u,
  208u,
  220u,
  230u,
  212u,
  206u,
  226u,
  176u,
  202u,
  204u
 };

static const UType JSum_7_17_8_13[]=
 {
  212u,
  238u,
  208u,
  206u,
  204u,
  218u,
  200u,
  212u,
  202u,
  196u,
  217u,
  230u,
  176u,
  202u,
  202u,
  220u,
  226u
 };

static const UType JSum_7_17_8_14[]=
 {
  198u,
  201u,
  236u,
  190u,
  220u,
  190u,
  190u,
  224u,
  232u,
  216u,
  210u,
  222u,
  222u,
  208u,
  200u,
  206u,
  204u
 };

static const UType JSum_7_17_8_15[]=
 {
  206u,
  202u,
  222u,
  168u,
  216u,
  210u,
  196u,
  206u,
  220u,
  226u,
  226u,
  208u,
  200u,
  204u,
  222u,
  225u,
  212u
 };

static const PtrLen<const UType> JTable_7_17_8[]=
 {
  Range(JSum_7_17_8_1),
  Range(JSum_7_17_8_2),
  Range(JSum_7_17_8_3),
  Range(JSum_7_17_8_4),
  Range(JSum_7_17_8_5),
  Range(JSum_7_17_8_6),
  Range(JSum_7_17_8_7),
  Range(JSum_7_17_8_8),
  Range(JSum_7_17_8_9),
  Range(JSum_7_17_8_10),
  Range(JSum_7_17_8_11),
  Range(JSum_7_17_8_12),
  Range(JSum_7_17_8_13),
  Range(JSum_7_17_8_14),
  Range(JSum_7_17_8_15)
 };

static const UType JSum_7_17_9_1[]=
 {
  265u,
  298u,
  292u,
  262u,
  256u,
  284u,
  264u,
  254u,
  256u,
  270u,
  240u,
  290u,
  254u,
  262u,
  268u,
  246u,
  260u
 };

static const UType JSum_7_17_9_2[]=
 {
  274u,
  285u,
  264u,
  269u,
  283u,
  276u,
  274u,
  257u,
  272u,
  272u,
  233u,
  290u,
  262u,
  273u,
  257u,
  245u,
  235u
 };

static const UType JSum_7_17_9_3[]=
 {
  274u,
  269u,
  299u,
  257u,
  271u,
  270u,
  258u,
  263u,
  240u,
  266u,
  277u,
  266u,
  270u,
  245u,
  235u,
  292u,
  269u
 };

static const UType JSum_7_17_9_4[]=
 {
  274u,
  245u,
  266u,
  270u,
  269u,
  235u,
  277u,
  258u,
  299u,
  292u,
  266u,
  263u,
  257u,
  269u,
  270u,
  240u,
  271u
 };

static const UType JSum_7_17_9_5[]=
 {
  274u,
  257u,
  290u,
  272u,
  276u,
  264u,
  235u,
  273u,
  233u,
  257u,
  283u,
  285u,
  245u,
  262u,
  272u,
  274u,
  269u
 };

static const UType JSum_7_17_9_6[]=
 {
  274u,
  257u,
  258u,
  266u,
  270u,
  292u,
  269u,
  271u,
  263u,
  277u,
  245u,
  269u,
  299u,
  270u,
  240u,
  266u,
  235u
 };

static const UType JSum_7_17_9_7[]=
 {
  274u,
  264u,
  283u,
  274u,
  272u,
  233u,
  262u,
  257u,
  235u,
  285u,
  269u,
  276u,
  257u,
  272u,
  290u,
  273u,
  245u
 };

static const UType JSum_7_17_9_8[]=
 {
  265u,
  246u,
  262u,
  290u,
  270u,
  254u,
  284u,
  262u,
  298u,
  260u,
  268u,
  254u,
  240u,
  256u,
  264u,
  256u,
  292u
 };

static const UType JSum_7_17_9_9[]=
 {
  274u,
  264u,
  283u,
  274u,
  272u,
  233u,
  262u,
  257u,
  235u,
  285u,
  269u,
  276u,
  257u,
  272u,
  290u,
  273u,
  245u
 };

static const UType JSum_7_17_9_10[]=
 {
  274u,
  257u,
  258u,
  266u,
  270u,
  292u,
  269u,
  271u,
  263u,
  277u,
  245u,
  269u,
  299u,
  270u,
  240u,
  266u,
  235u
 };

static const UType JSum_7_17_9_11[]=
 {
  274u,
  257u,
  290u,
  272u,
  276u,
  264u,
  235u,
  273u,
  233u,
  257u,
  283u,
  285u,
  245u,
  262u,
  272u,
  274u,
  269u
 };

static const UType JSum_7_17_9_12[]=
 {
  274u,
  245u,
  266u,
  270u,
  269u,
  235u,
  277u,
  258u,
  299u,
  292u,
  266u,
  263u,
  257u,
  269u,
  270u,
  240u,
  271u
 };

static const UType JSum_7_17_9_13[]=
 {
  274u,
  269u,
  299u,
  257u,
  271u,
  270u,
  258u,
  263u,
  240u,
  266u,
  277u,
  266u,
  270u,
  245u,
  235u,
  292u,
  269u
 };

static const UType JSum_7_17_9_14[]=
 {
  274u,
  285u,
  264u,
  269u,
  283u,
  276u,
  274u,
  257u,
  272u,
  272u,
  233u,
  290u,
  262u,
  273u,
  257u,
  245u,
  235u
 };

static const UType JSum_7_17_9_15[]=
 {
  265u,
  298u,
  292u,
  262u,
  256u,
  284u,
  264u,
  254u,
  256u,
  270u,
  240u,
  290u,
  254u,
  262u,
  268u,
  246u,
  260u
 };

static const PtrLen<const UType> JTable_7_17_9[]=
 {
  Range(JSum_7_17_9_1),
  Range(JSum_7_17_9_2),
  Range(JSum_7_17_9_3),
  Range(JSum_7_17_9_4),
  Range(JSum_7_17_9_5),
  Range(JSum_7_17_9_6),
  Range(JSum_7_17_9_7),
  Range(JSum_7_17_9_8),
  Range(JSum_7_17_9_9),
  Range(JSum_7_17_9_10),
  Range(JSum_7_17_9_11),
  Range(JSum_7_17_9_12),
  Range(JSum_7_17_9_13),
  Range(JSum_7_17_9_14),
  Range(JSum_7_17_9_15)
 };

static const UType JSum_7_17_10_1[]=
 {
  552u,
  530u,
  548u,
  546u,
  570u,
  532u,
  518u,
  524u,
  538u,
  524u,
  536u,
  618u,
  532u,
  554u,
  544u,
  553u,
  562u
 };

static const UType JSum_7_17_10_2[]=
 {
  562u,
  540u,
  566u,
  539u,
  535u,
  551u,
  554u,
  505u,
  516u,
  531u,
  557u,
  566u,
  585u,
  526u,
  538u,
  589u,
  521u
 };

static const UType JSum_7_17_10_3[]=
 {
  510u,
  557u,
  529u,
  532u,
  583u,
  572u,
  547u,
  581u,
  519u,
  560u,
  546u,
  546u,
  503u,
  529u,
  566u,
  556u,
  545u
 };

static const UType JSum_7_17_10_4[]=
 {
  510u,
  529u,
  560u,
  572u,
  557u,
  566u,
  546u,
  547u,
  529u,
  556u,
  546u,
  581u,
  532u,
  545u,
  503u,
  519u,
  583u
 };

static const UType JSum_7_17_10_5[]=
 {
  562u,
  538u,
  566u,
  516u,
  551u,
  566u,
  521u,
  526u,
  557u,
  505u,
  535u,
  540u,
  589u,
  585u,
  531u,
  554u,
  539u
 };

static const UType JSum_7_17_10_6[]=
 {
  510u,
  532u,
  547u,
  560u,
  503u,
  556u,
  557u,
  583u,
  581u,
  546u,
  529u,
  545u,
  529u,
  572u,
  519u,
  546u,
  566u
 };

static const UType JSum_7_17_10_7[]=
 {
  562u,
  566u,
  535u,
  554u,
  516u,
  557u,
  585u,
  538u,
  521u,
  540u,
  539u,
  551u,
  505u,
  531u,
  566u,
  526u,
  589u
 };

static const UType JSum_7_17_10_8[]=
 {
  552u,
  553u,
  554u,
  618u,
  524u,
  524u,
  532u,
  546u,
  530u,
  562u,
  544u,
  532u,
  536u,
  538u,
  518u,
  570u,
  548u
 };

static const UType JSum_7_17_10_9[]=
 {
  562u,
  566u,
  535u,
  554u,
  516u,
  557u,
  585u,
  538u,
  521u,
  540u,
  539u,
  551u,
  505u,
  531u,
  566u,
  526u,
  589u
 };

static const UType JSum_7_17_10_10[]=
 {
  510u,
  532u,
  547u,
  560u,
  503u,
  556u,
  557u,
  583u,
  581u,
  546u,
  529u,
  545u,
  529u,
  572u,
  519u,
  546u,
  566u
 };

static const UType JSum_7_17_10_11[]=
 {
  562u,
  538u,
  566u,
  516u,
  551u,
  566u,
  521u,
  526u,
  557u,
  505u,
  535u,
  540u,
  589u,
  585u,
  531u,
  554u,
  539u
 };

static const UType JSum_7_17_10_12[]=
 {
  510u,
  529u,
  560u,
  572u,
  557u,
  566u,
  546u,
  547u,
  529u,
  556u,
  546u,
  581u,
  532u,
  545u,
  503u,
  519u,
  583u
 };

static const UType JSum_7_17_10_13[]=
 {
  510u,
  557u,
  529u,
  532u,
  583u,
  572u,
  547u,
  581u,
  519u,
  560u,
  546u,
  546u,
  503u,
  529u,
  566u,
  556u,
  545u
 };

static const UType JSum_7_17_10_14[]=
 {
  562u,
  540u,
  566u,
  539u,
  535u,
  551u,
  554u,
  505u,
  516u,
  531u,
  557u,
  566u,
  585u,
  526u,
  538u,
  589u,
  521u
 };

static const UType JSum_7_17_10_15[]=
 {
  552u,
  530u,
  548u,
  546u,
  570u,
  532u,
  518u,
  524u,
  538u,
  524u,
  536u,
  618u,
  532u,
  554u,
  544u,
  553u,
  562u
 };

static const PtrLen<const UType> JTable_7_17_10[]=
 {
  Range(JSum_7_17_10_1),
  Range(JSum_7_17_10_2),
  Range(JSum_7_17_10_3),
  Range(JSum_7_17_10_4),
  Range(JSum_7_17_10_5),
  Range(JSum_7_17_10_6),
  Range(JSum_7_17_10_7),
  Range(JSum_7_17_10_8),
  Range(JSum_7_17_10_9),
  Range(JSum_7_17_10_10),
  Range(JSum_7_17_10_11),
  Range(JSum_7_17_10_12),
  Range(JSum_7_17_10_13),
  Range(JSum_7_17_10_14),
  Range(JSum_7_17_10_15)
 };

static const UType JSum_7_17_11_1[]=
 {
  786u,
  796u,
  832u,
  816u,
  780u,
  810u,
  802u,
  810u,
  808u,
  821u,
  750u,
  844u,
  808u,
  792u,
  754u,
  742u,
  814u
 };

static const UType JSum_7_17_11_2[]=
 {
  784u,
  843u,
  799u,
  823u,
  762u,
  791u,
  829u,
  813u,
  826u,
  771u,
  768u,
  759u,
  820u,
  760u,
  780u,
  832u,
  805u
 };

static const UType JSum_7_17_11_3[]=
 {
  776u,
  811u,
  786u,
  829u,
  755u,
  833u,
  806u,
  777u,
  809u,
  837u,
  818u,
  829u,
  782u,
  748u,
  768u,
  820u,
  781u
 };

static const UType JSum_7_17_11_4[]=
 {
  776u,
  748u,
  837u,
  833u,
  811u,
  768u,
  818u,
  806u,
  786u,
  820u,
  829u,
  777u,
  829u,
  781u,
  782u,
  809u,
  755u
 };

static const UType JSum_7_17_11_5[]=
 {
  784u,
  780u,
  759u,
  826u,
  791u,
  799u,
  805u,
  760u,
  768u,
  813u,
  762u,
  843u,
  832u,
  820u,
  771u,
  829u,
  823u
 };

static const UType JSum_7_17_11_6[]=
 {
  776u,
  829u,
  806u,
  837u,
  782u,
  820u,
  811u,
  755u,
  777u,
  818u,
  748u,
  781u,
  786u,
  833u,
  809u,
  829u,
  768u
 };

static const UType JSum_7_17_11_7[]=
 {
  784u,
  799u,
  762u,
  829u,
  826u,
  768u,
  820u,
  780u,
  805u,
  843u,
  823u,
  791u,
  813u,
  771u,
  759u,
  760u,
  832u
 };

static const UType JSum_7_17_11_8[]=
 {
  786u,
  742u,
  792u,
  844u,
  821u,
  810u,
  810u,
  816u,
  796u,
  814u,
  754u,
  808u,
  750u,
  808u,
  802u,
  780u,
  832u
 };

static const UType JSum_7_17_11_9[]=
 {
  784u,
  799u,
  762u,
  829u,
  826u,
  768u,
  820u,
  780u,
  805u,
  843u,
  823u,
  791u,
  813u,
  771u,
  759u,
  760u,
  832u
 };

static const UType JSum_7_17_11_10[]=
 {
  776u,
  829u,
  806u,
  837u,
  782u,
  820u,
  811u,
  755u,
  777u,
  818u,
  748u,
  781u,
  786u,
  833u,
  809u,
  829u,
  768u
 };

static const UType JSum_7_17_11_11[]=
 {
  784u,
  780u,
  759u,
  826u,
  791u,
  799u,
  805u,
  760u,
  768u,
  813u,
  762u,
  843u,
  832u,
  820u,
  771u,
  829u,
  823u
 };

static const UType JSum_7_17_11_12[]=
 {
  776u,
  748u,
  837u,
  833u,
  811u,
  768u,
  818u,
  806u,
  786u,
  820u,
  829u,
  777u,
  829u,
  781u,
  782u,
  809u,
  755u
 };

static const UType JSum_7_17_11_13[]=
 {
  776u,
  811u,
  786u,
  829u,
  755u,
  833u,
  806u,
  777u,
  809u,
  837u,
  818u,
  829u,
  782u,
  748u,
  768u,
  820u,
  781u
 };

static const UType JSum_7_17_11_14[]=
 {
  784u,
  843u,
  799u,
  823u,
  762u,
  791u,
  829u,
  813u,
  826u,
  771u,
  768u,
  759u,
  820u,
  760u,
  780u,
  832u,
  805u
 };

static const UType JSum_7_17_11_15[]=
 {
  786u,
  796u,
  832u,
  816u,
  780u,
  810u,
  802u,
  810u,
  808u,
  821u,
  750u,
  844u,
  808u,
  792u,
  754u,
  742u,
  814u
 };

static const PtrLen<const UType> JTable_7_17_11[]=
 {
  Range(JSum_7_17_11_1),
  Range(JSum_7_17_11_2),
  Range(JSum_7_17_11_3),
  Range(JSum_7_17_11_4),
  Range(JSum_7_17_11_5),
  Range(JSum_7_17_11_6),
  Range(JSum_7_17_11_7),
  Range(JSum_7_17_11_8),
  Range(JSum_7_17_11_9),
  Range(JSum_7_17_11_10),
  Range(JSum_7_17_11_11),
  Range(JSum_7_17_11_12),
  Range(JSum_7_17_11_13),
  Range(JSum_7_17_11_14),
  Range(JSum_7_17_11_15)
 };

static const UType JSum_7_17_12_1[]=
 {
  1204u,
  1254u,
  1276u,
  1274u,
  1272u,
  1270u,
  1252u,
  1244u,
  1158u,
  1240u,
  1277u,
  1254u,
  1232u,
  1262u,
  1282u,
  1244u,
  1322u
 };

static const UType JSum_7_17_12_2[]=
 {
  1273u,
  1217u,
  1214u,
  1207u,
  1298u,
  1214u,
  1269u,
  1307u,
  1213u,
  1254u,
  1232u,
  1273u,
  1288u,
  1317u,
  1244u,
  1240u,
  1257u
 };

static const UType JSum_7_17_12_3[]=
 {
  1261u,
  1330u,
  1207u,
  1272u,
  1246u,
  1239u,
  1185u,
  1261u,
  1248u,
  1238u,
  1259u,
  1256u,
  1299u,
  1305u,
  1249u,
  1248u,
  1214u
 };

static const UType JSum_7_17_12_4[]=
 {
  1261u,
  1305u,
  1238u,
  1239u,
  1330u,
  1249u,
  1259u,
  1185u,
  1207u,
  1248u,
  1256u,
  1261u,
  1272u,
  1214u,
  1299u,
  1248u,
  1246u
 };

static const UType JSum_7_17_12_5[]=
 {
  1273u,
  1244u,
  1273u,
  1213u,
  1214u,
  1214u,
  1257u,
  1317u,
  1232u,
  1307u,
  1298u,
  1217u,
  1240u,
  1288u,
  1254u,
  1269u,
  1207u
 };

static const UType JSum_7_17_12_6[]=
 {
  1261u,
  1272u,
  1185u,
  1238u,
  1299u,
  1248u,
  1330u,
  1246u,
  1261u,
  1259u,
  1305u,
  1214u,
  1207u,
  1239u,
  1248u,
  1256u,
  1249u
 };

static const UType JSum_7_17_12_7[]=
 {
  1273u,
  1214u,
  1298u,
  1269u,
  1213u,
  1232u,
  1288u,
  1244u,
  1257u,
  1217u,
  1207u,
  1214u,
  1307u,
  1254u,
  1273u,
  1317u,
  1240u
 };

static const UType JSum_7_17_12_8[]=
 {
  1204u,
  1244u,
  1262u,
  1254u,
  1240u,
  1244u,
  1270u,
  1274u,
  1254u,
  1322u,
  1282u,
  1232u,
  1277u,
  1158u,
  1252u,
  1272u,
  1276u
 };

static const UType JSum_7_17_12_9[]=
 {
  1273u,
  1214u,
  1298u,
  1269u,
  1213u,
  1232u,
  1288u,
  1244u,
  1257u,
  1217u,
  1207u,
  1214u,
  1307u,
  1254u,
  1273u,
  1317u,
  1240u
 };

static const UType JSum_7_17_12_10[]=
 {
  1261u,
  1272u,
  1185u,
  1238u,
  1299u,
  1248u,
  1330u,
  1246u,
  1261u,
  1259u,
  1305u,
  1214u,
  1207u,
  1239u,
  1248u,
  1256u,
  1249u
 };

static const UType JSum_7_17_12_11[]=
 {
  1273u,
  1244u,
  1273u,
  1213u,
  1214u,
  1214u,
  1257u,
  1317u,
  1232u,
  1307u,
  1298u,
  1217u,
  1240u,
  1288u,
  1254u,
  1269u,
  1207u
 };

static const UType JSum_7_17_12_12[]=
 {
  1261u,
  1305u,
  1238u,
  1239u,
  1330u,
  1249u,
  1259u,
  1185u,
  1207u,
  1248u,
  1256u,
  1261u,
  1272u,
  1214u,
  1299u,
  1248u,
  1246u
 };

static const UType JSum_7_17_12_13[]=
 {
  1261u,
  1330u,
  1207u,
  1272u,
  1246u,
  1239u,
  1185u,
  1261u,
  1248u,
  1238u,
  1259u,
  1256u,
  1299u,
  1305u,
  1249u,
  1248u,
  1214u
 };

static const UType JSum_7_17_12_14[]=
 {
  1273u,
  1217u,
  1214u,
  1207u,
  1298u,
  1214u,
  1269u,
  1307u,
  1213u,
  1254u,
  1232u,
  1273u,
  1288u,
  1317u,
  1244u,
  1240u,
  1257u
 };

static const UType JSum_7_17_12_15[]=
 {
  1204u,
  1254u,
  1276u,
  1274u,
  1272u,
  1270u,
  1252u,
  1244u,
  1158u,
  1240u,
  1277u,
  1254u,
  1232u,
  1262u,
  1282u,
  1244u,
  1322u
 };

static const PtrLen<const UType> JTable_7_17_12[]=
 {
  Range(JSum_7_17_12_1),
  Range(JSum_7_17_12_2),
  Range(JSum_7_17_12_3),
  Range(JSum_7_17_12_4),
  Range(JSum_7_17_12_5),
  Range(JSum_7_17_12_6),
  Range(JSum_7_17_12_7),
  Range(JSum_7_17_12_8),
  Range(JSum_7_17_12_9),
  Range(JSum_7_17_12_10),
  Range(JSum_7_17_12_11),
  Range(JSum_7_17_12_12),
  Range(JSum_7_17_12_13),
  Range(JSum_7_17_12_14),
  Range(JSum_7_17_12_15)
 };

static const UType JSum_7_17_13_1[]=
 {
  2090u,
  2144u,
  2190u,
  2092u,
  2010u,
  2116u,
  2054u,
  2132u,
  2010u,
  2078u,
  2106u,
  2070u,
  2105u,
  2084u,
  2052u,
  2072u,
  2124u
 };

static const UType JSum_7_17_13_2[]=
 {
  2062u,
  2119u,
  2034u,
  2100u,
  2071u,
  2082u,
  2032u,
  2107u,
  2213u,
  2130u,
  2069u,
  2124u,
  2041u,
  2095u,
  2115u,
  2035u,
  2100u
 };

static const UType JSum_7_17_13_3[]=
 {
  2076u,
  2057u,
  2058u,
  2080u,
  2075u,
  2055u,
  2139u,
  2043u,
  2170u,
  2077u,
  2016u,
  2095u,
  2171u,
  2150u,
  2082u,
  2129u,
  2056u
 };

static const UType JSum_7_17_13_4[]=
 {
  2076u,
  2150u,
  2077u,
  2055u,
  2057u,
  2082u,
  2016u,
  2139u,
  2058u,
  2129u,
  2095u,
  2043u,
  2080u,
  2056u,
  2171u,
  2170u,
  2075u
 };

static const UType JSum_7_17_13_5[]=
 {
  2062u,
  2115u,
  2124u,
  2213u,
  2082u,
  2034u,
  2100u,
  2095u,
  2069u,
  2107u,
  2071u,
  2119u,
  2035u,
  2041u,
  2130u,
  2032u,
  2100u
 };

static const UType JSum_7_17_13_6[]=
 {
  2076u,
  2080u,
  2139u,
  2077u,
  2171u,
  2129u,
  2057u,
  2075u,
  2043u,
  2016u,
  2150u,
  2056u,
  2058u,
  2055u,
  2170u,
  2095u,
  2082u
 };

static const UType JSum_7_17_13_7[]=
 {
  2062u,
  2034u,
  2071u,
  2032u,
  2213u,
  2069u,
  2041u,
  2115u,
  2100u,
  2119u,
  2100u,
  2082u,
  2107u,
  2130u,
  2124u,
  2095u,
  2035u
 };

static const UType JSum_7_17_13_8[]=
 {
  2090u,
  2072u,
  2084u,
  2070u,
  2078u,
  2132u,
  2116u,
  2092u,
  2144u,
  2124u,
  2052u,
  2105u,
  2106u,
  2010u,
  2054u,
  2010u,
  2190u
 };

static const UType JSum_7_17_13_9[]=
 {
  2062u,
  2034u,
  2071u,
  2032u,
  2213u,
  2069u,
  2041u,
  2115u,
  2100u,
  2119u,
  2100u,
  2082u,
  2107u,
  2130u,
  2124u,
  2095u,
  2035u
 };

static const UType JSum_7_17_13_10[]=
 {
  2076u,
  2080u,
  2139u,
  2077u,
  2171u,
  2129u,
  2057u,
  2075u,
  2043u,
  2016u,
  2150u,
  2056u,
  2058u,
  2055u,
  2170u,
  2095u,
  2082u
 };

static const UType JSum_7_17_13_11[]=
 {
  2062u,
  2115u,
  2124u,
  2213u,
  2082u,
  2034u,
  2100u,
  2095u,
  2069u,
  2107u,
  2071u,
  2119u,
  2035u,
  2041u,
  2130u,
  2032u,
  2100u
 };

static const UType JSum_7_17_13_12[]=
 {
  2076u,
  2150u,
  2077u,
  2055u,
  2057u,
  2082u,
  2016u,
  2139u,
  2058u,
  2129u,
  2095u,
  2043u,
  2080u,
  2056u,
  2171u,
  2170u,
  2075u
 };

static const UType JSum_7_17_13_13[]=
 {
  2076u,
  2057u,
  2058u,
  2080u,
  2075u,
  2055u,
  2139u,
  2043u,
  2170u,
  2077u,
  2016u,
  2095u,
  2171u,
  2150u,
  2082u,
  2129u,
  2056u
 };

static const UType JSum_7_17_13_14[]=
 {
  2062u,
  2119u,
  2034u,
  2100u,
  2071u,
  2082u,
  2032u,
  2107u,
  2213u,
  2130u,
  2069u,
  2124u,
  2041u,
  2095u,
  2115u,
  2035u,
  2100u
 };

static const UType JSum_7_17_13_15[]=
 {
  2090u,
  2144u,
  2190u,
  2092u,
  2010u,
  2116u,
  2054u,
  2132u,
  2010u,
  2078u,
  2106u,
  2070u,
  2105u,
  2084u,
  2052u,
  2072u,
  2124u
 };

static const PtrLen<const UType> JTable_7_17_13[]=
 {
  Range(JSum_7_17_13_1),
  Range(JSum_7_17_13_2),
  Range(JSum_7_17_13_3),
  Range(JSum_7_17_13_4),
  Range(JSum_7_17_13_5),
  Range(JSum_7_17_13_6),
  Range(JSum_7_17_13_7),
  Range(JSum_7_17_13_8),
  Range(JSum_7_17_13_9),
  Range(JSum_7_17_13_10),
  Range(JSum_7_17_13_11),
  Range(JSum_7_17_13_12),
  Range(JSum_7_17_13_13),
  Range(JSum_7_17_13_14),
  Range(JSum_7_17_13_15)
 };

static const UType JSum_7_17_14_1[]=
 {
  2698u,
  2704u,
  2638u,
  2748u,
  2720u,
  2704u,
  2806u,
  2718u,
  2790u,
  2760u,
  2774u,
  2692u,
  2774u,
  2678u,
  2641u,
  2764u,
  2800u
 };

static const UType JSum_7_17_14_2[]=
 {
  2746u,
  2708u,
  2738u,
  2752u,
  2786u,
  2748u,
  2742u,
  2688u,
  2770u,
  2734u,
  2681u,
  2580u,
  2764u,
  2746u,
  2704u,
  2818u,
  2704u
 };

static const UType JSum_7_17_14_3[]=
 {
  2672u,
  2778u,
  2724u,
  2810u,
  2698u,
  2702u,
  2776u,
  2766u,
  2700u,
  2804u,
  2752u,
  2682u,
  2624u,
  2714u,
  2676u,
  2777u,
  2754u
 };

static const UType JSum_7_17_14_4[]=
 {
  2672u,
  2714u,
  2804u,
  2702u,
  2778u,
  2676u,
  2752u,
  2776u,
  2724u,
  2777u,
  2682u,
  2766u,
  2810u,
  2754u,
  2624u,
  2700u,
  2698u
 };

static const UType JSum_7_17_14_5[]=
 {
  2746u,
  2704u,
  2580u,
  2770u,
  2748u,
  2738u,
  2704u,
  2746u,
  2681u,
  2688u,
  2786u,
  2708u,
  2818u,
  2764u,
  2734u,
  2742u,
  2752u
 };

static const UType JSum_7_17_14_6[]=
 {
  2672u,
  2810u,
  2776u,
  2804u,
  2624u,
  2777u,
  2778u,
  2698u,
  2766u,
  2752u,
  2714u,
  2754u,
  2724u,
  2702u,
  2700u,
  2682u,
  2676u
 };

static const UType JSum_7_17_14_7[]=
 {
  2746u,
  2738u,
  2786u,
  2742u,
  2770u,
  2681u,
  2764u,
  2704u,
  2704u,
  2708u,
  2752u,
  2748u,
  2688u,
  2734u,
  2580u,
  2746u,
  2818u
 };

static const UType JSum_7_17_14_8[]=
 {
  2698u,
  2764u,
  2678u,
  2692u,
  2760u,
  2718u,
  2704u,
  2748u,
  2704u,
  2800u,
  2641u,
  2774u,
  2774u,
  2790u,
  2806u,
  2720u,
  2638u
 };

static const UType JSum_7_17_14_9[]=
 {
  2746u,
  2738u,
  2786u,
  2742u,
  2770u,
  2681u,
  2764u,
  2704u,
  2704u,
  2708u,
  2752u,
  2748u,
  2688u,
  2734u,
  2580u,
  2746u,
  2818u
 };

static const UType JSum_7_17_14_10[]=
 {
  2672u,
  2810u,
  2776u,
  2804u,
  2624u,
  2777u,
  2778u,
  2698u,
  2766u,
  2752u,
  2714u,
  2754u,
  2724u,
  2702u,
  2700u,
  2682u,
  2676u
 };

static const UType JSum_7_17_14_11[]=
 {
  2746u,
  2704u,
  2580u,
  2770u,
  2748u,
  2738u,
  2704u,
  2746u,
  2681u,
  2688u,
  2786u,
  2708u,
  2818u,
  2764u,
  2734u,
  2742u,
  2752u
 };

static const UType JSum_7_17_14_12[]=
 {
  2672u,
  2714u,
  2804u,
  2702u,
  2778u,
  2676u,
  2752u,
  2776u,
  2724u,
  2777u,
  2682u,
  2766u,
  2810u,
  2754u,
  2624u,
  2700u,
  2698u
 };

static const UType JSum_7_17_14_13[]=
 {
  2672u,
  2778u,
  2724u,
  2810u,
  2698u,
  2702u,
  2776u,
  2766u,
  2700u,
  2804u,
  2752u,
  2682u,
  2624u,
  2714u,
  2676u,
  2777u,
  2754u
 };

static const UType JSum_7_17_14_14[]=
 {
  2746u,
  2708u,
  2738u,
  2752u,
  2786u,
  2748u,
  2742u,
  2688u,
  2770u,
  2734u,
  2681u,
  2580u,
  2764u,
  2746u,
  2704u,
  2818u,
  2704u
 };

static const UType JSum_7_17_14_15[]=
 {
  2698u,
  2704u,
  2638u,
  2748u,
  2720u,
  2704u,
  2806u,
  2718u,
  2790u,
  2760u,
  2774u,
  2692u,
  2774u,
  2678u,
  2641u,
  2764u,
  2800u
 };

static const PtrLen<const UType> JTable_7_17_14[]=
 {
  Range(JSum_7_17_14_1),
  Range(JSum_7_17_14_2),
  Range(JSum_7_17_14_3),
  Range(JSum_7_17_14_4),
  Range(JSum_7_17_14_5),
  Range(JSum_7_17_14_6),
  Range(JSum_7_17_14_7),
  Range(JSum_7_17_14_8),
  Range(JSum_7_17_14_9),
  Range(JSum_7_17_14_10),
  Range(JSum_7_17_14_11),
  Range(JSum_7_17_14_12),
  Range(JSum_7_17_14_13),
  Range(JSum_7_17_14_14),
  Range(JSum_7_17_14_15)
 };

static const UType JSum_7_17_15_1[]=
 {
  3510u,
  3466u,
  3462u,
  3490u,
  3544u,
  3406u,
  3496u,
  3466u,
  3492u,
  3450u,
  3420u,
  3472u,
  3520u,
  3416u,
  3488u,
  3297u,
  3390u
 };

static const UType JSum_7_17_15_2[]=
 {
  3429u,
  3404u,
  3509u,
  3518u,
  3518u,
  3392u,
  3486u,
  3335u,
  3489u,
  3453u,
  3339u,
  3451u,
  3505u,
  3479u,
  3488u,
  3498u,
  3492u
 };

static const UType JSum_7_17_15_3[]=
 {
  3497u,
  3319u,
  3363u,
  3491u,
  3401u,
  3496u,
  3440u,
  3450u,
  3480u,
  3489u,
  3482u,
  3415u,
  3518u,
  3436u,
  3518u,
  3445u,
  3545u
 };

static const UType JSum_7_17_15_4[]=
 {
  3497u,
  3436u,
  3489u,
  3496u,
  3319u,
  3518u,
  3482u,
  3440u,
  3363u,
  3445u,
  3415u,
  3450u,
  3491u,
  3545u,
  3518u,
  3480u,
  3401u
 };

static const UType JSum_7_17_15_5[]=
 {
  3429u,
  3488u,
  3451u,
  3489u,
  3392u,
  3509u,
  3492u,
  3479u,
  3339u,
  3335u,
  3518u,
  3404u,
  3498u,
  3505u,
  3453u,
  3486u,
  3518u
 };

static const UType JSum_7_17_15_6[]=
 {
  3497u,
  3491u,
  3440u,
  3489u,
  3518u,
  3445u,
  3319u,
  3401u,
  3450u,
  3482u,
  3436u,
  3545u,
  3363u,
  3496u,
  3480u,
  3415u,
  3518u
 };

static const UType JSum_7_17_15_7[]=
 {
  3429u,
  3509u,
  3518u,
  3486u,
  3489u,
  3339u,
  3505u,
  3488u,
  3492u,
  3404u,
  3518u,
  3392u,
  3335u,
  3453u,
  3451u,
  3479u,
  3498u
 };

static const UType JSum_7_17_15_8[]=
 {
  3510u,
  3297u,
  3416u,
  3472u,
  3450u,
  3466u,
  3406u,
  3490u,
  3466u,
  3390u,
  3488u,
  3520u,
  3420u,
  3492u,
  3496u,
  3544u,
  3462u
 };

static const UType JSum_7_17_15_9[]=
 {
  3429u,
  3509u,
  3518u,
  3486u,
  3489u,
  3339u,
  3505u,
  3488u,
  3492u,
  3404u,
  3518u,
  3392u,
  3335u,
  3453u,
  3451u,
  3479u,
  3498u
 };

static const UType JSum_7_17_15_10[]=
 {
  3497u,
  3491u,
  3440u,
  3489u,
  3518u,
  3445u,
  3319u,
  3401u,
  3450u,
  3482u,
  3436u,
  3545u,
  3363u,
  3496u,
  3480u,
  3415u,
  3518u
 };

static const UType JSum_7_17_15_11[]=
 {
  3429u,
  3488u,
  3451u,
  3489u,
  3392u,
  3509u,
  3492u,
  3479u,
  3339u,
  3335u,
  3518u,
  3404u,
  3498u,
  3505u,
  3453u,
  3486u,
  3518u
 };

static const UType JSum_7_17_15_12[]=
 {
  3497u,
  3436u,
  3489u,
  3496u,
  3319u,
  3518u,
  3482u,
  3440u,
  3363u,
  3445u,
  3415u,
  3450u,
  3491u,
  3545u,
  3518u,
  3480u,
  3401u
 };

static const UType JSum_7_17_15_13[]=
 {
  3497u,
  3319u,
  3363u,
  3491u,
  3401u,
  3496u,
  3440u,
  3450u,
  3480u,
  3489u,
  3482u,
  3415u,
  3518u,
  3436u,
  3518u,
  3445u,
  3545u
 };

static const UType JSum_7_17_15_14[]=
 {
  3429u,
  3404u,
  3509u,
  3518u,
  3518u,
  3392u,
  3486u,
  3335u,
  3489u,
  3453u,
  3339u,
  3451u,
  3505u,
  3479u,
  3488u,
  3498u,
  3492u
 };

static const UType JSum_7_17_15_15[]=
 {
  3510u,
  3466u,
  3462u,
  3490u,
  3544u,
  3406u,
  3496u,
  3466u,
  3492u,
  3450u,
  3420u,
  3472u,
  3520u,
  3416u,
  3488u,
  3297u,
  3390u
 };

static const PtrLen<const UType> JTable_7_17_15[]=
 {
  Range(JSum_7_17_15_1),
  Range(JSum_7_17_15_2),
  Range(JSum_7_17_15_3),
  Range(JSum_7_17_15_4),
  Range(JSum_7_17_15_5),
  Range(JSum_7_17_15_6),
  Range(JSum_7_17_15_7),
  Range(JSum_7_17_15_8),
  Range(JSum_7_17_15_9),
  Range(JSum_7_17_15_10),
  Range(JSum_7_17_15_11),
  Range(JSum_7_17_15_12),
  Range(JSum_7_17_15_13),
  Range(JSum_7_17_15_14),
  Range(JSum_7_17_15_15)
 };

static const UType JSum_7_17_16_1[]=
 {
  4196u,
  4346u,
  4344u,
  4268u,
  4218u,
  4282u,
  4230u,
  4380u,
  4276u,
  4428u,
  4314u,
  4286u,
  4328u,
  4214u,
  4288u,
  4329u,
  4202u
 };

static const UType JSum_7_17_16_2[]=
 {
  4296u,
  4192u,
  4302u,
  4350u,
  4363u,
  4155u,
  4271u,
  4284u,
  4166u,
  4325u,
  4283u,
  4368u,
  4303u,
  4301u,
  4349u,
  4355u,
  4266u
 };

static const UType JSum_7_17_16_3[]=
 {
  4336u,
  4329u,
  4387u,
  4132u,
  4246u,
  4277u,
  4263u,
  4215u,
  4304u,
  4310u,
  4318u,
  4272u,
  4362u,
  4315u,
  4299u,
  4197u,
  4367u
 };

static const UType JSum_7_17_16_4[]=
 {
  4336u,
  4315u,
  4310u,
  4277u,
  4329u,
  4299u,
  4318u,
  4263u,
  4387u,
  4197u,
  4272u,
  4215u,
  4132u,
  4367u,
  4362u,
  4304u,
  4246u
 };

static const UType JSum_7_17_16_5[]=
 {
  4296u,
  4349u,
  4368u,
  4166u,
  4155u,
  4302u,
  4266u,
  4301u,
  4283u,
  4284u,
  4363u,
  4192u,
  4355u,
  4303u,
  4325u,
  4271u,
  4350u
 };

static const UType JSum_7_17_16_6[]=
 {
  4336u,
  4132u,
  4263u,
  4310u,
  4362u,
  4197u,
  4329u,
  4246u,
  4215u,
  4318u,
  4315u,
  4367u,
  4387u,
  4277u,
  4304u,
  4272u,
  4299u
 };

static const UType JSum_7_17_16_7[]=
 {
  4296u,
  4302u,
  4363u,
  4271u,
  4166u,
  4283u,
  4303u,
  4349u,
  4266u,
  4192u,
  4350u,
  4155u,
  4284u,
  4325u,
  4368u,
  4301u,
  4355u
 };

static const UType JSum_7_17_16_8[]=
 {
  4196u,
  4329u,
  4214u,
  4286u,
  4428u,
  4380u,
  4282u,
  4268u,
  4346u,
  4202u,
  4288u,
  4328u,
  4314u,
  4276u,
  4230u,
  4218u,
  4344u
 };

static const UType JSum_7_17_16_9[]=
 {
  4296u,
  4302u,
  4363u,
  4271u,
  4166u,
  4283u,
  4303u,
  4349u,
  4266u,
  4192u,
  4350u,
  4155u,
  4284u,
  4325u,
  4368u,
  4301u,
  4355u
 };

static const UType JSum_7_17_16_10[]=
 {
  4336u,
  4132u,
  4263u,
  4310u,
  4362u,
  4197u,
  4329u,
  4246u,
  4215u,
  4318u,
  4315u,
  4367u,
  4387u,
  4277u,
  4304u,
  4272u,
  4299u
 };

static const UType JSum_7_17_16_11[]=
 {
  4296u,
  4349u,
  4368u,
  4166u,
  4155u,
  4302u,
  4266u,
  4301u,
  4283u,
  4284u,
  4363u,
  4192u,
  4355u,
  4303u,
  4325u,
  4271u,
  4350u
 };

static const UType JSum_7_17_16_12[]=
 {
  4336u,
  4315u,
  4310u,
  4277u,
  4329u,
  4299u,
  4318u,
  4263u,
  4387u,
  4197u,
  4272u,
  4215u,
  4132u,
  4367u,
  4362u,
  4304u,
  4246u
 };

static const UType JSum_7_17_16_13[]=
 {
  4336u,
  4329u,
  4387u,
  4132u,
  4246u,
  4277u,
  4263u,
  4215u,
  4304u,
  4310u,
  4318u,
  4272u,
  4362u,
  4315u,
  4299u,
  4197u,
  4367u
 };

static const UType JSum_7_17_16_14[]=
 {
  4296u,
  4192u,
  4302u,
  4350u,
  4363u,
  4155u,
  4271u,
  4284u,
  4166u,
  4325u,
  4283u,
  4368u,
  4303u,
  4301u,
  4349u,
  4355u,
  4266u
 };

static const UType JSum_7_17_16_15[]=
 {
  4196u,
  4346u,
  4344u,
  4268u,
  4218u,
  4282u,
  4230u,
  4380u,
  4276u,
  4428u,
  4314u,
  4286u,
  4328u,
  4214u,
  4288u,
  4329u,
  4202u
 };

static const PtrLen<const UType> JTable_7_17_16[]=
 {
  Range(JSum_7_17_16_1),
  Range(JSum_7_17_16_2),
  Range(JSum_7_17_16_3),
  Range(JSum_7_17_16_4),
  Range(JSum_7_17_16_5),
  Range(JSum_7_17_16_6),
  Range(JSum_7_17_16_7),
  Range(JSum_7_17_16_8),
  Range(JSum_7_17_16_9),
  Range(JSum_7_17_16_10),
  Range(JSum_7_17_16_11),
  Range(JSum_7_17_16_12),
  Range(JSum_7_17_16_13),
  Range(JSum_7_17_16_14),
  Range(JSum_7_17_16_15)
 };

static const UType JSum_7_17_17_1[]=
 {
  5926u,
  6228u,
  6013u,
  6042u,
  6032u,
  5976u,
  5962u,
  6072u,
  6022u,
  6032u,
  6038u,
  5972u,
  5854u,
  6008u,
  6010u,
  5948u,
  5966u
 };

static const UType JSum_7_17_17_2[]=
 {
  5889u,
  6061u,
  5889u,
  6013u,
  6086u,
  5936u,
  5959u,
  6020u,
  6004u,
  5939u,
  6122u,
  6152u,
  6067u,
  5973u,
  5956u,
  5967u,
  6068u
 };

static const UType JSum_7_17_17_3[]=
 {
  6035u,
  6040u,
  5980u,
  5893u,
  5941u,
  6003u,
  5997u,
  5884u,
  6095u,
  6066u,
  5987u,
  6079u,
  6098u,
  5976u,
  6007u,
  5878u,
  6142u
 };

static const UType JSum_7_17_17_4[]=
 {
  6035u,
  5976u,
  6066u,
  6003u,
  6040u,
  6007u,
  5987u,
  5997u,
  5980u,
  5878u,
  6079u,
  5884u,
  5893u,
  6142u,
  6098u,
  6095u,
  5941u
 };

static const UType JSum_7_17_17_5[]=
 {
  5889u,
  5956u,
  6152u,
  6004u,
  5936u,
  5889u,
  6068u,
  5973u,
  6122u,
  6020u,
  6086u,
  6061u,
  5967u,
  6067u,
  5939u,
  5959u,
  6013u
 };

static const UType JSum_7_17_17_6[]=
 {
  6035u,
  5893u,
  5997u,
  6066u,
  6098u,
  5878u,
  6040u,
  5941u,
  5884u,
  5987u,
  5976u,
  6142u,
  5980u,
  6003u,
  6095u,
  6079u,
  6007u
 };

static const UType JSum_7_17_17_7[]=
 {
  5889u,
  5889u,
  6086u,
  5959u,
  6004u,
  6122u,
  6067u,
  5956u,
  6068u,
  6061u,
  6013u,
  5936u,
  6020u,
  5939u,
  6152u,
  5973u,
  5967u
 };

static const UType JSum_7_17_17_8[]=
 {
  5926u,
  5948u,
  6008u,
  5972u,
  6032u,
  6072u,
  5976u,
  6042u,
  6228u,
  5966u,
  6010u,
  5854u,
  6038u,
  6022u,
  5962u,
  6032u,
  6013u
 };

static const UType JSum_7_17_17_9[]=
 {
  5889u,
  5889u,
  6086u,
  5959u,
  6004u,
  6122u,
  6067u,
  5956u,
  6068u,
  6061u,
  6013u,
  5936u,
  6020u,
  5939u,
  6152u,
  5973u,
  5967u
 };

static const UType JSum_7_17_17_10[]=
 {
  6035u,
  5893u,
  5997u,
  6066u,
  6098u,
  5878u,
  6040u,
  5941u,
  5884u,
  5987u,
  5976u,
  6142u,
  5980u,
  6003u,
  6095u,
  6079u,
  6007u
 };

static const UType JSum_7_17_17_11[]=
 {
  5889u,
  5956u,
  6152u,
  6004u,
  5936u,
  5889u,
  6068u,
  5973u,
  6122u,
  6020u,
  6086u,
  6061u,
  5967u,
  6067u,
  5939u,
  5959u,
  6013u
 };

static const UType JSum_7_17_17_12[]=
 {
  6035u,
  5976u,
  6066u,
  6003u,
  6040u,
  6007u,
  5987u,
  5997u,
  5980u,
  5878u,
  6079u,
  5884u,
  5893u,
  6142u,
  6098u,
  6095u,
  5941u
 };

static const UType JSum_7_17_17_13[]=
 {
  6035u,
  6040u,
  5980u,
  5893u,
  5941u,
  6003u,
  5997u,
  5884u,
  6095u,
  6066u,
  5987u,
  6079u,
  6098u,
  5976u,
  6007u,
  5878u,
  6142u
 };

static const UType JSum_7_17_17_14[]=
 {
  5889u,
  6061u,
  5889u,
  6013u,
  6086u,
  5936u,
  5959u,
  6020u,
  6004u,
  5939u,
  6122u,
  6152u,
  6067u,
  5973u,
  5956u,
  5967u,
  6068u
 };

static const UType JSum_7_17_17_15[]=
 {
  5926u,
  6228u,
  6013u,
  6042u,
  6032u,
  5976u,
  5962u,
  6072u,
  6022u,
  6032u,
  6038u,
  5972u,
  5854u,
  6008u,
  6010u,
  5948u,
  5966u
 };

static const PtrLen<const UType> JTable_7_17_17[]=
 {
  Range(JSum_7_17_17_1),
  Range(JSum_7_17_17_2),
  Range(JSum_7_17_17_3),
  Range(JSum_7_17_17_4),
  Range(JSum_7_17_17_5),
  Range(JSum_7_17_17_6),
  Range(JSum_7_17_17_7),
  Range(JSum_7_17_17_8),
  Range(JSum_7_17_17_9),
  Range(JSum_7_17_17_10),
  Range(JSum_7_17_17_11),
  Range(JSum_7_17_17_12),
  Range(JSum_7_17_17_13),
  Range(JSum_7_17_17_14),
  Range(JSum_7_17_17_15)
 };

static const UType JSum_7_17_18_1[]=
 {
  6174u,
  6246u,
  6162u,
  6301u,
  6424u,
  6316u,
  6380u,
  6154u,
  6348u,
  6318u,
  6202u,
  6202u,
  6328u,
  6216u,
  6232u,
  6286u,
  6300u
 };

static const UType JSum_7_17_18_2[]=
 {
  6283u,
  6225u,
  6334u,
  6394u,
  6232u,
  6444u,
  6207u,
  6226u,
  6191u,
  6328u,
  6376u,
  6238u,
  6165u,
  6273u,
  6243u,
  6189u,
  6241u
 };

static const UType JSum_7_17_18_3[]=
 {
  6286u,
  6283u,
  6380u,
  6171u,
  6218u,
  6196u,
  6260u,
  6264u,
  6265u,
  6287u,
  6239u,
  6477u,
  6271u,
  6271u,
  6353u,
  6228u,
  6140u
 };

static const UType JSum_7_17_18_4[]=
 {
  6286u,
  6271u,
  6287u,
  6196u,
  6283u,
  6353u,
  6239u,
  6260u,
  6380u,
  6228u,
  6477u,
  6264u,
  6171u,
  6140u,
  6271u,
  6265u,
  6218u
 };

static const UType JSum_7_17_18_5[]=
 {
  6283u,
  6243u,
  6238u,
  6191u,
  6444u,
  6334u,
  6241u,
  6273u,
  6376u,
  6226u,
  6232u,
  6225u,
  6189u,
  6165u,
  6328u,
  6207u,
  6394u
 };

static const UType JSum_7_17_18_6[]=
 {
  6286u,
  6171u,
  6260u,
  6287u,
  6271u,
  6228u,
  6283u,
  6218u,
  6264u,
  6239u,
  6271u,
  6140u,
  6380u,
  6196u,
  6265u,
  6477u,
  6353u
 };

static const UType JSum_7_17_18_7[]=
 {
  6283u,
  6334u,
  6232u,
  6207u,
  6191u,
  6376u,
  6165u,
  6243u,
  6241u,
  6225u,
  6394u,
  6444u,
  6226u,
  6328u,
  6238u,
  6273u,
  6189u
 };

static const UType JSum_7_17_18_8[]=
 {
  6174u,
  6286u,
  6216u,
  6202u,
  6318u,
  6154u,
  6316u,
  6301u,
  6246u,
  6300u,
  6232u,
  6328u,
  6202u,
  6348u,
  6380u,
  6424u,
  6162u
 };

static const UType JSum_7_17_18_9[]=
 {
  6283u,
  6334u,
  6232u,
  6207u,
  6191u,
  6376u,
  6165u,
  6243u,
  6241u,
  6225u,
  6394u,
  6444u,
  6226u,
  6328u,
  6238u,
  6273u,
  6189u
 };

static const UType JSum_7_17_18_10[]=
 {
  6286u,
  6171u,
  6260u,
  6287u,
  6271u,
  6228u,
  6283u,
  6218u,
  6264u,
  6239u,
  6271u,
  6140u,
  6380u,
  6196u,
  6265u,
  6477u,
  6353u
 };

static const UType JSum_7_17_18_11[]=
 {
  6283u,
  6243u,
  6238u,
  6191u,
  6444u,
  6334u,
  6241u,
  6273u,
  6376u,
  6226u,
  6232u,
  6225u,
  6189u,
  6165u,
  6328u,
  6207u,
  6394u
 };

static const UType JSum_7_17_18_12[]=
 {
  6286u,
  6271u,
  6287u,
  6196u,
  6283u,
  6353u,
  6239u,
  6260u,
  6380u,
  6228u,
  6477u,
  6264u,
  6171u,
  6140u,
  6271u,
  6265u,
  6218u
 };

static const UType JSum_7_17_18_13[]=
 {
  6286u,
  6283u,
  6380u,
  6171u,
  6218u,
  6196u,
  6260u,
  6264u,
  6265u,
  6287u,
  6239u,
  6477u,
  6271u,
  6271u,
  6353u,
  6228u,
  6140u
 };

static const UType JSum_7_17_18_14[]=
 {
  6283u,
  6225u,
  6334u,
  6394u,
  6232u,
  6444u,
  6207u,
  6226u,
  6191u,
  6328u,
  6376u,
  6238u,
  6165u,
  6273u,
  6243u,
  6189u,
  6241u
 };

static const UType JSum_7_17_18_15[]=
 {
  6174u,
  6246u,
  6162u,
  6301u,
  6424u,
  6316u,
  6380u,
  6154u,
  6348u,
  6318u,
  6202u,
  6202u,
  6328u,
  6216u,
  6232u,
  6286u,
  6300u
 };

static const PtrLen<const UType> JTable_7_17_18[]=
 {
  Range(JSum_7_17_18_1),
  Range(JSum_7_17_18_2),
  Range(JSum_7_17_18_3),
  Range(JSum_7_17_18_4),
  Range(JSum_7_17_18_5),
  Range(JSum_7_17_18_6),
  Range(JSum_7_17_18_7),
  Range(JSum_7_17_18_8),
  Range(JSum_7_17_18_9),
  Range(JSum_7_17_18_10),
  Range(JSum_7_17_18_11),
  Range(JSum_7_17_18_12),
  Range(JSum_7_17_18_13),
  Range(JSum_7_17_18_14),
  Range(JSum_7_17_18_15)
 };

static const UType JSum_7_17_19_1[]=
 {
  27274u,
  26844u,
  27158u,
  27268u,
  27426u,
  27378u,
  27080u,
  27148u,
  27472u,
  27034u,
  27049u,
  27120u,
  27106u,
  27086u,
  27206u,
  27272u,
  26968u
 };

static const UType JSum_7_17_19_2[]=
 {
  27140u,
  27287u,
  27331u,
  27066u,
  26964u,
  27365u,
  27103u,
  26988u,
  26951u,
  27260u,
  26929u,
  27328u,
  27334u,
  27308u,
  27375u,
  26975u,
  27185u
 };

static const UType JSum_7_17_19_3[]=
 {
  27142u,
  27198u,
  27604u,
  27253u,
  26930u,
  27103u,
  27022u,
  27317u,
  27097u,
  27248u,
  26958u,
  27199u,
  27065u,
  27138u,
  27123u,
  27089u,
  27403u
 };

static const UType JSum_7_17_19_4[]=
 {
  27142u,
  27138u,
  27248u,
  27103u,
  27198u,
  27123u,
  26958u,
  27022u,
  27604u,
  27089u,
  27199u,
  27317u,
  27253u,
  27403u,
  27065u,
  27097u,
  26930u
 };

static const UType JSum_7_17_19_5[]=
 {
  27140u,
  27375u,
  27328u,
  26951u,
  27365u,
  27331u,
  27185u,
  27308u,
  26929u,
  26988u,
  26964u,
  27287u,
  26975u,
  27334u,
  27260u,
  27103u,
  27066u
 };

static const UType JSum_7_17_19_6[]=
 {
  27142u,
  27253u,
  27022u,
  27248u,
  27065u,
  27089u,
  27198u,
  26930u,
  27317u,
  26958u,
  27138u,
  27403u,
  27604u,
  27103u,
  27097u,
  27199u,
  27123u
 };

static const UType JSum_7_17_19_7[]=
 {
  27140u,
  27331u,
  26964u,
  27103u,
  26951u,
  26929u,
  27334u,
  27375u,
  27185u,
  27287u,
  27066u,
  27365u,
  26988u,
  27260u,
  27328u,
  27308u,
  26975u
 };

static const UType JSum_7_17_19_8[]=
 {
  27274u,
  27272u,
  27086u,
  27120u,
  27034u,
  27148u,
  27378u,
  27268u,
  26844u,
  26968u,
  27206u,
  27106u,
  27049u,
  27472u,
  27080u,
  27426u,
  27158u
 };

static const UType JSum_7_17_19_9[]=
 {
  27140u,
  27331u,
  26964u,
  27103u,
  26951u,
  26929u,
  27334u,
  27375u,
  27185u,
  27287u,
  27066u,
  27365u,
  26988u,
  27260u,
  27328u,
  27308u,
  26975u
 };

static const UType JSum_7_17_19_10[]=
 {
  27142u,
  27253u,
  27022u,
  27248u,
  27065u,
  27089u,
  27198u,
  26930u,
  27317u,
  26958u,
  27138u,
  27403u,
  27604u,
  27103u,
  27097u,
  27199u,
  27123u
 };

static const UType JSum_7_17_19_11[]=
 {
  27140u,
  27375u,
  27328u,
  26951u,
  27365u,
  27331u,
  27185u,
  27308u,
  26929u,
  26988u,
  26964u,
  27287u,
  26975u,
  27334u,
  27260u,
  27103u,
  27066u
 };

static const UType JSum_7_17_19_12[]=
 {
  27142u,
  27138u,
  27248u,
  27103u,
  27198u,
  27123u,
  26958u,
  27022u,
  27604u,
  27089u,
  27199u,
  27317u,
  27253u,
  27403u,
  27065u,
  27097u,
  26930u
 };

static const UType JSum_7_17_19_13[]=
 {
  27142u,
  27198u,
  27604u,
  27253u,
  26930u,
  27103u,
  27022u,
  27317u,
  27097u,
  27248u,
  26958u,
  27199u,
  27065u,
  27138u,
  27123u,
  27089u,
  27403u
 };

static const UType JSum_7_17_19_14[]=
 {
  27140u,
  27287u,
  27331u,
  27066u,
  26964u,
  27365u,
  27103u,
  26988u,
  26951u,
  27260u,
  26929u,
  27328u,
  27334u,
  27308u,
  27375u,
  26975u,
  27185u
 };

static const UType JSum_7_17_19_15[]=
 {
  27274u,
  26844u,
  27158u,
  27268u,
  27426u,
  27378u,
  27080u,
  27148u,
  27472u,
  27034u,
  27049u,
  27120u,
  27106u,
  27086u,
  27206u,
  27272u,
  26968u
 };

static const PtrLen<const UType> JTable_7_17_19[]=
 {
  Range(JSum_7_17_19_1),
  Range(JSum_7_17_19_2),
  Range(JSum_7_17_19_3),
  Range(JSum_7_17_19_4),
  Range(JSum_7_17_19_5),
  Range(JSum_7_17_19_6),
  Range(JSum_7_17_19_7),
  Range(JSum_7_17_19_8),
  Range(JSum_7_17_19_9),
  Range(JSum_7_17_19_10),
  Range(JSum_7_17_19_11),
  Range(JSum_7_17_19_12),
  Range(JSum_7_17_19_13),
  Range(JSum_7_17_19_14),
  Range(JSum_7_17_19_15)
 };

static const UType JSum_7_17_20_1[]=
 {
  113842u,
  114356u,
  114554u,
  114650u,
  114254u,
  113944u,
  113832u,
  114218u,
  114190u,
  114228u,
  113792u,
  113996u,
  114558u,
  113284u,
  114244u,
  114057u,
  113938u
 };

static const UType JSum_7_17_20_2[]=
 {
  113942u,
  113966u,
  113865u,
  114451u,
  113852u,
  113910u,
  113923u,
  114476u,
  113711u,
  114425u,
  115019u,
  114109u,
  114298u,
  113685u,
  113974u,
  114166u,
  114165u
 };

static const UType JSum_7_17_20_3[]=
 {
  114007u,
  113909u,
  113961u,
  113837u,
  114218u,
  113773u,
  114496u,
  113866u,
  114015u,
  113827u,
  114136u,
  114034u,
  114219u,
  114328u,
  113676u,
  114809u,
  114826u
 };

static const UType JSum_7_17_20_4[]=
 {
  114007u,
  114328u,
  113827u,
  113773u,
  113909u,
  113676u,
  114136u,
  114496u,
  113961u,
  114809u,
  114034u,
  113866u,
  113837u,
  114826u,
  114219u,
  114015u,
  114218u
 };

static const UType JSum_7_17_20_5[]=
 {
  113942u,
  113974u,
  114109u,
  113711u,
  113910u,
  113865u,
  114165u,
  113685u,
  115019u,
  114476u,
  113852u,
  113966u,
  114166u,
  114298u,
  114425u,
  113923u,
  114451u
 };

static const UType JSum_7_17_20_6[]=
 {
  114007u,
  113837u,
  114496u,
  113827u,
  114219u,
  114809u,
  113909u,
  114218u,
  113866u,
  114136u,
  114328u,
  114826u,
  113961u,
  113773u,
  114015u,
  114034u,
  113676u
 };

static const UType JSum_7_17_20_7[]=
 {
  113942u,
  113865u,
  113852u,
  113923u,
  113711u,
  115019u,
  114298u,
  113974u,
  114165u,
  113966u,
  114451u,
  113910u,
  114476u,
  114425u,
  114109u,
  113685u,
  114166u
 };

static const UType JSum_7_17_20_8[]=
 {
  113842u,
  114057u,
  113284u,
  113996u,
  114228u,
  114218u,
  113944u,
  114650u,
  114356u,
  113938u,
  114244u,
  114558u,
  113792u,
  114190u,
  113832u,
  114254u,
  114554u
 };

static const UType JSum_7_17_20_9[]=
 {
  113942u,
  113865u,
  113852u,
  113923u,
  113711u,
  115019u,
  114298u,
  113974u,
  114165u,
  113966u,
  114451u,
  113910u,
  114476u,
  114425u,
  114109u,
  113685u,
  114166u
 };

static const UType JSum_7_17_20_10[]=
 {
  114007u,
  113837u,
  114496u,
  113827u,
  114219u,
  114809u,
  113909u,
  114218u,
  113866u,
  114136u,
  114328u,
  114826u,
  113961u,
  113773u,
  114015u,
  114034u,
  113676u
 };

static const UType JSum_7_17_20_11[]=
 {
  113942u,
  113974u,
  114109u,
  113711u,
  113910u,
  113865u,
  114165u,
  113685u,
  115019u,
  114476u,
  113852u,
  113966u,
  114166u,
  114298u,
  114425u,
  113923u,
  114451u
 };

static const UType JSum_7_17_20_12[]=
 {
  114007u,
  114328u,
  113827u,
  113773u,
  113909u,
  113676u,
  114136u,
  114496u,
  113961u,
  114809u,
  114034u,
  113866u,
  113837u,
  114826u,
  114219u,
  114015u,
  114218u
 };

static const UType JSum_7_17_20_13[]=
 {
  114007u,
  113909u,
  113961u,
  113837u,
  114218u,
  113773u,
  114496u,
  113866u,
  114015u,
  113827u,
  114136u,
  114034u,
  114219u,
  114328u,
  113676u,
  114809u,
  114826u
 };

static const UType JSum_7_17_20_14[]=
 {
  113942u,
  113966u,
  113865u,
  114451u,
  113852u,
  113910u,
  113923u,
  114476u,
  113711u,
  114425u,
  115019u,
  114109u,
  114298u,
  113685u,
  113974u,
  114166u,
  114165u
 };

static const UType JSum_7_17_20_15[]=
 {
  113842u,
  114356u,
  114554u,
  114650u,
  114254u,
  113944u,
  113832u,
  114218u,
  114190u,
  114228u,
  113792u,
  113996u,
  114558u,
  113284u,
  114244u,
  114057u,
  113938u
 };

static const PtrLen<const UType> JTable_7_17_20[]=
 {
  Range(JSum_7_17_20_1),
  Range(JSum_7_17_20_2),
  Range(JSum_7_17_20_3),
  Range(JSum_7_17_20_4),
  Range(JSum_7_17_20_5),
  Range(JSum_7_17_20_6),
  Range(JSum_7_17_20_7),
  Range(JSum_7_17_20_8),
  Range(JSum_7_17_20_9),
  Range(JSum_7_17_20_10),
  Range(JSum_7_17_20_11),
  Range(JSum_7_17_20_12),
  Range(JSum_7_17_20_13),
  Range(JSum_7_17_20_14),
  Range(JSum_7_17_20_15)
 };

static const UType JSum_7_17_21_1[]=
 {
  190162u,
  190814u,
  189854u,
  189564u,
  190149u,
  190570u,
  190600u,
  190648u,
  190384u,
  190658u,
  189754u,
  189756u,
  190586u,
  189500u,
  190534u,
  189804u,
  189892u
 };

static const UType JSum_7_17_21_2[]=
 {
  190520u,
  190070u,
  190112u,
  189596u,
  190815u,
  190251u,
  189421u,
  190231u,
  190487u,
  189791u,
  190245u,
  189722u,
  190288u,
  189688u,
  190497u,
  190496u,
  190999u
 };

static const UType JSum_7_17_21_3[]=
 {
  189966u,
  190534u,
  190105u,
  190683u,
  190857u,
  190045u,
  189537u,
  190477u,
  190279u,
  190802u,
  189900u,
  190148u,
  190386u,
  189139u,
  190072u,
  190047u,
  190252u
 };

static const UType JSum_7_17_21_4[]=
 {
  189966u,
  189139u,
  190802u,
  190045u,
  190534u,
  190072u,
  189900u,
  189537u,
  190105u,
  190047u,
  190148u,
  190477u,
  190683u,
  190252u,
  190386u,
  190279u,
  190857u
 };

static const UType JSum_7_17_21_5[]=
 {
  190520u,
  190497u,
  189722u,
  190487u,
  190251u,
  190112u,
  190999u,
  189688u,
  190245u,
  190231u,
  190815u,
  190070u,
  190496u,
  190288u,
  189791u,
  189421u,
  189596u
 };

static const UType JSum_7_17_21_6[]=
 {
  189966u,
  190683u,
  189537u,
  190802u,
  190386u,
  190047u,
  190534u,
  190857u,
  190477u,
  189900u,
  189139u,
  190252u,
  190105u,
  190045u,
  190279u,
  190148u,
  190072u
 };

static const UType JSum_7_17_21_7[]=
 {
  190520u,
  190112u,
  190815u,
  189421u,
  190487u,
  190245u,
  190288u,
  190497u,
  190999u,
  190070u,
  189596u,
  190251u,
  190231u,
  189791u,
  189722u,
  189688u,
  190496u
 };

static const UType JSum_7_17_21_8[]=
 {
  190162u,
  189804u,
  189500u,
  189756u,
  190658u,
  190648u,
  190570u,
  189564u,
  190814u,
  189892u,
  190534u,
  190586u,
  189754u,
  190384u,
  190600u,
  190149u,
  189854u
 };

static const UType JSum_7_17_21_9[]=
 {
  190520u,
  190112u,
  190815u,
  189421u,
  190487u,
  190245u,
  190288u,
  190497u,
  190999u,
  190070u,
  189596u,
  190251u,
  190231u,
  189791u,
  189722u,
  189688u,
  190496u
 };

static const UType JSum_7_17_21_10[]=
 {
  189966u,
  190683u,
  189537u,
  190802u,
  190386u,
  190047u,
  190534u,
  190857u,
  190477u,
  189900u,
  189139u,
  190252u,
  190105u,
  190045u,
  190279u,
  190148u,
  190072u
 };

static const UType JSum_7_17_21_11[]=
 {
  190520u,
  190497u,
  189722u,
  190487u,
  190251u,
  190112u,
  190999u,
  189688u,
  190245u,
  190231u,
  190815u,
  190070u,
  190496u,
  190288u,
  189791u,
  189421u,
  189596u
 };

static const UType JSum_7_17_21_12[]=
 {
  189966u,
  189139u,
  190802u,
  190045u,
  190534u,
  190072u,
  189900u,
  189537u,
  190105u,
  190047u,
  190148u,
  190477u,
  190683u,
  190252u,
  190386u,
  190279u,
  190857u
 };

static const UType JSum_7_17_21_13[]=
 {
  189966u,
  190534u,
  190105u,
  190683u,
  190857u,
  190045u,
  189537u,
  190477u,
  190279u,
  190802u,
  189900u,
  190148u,
  190386u,
  189139u,
  190072u,
  190047u,
  190252u
 };

static const UType JSum_7_17_21_14[]=
 {
  190520u,
  190070u,
  190112u,
  189596u,
  190815u,
  190251u,
  189421u,
  190231u,
  190487u,
  189791u,
  190245u,
  189722u,
  190288u,
  189688u,
  190497u,
  190496u,
  190999u
 };

static const UType JSum_7_17_21_15[]=
 {
  190162u,
  190814u,
  189854u,
  189564u,
  190149u,
  190570u,
  190600u,
  190648u,
  190384u,
  190658u,
  189754u,
  189756u,
  190586u,
  189500u,
  190534u,
  189804u,
  189892u
 };

static const PtrLen<const UType> JTable_7_17_21[]=
 {
  Range(JSum_7_17_21_1),
  Range(JSum_7_17_21_2),
  Range(JSum_7_17_21_3),
  Range(JSum_7_17_21_4),
  Range(JSum_7_17_21_5),
  Range(JSum_7_17_21_6),
  Range(JSum_7_17_21_7),
  Range(JSum_7_17_21_8),
  Range(JSum_7_17_21_9),
  Range(JSum_7_17_21_10),
  Range(JSum_7_17_21_11),
  Range(JSum_7_17_21_12),
  Range(JSum_7_17_21_13),
  Range(JSum_7_17_21_14),
  Range(JSum_7_17_21_15)
 };

static const TestSet::JTable JSet_7_17[]=
 {
  { 103u , Range(JTable_7_17_1) },
  { 239u , Range(JTable_7_17_2) },
  { 443u , Range(JTable_7_17_3) },
  { 647u , Range(JTable_7_17_4) },
  { 1123u , Range(JTable_7_17_5) },
  { 1327u , Range(JTable_7_17_6) },
  { 1871u , Range(JTable_7_17_7) },
  { 3571u , Range(JTable_7_17_8) },
  { 4523u , Range(JTable_7_17_9) },
  { 9283u , Range(JTable_7_17_10) },
  { 13567u , Range(JTable_7_17_11) },
  { 21319u , Range(JTable_7_17_12) },
  { 35531u , Range(JTable_7_17_13) },
  { 46411u , Range(JTable_7_17_14) },
  { 58787u , Range(JTable_7_17_15) },
  { 72931u , Range(JTable_7_17_16) },
  { 102103u , Range(JTable_7_17_17) },
  { 106591u , Range(JTable_7_17_18) },
  { 461891u , Range(JTable_7_17_19) },
  { 1939939u , Range(JTable_7_17_20) },
  { 3233231u , Range(JTable_7_17_21) }
 };

static const UType JSum_7_19_1_1[]=
 {
  8u,
  12u,
  16u,
  12u,
  10u,
  10u,
  8u,
  11u,
  14u,
  8u,
  8u,
  14u,
  10u,
  6u,
  10u,
  8u,
  12u,
  2u,
  10u
 };

static const UType JSum_7_19_1_2[]=
 {
  6u,
  8u,
  10u,
  7u,
  7u,
  13u,
  16u,
  13u,
  11u,
  8u,
  9u,
  14u,
  9u,
  7u,
  14u,
  4u,
  12u,
  10u,
  11u
 };

static const UType JSum_7_19_1_3[]=
 {
  14u,
  10u,
  10u,
  9u,
  12u,
  6u,
  10u,
  12u,
  13u,
  5u,
  10u,
  9u,
  6u,
  11u,
  11u,
  4u,
  11u,
  9u,
  17u
 };

static const UType JSum_7_19_1_4[]=
 {
  14u,
  4u,
  9u,
  12u,
  9u,
  17u,
  11u,
  10u,
  10u,
  10u,
  9u,
  11u,
  5u,
  6u,
  10u,
  11u,
  6u,
  13u,
  12u
 };

static const UType JSum_7_19_1_5[]=
 {
  14u,
  9u,
  10u,
  5u,
  6u,
  4u,
  17u,
  10u,
  6u,
  13u,
  9u,
  11u,
  9u,
  10u,
  12u,
  12u,
  10u,
  11u,
  11u
 };

static const UType JSum_7_19_1_6[]=
 {
  6u,
  12u,
  7u,
  9u,
  13u,
  7u,
  8u,
  10u,
  14u,
  14u,
  11u,
  13u,
  10u,
  11u,
  4u,
  9u,
  8u,
  16u,
  7u
 };

static const UType JSum_7_19_1_7[]=
 {
  9u,
  14u,
  7u,
  7u,
  5u,
  10u,
  5u,
  14u,
  13u,
  5u,
  11u,
  14u,
  13u,
  11u,
  7u,
  11u,
  10u,
  10u,
  13u
 };

static const UType JSum_7_19_1_8[]=
 {
  6u,
  10u,
  7u,
  16u,
  11u,
  9u,
  9u,
  14u,
  12u,
  11u,
  8u,
  7u,
  13u,
  13u,
  8u,
  14u,
  7u,
  4u,
  10u
 };

static const UType JSum_7_19_1_9[]=
 {
  8u,
  2u,
  8u,
  6u,
  14u,
  8u,
  11u,
  10u,
  12u,
  12u,
  10u,
  12u,
  10u,
  10u,
  8u,
  14u,
  8u,
  10u,
  16u
 };

static const UType JSum_7_19_1_10[]=
 {
  6u,
  10u,
  7u,
  16u,
  11u,
  9u,
  9u,
  14u,
  12u,
  11u,
  8u,
  7u,
  13u,
  13u,
  8u,
  14u,
  7u,
  4u,
  10u
 };

static const UType JSum_7_19_1_11[]=
 {
  9u,
  14u,
  7u,
  7u,
  5u,
  10u,
  5u,
  14u,
  13u,
  5u,
  11u,
  14u,
  13u,
  11u,
  7u,
  11u,
  10u,
  10u,
  13u
 };

static const UType JSum_7_19_1_12[]=
 {
  6u,
  12u,
  7u,
  9u,
  13u,
  7u,
  8u,
  10u,
  14u,
  14u,
  11u,
  13u,
  10u,
  11u,
  4u,
  9u,
  8u,
  16u,
  7u
 };

static const UType JSum_7_19_1_13[]=
 {
  14u,
  9u,
  10u,
  5u,
  6u,
  4u,
  17u,
  10u,
  6u,
  13u,
  9u,
  11u,
  9u,
  10u,
  12u,
  12u,
  10u,
  11u,
  11u
 };

static const UType JSum_7_19_1_14[]=
 {
  14u,
  4u,
  9u,
  12u,
  9u,
  17u,
  11u,
  10u,
  10u,
  10u,
  9u,
  11u,
  5u,
  6u,
  10u,
  11u,
  6u,
  13u,
  12u
 };

static const UType JSum_7_19_1_15[]=
 {
  14u,
  10u,
  10u,
  9u,
  12u,
  6u,
  10u,
  12u,
  13u,
  5u,
  10u,
  9u,
  6u,
  11u,
  11u,
  4u,
  11u,
  9u,
  17u
 };

static const UType JSum_7_19_1_16[]=
 {
  6u,
  8u,
  10u,
  7u,
  7u,
  13u,
  16u,
  13u,
  11u,
  8u,
  9u,
  14u,
  9u,
  7u,
  14u,
  4u,
  12u,
  10u,
  11u
 };

static const UType JSum_7_19_1_17[]=
 {
  8u,
  12u,
  16u,
  12u,
  10u,
  10u,
  8u,
  11u,
  14u,
  8u,
  8u,
  14u,
  10u,
  6u,
  10u,
  8u,
  12u,
  2u,
  10u
 };

static const PtrLen<const UType> JTable_7_19_1[]=
 {
  Range(JSum_7_19_1_1),
  Range(JSum_7_19_1_2),
  Range(JSum_7_19_1_3),
  Range(JSum_7_19_1_4),
  Range(JSum_7_19_1_5),
  Range(JSum_7_19_1_6),
  Range(JSum_7_19_1_7),
  Range(JSum_7_19_1_8),
  Range(JSum_7_19_1_9),
  Range(JSum_7_19_1_10),
  Range(JSum_7_19_1_11),
  Range(JSum_7_19_1_12),
  Range(JSum_7_19_1_13),
  Range(JSum_7_19_1_14),
  Range(JSum_7_19_1_15),
  Range(JSum_7_19_1_16),
  Range(JSum_7_19_1_17)
 };

static const UType JSum_7_19_2_1[]=
 {
  24u,
  24u,
  18u,
  24u,
  22u,
  26u,
  24u,
  22u,
  20u,
  30u,
  20u,
  16u,
  26u,
  28u,
  22u,
  26u,
  14u,
  19u,
  12u
 };

static const UType JSum_7_19_2_2[]=
 {
  23u,
  27u,
  21u,
  21u,
  21u,
  12u,
  14u,
  31u,
  19u,
  23u,
  17u,
  25u,
  23u,
  22u,
  27u,
  19u,
  20u,
  24u,
  28u
 };

static const UType JSum_7_19_2_3[]=
 {
  20u,
  31u,
  23u,
  23u,
  21u,
  27u,
  15u,
  26u,
  18u,
  13u,
  19u,
  19u,
  27u,
  29u,
  18u,
  20u,
  22u,
  25u,
  21u
 };

static const UType JSum_7_19_2_4[]=
 {
  20u,
  20u,
  19u,
  26u,
  23u,
  21u,
  18u,
  19u,
  15u,
  23u,
  25u,
  29u,
  13u,
  27u,
  31u,
  22u,
  27u,
  18u,
  21u
 };

static const UType JSum_7_19_2_5[]=
 {
  20u,
  23u,
  15u,
  13u,
  27u,
  20u,
  21u,
  23u,
  27u,
  18u,
  19u,
  18u,
  25u,
  31u,
  21u,
  26u,
  19u,
  29u,
  22u
 };

static const UType JSum_7_19_2_6[]=
 {
  23u,
  20u,
  22u,
  17u,
  31u,
  21u,
  27u,
  24u,
  27u,
  25u,
  19u,
  12u,
  21u,
  28u,
  19u,
  23u,
  23u,
  14u,
  21u
 };

static const UType JSum_7_19_2_7[]=
 {
  12u,
  29u,
  24u,
  24u,
  23u,
  17u,
  23u,
  29u,
  18u,
  23u,
  24u,
  29u,
  18u,
  24u,
  24u,
  24u,
  17u,
  17u,
  18u
 };

static const UType JSum_7_19_2_8[]=
 {
  23u,
  21u,
  21u,
  14u,
  19u,
  17u,
  23u,
  27u,
  20u,
  28u,
  27u,
  21u,
  12u,
  31u,
  23u,
  25u,
  22u,
  19u,
  24u
 };

static const UType JSum_7_19_2_9[]=
 {
  24u,
  19u,
  26u,
  28u,
  16u,
  30u,
  22u,
  26u,
  24u,
  24u,
  12u,
  14u,
  22u,
  26u,
  20u,
  20u,
  24u,
  22u,
  18u
 };

static const UType JSum_7_19_2_10[]=
 {
  23u,
  21u,
  21u,
  14u,
  19u,
  17u,
  23u,
  27u,
  20u,
  28u,
  27u,
  21u,
  12u,
  31u,
  23u,
  25u,
  22u,
  19u,
  24u
 };

static const UType JSum_7_19_2_11[]=
 {
  12u,
  29u,
  24u,
  24u,
  23u,
  17u,
  23u,
  29u,
  18u,
  23u,
  24u,
  29u,
  18u,
  24u,
  24u,
  24u,
  17u,
  17u,
  18u
 };

static const UType JSum_7_19_2_12[]=
 {
  23u,
  20u,
  22u,
  17u,
  31u,
  21u,
  27u,
  24u,
  27u,
  25u,
  19u,
  12u,
  21u,
  28u,
  19u,
  23u,
  23u,
  14u,
  21u
 };

static const UType JSum_7_19_2_13[]=
 {
  20u,
  23u,
  15u,
  13u,
  27u,
  20u,
  21u,
  23u,
  27u,
  18u,
  19u,
  18u,
  25u,
  31u,
  21u,
  26u,
  19u,
  29u,
  22u
 };

static const UType JSum_7_19_2_14[]=
 {
  20u,
  20u,
  19u,
  26u,
  23u,
  21u,
  18u,
  19u,
  15u,
  23u,
  25u,
  29u,
  13u,
  27u,
  31u,
  22u,
  27u,
  18u,
  21u
 };

static const UType JSum_7_19_2_15[]=
 {
  20u,
  31u,
  23u,
  23u,
  21u,
  27u,
  15u,
  26u,
  18u,
  13u,
  19u,
  19u,
  27u,
  29u,
  18u,
  20u,
  22u,
  25u,
  21u
 };

static const UType JSum_7_19_2_16[]=
 {
  23u,
  27u,
  21u,
  21u,
  21u,
  12u,
  14u,
  31u,
  19u,
  23u,
  17u,
  25u,
  23u,
  22u,
  27u,
  19u,
  20u,
  24u,
  28u
 };

static const UType JSum_7_19_2_17[]=
 {
  24u,
  24u,
  18u,
  24u,
  22u,
  26u,
  24u,
  22u,
  20u,
  30u,
  20u,
  16u,
  26u,
  28u,
  22u,
  26u,
  14u,
  19u,
  12u
 };

static const PtrLen<const UType> JTable_7_19_2[]=
 {
  Range(JSum_7_19_2_1),
  Range(JSum_7_19_2_2),
  Range(JSum_7_19_2_3),
  Range(JSum_7_19_2_4),
  Range(JSum_7_19_2_5),
  Range(JSum_7_19_2_6),
  Range(JSum_7_19_2_7),
  Range(JSum_7_19_2_8),
  Range(JSum_7_19_2_9),
  Range(JSum_7_19_2_10),
  Range(JSum_7_19_2_11),
  Range(JSum_7_19_2_12),
  Range(JSum_7_19_2_13),
  Range(JSum_7_19_2_14),
  Range(JSum_7_19_2_15),
  Range(JSum_7_19_2_16),
  Range(JSum_7_19_2_17)
 };

static const UType JSum_7_19_3_1[]=
 {
  28u,
  30u,
  32u,
  34u,
  28u,
  18u,
  30u,
  24u,
  36u,
  28u,
  34u,
  32u,
  27u,
  42u,
  36u,
  26u,
  26u,
  34u,
  24u
 };

static const UType JSum_7_19_3_2[]=
 {
  35u,
  26u,
  36u,
  21u,
  33u,
  32u,
  34u,
  34u,
  36u,
  27u,
  30u,
  27u,
  22u,
  25u,
  35u,
  27u,
  25u,
  24u,
  40u
 };

static const UType JSum_7_19_3_3[]=
 {
  26u,
  33u,
  29u,
  31u,
  23u,
  30u,
  21u,
  26u,
  33u,
  30u,
  38u,
  38u,
  28u,
  27u,
  29u,
  40u,
  30u,
  21u,
  36u
 };

static const UType JSum_7_19_3_4[]=
 {
  26u,
  40u,
  38u,
  26u,
  31u,
  36u,
  29u,
  38u,
  21u,
  29u,
  21u,
  27u,
  30u,
  30u,
  33u,
  30u,
  28u,
  33u,
  23u
 };

static const UType JSum_7_19_3_5[]=
 {
  26u,
  31u,
  21u,
  30u,
  28u,
  40u,
  36u,
  29u,
  30u,
  33u,
  38u,
  29u,
  21u,
  33u,
  23u,
  26u,
  38u,
  27u,
  30u
 };

static const UType JSum_7_19_3_6[]=
 {
  35u,
  25u,
  25u,
  30u,
  34u,
  33u,
  26u,
  24u,
  35u,
  27u,
  36u,
  32u,
  36u,
  40u,
  27u,
  22u,
  27u,
  34u,
  21u
 };

static const UType JSum_7_19_3_7[]=
 {
  35u,
  40u,
  32u,
  32u,
  30u,
  26u,
  30u,
  40u,
  26u,
  30u,
  24u,
  40u,
  26u,
  24u,
  32u,
  24u,
  26u,
  26u,
  26u
 };

static const UType JSum_7_19_3_8[]=
 {
  35u,
  36u,
  33u,
  34u,
  36u,
  30u,
  22u,
  35u,
  25u,
  40u,
  26u,
  21u,
  32u,
  34u,
  27u,
  27u,
  25u,
  27u,
  24u
 };

static const UType JSum_7_19_3_9[]=
 {
  28u,
  34u,
  26u,
  42u,
  32u,
  28u,
  24u,
  18u,
  34u,
  30u,
  24u,
  26u,
  36u,
  27u,
  34u,
  36u,
  30u,
  28u,
  32u
 };

static const UType JSum_7_19_3_10[]=
 {
  35u,
  36u,
  33u,
  34u,
  36u,
  30u,
  22u,
  35u,
  25u,
  40u,
  26u,
  21u,
  32u,
  34u,
  27u,
  27u,
  25u,
  27u,
  24u
 };

static const UType JSum_7_19_3_11[]=
 {
  35u,
  40u,
  32u,
  32u,
  30u,
  26u,
  30u,
  40u,
  26u,
  30u,
  24u,
  40u,
  26u,
  24u,
  32u,
  24u,
  26u,
  26u,
  26u
 };

static const UType JSum_7_19_3_12[]=
 {
  35u,
  25u,
  25u,
  30u,
  34u,
  33u,
  26u,
  24u,
  35u,
  27u,
  36u,
  32u,
  36u,
  40u,
  27u,
  22u,
  27u,
  34u,
  21u
 };

static const UType JSum_7_19_3_13[]=
 {
  26u,
  31u,
  21u,
  30u,
  28u,
  40u,
  36u,
  29u,
  30u,
  33u,
  38u,
  29u,
  21u,
  33u,
  23u,
  26u,
  38u,
  27u,
  30u
 };

static const UType JSum_7_19_3_14[]=
 {
  26u,
  40u,
  38u,
  26u,
  31u,
  36u,
  29u,
  38u,
  21u,
  29u,
  21u,
  27u,
  30u,
  30u,
  33u,
  30u,
  28u,
  33u,
  23u
 };

static const UType JSum_7_19_3_15[]=
 {
  26u,
  33u,
  29u,
  31u,
  23u,
  30u,
  21u,
  26u,
  33u,
  30u,
  38u,
  38u,
  28u,
  27u,
  29u,
  40u,
  30u,
  21u,
  36u
 };

static const UType JSum_7_19_3_16[]=
 {
  35u,
  26u,
  36u,
  21u,
  33u,
  32u,
  34u,
  34u,
  36u,
  27u,
  30u,
  27u,
  22u,
  25u,
  35u,
  27u,
  25u,
  24u,
  40u
 };

static const UType JSum_7_19_3_17[]=
 {
  28u,
  30u,
  32u,
  34u,
  28u,
  18u,
  30u,
  24u,
  36u,
  28u,
  34u,
  32u,
  27u,
  42u,
  36u,
  26u,
  26u,
  34u,
  24u
 };

static const PtrLen<const UType> JTable_7_19_3[]=
 {
  Range(JSum_7_19_3_1),
  Range(JSum_7_19_3_2),
  Range(JSum_7_19_3_3),
  Range(JSum_7_19_3_4),
  Range(JSum_7_19_3_5),
  Range(JSum_7_19_3_6),
  Range(JSum_7_19_3_7),
  Range(JSum_7_19_3_8),
  Range(JSum_7_19_3_9),
  Range(JSum_7_19_3_10),
  Range(JSum_7_19_3_11),
  Range(JSum_7_19_3_12),
  Range(JSum_7_19_3_13),
  Range(JSum_7_19_3_14),
  Range(JSum_7_19_3_15),
  Range(JSum_7_19_3_16),
  Range(JSum_7_19_3_17)
 };

static const UType JSum_7_19_4_1[]=
 {
  30u,
  30u,
  40u,
  38u,
  28u,
  40u,
  30u,
  35u,
  44u,
  42u,
  34u,
  28u,
  30u,
  36u,
  20u,
  36u,
  32u,
  38u,
  34u
 };

static const UType JSum_7_19_4_2[]=
 {
  29u,
  28u,
  38u,
  27u,
  45u,
  38u,
  25u,
  34u,
  30u,
  40u,
  39u,
  36u,
  38u,
  41u,
  33u,
  28u,
  28u,
  39u,
  29u
 };

static const UType JSum_7_19_4_3[]=
 {
  36u,
  24u,
  43u,
  31u,
  33u,
  34u,
  28u,
  27u,
  33u,
  32u,
  44u,
  41u,
  36u,
  28u,
  42u,
  39u,
  34u,
  27u,
  33u
 };

static const UType JSum_7_19_4_4[]=
 {
  36u,
  39u,
  41u,
  27u,
  31u,
  33u,
  42u,
  44u,
  28u,
  43u,
  27u,
  28u,
  32u,
  34u,
  24u,
  34u,
  36u,
  33u,
  33u
 };

static const UType JSum_7_19_4_5[]=
 {
  36u,
  31u,
  28u,
  32u,
  36u,
  39u,
  33u,
  43u,
  34u,
  33u,
  41u,
  42u,
  27u,
  24u,
  33u,
  27u,
  44u,
  28u,
  34u
 };

static const UType JSum_7_19_4_6[]=
 {
  29u,
  28u,
  41u,
  39u,
  34u,
  45u,
  28u,
  39u,
  33u,
  36u,
  30u,
  38u,
  38u,
  29u,
  28u,
  38u,
  40u,
  25u,
  27u
 };

static const UType JSum_7_19_4_7[]=
 {
  33u,
  35u,
  35u,
  35u,
  40u,
  40u,
  40u,
  35u,
  23u,
  40u,
  31u,
  35u,
  23u,
  31u,
  35u,
  31u,
  40u,
  40u,
  23u
 };

static const UType JSum_7_19_4_8[]=
 {
  29u,
  38u,
  45u,
  25u,
  30u,
  39u,
  38u,
  33u,
  28u,
  29u,
  28u,
  27u,
  38u,
  34u,
  40u,
  36u,
  41u,
  28u,
  39u
 };

static const UType JSum_7_19_4_9[]=
 {
  30u,
  38u,
  36u,
  36u,
  28u,
  42u,
  35u,
  40u,
  38u,
  30u,
  34u,
  32u,
  20u,
  30u,
  34u,
  44u,
  30u,
  28u,
  40u
 };

static const UType JSum_7_19_4_10[]=
 {
  29u,
  38u,
  45u,
  25u,
  30u,
  39u,
  38u,
  33u,
  28u,
  29u,
  28u,
  27u,
  38u,
  34u,
  40u,
  36u,
  41u,
  28u,
  39u
 };

static const UType JSum_7_19_4_11[]=
 {
  33u,
  35u,
  35u,
  35u,
  40u,
  40u,
  40u,
  35u,
  23u,
  40u,
  31u,
  35u,
  23u,
  31u,
  35u,
  31u,
  40u,
  40u,
  23u
 };

static const UType JSum_7_19_4_12[]=
 {
  29u,
  28u,
  41u,
  39u,
  34u,
  45u,
  28u,
  39u,
  33u,
  36u,
  30u,
  38u,
  38u,
  29u,
  28u,
  38u,
  40u,
  25u,
  27u
 };

static const UType JSum_7_19_4_13[]=
 {
  36u,
  31u,
  28u,
  32u,
  36u,
  39u,
  33u,
  43u,
  34u,
  33u,
  41u,
  42u,
  27u,
  24u,
  33u,
  27u,
  44u,
  28u,
  34u
 };

static const UType JSum_7_19_4_14[]=
 {
  36u,
  39u,
  41u,
  27u,
  31u,
  33u,
  42u,
  44u,
  28u,
  43u,
  27u,
  28u,
  32u,
  34u,
  24u,
  34u,
  36u,
  33u,
  33u
 };

static const UType JSum_7_19_4_15[]=
 {
  36u,
  24u,
  43u,
  31u,
  33u,
  34u,
  28u,
  27u,
  33u,
  32u,
  44u,
  41u,
  36u,
  28u,
  42u,
  39u,
  34u,
  27u,
  33u
 };

static const UType JSum_7_19_4_16[]=
 {
  29u,
  28u,
  38u,
  27u,
  45u,
  38u,
  25u,
  34u,
  30u,
  40u,
  39u,
  36u,
  38u,
  41u,
  33u,
  28u,
  28u,
  39u,
  29u
 };

static const UType JSum_7_19_4_17[]=
 {
  30u,
  30u,
  40u,
  38u,
  28u,
  40u,
  30u,
  35u,
  44u,
  42u,
  34u,
  28u,
  30u,
  36u,
  20u,
  36u,
  32u,
  38u,
  34u
 };

static const PtrLen<const UType> JTable_7_19_4[]=
 {
  Range(JSum_7_19_4_1),
  Range(JSum_7_19_4_2),
  Range(JSum_7_19_4_3),
  Range(JSum_7_19_4_4),
  Range(JSum_7_19_4_5),
  Range(JSum_7_19_4_6),
  Range(JSum_7_19_4_7),
  Range(JSum_7_19_4_8),
  Range(JSum_7_19_4_9),
  Range(JSum_7_19_4_10),
  Range(JSum_7_19_4_11),
  Range(JSum_7_19_4_12),
  Range(JSum_7_19_4_13),
  Range(JSum_7_19_4_14),
  Range(JSum_7_19_4_15),
  Range(JSum_7_19_4_16),
  Range(JSum_7_19_4_17)
 };

static const UType JSum_7_19_5_1[]=
 {
  80u,
  70u,
  88u,
  84u,
  90u,
  80u,
  92u,
  68u,
  66u,
  70u,
  90u,
  80u,
  66u,
  82u,
  68u,
  82u,
  78u,
  67u,
  80u
 };

static const UType JSum_7_19_5_2[]=
 {
  87u,
  83u,
  80u,
  83u,
  78u,
  87u,
  94u,
  76u,
  65u,
  68u,
  76u,
  75u,
  79u,
  83u,
  73u,
  72u,
  74u,
  90u,
  58u
 };

static const UType JSum_7_19_5_3[]=
 {
  79u,
  77u,
  83u,
  74u,
  80u,
  77u,
  86u,
  74u,
  79u,
  80u,
  89u,
  86u,
  83u,
  77u,
  66u,
  54u,
  94u,
  72u,
  71u
 };

static const UType JSum_7_19_5_4[]=
 {
  79u,
  54u,
  86u,
  74u,
  74u,
  71u,
  66u,
  89u,
  86u,
  83u,
  72u,
  77u,
  80u,
  77u,
  77u,
  94u,
  83u,
  79u,
  80u
 };

static const UType JSum_7_19_5_5[]=
 {
  79u,
  74u,
  86u,
  80u,
  83u,
  54u,
  71u,
  83u,
  77u,
  79u,
  86u,
  66u,
  72u,
  77u,
  80u,
  74u,
  89u,
  77u,
  94u
 };

static const UType JSum_7_19_5_6[]=
 {
  87u,
  74u,
  83u,
  76u,
  76u,
  78u,
  83u,
  90u,
  73u,
  75u,
  65u,
  87u,
  80u,
  58u,
  72u,
  79u,
  68u,
  94u,
  83u
 };

static const UType JSum_7_19_5_7[]=
 {
  83u,
  88u,
  75u,
  75u,
  76u,
  85u,
  76u,
  88u,
  81u,
  76u,
  61u,
  88u,
  81u,
  61u,
  75u,
  61u,
  85u,
  85u,
  81u
 };

static const UType JSum_7_19_5_8[]=
 {
  87u,
  80u,
  78u,
  94u,
  65u,
  76u,
  79u,
  73u,
  74u,
  58u,
  83u,
  83u,
  87u,
  76u,
  68u,
  75u,
  83u,
  72u,
  90u
 };

static const UType JSum_7_19_5_9[]=
 {
  80u,
  67u,
  82u,
  82u,
  80u,
  70u,
  68u,
  80u,
  84u,
  70u,
  80u,
  78u,
  68u,
  66u,
  90u,
  66u,
  92u,
  90u,
  88u
 };

static const UType JSum_7_19_5_10[]=
 {
  87u,
  80u,
  78u,
  94u,
  65u,
  76u,
  79u,
  73u,
  74u,
  58u,
  83u,
  83u,
  87u,
  76u,
  68u,
  75u,
  83u,
  72u,
  90u
 };

static const UType JSum_7_19_5_11[]=
 {
  83u,
  88u,
  75u,
  75u,
  76u,
  85u,
  76u,
  88u,
  81u,
  76u,
  61u,
  88u,
  81u,
  61u,
  75u,
  61u,
  85u,
  85u,
  81u
 };

static const UType JSum_7_19_5_12[]=
 {
  87u,
  74u,
  83u,
  76u,
  76u,
  78u,
  83u,
  90u,
  73u,
  75u,
  65u,
  87u,
  80u,
  58u,
  72u,
  79u,
  68u,
  94u,
  83u
 };

static const UType JSum_7_19_5_13[]=
 {
  79u,
  74u,
  86u,
  80u,
  83u,
  54u,
  71u,
  83u,
  77u,
  79u,
  86u,
  66u,
  72u,
  77u,
  80u,
  74u,
  89u,
  77u,
  94u
 };

static const UType JSum_7_19_5_14[]=
 {
  79u,
  54u,
  86u,
  74u,
  74u,
  71u,
  66u,
  89u,
  86u,
  83u,
  72u,
  77u,
  80u,
  77u,
  77u,
  94u,
  83u,
  79u,
  80u
 };

static const UType JSum_7_19_5_15[]=
 {
  79u,
  77u,
  83u,
  74u,
  80u,
  77u,
  86u,
  74u,
  79u,
  80u,
  89u,
  86u,
  83u,
  77u,
  66u,
  54u,
  94u,
  72u,
  71u
 };

static const UType JSum_7_19_5_16[]=
 {
  87u,
  83u,
  80u,
  83u,
  78u,
  87u,
  94u,
  76u,
  65u,
  68u,
  76u,
  75u,
  79u,
  83u,
  73u,
  72u,
  74u,
  90u,
  58u
 };

static const UType JSum_7_19_5_17[]=
 {
  80u,
  70u,
  88u,
  84u,
  90u,
  80u,
  92u,
  68u,
  66u,
  70u,
  90u,
  80u,
  66u,
  82u,
  68u,
  82u,
  78u,
  67u,
  80u
 };

static const PtrLen<const UType> JTable_7_19_5[]=
 {
  Range(JSum_7_19_5_1),
  Range(JSum_7_19_5_2),
  Range(JSum_7_19_5_3),
  Range(JSum_7_19_5_4),
  Range(JSum_7_19_5_5),
  Range(JSum_7_19_5_6),
  Range(JSum_7_19_5_7),
  Range(JSum_7_19_5_8),
  Range(JSum_7_19_5_9),
  Range(JSum_7_19_5_10),
  Range(JSum_7_19_5_11),
  Range(JSum_7_19_5_12),
  Range(JSum_7_19_5_13),
  Range(JSum_7_19_5_14),
  Range(JSum_7_19_5_15),
  Range(JSum_7_19_5_16),
  Range(JSum_7_19_5_17)
 };

static const UType JSum_7_19_6_1[]=
 {
  146u,
  150u,
  142u,
  168u,
  178u,
  140u,
  164u,
  144u,
  162u,
  146u,
  166u,
  170u,
  154u,
  155u,
  160u,
  132u,
  136u,
  156u,
  156u
 };

static const UType JSum_7_19_6_2[]=
 {
  166u,
  131u,
  163u,
  159u,
  144u,
  148u,
  142u,
  173u,
  147u,
  161u,
  156u,
  157u,
  168u,
  174u,
  152u,
  153u,
  134u,
  139u,
  158u
 };

static const UType JSum_7_19_6_3[]=
 {
  165u,
  158u,
  158u,
  139u,
  160u,
  159u,
  146u,
  180u,
  150u,
  149u,
  134u,
  149u,
  147u,
  165u,
  134u,
  140u,
  170u,
  163u,
  159u
 };

static const UType JSum_7_19_6_4[]=
 {
  165u,
  140u,
  149u,
  180u,
  139u,
  159u,
  134u,
  134u,
  146u,
  158u,
  163u,
  165u,
  149u,
  159u,
  158u,
  170u,
  147u,
  150u,
  160u
 };

static const UType JSum_7_19_6_5[]=
 {
  165u,
  139u,
  146u,
  149u,
  147u,
  140u,
  159u,
  158u,
  159u,
  150u,
  149u,
  134u,
  163u,
  158u,
  160u,
  180u,
  134u,
  165u,
  170u
 };

static const UType JSum_7_19_6_6[]=
 {
  166u,
  134u,
  174u,
  156u,
  173u,
  144u,
  131u,
  139u,
  152u,
  157u,
  147u,
  148u,
  163u,
  158u,
  153u,
  168u,
  161u,
  142u,
  159u
 };

static const UType JSum_7_19_6_7[]=
 {
  135u,
  139u,
  166u,
  166u,
  173u,
  151u,
  173u,
  139u,
  155u,
  173u,
  146u,
  139u,
  155u,
  146u,
  166u,
  146u,
  151u,
  151u,
  155u
 };

static const UType JSum_7_19_6_8[]=
 {
  166u,
  163u,
  144u,
  142u,
  147u,
  156u,
  168u,
  152u,
  134u,
  158u,
  131u,
  159u,
  148u,
  173u,
  161u,
  157u,
  174u,
  153u,
  139u
 };

static const UType JSum_7_19_6_9[]=
 {
  146u,
  156u,
  132u,
  155u,
  170u,
  146u,
  144u,
  140u,
  168u,
  150u,
  156u,
  136u,
  160u,
  154u,
  166u,
  162u,
  164u,
  178u,
  142u
 };

static const UType JSum_7_19_6_10[]=
 {
  166u,
  163u,
  144u,
  142u,
  147u,
  156u,
  168u,
  152u,
  134u,
  158u,
  131u,
  159u,
  148u,
  173u,
  161u,
  157u,
  174u,
  153u,
  139u
 };

static const UType JSum_7_19_6_11[]=
 {
  135u,
  139u,
  166u,
  166u,
  173u,
  151u,
  173u,
  139u,
  155u,
  173u,
  146u,
  139u,
  155u,
  146u,
  166u,
  146u,
  151u,
  151u,
  155u
 };

static const UType JSum_7_19_6_12[]=
 {
  166u,
  134u,
  174u,
  156u,
  173u,
  144u,
  131u,
  139u,
  152u,
  157u,
  147u,
  148u,
  163u,
  158u,
  153u,
  168u,
  161u,
  142u,
  159u
 };

static const UType JSum_7_19_6_13[]=
 {
  165u,
  139u,
  146u,
  149u,
  147u,
  140u,
  159u,
  158u,
  159u,
  150u,
  149u,
  134u,
  163u,
  158u,
  160u,
  180u,
  134u,
  165u,
  170u
 };

static const UType JSum_7_19_6_14[]=
 {
  165u,
  140u,
  149u,
  180u,
  139u,
  159u,
  134u,
  134u,
  146u,
  158u,
  163u,
  165u,
  149u,
  159u,
  158u,
  170u,
  147u,
  150u,
  160u
 };

static const UType JSum_7_19_6_15[]=
 {
  165u,
  158u,
  158u,
  139u,
  160u,
  159u,
  146u,
  180u,
  150u,
  149u,
  134u,
  149u,
  147u,
  165u,
  134u,
  140u,
  170u,
  163u,
  159u
 };

static const UType JSum_7_19_6_16[]=
 {
  166u,
  131u,
  163u,
  159u,
  144u,
  148u,
  142u,
  173u,
  147u,
  161u,
  156u,
  157u,
  168u,
  174u,
  152u,
  153u,
  134u,
  139u,
  158u
 };

static const UType JSum_7_19_6_17[]=
 {
  146u,
  150u,
  142u,
  168u,
  178u,
  140u,
  164u,
  144u,
  162u,
  146u,
  166u,
  170u,
  154u,
  155u,
  160u,
  132u,
  136u,
  156u,
  156u
 };

static const PtrLen<const UType> JTable_7_19_6[]=
 {
  Range(JSum_7_19_6_1),
  Range(JSum_7_19_6_2),
  Range(JSum_7_19_6_3),
  Range(JSum_7_19_6_4),
  Range(JSum_7_19_6_5),
  Range(JSum_7_19_6_6),
  Range(JSum_7_19_6_7),
  Range(JSum_7_19_6_8),
  Range(JSum_7_19_6_9),
  Range(JSum_7_19_6_10),
  Range(JSum_7_19_6_11),
  Range(JSum_7_19_6_12),
  Range(JSum_7_19_6_13),
  Range(JSum_7_19_6_14),
  Range(JSum_7_19_6_15),
  Range(JSum_7_19_6_16),
  Range(JSum_7_19_6_17)
 };

static const UType JSum_7_19_7_1[]=
 {
  204u,
  264u,
  238u,
  244u,
  218u,
  240u,
  238u,
  236u,
  246u,
  246u,
  226u,
  240u,
  270u,
  246u,
  235u,
  252u,
  228u,
  226u,
  224u
 };

static const UType JSum_7_19_7_2[]=
 {
  237u,
  217u,
  248u,
  239u,
  237u,
  240u,
  244u,
  248u,
  234u,
  228u,
  236u,
  261u,
  249u,
  252u,
  254u,
  210u,
  213u,
  259u,
  215u
 };

static const UType JSum_7_19_7_3[]=
 {
  259u,
  233u,
  234u,
  237u,
  233u,
  261u,
  267u,
  227u,
  244u,
  226u,
  240u,
  231u,
  259u,
  242u,
  232u,
  236u,
  236u,
  222u,
  202u
 };

static const UType JSum_7_19_7_4[]=
 {
  259u,
  236u,
  231u,
  227u,
  237u,
  202u,
  232u,
  240u,
  267u,
  234u,
  222u,
  242u,
  226u,
  261u,
  233u,
  236u,
  259u,
  244u,
  233u
 };

static const UType JSum_7_19_7_5[]=
 {
  259u,
  237u,
  267u,
  226u,
  259u,
  236u,
  202u,
  234u,
  261u,
  244u,
  231u,
  232u,
  222u,
  233u,
  233u,
  227u,
  240u,
  242u,
  236u
 };

static const UType JSum_7_19_7_6[]=
 {
  237u,
  213u,
  252u,
  236u,
  248u,
  237u,
  217u,
  259u,
  254u,
  261u,
  234u,
  240u,
  248u,
  215u,
  210u,
  249u,
  228u,
  244u,
  239u
 };

static const UType JSum_7_19_7_7[]=
 {
  225u,
  219u,
  223u,
  223u,
  251u,
  243u,
  251u,
  219u,
  234u,
  251u,
  262u,
  219u,
  234u,
  262u,
  223u,
  262u,
  243u,
  243u,
  234u
 };

static const UType JSum_7_19_7_8[]=
 {
  237u,
  248u,
  237u,
  244u,
  234u,
  236u,
  249u,
  254u,
  213u,
  215u,
  217u,
  239u,
  240u,
  248u,
  228u,
  261u,
  252u,
  210u,
  259u
 };

static const UType JSum_7_19_7_9[]=
 {
  204u,
  226u,
  252u,
  246u,
  240u,
  246u,
  236u,
  240u,
  244u,
  264u,
  224u,
  228u,
  235u,
  270u,
  226u,
  246u,
  238u,
  218u,
  238u
 };

static const UType JSum_7_19_7_10[]=
 {
  237u,
  248u,
  237u,
  244u,
  234u,
  236u,
  249u,
  254u,
  213u,
  215u,
  217u,
  239u,
  240u,
  248u,
  228u,
  261u,
  252u,
  210u,
  259u
 };

static const UType JSum_7_19_7_11[]=
 {
  225u,
  219u,
  223u,
  223u,
  251u,
  243u,
  251u,
  219u,
  234u,
  251u,
  262u,
  219u,
  234u,
  262u,
  223u,
  262u,
  243u,
  243u,
  234u
 };

static const UType JSum_7_19_7_12[]=
 {
  237u,
  213u,
  252u,
  236u,
  248u,
  237u,
  217u,
  259u,
  254u,
  261u,
  234u,
  240u,
  248u,
  215u,
  210u,
  249u,
  228u,
  244u,
  239u
 };

static const UType JSum_7_19_7_13[]=
 {
  259u,
  237u,
  267u,
  226u,
  259u,
  236u,
  202u,
  234u,
  261u,
  244u,
  231u,
  232u,
  222u,
  233u,
  233u,
  227u,
  240u,
  242u,
  236u
 };

static const UType JSum_7_19_7_14[]=
 {
  259u,
  236u,
  231u,
  227u,
  237u,
  202u,
  232u,
  240u,
  267u,
  234u,
  222u,
  242u,
  226u,
  261u,
  233u,
  236u,
  259u,
  244u,
  233u
 };

static const UType JSum_7_19_7_15[]=
 {
  259u,
  233u,
  234u,
  237u,
  233u,
  261u,
  267u,
  227u,
  244u,
  226u,
  240u,
  231u,
  259u,
  242u,
  232u,
  236u,
  236u,
  222u,
  202u
 };

static const UType JSum_7_19_7_16[]=
 {
  237u,
  217u,
  248u,
  239u,
  237u,
  240u,
  244u,
  248u,
  234u,
  228u,
  236u,
  261u,
  249u,
  252u,
  254u,
  210u,
  213u,
  259u,
  215u
 };

static const UType JSum_7_19_7_17[]=
 {
  204u,
  264u,
  238u,
  244u,
  218u,
  240u,
  238u,
  236u,
  246u,
  246u,
  226u,
  240u,
  270u,
  246u,
  235u,
  252u,
  228u,
  226u,
  224u
 };

static const PtrLen<const UType> JTable_7_19_7[]=
 {
  Range(JSum_7_19_7_1),
  Range(JSum_7_19_7_2),
  Range(JSum_7_19_7_3),
  Range(JSum_7_19_7_4),
  Range(JSum_7_19_7_5),
  Range(JSum_7_19_7_6),
  Range(JSum_7_19_7_7),
  Range(JSum_7_19_7_8),
  Range(JSum_7_19_7_9),
  Range(JSum_7_19_7_10),
  Range(JSum_7_19_7_11),
  Range(JSum_7_19_7_12),
  Range(JSum_7_19_7_13),
  Range(JSum_7_19_7_14),
  Range(JSum_7_19_7_15),
  Range(JSum_7_19_7_16),
  Range(JSum_7_19_7_17)
 };

static const UType JSum_7_19_8_1[]=
 {
  326u,
  302u,
  342u,
  324u,
  358u,
  346u,
  340u,
  306u,
  366u,
  347u,
  316u,
  316u,
  314u,
  332u,
  324u,
  338u,
  344u,
  304u,
  324u
 };

static const UType JSum_7_19_8_2[]=
 {
  295u,
  310u,
  320u,
  321u,
  348u,
  316u,
  346u,
  328u,
  333u,
  354u,
  323u,
  317u,
  363u,
  322u,
  320u,
  329u,
  366u,
  329u,
  329u
 };

static const UType JSum_7_19_8_3[]=
 {
  343u,
  324u,
  296u,
  332u,
  362u,
  315u,
  356u,
  312u,
  351u,
  355u,
  341u,
  326u,
  319u,
  310u,
  308u,
  337u,
  333u,
  325u,
  324u
 };

static const UType JSum_7_19_8_4[]=
 {
  343u,
  337u,
  326u,
  312u,
  332u,
  324u,
  308u,
  341u,
  356u,
  296u,
  325u,
  310u,
  355u,
  315u,
  324u,
  333u,
  319u,
  351u,
  362u
 };

static const UType JSum_7_19_8_5[]=
 {
  343u,
  332u,
  356u,
  355u,
  319u,
  337u,
  324u,
  296u,
  315u,
  351u,
  326u,
  308u,
  325u,
  324u,
  362u,
  312u,
  341u,
  310u,
  333u
 };

static const UType JSum_7_19_8_6[]=
 {
  295u,
  366u,
  322u,
  323u,
  328u,
  348u,
  310u,
  329u,
  320u,
  317u,
  333u,
  316u,
  320u,
  329u,
  329u,
  363u,
  354u,
  346u,
  321u
 };

static const UType JSum_7_19_8_7[]=
 {
  371u,
  349u,
  313u,
  313u,
  349u,
  319u,
  349u,
  349u,
  318u,
  349u,
  318u,
  349u,
  318u,
  318u,
  313u,
  318u,
  319u,
  319u,
  318u
 };

static const UType JSum_7_19_8_8[]=
 {
  295u,
  320u,
  348u,
  346u,
  333u,
  323u,
  363u,
  320u,
  366u,
  329u,
  310u,
  321u,
  316u,
  328u,
  354u,
  317u,
  322u,
  329u,
  329u
 };

static const UType JSum_7_19_8_9[]=
 {
  326u,
  304u,
  338u,
  332u,
  316u,
  347u,
  306u,
  346u,
  324u,
  302u,
  324u,
  344u,
  324u,
  314u,
  316u,
  366u,
  340u,
  358u,
  342u
 };

static const UType JSum_7_19_8_10[]=
 {
  295u,
  320u,
  348u,
  346u,
  333u,
  323u,
  363u,
  320u,
  366u,
  329u,
  310u,
  321u,
  316u,
  328u,
  354u,
  317u,
  322u,
  329u,
  329u
 };

static const UType JSum_7_19_8_11[]=
 {
  371u,
  349u,
  313u,
  313u,
  349u,
  319u,
  349u,
  349u,
  318u,
  349u,
  318u,
  349u,
  318u,
  318u,
  313u,
  318u,
  319u,
  319u,
  318u
 };

static const UType JSum_7_19_8_12[]=
 {
  295u,
  366u,
  322u,
  323u,
  328u,
  348u,
  310u,
  329u,
  320u,
  317u,
  333u,
  316u,
  320u,
  329u,
  329u,
  363u,
  354u,
  346u,
  321u
 };

static const UType JSum_7_19_8_13[]=
 {
  343u,
  332u,
  356u,
  355u,
  319u,
  337u,
  324u,
  296u,
  315u,
  351u,
  326u,
  308u,
  325u,
  324u,
  362u,
  312u,
  341u,
  310u,
  333u
 };

static const UType JSum_7_19_8_14[]=
 {
  343u,
  337u,
  326u,
  312u,
  332u,
  324u,
  308u,
  341u,
  356u,
  296u,
  325u,
  310u,
  355u,
  315u,
  324u,
  333u,
  319u,
  351u,
  362u
 };

static const UType JSum_7_19_8_15[]=
 {
  343u,
  324u,
  296u,
  332u,
  362u,
  315u,
  356u,
  312u,
  351u,
  355u,
  341u,
  326u,
  319u,
  310u,
  308u,
  337u,
  333u,
  325u,
  324u
 };

static const UType JSum_7_19_8_16[]=
 {
  295u,
  310u,
  320u,
  321u,
  348u,
  316u,
  346u,
  328u,
  333u,
  354u,
  323u,
  317u,
  363u,
  322u,
  320u,
  329u,
  366u,
  329u,
  329u
 };

static const UType JSum_7_19_8_17[]=
 {
  326u,
  302u,
  342u,
  324u,
  358u,
  346u,
  340u,
  306u,
  366u,
  347u,
  316u,
  316u,
  314u,
  332u,
  324u,
  338u,
  344u,
  304u,
  324u
 };

static const PtrLen<const UType> JTable_7_19_8[]=
 {
  Range(JSum_7_19_8_1),
  Range(JSum_7_19_8_2),
  Range(JSum_7_19_8_3),
  Range(JSum_7_19_8_4),
  Range(JSum_7_19_8_5),
  Range(JSum_7_19_8_6),
  Range(JSum_7_19_8_7),
  Range(JSum_7_19_8_8),
  Range(JSum_7_19_8_9),
  Range(JSum_7_19_8_10),
  Range(JSum_7_19_8_11),
  Range(JSum_7_19_8_12),
  Range(JSum_7_19_8_13),
  Range(JSum_7_19_8_14),
  Range(JSum_7_19_8_15),
  Range(JSum_7_19_8_16),
  Range(JSum_7_19_8_17)
 };

static const UType JSum_7_19_9_1[]=
 {
  392u,
  420u,
  382u,
  400u,
  400u,
  410u,
  404u,
  394u,
  368u,
  378u,
  376u,
  394u,
  402u,
  392u,
  362u,
  410u,
  378u,
  339u,
  408u
 };

static const UType JSum_7_19_9_2[]=
 {
  419u,
  395u,
  359u,
  387u,
  382u,
  355u,
  405u,
  380u,
  385u,
  368u,
  410u,
  427u,
  388u,
  385u,
  372u,
  401u,
  393u,
  417u,
  381u
 };

static const UType JSum_7_19_9_3[]=
 {
  389u,
  394u,
  371u,
  396u,
  368u,
  377u,
  402u,
  427u,
  349u,
  368u,
  387u,
  389u,
  401u,
  409u,
  403u,
  417u,
  379u,
  411u,
  372u
 };

static const UType JSum_7_19_9_4[]=
 {
  389u,
  417u,
  389u,
  427u,
  396u,
  372u,
  403u,
  387u,
  402u,
  371u,
  411u,
  409u,
  368u,
  377u,
  394u,
  379u,
  401u,
  349u,
  368u
 };

static const UType JSum_7_19_9_5[]=
 {
  389u,
  396u,
  402u,
  368u,
  401u,
  417u,
  372u,
  371u,
  377u,
  349u,
  389u,
  403u,
  411u,
  394u,
  368u,
  427u,
  387u,
  409u,
  379u
 };

static const UType JSum_7_19_9_6[]=
 {
  419u,
  393u,
  385u,
  410u,
  380u,
  382u,
  395u,
  417u,
  372u,
  427u,
  385u,
  355u,
  359u,
  381u,
  401u,
  388u,
  368u,
  405u,
  387u
 };

static const UType JSum_7_19_9_7[]=
 {
  356u,
  414u,
  359u,
  359u,
  382u,
  398u,
  382u,
  414u,
  407u,
  382u,
  391u,
  414u,
  407u,
  391u,
  359u,
  391u,
  398u,
  398u,
  407u
 };

static const UType JSum_7_19_9_8[]=
 {
  419u,
  359u,
  382u,
  405u,
  385u,
  410u,
  388u,
  372u,
  393u,
  381u,
  395u,
  387u,
  355u,
  380u,
  368u,
  427u,
  385u,
  401u,
  417u
 };

static const UType JSum_7_19_9_9[]=
 {
  392u,
  339u,
  410u,
  392u,
  394u,
  378u,
  394u,
  410u,
  400u,
  420u,
  408u,
  378u,
  362u,
  402u,
  376u,
  368u,
  404u,
  400u,
  382u
 };

static const UType JSum_7_19_9_10[]=
 {
  419u,
  359u,
  382u,
  405u,
  385u,
  410u,
  388u,
  372u,
  393u,
  381u,
  395u,
  387u,
  355u,
  380u,
  368u,
  427u,
  385u,
  401u,
  417u
 };

static const UType JSum_7_19_9_11[]=
 {
  356u,
  414u,
  359u,
  359u,
  382u,
  398u,
  382u,
  414u,
  407u,
  382u,
  391u,
  414u,
  407u,
  391u,
  359u,
  391u,
  398u,
  398u,
  407u
 };

static const UType JSum_7_19_9_12[]=
 {
  419u,
  393u,
  385u,
  410u,
  380u,
  382u,
  395u,
  417u,
  372u,
  427u,
  385u,
  355u,
  359u,
  381u,
  401u,
  388u,
  368u,
  405u,
  387u
 };

static const UType JSum_7_19_9_13[]=
 {
  389u,
  396u,
  402u,
  368u,
  401u,
  417u,
  372u,
  371u,
  377u,
  349u,
  389u,
  403u,
  411u,
  394u,
  368u,
  427u,
  387u,
  409u,
  379u
 };

static const UType JSum_7_19_9_14[]=
 {
  389u,
  417u,
  389u,
  427u,
  396u,
  372u,
  403u,
  387u,
  402u,
  371u,
  411u,
  409u,
  368u,
  377u,
  394u,
  379u,
  401u,
  349u,
  368u
 };

static const UType JSum_7_19_9_15[]=
 {
  389u,
  394u,
  371u,
  396u,
  368u,
  377u,
  402u,
  427u,
  349u,
  368u,
  387u,
  389u,
  401u,
  409u,
  403u,
  417u,
  379u,
  411u,
  372u
 };

static const UType JSum_7_19_9_16[]=
 {
  419u,
  395u,
  359u,
  387u,
  382u,
  355u,
  405u,
  380u,
  385u,
  368u,
  410u,
  427u,
  388u,
  385u,
  372u,
  401u,
  393u,
  417u,
  381u
 };

static const UType JSum_7_19_9_17[]=
 {
  392u,
  420u,
  382u,
  400u,
  400u,
  410u,
  404u,
  394u,
  368u,
  378u,
  376u,
  394u,
  402u,
  392u,
  362u,
  410u,
  378u,
  339u,
  408u
 };

static const PtrLen<const UType> JTable_7_19_9[]=
 {
  Range(JSum_7_19_9_1),
  Range(JSum_7_19_9_2),
  Range(JSum_7_19_9_3),
  Range(JSum_7_19_9_4),
  Range(JSum_7_19_9_5),
  Range(JSum_7_19_9_6),
  Range(JSum_7_19_9_7),
  Range(JSum_7_19_9_8),
  Range(JSum_7_19_9_9),
  Range(JSum_7_19_9_10),
  Range(JSum_7_19_9_11),
  Range(JSum_7_19_9_12),
  Range(JSum_7_19_9_13),
  Range(JSum_7_19_9_14),
  Range(JSum_7_19_9_15),
  Range(JSum_7_19_9_16),
  Range(JSum_7_19_9_17)
 };

static const UType JSum_7_19_10_1[]=
 {
  456u,
  488u,
  464u,
  476u,
  448u,
  450u,
  483u,
  456u,
  462u,
  454u,
  482u,
  458u,
  402u,
  444u,
  472u,
  446u,
  504u,
  462u,
  470u
 };

static const UType JSum_7_19_10_2[]=
 {
  453u,
  495u,
  471u,
  492u,
  451u,
  458u,
  437u,
  497u,
  477u,
  464u,
  447u,
  483u,
  476u,
  430u,
  459u,
  465u,
  425u,
  461u,
  436u
 };

static const UType JSum_7_19_10_3[]=
 {
  480u,
  447u,
  465u,
  457u,
  421u,
  460u,
  448u,
  473u,
  483u,
  496u,
  447u,
  491u,
  469u,
  432u,
  455u,
  488u,
  475u,
  463u,
  427u
 };

static const UType JSum_7_19_10_4[]=
 {
  480u,
  488u,
  491u,
  473u,
  457u,
  427u,
  455u,
  447u,
  448u,
  465u,
  463u,
  432u,
  496u,
  460u,
  447u,
  475u,
  469u,
  483u,
  421u
 };

static const UType JSum_7_19_10_5[]=
 {
  480u,
  457u,
  448u,
  496u,
  469u,
  488u,
  427u,
  465u,
  460u,
  483u,
  491u,
  455u,
  463u,
  447u,
  421u,
  473u,
  447u,
  432u,
  475u
 };

static const UType JSum_7_19_10_6[]=
 {
  453u,
  425u,
  430u,
  447u,
  497u,
  451u,
  495u,
  461u,
  459u,
  483u,
  477u,
  458u,
  471u,
  436u,
  465u,
  476u,
  464u,
  437u,
  492u
 };

static const UType JSum_7_19_10_7[]=
 {
  404u,
  479u,
  462u,
  462u,
  475u,
  459u,
  475u,
  479u,
  434u,
  475u,
  482u,
  479u,
  434u,
  482u,
  462u,
  482u,
  459u,
  459u,
  434u
 };

static const UType JSum_7_19_10_8[]=
 {
  453u,
  471u,
  451u,
  437u,
  477u,
  447u,
  476u,
  459u,
  425u,
  436u,
  495u,
  492u,
  458u,
  497u,
  464u,
  483u,
  430u,
  465u,
  461u
 };

static const UType JSum_7_19_10_9[]=
 {
  456u,
  462u,
  446u,
  444u,
  458u,
  454u,
  456u,
  450u,
  476u,
  488u,
  470u,
  504u,
  472u,
  402u,
  482u,
  462u,
  483u,
  448u,
  464u
 };

static const UType JSum_7_19_10_10[]=
 {
  453u,
  471u,
  451u,
  437u,
  477u,
  447u,
  476u,
  459u,
  425u,
  436u,
  495u,
  492u,
  458u,
  497u,
  464u,
  483u,
  430u,
  465u,
  461u
 };

static const UType JSum_7_19_10_11[]=
 {
  404u,
  479u,
  462u,
  462u,
  475u,
  459u,
  475u,
  479u,
  434u,
  475u,
  482u,
  479u,
  434u,
  482u,
  462u,
  482u,
  459u,
  459u,
  434u
 };

static const UType JSum_7_19_10_12[]=
 {
  453u,
  425u,
  430u,
  447u,
  497u,
  451u,
  495u,
  461u,
  459u,
  483u,
  477u,
  458u,
  471u,
  436u,
  465u,
  476u,
  464u,
  437u,
  492u
 };

static const UType JSum_7_19_10_13[]=
 {
  480u,
  457u,
  448u,
  496u,
  469u,
  488u,
  427u,
  465u,
  460u,
  483u,
  491u,
  455u,
  463u,
  447u,
  421u,
  473u,
  447u,
  432u,
  475u
 };

static const UType JSum_7_19_10_14[]=
 {
  480u,
  488u,
  491u,
  473u,
  457u,
  427u,
  455u,
  447u,
  448u,
  465u,
  463u,
  432u,
  496u,
  460u,
  447u,
  475u,
  469u,
  483u,
  421u
 };

static const UType JSum_7_19_10_15[]=
 {
  480u,
  447u,
  465u,
  457u,
  421u,
  460u,
  448u,
  473u,
  483u,
  496u,
  447u,
  491u,
  469u,
  432u,
  455u,
  488u,
  475u,
  463u,
  427u
 };

static const UType JSum_7_19_10_16[]=
 {
  453u,
  495u,
  471u,
  492u,
  451u,
  458u,
  437u,
  497u,
  477u,
  464u,
  447u,
  483u,
  476u,
  430u,
  459u,
  465u,
  425u,
  461u,
  436u
 };

static const UType JSum_7_19_10_17[]=
 {
  456u,
  488u,
  464u,
  476u,
  448u,
  450u,
  483u,
  456u,
  462u,
  454u,
  482u,
  458u,
  402u,
  444u,
  472u,
  446u,
  504u,
  462u,
  470u
 };

static const PtrLen<const UType> JTable_7_19_10[]=
 {
  Range(JSum_7_19_10_1),
  Range(JSum_7_19_10_2),
  Range(JSum_7_19_10_3),
  Range(JSum_7_19_10_4),
  Range(JSum_7_19_10_5),
  Range(JSum_7_19_10_6),
  Range(JSum_7_19_10_7),
  Range(JSum_7_19_10_8),
  Range(JSum_7_19_10_9),
  Range(JSum_7_19_10_10),
  Range(JSum_7_19_10_11),
  Range(JSum_7_19_10_12),
  Range(JSum_7_19_10_13),
  Range(JSum_7_19_10_14),
  Range(JSum_7_19_10_15),
  Range(JSum_7_19_10_16),
  Range(JSum_7_19_10_17)
 };

static const UType JSum_7_19_11_1[]=
 {
  654u,
  744u,
  670u,
  710u,
  708u,
  722u,
  760u,
  744u,
  726u,
  708u,
  708u,
  714u,
  718u,
  722u,
  707u,
  672u,
  712u,
  748u,
  718u
 };

static const UType JSum_7_19_11_2[]=
 {
  715u,
  702u,
  716u,
  722u,
  745u,
  696u,
  681u,
  714u,
  750u,
  675u,
  751u,
  683u,
  678u,
  692u,
  706u,
  729u,
  705u,
  751u,
  754u
 };

static const UType JSum_7_19_11_3[]=
 {
  717u,
  744u,
  700u,
  748u,
  719u,
  770u,
  709u,
  671u,
  693u,
  704u,
  682u,
  742u,
  719u,
  683u,
  695u,
  748u,
  704u,
  725u,
  692u
 };

static const UType JSum_7_19_11_4[]=
 {
  717u,
  748u,
  742u,
  671u,
  748u,
  692u,
  695u,
  682u,
  709u,
  700u,
  725u,
  683u,
  704u,
  770u,
  744u,
  704u,
  719u,
  693u,
  719u
 };

static const UType JSum_7_19_11_5[]=
 {
  717u,
  748u,
  709u,
  704u,
  719u,
  748u,
  692u,
  700u,
  770u,
  693u,
  742u,
  695u,
  725u,
  744u,
  719u,
  671u,
  682u,
  683u,
  704u
 };

static const UType JSum_7_19_11_6[]=
 {
  715u,
  705u,
  692u,
  751u,
  714u,
  745u,
  702u,
  751u,
  706u,
  683u,
  750u,
  696u,
  716u,
  754u,
  729u,
  678u,
  675u,
  681u,
  722u
 };

static const UType JSum_7_19_11_7[]=
 {
  683u,
  687u,
  706u,
  706u,
  765u,
  709u,
  765u,
  687u,
  697u,
  765u,
  730u,
  687u,
  697u,
  730u,
  706u,
  730u,
  709u,
  709u,
  697u
 };

static const UType JSum_7_19_11_8[]=
 {
  715u,
  716u,
  745u,
  681u,
  750u,
  751u,
  678u,
  706u,
  705u,
  754u,
  702u,
  722u,
  696u,
  714u,
  675u,
  683u,
  692u,
  729u,
  751u
 };

static const UType JSum_7_19_11_9[]=
 {
  654u,
  748u,
  672u,
  722u,
  714u,
  708u,
  744u,
  722u,
  710u,
  744u,
  718u,
  712u,
  707u,
  718u,
  708u,
  726u,
  760u,
  708u,
  670u
 };

static const UType JSum_7_19_11_10[]=
 {
  715u,
  716u,
  745u,
  681u,
  750u,
  751u,
  678u,
  706u,
  705u,
  754u,
  702u,
  722u,
  696u,
  714u,
  675u,
  683u,
  692u,
  729u,
  751u
 };

static const UType JSum_7_19_11_11[]=
 {
  683u,
  687u,
  706u,
  706u,
  765u,
  709u,
  765u,
  687u,
  697u,
  765u,
  730u,
  687u,
  697u,
  730u,
  706u,
  730u,
  709u,
  709u,
  697u
 };

static const UType JSum_7_19_11_12[]=
 {
  715u,
  705u,
  692u,
  751u,
  714u,
  745u,
  702u,
  751u,
  706u,
  683u,
  750u,
  696u,
  716u,
  754u,
  729u,
  678u,
  675u,
  681u,
  722u
 };

static const UType JSum_7_19_11_13[]=
 {
  717u,
  748u,
  709u,
  704u,
  719u,
  748u,
  692u,
  700u,
  770u,
  693u,
  742u,
  695u,
  725u,
  744u,
  719u,
  671u,
  682u,
  683u,
  704u
 };

static const UType JSum_7_19_11_14[]=
 {
  717u,
  748u,
  742u,
  671u,
  748u,
  692u,
  695u,
  682u,
  709u,
  700u,
  725u,
  683u,
  704u,
  770u,
  744u,
  704u,
  719u,
  693u,
  719u
 };

static const UType JSum_7_19_11_15[]=
 {
  717u,
  744u,
  700u,
  748u,
  719u,
  770u,
  709u,
  671u,
  693u,
  704u,
  682u,
  742u,
  719u,
  683u,
  695u,
  748u,
  704u,
  725u,
  692u
 };

static const UType JSum_7_19_11_16[]=
 {
  715u,
  702u,
  716u,
  722u,
  745u,
  696u,
  681u,
  714u,
  750u,
  675u,
  751u,
  683u,
  678u,
  692u,
  706u,
  729u,
  705u,
  751u,
  754u
 };

static const UType JSum_7_19_11_17[]=
 {
  654u,
  744u,
  670u,
  710u,
  708u,
  722u,
  760u,
  744u,
  726u,
  708u,
  708u,
  714u,
  718u,
  722u,
  707u,
  672u,
  712u,
  748u,
  718u
 };

static const PtrLen<const UType> JTable_7_19_11[]=
 {
  Range(JSum_7_19_11_1),
  Range(JSum_7_19_11_2),
  Range(JSum_7_19_11_3),
  Range(JSum_7_19_11_4),
  Range(JSum_7_19_11_5),
  Range(JSum_7_19_11_6),
  Range(JSum_7_19_11_7),
  Range(JSum_7_19_11_8),
  Range(JSum_7_19_11_9),
  Range(JSum_7_19_11_10),
  Range(JSum_7_19_11_11),
  Range(JSum_7_19_11_12),
  Range(JSum_7_19_11_13),
  Range(JSum_7_19_11_14),
  Range(JSum_7_19_11_15),
  Range(JSum_7_19_11_16),
  Range(JSum_7_19_11_17)
 };

static const UType JSum_7_19_12_1[]=
 {
  924u,
  852u,
  890u,
  908u,
  936u,
  902u,
  982u,
  923u,
  900u,
  940u,
  906u,
  874u,
  920u,
  902u,
  930u,
  856u,
  898u,
  928u,
  918u
 };

static const UType JSum_7_19_12_2[]=
 {
  947u,
  930u,
  910u,
  913u,
  947u,
  912u,
  902u,
  909u,
  880u,
  962u,
  850u,
  909u,
  940u,
  919u,
  867u,
  888u,
  876u,
  887u,
  941u
 };

static const UType JSum_7_19_12_3[]=
 {
  934u,
  906u,
  881u,
  961u,
  885u,
  912u,
  920u,
  877u,
  853u,
  914u,
  891u,
  900u,
  928u,
  958u,
  923u,
  920u,
  858u,
  939u,
  929u
 };

static const UType JSum_7_19_12_4[]=
 {
  934u,
  920u,
  900u,
  877u,
  961u,
  929u,
  923u,
  891u,
  920u,
  881u,
  939u,
  958u,
  914u,
  912u,
  906u,
  858u,
  928u,
  853u,
  885u
 };

static const UType JSum_7_19_12_5[]=
 {
  934u,
  961u,
  920u,
  914u,
  928u,
  920u,
  929u,
  881u,
  912u,
  853u,
  900u,
  923u,
  939u,
  906u,
  885u,
  877u,
  891u,
  958u,
  858u
 };

static const UType JSum_7_19_12_6[]=
 {
  947u,
  876u,
  919u,
  850u,
  909u,
  947u,
  930u,
  887u,
  867u,
  909u,
  880u,
  912u,
  910u,
  941u,
  888u,
  940u,
  962u,
  902u,
  913u
 };

static const UType JSum_7_19_12_7[]=
 {
  993u,
  879u,
  884u,
  884u,
  891u,
  913u,
  891u,
  879u,
  941u,
  891u,
  924u,
  879u,
  941u,
  924u,
  884u,
  924u,
  913u,
  913u,
  941u
 };

static const UType JSum_7_19_12_8[]=
 {
  947u,
  910u,
  947u,
  902u,
  880u,
  850u,
  940u,
  867u,
  876u,
  941u,
  930u,
  913u,
  912u,
  909u,
  962u,
  909u,
  919u,
  888u,
  887u
 };

static const UType JSum_7_19_12_9[]=
 {
  924u,
  928u,
  856u,
  902u,
  874u,
  940u,
  923u,
  902u,
  908u,
  852u,
  918u,
  898u,
  930u,
  920u,
  906u,
  900u,
  982u,
  936u,
  890u
 };

static const UType JSum_7_19_12_10[]=
 {
  947u,
  910u,
  947u,
  902u,
  880u,
  850u,
  940u,
  867u,
  876u,
  941u,
  930u,
  913u,
  912u,
  909u,
  962u,
  909u,
  919u,
  888u,
  887u
 };

static const UType JSum_7_19_12_11[]=
 {
  993u,
  879u,
  884u,
  884u,
  891u,
  913u,
  891u,
  879u,
  941u,
  891u,
  924u,
  879u,
  941u,
  924u,
  884u,
  924u,
  913u,
  913u,
  941u
 };

static const UType JSum_7_19_12_12[]=
 {
  947u,
  876u,
  919u,
  850u,
  909u,
  947u,
  930u,
  887u,
  867u,
  909u,
  880u,
  912u,
  910u,
  941u,
  888u,
  940u,
  962u,
  902u,
  913u
 };

static const UType JSum_7_19_12_13[]=
 {
  934u,
  961u,
  920u,
  914u,
  928u,
  920u,
  929u,
  881u,
  912u,
  853u,
  900u,
  923u,
  939u,
  906u,
  885u,
  877u,
  891u,
  958u,
  858u
 };

static const UType JSum_7_19_12_14[]=
 {
  934u,
  920u,
  900u,
  877u,
  961u,
  929u,
  923u,
  891u,
  920u,
  881u,
  939u,
  958u,
  914u,
  912u,
  906u,
  858u,
  928u,
  853u,
  885u
 };

static const UType JSum_7_19_12_15[]=
 {
  934u,
  906u,
  881u,
  961u,
  885u,
  912u,
  920u,
  877u,
  853u,
  914u,
  891u,
  900u,
  928u,
  958u,
  923u,
  920u,
  858u,
  939u,
  929u
 };

static const UType JSum_7_19_12_16[]=
 {
  947u,
  930u,
  910u,
  913u,
  947u,
  912u,
  902u,
  909u,
  880u,
  962u,
  850u,
  909u,
  940u,
  919u,
  867u,
  888u,
  876u,
  887u,
  941u
 };

static const UType JSum_7_19_12_17[]=
 {
  924u,
  852u,
  890u,
  908u,
  936u,
  902u,
  982u,
  923u,
  900u,
  940u,
  906u,
  874u,
  920u,
  902u,
  930u,
  856u,
  898u,
  928u,
  918u
 };

static const PtrLen<const UType> JTable_7_19_12[]=
 {
  Range(JSum_7_19_12_1),
  Range(JSum_7_19_12_2),
  Range(JSum_7_19_12_3),
  Range(JSum_7_19_12_4),
  Range(JSum_7_19_12_5),
  Range(JSum_7_19_12_6),
  Range(JSum_7_19_12_7),
  Range(JSum_7_19_12_8),
  Range(JSum_7_19_12_9),
  Range(JSum_7_19_12_10),
  Range(JSum_7_19_12_11),
  Range(JSum_7_19_12_12),
  Range(JSum_7_19_12_13),
  Range(JSum_7_19_12_14),
  Range(JSum_7_19_12_15),
  Range(JSum_7_19_12_16),
  Range(JSum_7_19_12_17)
 };

static const UType JSum_7_19_13_1[]=
 {
  1114u,
  1136u,
  1118u,
  1060u,
  1080u,
  1134u,
  1108u,
  1136u,
  1098u,
  1088u,
  1208u,
  1131u,
  1150u,
  1094u,
  1148u,
  1110u,
  1102u,
  1144u,
  1158u
 };

static const UType JSum_7_19_13_2[]=
 {
  1137u,
  1076u,
  1096u,
  1086u,
  1146u,
  1105u,
  1130u,
  1172u,
  1063u,
  1113u,
  1099u,
  1138u,
  1179u,
  1130u,
  1094u,
  1165u,
  1155u,
  1139u,
  1094u
 };

static const UType JSum_7_19_13_3[]=
 {
  1128u,
  1098u,
  1109u,
  1146u,
  1171u,
  1101u,
  1123u,
  1084u,
  1136u,
  1109u,
  1118u,
  1060u,
  1116u,
  1100u,
  1115u,
  1216u,
  1113u,
  1123u,
  1151u
 };

static const UType JSum_7_19_13_4[]=
 {
  1128u,
  1216u,
  1060u,
  1084u,
  1146u,
  1151u,
  1115u,
  1118u,
  1123u,
  1109u,
  1123u,
  1100u,
  1109u,
  1101u,
  1098u,
  1113u,
  1116u,
  1136u,
  1171u
 };

static const UType JSum_7_19_13_5[]=
 {
  1128u,
  1146u,
  1123u,
  1109u,
  1116u,
  1216u,
  1151u,
  1109u,
  1101u,
  1136u,
  1060u,
  1115u,
  1123u,
  1098u,
  1171u,
  1084u,
  1118u,
  1100u,
  1113u
 };

static const UType JSum_7_19_13_6[]=
 {
  1137u,
  1155u,
  1130u,
  1099u,
  1172u,
  1146u,
  1076u,
  1139u,
  1094u,
  1138u,
  1063u,
  1105u,
  1096u,
  1094u,
  1165u,
  1179u,
  1113u,
  1130u,
  1086u
 };

static const UType JSum_7_19_13_7[]=
 {
  1043u,
  1146u,
  1171u,
  1171u,
  1134u,
  1107u,
  1134u,
  1146u,
  1113u,
  1134u,
  1087u,
  1146u,
  1113u,
  1087u,
  1171u,
  1087u,
  1107u,
  1107u,
  1113u
 };

static const UType JSum_7_19_13_8[]=
 {
  1137u,
  1096u,
  1146u,
  1130u,
  1063u,
  1099u,
  1179u,
  1094u,
  1155u,
  1094u,
  1076u,
  1086u,
  1105u,
  1172u,
  1113u,
  1138u,
  1130u,
  1165u,
  1139u
 };

static const UType JSum_7_19_13_9[]=
 {
  1114u,
  1144u,
  1110u,
  1094u,
  1131u,
  1088u,
  1136u,
  1134u,
  1060u,
  1136u,
  1158u,
  1102u,
  1148u,
  1150u,
  1208u,
  1098u,
  1108u,
  1080u,
  1118u
 };

static const UType JSum_7_19_13_10[]=
 {
  1137u,
  1096u,
  1146u,
  1130u,
  1063u,
  1099u,
  1179u,
  1094u,
  1155u,
  1094u,
  1076u,
  1086u,
  1105u,
  1172u,
  1113u,
  1138u,
  1130u,
  1165u,
  1139u
 };

static const UType JSum_7_19_13_11[]=
 {
  1043u,
  1146u,
  1171u,
  1171u,
  1134u,
  1107u,
  1134u,
  1146u,
  1113u,
  1134u,
  1087u,
  1146u,
  1113u,
  1087u,
  1171u,
  1087u,
  1107u,
  1107u,
  1113u
 };

static const UType JSum_7_19_13_12[]=
 {
  1137u,
  1155u,
  1130u,
  1099u,
  1172u,
  1146u,
  1076u,
  1139u,
  1094u,
  1138u,
  1063u,
  1105u,
  1096u,
  1094u,
  1165u,
  1179u,
  1113u,
  1130u,
  1086u
 };

static const UType JSum_7_19_13_13[]=
 {
  1128u,
  1146u,
  1123u,
  1109u,
  1116u,
  1216u,
  1151u,
  1109u,
  1101u,
  1136u,
  1060u,
  1115u,
  1123u,
  1098u,
  1171u,
  1084u,
  1118u,
  1100u,
  1113u
 };

static const UType JSum_7_19_13_14[]=
 {
  1128u,
  1216u,
  1060u,
  1084u,
  1146u,
  1151u,
  1115u,
  1118u,
  1123u,
  1109u,
  1123u,
  1100u,
  1109u,
  1101u,
  1098u,
  1113u,
  1116u,
  1136u,
  1171u
 };

static const UType JSum_7_19_13_15[]=
 {
  1128u,
  1098u,
  1109u,
  1146u,
  1171u,
  1101u,
  1123u,
  1084u,
  1136u,
  1109u,
  1118u,
  1060u,
  1116u,
  1100u,
  1115u,
  1216u,
  1113u,
  1123u,
  1151u
 };

static const UType JSum_7_19_13_16[]=
 {
  1137u,
  1076u,
  1096u,
  1086u,
  1146u,
  1105u,
  1130u,
  1172u,
  1063u,
  1113u,
  1099u,
  1138u,
  1179u,
  1130u,
  1094u,
  1165u,
  1155u,
  1139u,
  1094u
 };

static const UType JSum_7_19_13_17[]=
 {
  1114u,
  1136u,
  1118u,
  1060u,
  1080u,
  1134u,
  1108u,
  1136u,
  1098u,
  1088u,
  1208u,
  1131u,
  1150u,
  1094u,
  1148u,
  1110u,
  1102u,
  1144u,
  1158u
 };

static const PtrLen<const UType> JTable_7_19_13[]=
 {
  Range(JSum_7_19_13_1),
  Range(JSum_7_19_13_2),
  Range(JSum_7_19_13_3),
  Range(JSum_7_19_13_4),
  Range(JSum_7_19_13_5),
  Range(JSum_7_19_13_6),
  Range(JSum_7_19_13_7),
  Range(JSum_7_19_13_8),
  Range(JSum_7_19_13_9),
  Range(JSum_7_19_13_10),
  Range(JSum_7_19_13_11),
  Range(JSum_7_19_13_12),
  Range(JSum_7_19_13_13),
  Range(JSum_7_19_13_14),
  Range(JSum_7_19_13_15),
  Range(JSum_7_19_13_16),
  Range(JSum_7_19_13_17)
 };

static const UType JSum_7_19_14_1[]=
 {
  1874u,
  1980u,
  1878u,
  1886u,
  1844u,
  1864u,
  1822u,
  1876u,
  1822u,
  1898u,
  1914u,
  1828u,
  1840u,
  1867u,
  1790u,
  1910u,
  1896u,
  1900u,
  1840u
 };

static const UType JSum_7_19_14_2[]=
 {
  1949u,
  1868u,
  1933u,
  1861u,
  1857u,
  1851u,
  1888u,
  1832u,
  1847u,
  1842u,
  1762u,
  1927u,
  1919u,
  1886u,
  1850u,
  1872u,
  1894u,
  1847u,
  1844u
 };

static const UType JSum_7_19_14_3[]=
 {
  1954u,
  1873u,
  1862u,
  1941u,
  1838u,
  1886u,
  1846u,
  1852u,
  1835u,
  1921u,
  1868u,
  1894u,
  1837u,
  1768u,
  1842u,
  1917u,
  1853u,
  1879u,
  1863u
 };

static const UType JSum_7_19_14_4[]=
 {
  1954u,
  1917u,
  1894u,
  1852u,
  1941u,
  1863u,
  1842u,
  1868u,
  1846u,
  1862u,
  1879u,
  1768u,
  1921u,
  1886u,
  1873u,
  1853u,
  1837u,
  1835u,
  1838u
 };

static const UType JSum_7_19_14_5[]=
 {
  1954u,
  1941u,
  1846u,
  1921u,
  1837u,
  1917u,
  1863u,
  1862u,
  1886u,
  1835u,
  1894u,
  1842u,
  1879u,
  1873u,
  1838u,
  1852u,
  1868u,
  1768u,
  1853u
 };

static const UType JSum_7_19_14_6[]=
 {
  1949u,
  1894u,
  1886u,
  1762u,
  1832u,
  1857u,
  1868u,
  1847u,
  1850u,
  1927u,
  1847u,
  1851u,
  1933u,
  1844u,
  1872u,
  1919u,
  1842u,
  1888u,
  1861u
 };

static const UType JSum_7_19_14_7[]=
 {
  1923u,
  1934u,
  1894u,
  1894u,
  1886u,
  1828u,
  1886u,
  1934u,
  1816u,
  1886u,
  1844u,
  1934u,
  1816u,
  1844u,
  1894u,
  1844u,
  1828u,
  1828u,
  1816u
 };

static const UType JSum_7_19_14_8[]=
 {
  1949u,
  1933u,
  1857u,
  1888u,
  1847u,
  1762u,
  1919u,
  1850u,
  1894u,
  1844u,
  1868u,
  1861u,
  1851u,
  1832u,
  1842u,
  1927u,
  1886u,
  1872u,
  1847u
 };

static const UType JSum_7_19_14_9[]=
 {
  1874u,
  1900u,
  1910u,
  1867u,
  1828u,
  1898u,
  1876u,
  1864u,
  1886u,
  1980u,
  1840u,
  1896u,
  1790u,
  1840u,
  1914u,
  1822u,
  1822u,
  1844u,
  1878u
 };

static const UType JSum_7_19_14_10[]=
 {
  1949u,
  1933u,
  1857u,
  1888u,
  1847u,
  1762u,
  1919u,
  1850u,
  1894u,
  1844u,
  1868u,
  1861u,
  1851u,
  1832u,
  1842u,
  1927u,
  1886u,
  1872u,
  1847u
 };

static const UType JSum_7_19_14_11[]=
 {
  1923u,
  1934u,
  1894u,
  1894u,
  1886u,
  1828u,
  1886u,
  1934u,
  1816u,
  1886u,
  1844u,
  1934u,
  1816u,
  1844u,
  1894u,
  1844u,
  1828u,
  1828u,
  1816u
 };

static const UType JSum_7_19_14_12[]=
 {
  1949u,
  1894u,
  1886u,
  1762u,
  1832u,
  1857u,
  1868u,
  1847u,
  1850u,
  1927u,
  1847u,
  1851u,
  1933u,
  1844u,
  1872u,
  1919u,
  1842u,
  1888u,
  1861u
 };

static const UType JSum_7_19_14_13[]=
 {
  1954u,
  1941u,
  1846u,
  1921u,
  1837u,
  1917u,
  1863u,
  1862u,
  1886u,
  1835u,
  1894u,
  1842u,
  1879u,
  1873u,
  1838u,
  1852u,
  1868u,
  1768u,
  1853u
 };

static const UType JSum_7_19_14_14[]=
 {
  1954u,
  1917u,
  1894u,
  1852u,
  1941u,
  1863u,
  1842u,
  1868u,
  1846u,
  1862u,
  1879u,
  1768u,
  1921u,
  1886u,
  1873u,
  1853u,
  1837u,
  1835u,
  1838u
 };

static const UType JSum_7_19_14_15[]=
 {
  1954u,
  1873u,
  1862u,
  1941u,
  1838u,
  1886u,
  1846u,
  1852u,
  1835u,
  1921u,
  1868u,
  1894u,
  1837u,
  1768u,
  1842u,
  1917u,
  1853u,
  1879u,
  1863u
 };

static const UType JSum_7_19_14_16[]=
 {
  1949u,
  1868u,
  1933u,
  1861u,
  1857u,
  1851u,
  1888u,
  1832u,
  1847u,
  1842u,
  1762u,
  1927u,
  1919u,
  1886u,
  1850u,
  1872u,
  1894u,
  1847u,
  1844u
 };

static const UType JSum_7_19_14_17[]=
 {
  1874u,
  1980u,
  1878u,
  1886u,
  1844u,
  1864u,
  1822u,
  1876u,
  1822u,
  1898u,
  1914u,
  1828u,
  1840u,
  1867u,
  1790u,
  1910u,
  1896u,
  1900u,
  1840u
 };

static const PtrLen<const UType> JTable_7_19_14[]=
 {
  Range(JSum_7_19_14_1),
  Range(JSum_7_19_14_2),
  Range(JSum_7_19_14_3),
  Range(JSum_7_19_14_4),
  Range(JSum_7_19_14_5),
  Range(JSum_7_19_14_6),
  Range(JSum_7_19_14_7),
  Range(JSum_7_19_14_8),
  Range(JSum_7_19_14_9),
  Range(JSum_7_19_14_10),
  Range(JSum_7_19_14_11),
  Range(JSum_7_19_14_12),
  Range(JSum_7_19_14_13),
  Range(JSum_7_19_14_14),
  Range(JSum_7_19_14_15),
  Range(JSum_7_19_14_16),
  Range(JSum_7_19_14_17)
 };

static const UType JSum_7_19_15_1[]=
 {
  2074u,
  1976u,
  1990u,
  2086u,
  1924u,
  2018u,
  1984u,
  1960u,
  1948u,
  1998u,
  1978u,
  2006u,
  2020u,
  2062u,
  2020u,
  1984u,
  1938u,
  2028u,
  2043u
 };

static const UType JSum_7_19_15_2[]=
 {
  2117u,
  2000u,
  2000u,
  1967u,
  2092u,
  2003u,
  1962u,
  2018u,
  1940u,
  2027u,
  2020u,
  1985u,
  2009u,
  1985u,
  1930u,
  1988u,
  1980u,
  1995u,
  2019u
 };

static const UType JSum_7_19_15_3[]=
 {
  2062u,
  2060u,
  1992u,
  1981u,
  1917u,
  2081u,
  1986u,
  1951u,
  2014u,
  2014u,
  1980u,
  1975u,
  1972u,
  2039u,
  1948u,
  2014u,
  1989u,
  1989u,
  2073u
 };

static const UType JSum_7_19_15_4[]=
 {
  2062u,
  2014u,
  1975u,
  1951u,
  1981u,
  2073u,
  1948u,
  1980u,
  1986u,
  1992u,
  1989u,
  2039u,
  2014u,
  2081u,
  2060u,
  1989u,
  1972u,
  2014u,
  1917u
 };

static const UType JSum_7_19_15_5[]=
 {
  2062u,
  1981u,
  1986u,
  2014u,
  1972u,
  2014u,
  2073u,
  1992u,
  2081u,
  2014u,
  1975u,
  1948u,
  1989u,
  2060u,
  1917u,
  1951u,
  1980u,
  2039u,
  1989u
 };

static const UType JSum_7_19_15_6[]=
 {
  2117u,
  1980u,
  1985u,
  2020u,
  2018u,
  2092u,
  2000u,
  1995u,
  1930u,
  1985u,
  1940u,
  2003u,
  2000u,
  2019u,
  1988u,
  2009u,
  2027u,
  1962u,
  1967u
 };

static const UType JSum_7_19_15_7[]=
 {
  2079u,
  1979u,
  1935u,
  1935u,
  1986u,
  2046u,
  1986u,
  1979u,
  1987u,
  1986u,
  2053u,
  1979u,
  1987u,
  2053u,
  1935u,
  2053u,
  2046u,
  2046u,
  1987u
 };

static const UType JSum_7_19_15_8[]=
 {
  2117u,
  2000u,
  2092u,
  1962u,
  1940u,
  2020u,
  2009u,
  1930u,
  1980u,
  2019u,
  2000u,
  1967u,
  2003u,
  2018u,
  2027u,
  1985u,
  1985u,
  1988u,
  1995u
 };

static const UType JSum_7_19_15_9[]=
 {
  2074u,
  2028u,
  1984u,
  2062u,
  2006u,
  1998u,
  1960u,
  2018u,
  2086u,
  1976u,
  2043u,
  1938u,
  2020u,
  2020u,
  1978u,
  1948u,
  1984u,
  1924u,
  1990u
 };

static const UType JSum_7_19_15_10[]=
 {
  2117u,
  2000u,
  2092u,
  1962u,
  1940u,
  2020u,
  2009u,
  1930u,
  1980u,
  2019u,
  2000u,
  1967u,
  2003u,
  2018u,
  2027u,
  1985u,
  1985u,
  1988u,
  1995u
 };

static const UType JSum_7_19_15_11[]=
 {
  2079u,
  1979u,
  1935u,
  1935u,
  1986u,
  2046u,
  1986u,
  1979u,
  1987u,
  1986u,
  2053u,
  1979u,
  1987u,
  2053u,
  1935u,
  2053u,
  2046u,
  2046u,
  1987u
 };

static const UType JSum_7_19_15_12[]=
 {
  2117u,
  1980u,
  1985u,
  2020u,
  2018u,
  2092u,
  2000u,
  1995u,
  1930u,
  1985u,
  1940u,
  2003u,
  2000u,
  2019u,
  1988u,
  2009u,
  2027u,
  1962u,
  1967u
 };

static const UType JSum_7_19_15_13[]=
 {
  2062u,
  1981u,
  1986u,
  2014u,
  1972u,
  2014u,
  2073u,
  1992u,
  2081u,
  2014u,
  1975u,
  1948u,
  1989u,
  2060u,
  1917u,
  1951u,
  1980u,
  2039u,
  1989u
 };

static const UType JSum_7_19_15_14[]=
 {
  2062u,
  2014u,
  1975u,
  1951u,
  1981u,
  2073u,
  1948u,
  1980u,
  1986u,
  1992u,
  1989u,
  2039u,
  2014u,
  2081u,
  2060u,
  1989u,
  1972u,
  2014u,
  1917u
 };

static const UType JSum_7_19_15_15[]=
 {
  2062u,
  2060u,
  1992u,
  1981u,
  1917u,
  2081u,
  1986u,
  1951u,
  2014u,
  2014u,
  1980u,
  1975u,
  1972u,
  2039u,
  1948u,
  2014u,
  1989u,
  1989u,
  2073u
 };

static const UType JSum_7_19_15_16[]=
 {
  2117u,
  2000u,
  2000u,
  1967u,
  2092u,
  2003u,
  1962u,
  2018u,
  1940u,
  2027u,
  2020u,
  1985u,
  2009u,
  1985u,
  1930u,
  1988u,
  1980u,
  1995u,
  2019u
 };

static const UType JSum_7_19_15_17[]=
 {
  2074u,
  1976u,
  1990u,
  2086u,
  1924u,
  2018u,
  1984u,
  1960u,
  1948u,
  1998u,
  1978u,
  2006u,
  2020u,
  2062u,
  2020u,
  1984u,
  1938u,
  2028u,
  2043u
 };

static const PtrLen<const UType> JTable_7_19_15[]=
 {
  Range(JSum_7_19_15_1),
  Range(JSum_7_19_15_2),
  Range(JSum_7_19_15_3),
  Range(JSum_7_19_15_4),
  Range(JSum_7_19_15_5),
  Range(JSum_7_19_15_6),
  Range(JSum_7_19_15_7),
  Range(JSum_7_19_15_8),
  Range(JSum_7_19_15_9),
  Range(JSum_7_19_15_10),
  Range(JSum_7_19_15_11),
  Range(JSum_7_19_15_12),
  Range(JSum_7_19_15_13),
  Range(JSum_7_19_15_14),
  Range(JSum_7_19_15_15),
  Range(JSum_7_19_15_16),
  Range(JSum_7_19_15_17)
 };

static const UType JSum_7_19_16_1[]=
 {
  2242u,
  2380u,
  2344u,
  2408u,
  2288u,
  2320u,
  2302u,
  2278u,
  2318u,
  2370u,
  2282u,
  2256u,
  2310u,
  2320u,
  2316u,
  2307u,
  2206u,
  2298u,
  2344u
 };

static const UType JSum_7_19_16_2[]=
 {
  2320u,
  2391u,
  2319u,
  2374u,
  2346u,
  2253u,
  2315u,
  2337u,
  2228u,
  2368u,
  2323u,
  2305u,
  2240u,
  2303u,
  2314u,
  2326u,
  2272u,
  2221u,
  2334u
 };

static const UType JSum_7_19_16_3[]=
 {
  2283u,
  2367u,
  2265u,
  2244u,
  2398u,
  2325u,
  2377u,
  2274u,
  2328u,
  2331u,
  2378u,
  2274u,
  2256u,
  2273u,
  2256u,
  2295u,
  2299u,
  2366u,
  2300u
 };

static const UType JSum_7_19_16_4[]=
 {
  2283u,
  2295u,
  2274u,
  2274u,
  2244u,
  2300u,
  2256u,
  2378u,
  2377u,
  2265u,
  2366u,
  2273u,
  2331u,
  2325u,
  2367u,
  2299u,
  2256u,
  2328u,
  2398u
 };

static const UType JSum_7_19_16_5[]=
 {
  2283u,
  2244u,
  2377u,
  2331u,
  2256u,
  2295u,
  2300u,
  2265u,
  2325u,
  2328u,
  2274u,
  2256u,
  2366u,
  2367u,
  2398u,
  2274u,
  2378u,
  2273u,
  2299u
 };

static const UType JSum_7_19_16_6[]=
 {
  2320u,
  2272u,
  2303u,
  2323u,
  2337u,
  2346u,
  2391u,
  2221u,
  2314u,
  2305u,
  2228u,
  2253u,
  2319u,
  2334u,
  2326u,
  2240u,
  2368u,
  2315u,
  2374u
 };

static const UType JSum_7_19_16_7[]=
 {
  2297u,
  2317u,
  2305u,
  2305u,
  2262u,
  2406u,
  2262u,
  2317u,
  2311u,
  2262u,
  2263u,
  2317u,
  2311u,
  2263u,
  2305u,
  2263u,
  2406u,
  2406u,
  2311u
 };

static const UType JSum_7_19_16_8[]=
 {
  2320u,
  2319u,
  2346u,
  2315u,
  2228u,
  2323u,
  2240u,
  2314u,
  2272u,
  2334u,
  2391u,
  2374u,
  2253u,
  2337u,
  2368u,
  2305u,
  2303u,
  2326u,
  2221u
 };

static const UType JSum_7_19_16_9[]=
 {
  2242u,
  2298u,
  2307u,
  2320u,
  2256u,
  2370u,
  2278u,
  2320u,
  2408u,
  2380u,
  2344u,
  2206u,
  2316u,
  2310u,
  2282u,
  2318u,
  2302u,
  2288u,
  2344u
 };

static const UType JSum_7_19_16_10[]=
 {
  2320u,
  2319u,
  2346u,
  2315u,
  2228u,
  2323u,
  2240u,
  2314u,
  2272u,
  2334u,
  2391u,
  2374u,
  2253u,
  2337u,
  2368u,
  2305u,
  2303u,
  2326u,
  2221u
 };

static const UType JSum_7_19_16_11[]=
 {
  2297u,
  2317u,
  2305u,
  2305u,
  2262u,
  2406u,
  2262u,
  2317u,
  2311u,
  2262u,
  2263u,
  2317u,
  2311u,
  2263u,
  2305u,
  2263u,
  2406u,
  2406u,
  2311u
 };

static const UType JSum_7_19_16_12[]=
 {
  2320u,
  2272u,
  2303u,
  2323u,
  2337u,
  2346u,
  2391u,
  2221u,
  2314u,
  2305u,
  2228u,
  2253u,
  2319u,
  2334u,
  2326u,
  2240u,
  2368u,
  2315u,
  2374u
 };

static const UType JSum_7_19_16_13[]=
 {
  2283u,
  2244u,
  2377u,
  2331u,
  2256u,
  2295u,
  2300u,
  2265u,
  2325u,
  2328u,
  2274u,
  2256u,
  2366u,
  2367u,
  2398u,
  2274u,
  2378u,
  2273u,
  2299u
 };

static const UType JSum_7_19_16_14[]=
 {
  2283u,
  2295u,
  2274u,
  2274u,
  2244u,
  2300u,
  2256u,
  2378u,
  2377u,
  2265u,
  2366u,
  2273u,
  2331u,
  2325u,
  2367u,
  2299u,
  2256u,
  2328u,
  2398u
 };

static const UType JSum_7_19_16_15[]=
 {
  2283u,
  2367u,
  2265u,
  2244u,
  2398u,
  2325u,
  2377u,
  2274u,
  2328u,
  2331u,
  2378u,
  2274u,
  2256u,
  2273u,
  2256u,
  2295u,
  2299u,
  2366u,
  2300u
 };

static const UType JSum_7_19_16_16[]=
 {
  2320u,
  2391u,
  2319u,
  2374u,
  2346u,
  2253u,
  2315u,
  2337u,
  2228u,
  2368u,
  2323u,
  2305u,
  2240u,
  2303u,
  2314u,
  2326u,
  2272u,
  2221u,
  2334u
 };

static const UType JSum_7_19_16_17[]=
 {
  2242u,
  2380u,
  2344u,
  2408u,
  2288u,
  2320u,
  2302u,
  2278u,
  2318u,
  2370u,
  2282u,
  2256u,
  2310u,
  2320u,
  2316u,
  2307u,
  2206u,
  2298u,
  2344u
 };

static const PtrLen<const UType> JTable_7_19_16[]=
 {
  Range(JSum_7_19_16_1),
  Range(JSum_7_19_16_2),
  Range(JSum_7_19_16_3),
  Range(JSum_7_19_16_4),
  Range(JSum_7_19_16_5),
  Range(JSum_7_19_16_6),
  Range(JSum_7_19_16_7),
  Range(JSum_7_19_16_8),
  Range(JSum_7_19_16_9),
  Range(JSum_7_19_16_10),
  Range(JSum_7_19_16_11),
  Range(JSum_7_19_16_12),
  Range(JSum_7_19_16_13),
  Range(JSum_7_19_16_14),
  Range(JSum_7_19_16_15),
  Range(JSum_7_19_16_16),
  Range(JSum_7_19_16_17)
 };

static const UType JSum_7_19_17_1[]=
 {
  2738u,
  2638u,
  2750u,
  2790u,
  2688u,
  2660u,
  2740u,
  2748u,
  2738u,
  2652u,
  2774u,
  2702u,
  2726u,
  2746u,
  2800u,
  2760u,
  2800u,
  2776u,
  2643u
 };

static const UType JSum_7_19_17_2[]=
 {
  2649u,
  2666u,
  2757u,
  2659u,
  2750u,
  2763u,
  2751u,
  2693u,
  2626u,
  2768u,
  2736u,
  2785u,
  2698u,
  2754u,
  2752u,
  2830u,
  2723u,
  2735u,
  2774u
 };

static const UType JSum_7_19_17_3[]=
 {
  2685u,
  2664u,
  2768u,
  2626u,
  2744u,
  2805u,
  2714u,
  2758u,
  2746u,
  2659u,
  2733u,
  2745u,
  2822u,
  2771u,
  2711u,
  2732u,
  2733u,
  2788u,
  2665u
 };

static const UType JSum_7_19_17_4[]=
 {
  2685u,
  2732u,
  2745u,
  2758u,
  2626u,
  2665u,
  2711u,
  2733u,
  2714u,
  2768u,
  2788u,
  2771u,
  2659u,
  2805u,
  2664u,
  2733u,
  2822u,
  2746u,
  2744u
 };

static const UType JSum_7_19_17_5[]=
 {
  2685u,
  2626u,
  2714u,
  2659u,
  2822u,
  2732u,
  2665u,
  2768u,
  2805u,
  2746u,
  2745u,
  2711u,
  2788u,
  2664u,
  2744u,
  2758u,
  2733u,
  2771u,
  2733u
 };

static const UType JSum_7_19_17_6[]=
 {
  2649u,
  2723u,
  2754u,
  2736u,
  2693u,
  2750u,
  2666u,
  2735u,
  2752u,
  2785u,
  2626u,
  2763u,
  2757u,
  2774u,
  2830u,
  2698u,
  2768u,
  2751u,
  2659u
 };

static const UType JSum_7_19_17_7[]=
 {
  2663u,
  2653u,
  2704u,
  2704u,
  2775u,
  2733u,
  2775u,
  2653u,
  2728u,
  2775u,
  2809u,
  2653u,
  2728u,
  2809u,
  2704u,
  2809u,
  2733u,
  2733u,
  2728u
 };

static const UType JSum_7_19_17_8[]=
 {
  2649u,
  2757u,
  2750u,
  2751u,
  2626u,
  2736u,
  2698u,
  2752u,
  2723u,
  2774u,
  2666u,
  2659u,
  2763u,
  2693u,
  2768u,
  2785u,
  2754u,
  2830u,
  2735u
 };

static const UType JSum_7_19_17_9[]=
 {
  2738u,
  2776u,
  2760u,
  2746u,
  2702u,
  2652u,
  2748u,
  2660u,
  2790u,
  2638u,
  2643u,
  2800u,
  2800u,
  2726u,
  2774u,
  2738u,
  2740u,
  2688u,
  2750u
 };

static const UType JSum_7_19_17_10[]=
 {
  2649u,
  2757u,
  2750u,
  2751u,
  2626u,
  2736u,
  2698u,
  2752u,
  2723u,
  2774u,
  2666u,
  2659u,
  2763u,
  2693u,
  2768u,
  2785u,
  2754u,
  2830u,
  2735u
 };

static const UType JSum_7_19_17_11[]=
 {
  2663u,
  2653u,
  2704u,
  2704u,
  2775u,
  2733u,
  2775u,
  2653u,
  2728u,
  2775u,
  2809u,
  2653u,
  2728u,
  2809u,
  2704u,
  2809u,
  2733u,
  2733u,
  2728u
 };

static const UType JSum_7_19_17_12[]=
 {
  2649u,
  2723u,
  2754u,
  2736u,
  2693u,
  2750u,
  2666u,
  2735u,
  2752u,
  2785u,
  2626u,
  2763u,
  2757u,
  2774u,
  2830u,
  2698u,
  2768u,
  2751u,
  2659u
 };

static const UType JSum_7_19_17_13[]=
 {
  2685u,
  2626u,
  2714u,
  2659u,
  2822u,
  2732u,
  2665u,
  2768u,
  2805u,
  2746u,
  2745u,
  2711u,
  2788u,
  2664u,
  2744u,
  2758u,
  2733u,
  2771u,
  2733u
 };

static const UType JSum_7_19_17_14[]=
 {
  2685u,
  2732u,
  2745u,
  2758u,
  2626u,
  2665u,
  2711u,
  2733u,
  2714u,
  2768u,
  2788u,
  2771u,
  2659u,
  2805u,
  2664u,
  2733u,
  2822u,
  2746u,
  2744u
 };

static const UType JSum_7_19_17_15[]=
 {
  2685u,
  2664u,
  2768u,
  2626u,
  2744u,
  2805u,
  2714u,
  2758u,
  2746u,
  2659u,
  2733u,
  2745u,
  2822u,
  2771u,
  2711u,
  2732u,
  2733u,
  2788u,
  2665u
 };

static const UType JSum_7_19_17_16[]=
 {
  2649u,
  2666u,
  2757u,
  2659u,
  2750u,
  2763u,
  2751u,
  2693u,
  2626u,
  2768u,
  2736u,
  2785u,
  2698u,
  2754u,
  2752u,
  2830u,
  2723u,
  2735u,
  2774u
 };

static const UType JSum_7_19_17_17[]=
 {
  2738u,
  2638u,
  2750u,
  2790u,
  2688u,
  2660u,
  2740u,
  2748u,
  2738u,
  2652u,
  2774u,
  2702u,
  2726u,
  2746u,
  2800u,
  2760u,
  2800u,
  2776u,
  2643u
 };

static const PtrLen<const UType> JTable_7_19_17[]=
 {
  Range(JSum_7_19_17_1),
  Range(JSum_7_19_17_2),
  Range(JSum_7_19_17_3),
  Range(JSum_7_19_17_4),
  Range(JSum_7_19_17_5),
  Range(JSum_7_19_17_6),
  Range(JSum_7_19_17_7),
  Range(JSum_7_19_17_8),
  Range(JSum_7_19_17_9),
  Range(JSum_7_19_17_10),
  Range(JSum_7_19_17_11),
  Range(JSum_7_19_17_12),
  Range(JSum_7_19_17_13),
  Range(JSum_7_19_17_14),
  Range(JSum_7_19_17_15),
  Range(JSum_7_19_17_16),
  Range(JSum_7_19_17_17)
 };

static const UType JSum_7_19_18_1[]=
 {
  2994u,
  3118u,
  3030u,
  3166u,
  3118u,
  3060u,
  3042u,
  3010u,
  3108u,
  3168u,
  3086u,
  3060u,
  3196u,
  3140u,
  3080u,
  3144u,
  3112u,
  3051u,
  3102u
 };

static const UType JSum_7_19_18_2[]=
 {
  3200u,
  3035u,
  3066u,
  3167u,
  3057u,
  2991u,
  3048u,
  3026u,
  3132u,
  3103u,
  3193u,
  3065u,
  3078u,
  3088u,
  3147u,
  3108u,
  3089u,
  3114u,
  3078u
 };

static const UType JSum_7_19_18_3[]=
 {
  3184u,
  3122u,
  3131u,
  3047u,
  3129u,
  3068u,
  3142u,
  3134u,
  3087u,
  3061u,
  3049u,
  3224u,
  3061u,
  3000u,
  3078u,
  3034u,
  3041u,
  3116u,
  3077u
 };

static const UType JSum_7_19_18_4[]=
 {
  3184u,
  3034u,
  3224u,
  3134u,
  3047u,
  3077u,
  3078u,
  3049u,
  3142u,
  3131u,
  3116u,
  3000u,
  3061u,
  3068u,
  3122u,
  3041u,
  3061u,
  3087u,
  3129u
 };

static const UType JSum_7_19_18_5[]=
 {
  3184u,
  3047u,
  3142u,
  3061u,
  3061u,
  3034u,
  3077u,
  3131u,
  3068u,
  3087u,
  3224u,
  3078u,
  3116u,
  3122u,
  3129u,
  3134u,
  3049u,
  3000u,
  3041u
 };

static const UType JSum_7_19_18_6[]=
 {
  3200u,
  3089u,
  3088u,
  3193u,
  3026u,
  3057u,
  3035u,
  3114u,
  3147u,
  3065u,
  3132u,
  2991u,
  3066u,
  3078u,
  3108u,
  3078u,
  3103u,
  3048u,
  3167u
 };

static const UType JSum_7_19_18_7[]=
 {
  2991u,
  3017u,
  3057u,
  3057u,
  3096u,
  3132u,
  3096u,
  3017u,
  3163u,
  3096u,
  3133u,
  3017u,
  3163u,
  3133u,
  3057u,
  3133u,
  3132u,
  3132u,
  3163u
 };

static const UType JSum_7_19_18_8[]=
 {
  3200u,
  3066u,
  3057u,
  3048u,
  3132u,
  3193u,
  3078u,
  3147u,
  3089u,
  3078u,
  3035u,
  3167u,
  2991u,
  3026u,
  3103u,
  3065u,
  3088u,
  3108u,
  3114u
 };

static const UType JSum_7_19_18_9[]=
 {
  2994u,
  3051u,
  3144u,
  3140u,
  3060u,
  3168u,
  3010u,
  3060u,
  3166u,
  3118u,
  3102u,
  3112u,
  3080u,
  3196u,
  3086u,
  3108u,
  3042u,
  3118u,
  3030u
 };

static const UType JSum_7_19_18_10[]=
 {
  3200u,
  3066u,
  3057u,
  3048u,
  3132u,
  3193u,
  3078u,
  3147u,
  3089u,
  3078u,
  3035u,
  3167u,
  2991u,
  3026u,
  3103u,
  3065u,
  3088u,
  3108u,
  3114u
 };

static const UType JSum_7_19_18_11[]=
 {
  2991u,
  3017u,
  3057u,
  3057u,
  3096u,
  3132u,
  3096u,
  3017u,
  3163u,
  3096u,
  3133u,
  3017u,
  3163u,
  3133u,
  3057u,
  3133u,
  3132u,
  3132u,
  3163u
 };

static const UType JSum_7_19_18_12[]=
 {
  3200u,
  3089u,
  3088u,
  3193u,
  3026u,
  3057u,
  3035u,
  3114u,
  3147u,
  3065u,
  3132u,
  2991u,
  3066u,
  3078u,
  3108u,
  3078u,
  3103u,
  3048u,
  3167u
 };

static const UType JSum_7_19_18_13[]=
 {
  3184u,
  3047u,
  3142u,
  3061u,
  3061u,
  3034u,
  3077u,
  3131u,
  3068u,
  3087u,
  3224u,
  3078u,
  3116u,
  3122u,
  3129u,
  3134u,
  3049u,
  3000u,
  3041u
 };

static const UType JSum_7_19_18_14[]=
 {
  3184u,
  3034u,
  3224u,
  3134u,
  3047u,
  3077u,
  3078u,
  3049u,
  3142u,
  3131u,
  3116u,
  3000u,
  3061u,
  3068u,
  3122u,
  3041u,
  3061u,
  3087u,
  3129u
 };

static const UType JSum_7_19_18_15[]=
 {
  3184u,
  3122u,
  3131u,
  3047u,
  3129u,
  3068u,
  3142u,
  3134u,
  3087u,
  3061u,
  3049u,
  3224u,
  3061u,
  3000u,
  3078u,
  3034u,
  3041u,
  3116u,
  3077u
 };

static const UType JSum_7_19_18_16[]=
 {
  3200u,
  3035u,
  3066u,
  3167u,
  3057u,
  2991u,
  3048u,
  3026u,
  3132u,
  3103u,
  3193u,
  3065u,
  3078u,
  3088u,
  3147u,
  3108u,
  3089u,
  3114u,
  3078u
 };

static const UType JSum_7_19_18_17[]=
 {
  2994u,
  3118u,
  3030u,
  3166u,
  3118u,
  3060u,
  3042u,
  3010u,
  3108u,
  3168u,
  3086u,
  3060u,
  3196u,
  3140u,
  3080u,
  3144u,
  3112u,
  3051u,
  3102u
 };

static const PtrLen<const UType> JTable_7_19_18[]=
 {
  Range(JSum_7_19_18_1),
  Range(JSum_7_19_18_2),
  Range(JSum_7_19_18_3),
  Range(JSum_7_19_18_4),
  Range(JSum_7_19_18_5),
  Range(JSum_7_19_18_6),
  Range(JSum_7_19_18_7),
  Range(JSum_7_19_18_8),
  Range(JSum_7_19_18_9),
  Range(JSum_7_19_18_10),
  Range(JSum_7_19_18_11),
  Range(JSum_7_19_18_12),
  Range(JSum_7_19_18_13),
  Range(JSum_7_19_18_14),
  Range(JSum_7_19_18_15),
  Range(JSum_7_19_18_16),
  Range(JSum_7_19_18_17)
 };

static const UType JSum_7_19_19_1[]=
 {
  5635u,
  5714u,
  5574u,
  5592u,
  5668u,
  5636u,
  5782u,
  5554u,
  5558u,
  5582u,
  5672u,
  5556u,
  5688u,
  5660u,
  5546u,
  5590u,
  5518u,
  5592u,
  5472u
 };

static const UType JSum_7_19_19_2[]=
 {
  5473u,
  5671u,
  5663u,
  5750u,
  5562u,
  5646u,
  5645u,
  5567u,
  5711u,
  5524u,
  5530u,
  5537u,
  5536u,
  5613u,
  5706u,
  5564u,
  5614u,
  5667u,
  5610u
 };

static const UType JSum_7_19_19_3[]=
 {
  5761u,
  5470u,
  5531u,
  5566u,
  5664u,
  5608u,
  5513u,
  5630u,
  5663u,
  5620u,
  5740u,
  5703u,
  5579u,
  5599u,
  5606u,
  5548u,
  5578u,
  5645u,
  5565u
 };

static const UType JSum_7_19_19_4[]=
 {
  5761u,
  5548u,
  5703u,
  5630u,
  5566u,
  5565u,
  5606u,
  5740u,
  5513u,
  5531u,
  5645u,
  5599u,
  5620u,
  5608u,
  5470u,
  5578u,
  5579u,
  5663u,
  5664u
 };

static const UType JSum_7_19_19_5[]=
 {
  5761u,
  5566u,
  5513u,
  5620u,
  5579u,
  5548u,
  5565u,
  5531u,
  5608u,
  5663u,
  5703u,
  5606u,
  5645u,
  5470u,
  5664u,
  5630u,
  5740u,
  5599u,
  5578u
 };

static const UType JSum_7_19_19_6[]=
 {
  5473u,
  5614u,
  5613u,
  5530u,
  5567u,
  5562u,
  5671u,
  5667u,
  5706u,
  5537u,
  5711u,
  5646u,
  5663u,
  5610u,
  5564u,
  5536u,
  5524u,
  5645u,
  5750u
 };

static const UType JSum_7_19_19_7[]=
 {
  5567u,
  5555u,
  5719u,
  5719u,
  5502u,
  5578u,
  5502u,
  5555u,
  5675u,
  5502u,
  5645u,
  5555u,
  5675u,
  5645u,
  5719u,
  5645u,
  5578u,
  5578u,
  5675u
 };

static const UType JSum_7_19_19_8[]=
 {
  5473u,
  5663u,
  5562u,
  5645u,
  5711u,
  5530u,
  5536u,
  5706u,
  5614u,
  5610u,
  5671u,
  5750u,
  5646u,
  5567u,
  5524u,
  5537u,
  5613u,
  5564u,
  5667u
 };

static const UType JSum_7_19_19_9[]=
 {
  5635u,
  5592u,
  5590u,
  5660u,
  5556u,
  5582u,
  5554u,
  5636u,
  5592u,
  5714u,
  5472u,
  5518u,
  5546u,
  5688u,
  5672u,
  5558u,
  5782u,
  5668u,
  5574u
 };

static const UType JSum_7_19_19_10[]=
 {
  5473u,
  5663u,
  5562u,
  5645u,
  5711u,
  5530u,
  5536u,
  5706u,
  5614u,
  5610u,
  5671u,
  5750u,
  5646u,
  5567u,
  5524u,
  5537u,
  5613u,
  5564u,
  5667u
 };

static const UType JSum_7_19_19_11[]=
 {
  5567u,
  5555u,
  5719u,
  5719u,
  5502u,
  5578u,
  5502u,
  5555u,
  5675u,
  5502u,
  5645u,
  5555u,
  5675u,
  5645u,
  5719u,
  5645u,
  5578u,
  5578u,
  5675u
 };

static const UType JSum_7_19_19_12[]=
 {
  5473u,
  5614u,
  5613u,
  5530u,
  5567u,
  5562u,
  5671u,
  5667u,
  5706u,
  5537u,
  5711u,
  5646u,
  5663u,
  5610u,
  5564u,
  5536u,
  5524u,
  5645u,
  5750u
 };

static const UType JSum_7_19_19_13[]=
 {
  5761u,
  5566u,
  5513u,
  5620u,
  5579u,
  5548u,
  5565u,
  5531u,
  5608u,
  5663u,
  5703u,
  5606u,
  5645u,
  5470u,
  5664u,
  5630u,
  5740u,
  5599u,
  5578u
 };

static const UType JSum_7_19_19_14[]=
 {
  5761u,
  5548u,
  5703u,
  5630u,
  5566u,
  5565u,
  5606u,
  5740u,
  5513u,
  5531u,
  5645u,
  5599u,
  5620u,
  5608u,
  5470u,
  5578u,
  5579u,
  5663u,
  5664u
 };

static const UType JSum_7_19_19_15[]=
 {
  5761u,
  5470u,
  5531u,
  5566u,
  5664u,
  5608u,
  5513u,
  5630u,
  5663u,
  5620u,
  5740u,
  5703u,
  5579u,
  5599u,
  5606u,
  5548u,
  5578u,
  5645u,
  5565u
 };

static const UType JSum_7_19_19_16[]=
 {
  5473u,
  5671u,
  5663u,
  5750u,
  5562u,
  5646u,
  5645u,
  5567u,
  5711u,
  5524u,
  5530u,
  5537u,
  5536u,
  5613u,
  5706u,
  5564u,
  5614u,
  5667u,
  5610u
 };

static const UType JSum_7_19_19_17[]=
 {
  5635u,
  5714u,
  5574u,
  5592u,
  5668u,
  5636u,
  5782u,
  5554u,
  5558u,
  5582u,
  5672u,
  5556u,
  5688u,
  5660u,
  5546u,
  5590u,
  5518u,
  5592u,
  5472u
 };

static const PtrLen<const UType> JTable_7_19_19[]=
 {
  Range(JSum_7_19_19_1),
  Range(JSum_7_19_19_2),
  Range(JSum_7_19_19_3),
  Range(JSum_7_19_19_4),
  Range(JSum_7_19_19_5),
  Range(JSum_7_19_19_6),
  Range(JSum_7_19_19_7),
  Range(JSum_7_19_19_8),
  Range(JSum_7_19_19_9),
  Range(JSum_7_19_19_10),
  Range(JSum_7_19_19_11),
  Range(JSum_7_19_19_12),
  Range(JSum_7_19_19_13),
  Range(JSum_7_19_19_14),
  Range(JSum_7_19_19_15),
  Range(JSum_7_19_19_16),
  Range(JSum_7_19_19_17)
 };

static const UType JSum_7_19_20_1[]=
 {
  24376u,
  24546u,
  24392u,
  24294u,
  24382u,
  24334u,
  24368u,
  24004u,
  24346u,
  24259u,
  24120u,
  24250u,
  24282u,
  24504u,
  24404u,
  24280u,
  23938u,
  24504u,
  24306u
 };

static const UType JSum_7_19_20_2[]=
 {
  24349u,
  24521u,
  24434u,
  24525u,
  24202u,
  23952u,
  24524u,
  24378u,
  24351u,
  24218u,
  24428u,
  24121u,
  24357u,
  24123u,
  24170u,
  24381u,
  24206u,
  24266u,
  24383u
 };

static const UType JSum_7_19_20_3[]=
 {
  24349u,
  24456u,
  24464u,
  24450u,
  24396u,
  24245u,
  24054u,
  24513u,
  24173u,
  24501u,
  24352u,
  24196u,
  24127u,
  24260u,
  24433u,
  24209u,
  23981u,
  24426u,
  24304u
 };

static const UType JSum_7_19_20_4[]=
 {
  24349u,
  24209u,
  24196u,
  24513u,
  24450u,
  24304u,
  24433u,
  24352u,
  24054u,
  24464u,
  24426u,
  24260u,
  24501u,
  24245u,
  24456u,
  23981u,
  24127u,
  24173u,
  24396u
 };

static const UType JSum_7_19_20_5[]=
 {
  24349u,
  24450u,
  24054u,
  24501u,
  24127u,
  24209u,
  24304u,
  24464u,
  24245u,
  24173u,
  24196u,
  24433u,
  24426u,
  24456u,
  24396u,
  24513u,
  24352u,
  24260u,
  23981u
 };

static const UType JSum_7_19_20_6[]=
 {
  24349u,
  24206u,
  24123u,
  24428u,
  24378u,
  24202u,
  24521u,
  24266u,
  24170u,
  24121u,
  24351u,
  23952u,
  24434u,
  24383u,
  24381u,
  24357u,
  24218u,
  24524u,
  24525u
 };

static const UType JSum_7_19_20_7[]=
 {
  24363u,
  24250u,
  24407u,
  24407u,
  24514u,
  24371u,
  24514u,
  24250u,
  24017u,
  24514u,
  24283u,
  24250u,
  24017u,
  24283u,
  24407u,
  24283u,
  24371u,
  24371u,
  24017u
 };

static const UType JSum_7_19_20_8[]=
 {
  24349u,
  24434u,
  24202u,
  24524u,
  24351u,
  24428u,
  24357u,
  24170u,
  24206u,
  24383u,
  24521u,
  24525u,
  23952u,
  24378u,
  24218u,
  24121u,
  24123u,
  24381u,
  24266u
 };

static const UType JSum_7_19_20_9[]=
 {
  24376u,
  24504u,
  24280u,
  24504u,
  24250u,
  24259u,
  24004u,
  24334u,
  24294u,
  24546u,
  24306u,
  23938u,
  24404u,
  24282u,
  24120u,
  24346u,
  24368u,
  24382u,
  24392u
 };

static const UType JSum_7_19_20_10[]=
 {
  24349u,
  24434u,
  24202u,
  24524u,
  24351u,
  24428u,
  24357u,
  24170u,
  24206u,
  24383u,
  24521u,
  24525u,
  23952u,
  24378u,
  24218u,
  24121u,
  24123u,
  24381u,
  24266u
 };

static const UType JSum_7_19_20_11[]=
 {
  24363u,
  24250u,
  24407u,
  24407u,
  24514u,
  24371u,
  24514u,
  24250u,
  24017u,
  24514u,
  24283u,
  24250u,
  24017u,
  24283u,
  24407u,
  24283u,
  24371u,
  24371u,
  24017u
 };

static const UType JSum_7_19_20_12[]=
 {
  24349u,
  24206u,
  24123u,
  24428u,
  24378u,
  24202u,
  24521u,
  24266u,
  24170u,
  24121u,
  24351u,
  23952u,
  24434u,
  24383u,
  24381u,
  24357u,
  24218u,
  24524u,
  24525u
 };

static const UType JSum_7_19_20_13[]=
 {
  24349u,
  24450u,
  24054u,
  24501u,
  24127u,
  24209u,
  24304u,
  24464u,
  24245u,
  24173u,
  24196u,
  24433u,
  24426u,
  24456u,
  24396u,
  24513u,
  24352u,
  24260u,
  23981u
 };

static const UType JSum_7_19_20_14[]=
 {
  24349u,
  24209u,
  24196u,
  24513u,
  24450u,
  24304u,
  24433u,
  24352u,
  24054u,
  24464u,
  24426u,
  24260u,
  24501u,
  24245u,
  24456u,
  23981u,
  24127u,
  24173u,
  24396u
 };

static const UType JSum_7_19_20_15[]=
 {
  24349u,
  24456u,
  24464u,
  24450u,
  24396u,
  24245u,
  24054u,
  24513u,
  24173u,
  24501u,
  24352u,
  24196u,
  24127u,
  24260u,
  24433u,
  24209u,
  23981u,
  24426u,
  24304u
 };

static const UType JSum_7_19_20_16[]=
 {
  24349u,
  24521u,
  24434u,
  24525u,
  24202u,
  23952u,
  24524u,
  24378u,
  24351u,
  24218u,
  24428u,
  24121u,
  24357u,
  24123u,
  24170u,
  24381u,
  24206u,
  24266u,
  24383u
 };

static const UType JSum_7_19_20_17[]=
 {
  24376u,
  24546u,
  24392u,
  24294u,
  24382u,
  24334u,
  24368u,
  24004u,
  24346u,
  24259u,
  24120u,
  24250u,
  24282u,
  24504u,
  24404u,
  24280u,
  23938u,
  24504u,
  24306u
 };

static const PtrLen<const UType> JTable_7_19_20[]=
 {
  Range(JSum_7_19_20_1),
  Range(JSum_7_19_20_2),
  Range(JSum_7_19_20_3),
  Range(JSum_7_19_20_4),
  Range(JSum_7_19_20_5),
  Range(JSum_7_19_20_6),
  Range(JSum_7_19_20_7),
  Range(JSum_7_19_20_8),
  Range(JSum_7_19_20_9),
  Range(JSum_7_19_20_10),
  Range(JSum_7_19_20_11),
  Range(JSum_7_19_20_12),
  Range(JSum_7_19_20_13),
  Range(JSum_7_19_20_14),
  Range(JSum_7_19_20_15),
  Range(JSum_7_19_20_16),
  Range(JSum_7_19_20_17)
 };

static const UType JSum_7_19_21_1[]=
 {
  102028u,
  101322u,
  102558u,
  101880u,
  102002u,
  101882u,
  101866u,
  102232u,
  102222u,
  101808u,
  102196u,
  102120u,
  102234u,
  101640u,
  102148u,
  102498u,
  102496u,
  102395u,
  102410u
 };

static const UType JSum_7_19_21_2[]=
 {
  101758u,
  102498u,
  102556u,
  102345u,
  102258u,
  102336u,
  101692u,
  101661u,
  102255u,
  102175u,
  102148u,
  102017u,
  101531u,
  102312u,
  102357u,
  101664u,
  102133u,
  101813u,
  102428u
 };

static const UType JSum_7_19_21_3[]=
 {
  101776u,
  101993u,
  102221u,
  101998u,
  101815u,
  102257u,
  102185u,
  102158u,
  102300u,
  102306u,
  102109u,
  102592u,
  102278u,
  101896u,
  102230u,
  101063u,
  102141u,
  102296u,
  102323u
 };

static const UType JSum_7_19_21_4[]=
 {
  101776u,
  101063u,
  102592u,
  102158u,
  101998u,
  102323u,
  102230u,
  102109u,
  102185u,
  102221u,
  102296u,
  101896u,
  102306u,
  102257u,
  101993u,
  102141u,
  102278u,
  102300u,
  101815u
 };

static const UType JSum_7_19_21_5[]=
 {
  101776u,
  101998u,
  102185u,
  102306u,
  102278u,
  101063u,
  102323u,
  102221u,
  102257u,
  102300u,
  102592u,
  102230u,
  102296u,
  101993u,
  101815u,
  102158u,
  102109u,
  101896u,
  102141u
 };

static const UType JSum_7_19_21_6[]=
 {
  101758u,
  102133u,
  102312u,
  102148u,
  101661u,
  102258u,
  102498u,
  101813u,
  102357u,
  102017u,
  102255u,
  102336u,
  102556u,
  102428u,
  101664u,
  101531u,
  102175u,
  101692u,
  102345u
 };

static const UType JSum_7_19_21_7[]=
 {
  102269u,
  102054u,
  102199u,
  102199u,
  102447u,
  101482u,
  102447u,
  102054u,
  102379u,
  102447u,
  101995u,
  102054u,
  102379u,
  101995u,
  102199u,
  101995u,
  101482u,
  101482u,
  102379u
 };

static const UType JSum_7_19_21_8[]=
 {
  101758u,
  102556u,
  102258u,
  101692u,
  102255u,
  102148u,
  101531u,
  102357u,
  102133u,
  102428u,
  102498u,
  102345u,
  102336u,
  101661u,
  102175u,
  102017u,
  102312u,
  101664u,
  101813u
 };

static const UType JSum_7_19_21_9[]=
 {
  102028u,
  102395u,
  102498u,
  101640u,
  102120u,
  101808u,
  102232u,
  101882u,
  101880u,
  101322u,
  102410u,
  102496u,
  102148u,
  102234u,
  102196u,
  102222u,
  101866u,
  102002u,
  102558u
 };

static const UType JSum_7_19_21_10[]=
 {
  101758u,
  102556u,
  102258u,
  101692u,
  102255u,
  102148u,
  101531u,
  102357u,
  102133u,
  102428u,
  102498u,
  102345u,
  102336u,
  101661u,
  102175u,
  102017u,
  102312u,
  101664u,
  101813u
 };

static const UType JSum_7_19_21_11[]=
 {
  102269u,
  102054u,
  102199u,
  102199u,
  102447u,
  101482u,
  102447u,
  102054u,
  102379u,
  102447u,
  101995u,
  102054u,
  102379u,
  101995u,
  102199u,
  101995u,
  101482u,
  101482u,
  102379u
 };

static const UType JSum_7_19_21_12[]=
 {
  101758u,
  102133u,
  102312u,
  102148u,
  101661u,
  102258u,
  102498u,
  101813u,
  102357u,
  102017u,
  102255u,
  102336u,
  102556u,
  102428u,
  101664u,
  101531u,
  102175u,
  101692u,
  102345u
 };

static const UType JSum_7_19_21_13[]=
 {
  101776u,
  101998u,
  102185u,
  102306u,
  102278u,
  101063u,
  102323u,
  102221u,
  102257u,
  102300u,
  102592u,
  102230u,
  102296u,
  101993u,
  101815u,
  102158u,
  102109u,
  101896u,
  102141u
 };

static const UType JSum_7_19_21_14[]=
 {
  101776u,
  101063u,
  102592u,
  102158u,
  101998u,
  102323u,
  102230u,
  102109u,
  102185u,
  102221u,
  102296u,
  101896u,
  102306u,
  102257u,
  101993u,
  102141u,
  102278u,
  102300u,
  101815u
 };

static const UType JSum_7_19_21_15[]=
 {
  101776u,
  101993u,
  102221u,
  101998u,
  101815u,
  102257u,
  102185u,
  102158u,
  102300u,
  102306u,
  102109u,
  102592u,
  102278u,
  101896u,
  102230u,
  101063u,
  102141u,
  102296u,
  102323u
 };

static const UType JSum_7_19_21_16[]=
 {
  101758u,
  102498u,
  102556u,
  102345u,
  102258u,
  102336u,
  101692u,
  101661u,
  102255u,
  102175u,
  102148u,
  102017u,
  101531u,
  102312u,
  102357u,
  101664u,
  102133u,
  101813u,
  102428u
 };

static const UType JSum_7_19_21_17[]=
 {
  102028u,
  101322u,
  102558u,
  101880u,
  102002u,
  101882u,
  101866u,
  102232u,
  102222u,
  101808u,
  102196u,
  102120u,
  102234u,
  101640u,
  102148u,
  102498u,
  102496u,
  102395u,
  102410u
 };

static const PtrLen<const UType> JTable_7_19_21[]=
 {
  Range(JSum_7_19_21_1),
  Range(JSum_7_19_21_2),
  Range(JSum_7_19_21_3),
  Range(JSum_7_19_21_4),
  Range(JSum_7_19_21_5),
  Range(JSum_7_19_21_6),
  Range(JSum_7_19_21_7),
  Range(JSum_7_19_21_8),
  Range(JSum_7_19_21_9),
  Range(JSum_7_19_21_10),
  Range(JSum_7_19_21_11),
  Range(JSum_7_19_21_12),
  Range(JSum_7_19_21_13),
  Range(JSum_7_19_21_14),
  Range(JSum_7_19_21_15),
  Range(JSum_7_19_21_16),
  Range(JSum_7_19_21_17)
 };

static const UType JSum_7_19_22_1[]=
 {
  170790u,
  171006u,
  169868u,
  170242u,
  170350u,
  170010u,
  169694u,
  170339u,
  170040u,
  170004u,
  170160u,
  170060u,
  169762u,
  170616u,
  169860u,
  170142u,
  170174u,
  169340u,
  170772u
 };

static const UType JSum_7_19_22_2[]=
 {
  170014u,
  169761u,
  169710u,
  170502u,
  170164u,
  170026u,
  170031u,
  170286u,
  170649u,
  170561u,
  170704u,
  170625u,
  169041u,
  170550u,
  170011u,
  169936u,
  169971u,
  170450u,
  170237u
 };

static const UType JSum_7_19_22_3[]=
 {
  170500u,
  169481u,
  170060u,
  170337u,
  170442u,
  169949u,
  169102u,
  170593u,
  169824u,
  170071u,
  170581u,
  170698u,
  170463u,
  170627u,
  169890u,
  170033u,
  170154u,
  170322u,
  170102u
 };

static const UType JSum_7_19_22_4[]=
 {
  170500u,
  170033u,
  170698u,
  170593u,
  170337u,
  170102u,
  169890u,
  170581u,
  169102u,
  170060u,
  170322u,
  170627u,
  170071u,
  169949u,
  169481u,
  170154u,
  170463u,
  169824u,
  170442u
 };

static const UType JSum_7_19_22_5[]=
 {
  170500u,
  170337u,
  169102u,
  170071u,
  170463u,
  170033u,
  170102u,
  170060u,
  169949u,
  169824u,
  170698u,
  169890u,
  170322u,
  169481u,
  170442u,
  170593u,
  170581u,
  170627u,
  170154u
 };

static const UType JSum_7_19_22_6[]=
 {
  170014u,
  169971u,
  170550u,
  170704u,
  170286u,
  170164u,
  169761u,
  170450u,
  170011u,
  170625u,
  170649u,
  170026u,
  169710u,
  170237u,
  169936u,
  169041u,
  170561u,
  170031u,
  170502u
 };

static const UType JSum_7_19_22_7[]=
 {
  170559u,
  170295u,
  169946u,
  169946u,
  169899u,
  170965u,
  169899u,
  170295u,
  169742u,
  169899u,
  170043u,
  170295u,
  169742u,
  170043u,
  169946u,
  170043u,
  170965u,
  170965u,
  169742u
 };

static const UType JSum_7_19_22_8[]=
 {
  170014u,
  169710u,
  170164u,
  170031u,
  170649u,
  170704u,
  169041u,
  170011u,
  169971u,
  170237u,
  169761u,
  170502u,
  170026u,
  170286u,
  170561u,
  170625u,
  170550u,
  169936u,
  170450u
 };

static const UType JSum_7_19_22_9[]=
 {
  170790u,
  169340u,
  170142u,
  170616u,
  170060u,
  170004u,
  170339u,
  170010u,
  170242u,
  171006u,
  170772u,
  170174u,
  169860u,
  169762u,
  170160u,
  170040u,
  169694u,
  170350u,
  169868u
 };

static const UType JSum_7_19_22_10[]=
 {
  170014u,
  169710u,
  170164u,
  170031u,
  170649u,
  170704u,
  169041u,
  170011u,
  169971u,
  170237u,
  169761u,
  170502u,
  170026u,
  170286u,
  170561u,
  170625u,
  170550u,
  169936u,
  170450u
 };

static const UType JSum_7_19_22_11[]=
 {
  170559u,
  170295u,
  169946u,
  169946u,
  169899u,
  170965u,
  169899u,
  170295u,
  169742u,
  169899u,
  170043u,
  170295u,
  169742u,
  170043u,
  169946u,
  170043u,
  170965u,
  170965u,
  169742u
 };

static const UType JSum_7_19_22_12[]=
 {
  170014u,
  169971u,
  170550u,
  170704u,
  170286u,
  170164u,
  169761u,
  170450u,
  170011u,
  170625u,
  170649u,
  170026u,
  169710u,
  170237u,
  169936u,
  169041u,
  170561u,
  170031u,
  170502u
 };

static const UType JSum_7_19_22_13[]=
 {
  170500u,
  170337u,
  169102u,
  170071u,
  170463u,
  170033u,
  170102u,
  170060u,
  169949u,
  169824u,
  170698u,
  169890u,
  170322u,
  169481u,
  170442u,
  170593u,
  170581u,
  170627u,
  170154u
 };

static const UType JSum_7_19_22_14[]=
 {
  170500u,
  170033u,
  170698u,
  170593u,
  170337u,
  170102u,
  169890u,
  170581u,
  169102u,
  170060u,
  170322u,
  170627u,
  170071u,
  169949u,
  169481u,
  170154u,
  170463u,
  169824u,
  170442u
 };

static const UType JSum_7_19_22_15[]=
 {
  170500u,
  169481u,
  170060u,
  170337u,
  170442u,
  169949u,
  169102u,
  170593u,
  169824u,
  170071u,
  170581u,
  170698u,
  170463u,
  170627u,
  169890u,
  170033u,
  170154u,
  170322u,
  170102u
 };

static const UType JSum_7_19_22_16[]=
 {
  170014u,
  169761u,
  169710u,
  170502u,
  170164u,
  170026u,
  170031u,
  170286u,
  170649u,
  170561u,
  170704u,
  170625u,
  169041u,
  170550u,
  170011u,
  169936u,
  169971u,
  170450u,
  170237u
 };

static const UType JSum_7_19_22_17[]=
 {
  170790u,
  171006u,
  169868u,
  170242u,
  170350u,
  170010u,
  169694u,
  170339u,
  170040u,
  170004u,
  170160u,
  170060u,
  169762u,
  170616u,
  169860u,
  170142u,
  170174u,
  169340u,
  170772u
 };

static const PtrLen<const UType> JTable_7_19_22[]=
 {
  Range(JSum_7_19_22_1),
  Range(JSum_7_19_22_2),
  Range(JSum_7_19_22_3),
  Range(JSum_7_19_22_4),
  Range(JSum_7_19_22_5),
  Range(JSum_7_19_22_6),
  Range(JSum_7_19_22_7),
  Range(JSum_7_19_22_8),
  Range(JSum_7_19_22_9),
  Range(JSum_7_19_22_10),
  Range(JSum_7_19_22_11),
  Range(JSum_7_19_22_12),
  Range(JSum_7_19_22_13),
  Range(JSum_7_19_22_14),
  Range(JSum_7_19_22_15),
  Range(JSum_7_19_22_16),
  Range(JSum_7_19_22_17)
 };

static const TestSet::JTable JSet_7_19[]=
 {
  { 191u , Range(JTable_7_19_1) },
  { 419u , Range(JTable_7_19_2) },
  { 571u , Range(JTable_7_19_3) },
  { 647u , Range(JTable_7_19_4) },
  { 1483u , Range(JTable_7_19_5) },
  { 2927u , Range(JTable_7_19_6) },
  { 4523u , Range(JTable_7_19_7) },
  { 6271u , Range(JTable_7_19_8) },
  { 7411u , Range(JTable_7_19_9) },
  { 8779u , Range(JTable_7_19_10) },
  { 13567u , Range(JTable_7_19_11) },
  { 17291u , Range(JTable_7_19_12) },
  { 21319u , Range(JTable_7_19_13) },
  { 35531u , Range(JTable_7_19_14) },
  { 38039u , Range(JTable_7_19_15) },
  { 43891u , Range(JTable_7_19_16) },
  { 51871u , Range(JTable_7_19_17) },
  { 58787u , Range(JTable_7_19_18) },
  { 106591u , Range(JTable_7_19_19) },
  { 461891u , Range(JTable_7_19_20) },
  { 1939939u , Range(JTable_7_19_21) },
  { 3233231u , Range(JTable_7_19_22) }
 };

static const TestSet PSet7[]=
 {
  { 2u , Range(JSet_7_2) },
  { 3u , Range(JSet_7_3) },
  { 5u , Range(JSet_7_5) },
  { 7u , Range(JSet_7_7) },
  { 11u , Range(JSet_7_11) },
  { 13u , Range(JSet_7_13) },
  { 17u , Range(JSet_7_17) },
  { 19u , Range(JSet_7_19) }
 };

static const UType QSet7[]=
 {
  3u /* gen = 2 */,
  7u /* gen = 3 */,
  11u /* gen = 2 */,
  23u /* gen = 5 */,
  31u /* gen = 3 */,
  43u /* gen = 3 */,
  67u /* gen = 2 */,
  71u /* gen = 7 */,
  79u /* gen = 3 */,
  103u /* gen = 5 */,
  131u /* gen = 2 */,
  191u /* gen = 19 */,
  211u /* gen = 2 */,
  239u /* gen = 7 */,
  331u /* gen = 3 */,
  419u /* gen = 2 */,
  443u /* gen = 2 */,
  463u /* gen = 3 */,
  547u /* gen = 2 */,
  571u /* gen = 3 */,
  647u /* gen = 5 */,
  859u /* gen = 2 */,
  911u /* gen = 17 */,
  1123u /* gen = 2 */,
  1327u /* gen = 3 */,
  1483u /* gen = 2 */,
  1871u /* gen = 14 */,
  2003u /* gen = 5 */,
  2311u /* gen = 3 */,
  2731u /* gen = 3 */,
  2927u /* gen = 5 */,
  3571u /* gen = 2 */,
  4523u /* gen = 5 */,
  6007u /* gen = 3 */,
  6271u /* gen = 11 */,
  7411u /* gen = 2 */,
  8779u /* gen = 11 */,
  9283u /* gen = 2 */,
  13567u /* gen = 3 */,
  17291u /* gen = 6 */,
  21319u /* gen = 14 */,
  35531u /* gen = 6 */,
  38039u /* gen = 7 */,
  43891u /* gen = 3 */,
  46411u /* gen = 3 */,
  51871u /* gen = 7 */,
  58787u /* gen = 2 */,
  72931u /* gen = 10 */,
  102103u /* gen = 5 */,
  106591u /* gen = 3 */,
  461891u /* gen = 18 */,
  1939939u /* gen = 2 */,
  3233231u /* gen = 14 */
 };

static const uint8 P7[]=
 {
  0x6A, 0x01, 0x94, 0x00
 };

static const uint8 Q7[]=
 {
  0x96, 0x11, 0xE8, 0xA5,  0xCD, 0xC8, 0x4A, 0x8E,  0x46, 0xC6, 0xF8, 0x11,  0xA1, 0x0B, 0x2F, 0x53,
  0x64, 0xEB, 0xA2, 0x19,  0x1E, 0x3D, 0x3C, 0x5E,  0x78, 0xF6, 0x76, 0xFE,  0x75, 0x08, 0x61, 0x78,
  0x50, 0xBF, 0xEC, 0xBF,  0x1E, 0xE6, 0xFD, 0xD1,  0xC9, 0xB8, 0x9B, 0x36,  0x7E, 0x7B, 0xC7, 0x66,
  0x7A, 0x23, 0x2C, 0xC7,  0x98, 0x96, 0xE6, 0x2B,  0xA0, 0xAD, 0x68, 0xCD,  0xC8, 0x67, 0x89, 0x5F,
  0x29, 0xED, 0xD1, 0x79,  0xD2, 0xCC, 0x18, 0x4D,  0x44, 0x00, 0x00, 0x00
 };

/* Data 8 */

static const TestSet::JTable JSet_8_2[]=
 {
  { 3u , Empty },
  { 7u , Empty },
  { 11u , Empty },
  { 23u , Empty },
  { 31u , Empty },
  { 43u , Empty },
  { 47u , Empty },
  { 67u , Empty },
  { 71u , Empty },
  { 79u , Empty },
  { 103u , Empty },
  { 131u , Empty },
  { 139u , Empty },
  { 191u , Empty },
  { 211u , Empty },
  { 239u , Empty },
  { 331u , Empty },
  { 419u , Empty },
  { 443u , Empty },
  { 463u , Empty },
  { 547u , Empty },
  { 571u , Empty },
  { 599u , Empty },
  { 647u , Empty },
  { 691u , Empty },
  { 859u , Empty },
  { 911u , Empty },
  { 967u , Empty },
  { 1123u , Empty },
  { 1327u , Empty },
  { 1483u , Empty },
  { 1871u , Empty },
  { 2003u , Empty },
  { 2311u , Empty },
  { 2347u , Empty },
  { 2531u , Empty },
  { 2731u , Empty },
  { 2927u , Empty },
  { 3571u , Empty },
  { 3911u , Empty },
  { 4523u , Empty },
  { 4831u , Empty },
  { 6007u , Empty },
  { 6271u , Empty },
  { 7411u , Empty },
  { 7591u , Empty },
  { 8779u , Empty },
  { 8971u , Empty },
  { 9283u , Empty },
  { 10627u , Empty },
  { 11731u , Empty },
  { 13567u , Empty },
  { 17291u , Empty },
  { 21319u , Empty },
  { 28843u , Empty },
  { 35531u , Empty },
  { 38039u , Empty },
  { 43891u , Empty },
  { 46411u , Empty },
  { 51871u , Empty },
  { 58787u , Empty },
  { 62791u , Empty },
  { 72931u , Empty },
  { 91771u , Empty },
  { 102103u , Empty },
  { 106591u , Empty },
  { 111827u , Empty },
  { 138139u , Empty },
  { 336491u , Empty },
  { 355811u , Empty },
  { 461891u , Empty },
  { 520031u , Empty },
  { 782783u , Empty },
  { 903211u , Empty },
  { 1193011u , Empty },
  { 1939939u , Empty },
  { 2348347u , Empty },
  { 2624623u , Empty },
  { 2897311u , Empty },
  { 3233231u , Empty },
  { 13123111u , Empty },
  { 17160991u , Empty }
 };

static const UType JSum_8_3_1_1[]=
 {
  2u,
  0u,
  3u
 };

static const PtrLen<const UType> JTable_8_3_1[]=
 {
  Range(JSum_8_3_1_1)
 };

static const UType JSum_8_3_2_1[]=
 {
  11u,
  12u,
  6u
 };

static const PtrLen<const UType> JTable_8_3_2[]=
 {
  Range(JSum_8_3_2_1)
 };

static const UType JSum_8_3_3_1[]=
 {
  11u,
  18u,
  12u
 };

static const PtrLen<const UType> JTable_8_3_3[]=
 {
  Range(JSum_8_3_3_1)
 };

static const UType JSum_8_3_4_1[]=
 {
  20u,
  27u,
  18u
 };

static const PtrLen<const UType> JTable_8_3_4[]=
 {
  Range(JSum_8_3_4_1)
 };

static const UType JSum_8_3_5_1[]=
 {
  20u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_8_3_5[]=
 {
  Range(JSum_8_3_5_1)
 };

static const UType JSum_8_3_6_1[]=
 {
  38u,
  36u,
  27u
 };

static const PtrLen<const UType> JTable_8_3_6[]=
 {
  Range(JSum_8_3_6_1)
 };

static const UType JSum_8_3_7_1[]=
 {
  38u,
  51u,
  48u
 };

static const PtrLen<const UType> JTable_8_3_7[]=
 {
  Range(JSum_8_3_7_1)
 };

static const UType JSum_8_3_8_1[]=
 {
  74u,
  75u,
  60u
 };

static const PtrLen<const UType> JTable_8_3_8[]=
 {
  Range(JSum_8_3_8_1)
 };

static const UType JSum_8_3_9_1[]=
 {
  110u,
  99u,
  120u
 };

static const PtrLen<const UType> JTable_8_3_9[]=
 {
  Range(JSum_8_3_9_1)
 };

static const UType JSum_8_3_10_1[]=
 {
  146u,
  147u,
  168u
 };

static const PtrLen<const UType> JTable_8_3_10[]=
 {
  Range(JSum_8_3_10_1)
 };

static const UType JSum_8_3_11_1[]=
 {
  182u,
  195u,
  168u
 };

static const PtrLen<const UType> JTable_8_3_11[]=
 {
  Range(JSum_8_3_11_1)
 };

static const UType JSum_8_3_12_1[]=
 {
  200u,
  174u,
  195u
 };

static const PtrLen<const UType> JTable_8_3_12[]=
 {
  Range(JSum_8_3_12_1)
 };

static const UType JSum_8_3_13_1[]=
 {
  227u,
  216u,
  246u
 };

static const PtrLen<const UType> JTable_8_3_13[]=
 {
  Range(JSum_8_3_13_1)
 };

static const UType JSum_8_3_14_1[]=
 {
  290u,
  267u,
  300u
 };

static const PtrLen<const UType> JTable_8_3_14[]=
 {
  Range(JSum_8_3_14_1)
 };

static const UType JSum_8_3_15_1[]=
 {
  308u,
  342u,
  315u
 };

static const PtrLen<const UType> JTable_8_3_15[]=
 {
  Range(JSum_8_3_15_1)
 };

static const UType JSum_8_3_16_1[]=
 {
  362u,
  363u,
  396u
 };

static const PtrLen<const UType> JTable_8_3_16[]=
 {
  Range(JSum_8_3_16_1)
 };

static const UType JSum_8_3_17_1[]=
 {
  443u,
  462u,
  420u
 };

static const PtrLen<const UType> JTable_8_3_17[]=
 {
  Range(JSum_8_3_17_1)
 };

static const UType JSum_8_3_18_1[]=
 {
  506u,
  507u,
  468u
 };

static const PtrLen<const UType> JTable_8_3_18[]=
 {
  Range(JSum_8_3_18_1)
 };

static const UType JSum_8_3_19_1[]=
 {
  740u,
  774u,
  795u
 };

static const PtrLen<const UType> JTable_8_3_19[]=
 {
  Range(JSum_8_3_19_1)
 };

static const UType JSum_8_3_20_1[]=
 {
  803u,
  792u,
  750u
 };

static const PtrLen<const UType> JTable_8_3_20[]=
 {
  Range(JSum_8_3_20_1)
 };

static const UType JSum_8_3_21_1[]=
 {
  875u,
  930u,
  924u
 };

static const PtrLen<const UType> JTable_8_3_21[]=
 {
  Range(JSum_8_3_21_1)
 };

static const UType JSum_8_3_22_1[]=
 {
  1190u,
  1155u,
  1224u
 };

static const PtrLen<const UType> JTable_8_3_22[]=
 {
  Range(JSum_8_3_22_1)
 };

static const UType JSum_8_3_23_1[]=
 {
  1586u,
  1656u,
  1587u
 };

static const PtrLen<const UType> JTable_8_3_23[]=
 {
  Range(JSum_8_3_23_1)
 };

static const UType JSum_8_3_24_1[]=
 {
  2027u,
  2028u,
  1950u
 };

static const PtrLen<const UType> JTable_8_3_24[]=
 {
  Range(JSum_8_3_24_1)
 };

static const UType JSum_8_3_25_1[]=
 {
  2099u,
  2130u,
  2040u
 };

static const PtrLen<const UType> JTable_8_3_25[]=
 {
  Range(JSum_8_3_25_1)
 };

static const UType JSum_8_3_26_1[]=
 {
  2432u,
  2451u,
  2526u
 };

static const PtrLen<const UType> JTable_8_3_26[]=
 {
  Range(JSum_8_3_26_1)
 };

static const UType JSum_8_3_27_1[]=
 {
  2540u,
  2475u,
  2574u
 };

static const PtrLen<const UType> JTable_8_3_27[]=
 {
  Range(JSum_8_3_27_1)
 };

static const UType JSum_8_3_28_1[]=
 {
  2891u,
  2988u,
  2898u
 };

static const PtrLen<const UType> JTable_8_3_28[]=
 {
  Range(JSum_8_3_28_1)
 };

static const UType JSum_8_3_29_1[]=
 {
  2972u,
  3051u,
  2946u
 };

static const PtrLen<const UType> JTable_8_3_29[]=
 {
  Range(JSum_8_3_29_1)
 };

static const UType JSum_8_3_30_1[]=
 {
  3098u,
  3147u,
  3036u
 };

static const PtrLen<const UType> JTable_8_3_30[]=
 {
  Range(JSum_8_3_30_1)
 };

static const UType JSum_8_3_31_1[]=
 {
  3602u,
  3483u,
  3540u
 };

static const PtrLen<const UType> JTable_8_3_31[]=
 {
  Range(JSum_8_3_31_1)
 };

static const UType JSum_8_3_32_1[]=
 {
  3971u,
  3846u,
  3912u
 };

static const PtrLen<const UType> JTable_8_3_32[]=
 {
  Range(JSum_8_3_32_1)
 };

static const UType JSum_8_3_33_1[]=
 {
  4592u,
  4458u,
  4515u
 };

static const PtrLen<const UType> JTable_8_3_33[]=
 {
  Range(JSum_8_3_33_1)
 };

static const UType JSum_8_3_34_1[]=
 {
  7058u,
  7203u,
  7056u
 };

static const PtrLen<const UType> JTable_8_3_34[]=
 {
  Range(JSum_8_3_34_1)
 };

static const UType JSum_8_3_35_1[]=
 {
  9722u,
  9531u,
  9588u
 };

static const PtrLen<const UType> JTable_8_3_35[]=
 {
  Range(JSum_8_3_35_1)
 };

static const UType JSum_8_3_36_1[]=
 {
  14699u,
  14490u,
  14700u
 };

static const PtrLen<const UType> JTable_8_3_36[]=
 {
  Range(JSum_8_3_36_1)
 };

static const UType JSum_8_3_37_1[]=
 {
  15491u,
  15336u,
  15582u
 };

static const PtrLen<const UType> JTable_8_3_37[]=
 {
  Range(JSum_8_3_37_1)
 };

static const UType JSum_8_3_38_1[]=
 {
  17147u,
  17316u,
  17406u
 };

static const PtrLen<const UType> JTable_8_3_38[]=
 {
  Range(JSum_8_3_38_1)
 };

static const UType JSum_8_3_39_1[]=
 {
  20774u,
  21060u,
  20955u
 };

static const PtrLen<const UType> JTable_8_3_39[]=
 {
  Range(JSum_8_3_39_1)
 };

static const UType JSum_8_3_40_1[]=
 {
  24275u,
  24480u,
  24174u
 };

static const PtrLen<const UType> JTable_8_3_40[]=
 {
  Range(JSum_8_3_40_1)
 };

static const UType JSum_8_3_41_1[]=
 {
  30422u,
  30771u,
  30576u
 };

static const PtrLen<const UType> JTable_8_3_41[]=
 {
  Range(JSum_8_3_41_1)
 };

static const UType JSum_8_3_42_1[]=
 {
  33968u,
  33891u,
  34242u
 };

static const PtrLen<const UType> JTable_8_3_42[]=
 {
  Range(JSum_8_3_42_1)
 };

static const UType JSum_8_3_43_1[]=
 {
  35552u,
  35706u,
  35331u
 };

static const PtrLen<const UType> JTable_8_3_43[]=
 {
  Range(JSum_8_3_43_1)
 };

static const UType JSum_8_3_44_1[]=
 {
  46163u,
  45798u,
  46176u
 };

static const PtrLen<const UType> JTable_8_3_44[]=
 {
  Range(JSum_8_3_44_1)
 };

static const UType JSum_8_3_45_1[]=
 {
  301700u,
  300699u,
  300810u
 };

static const PtrLen<const UType> JTable_8_3_45[]=
 {
  Range(JSum_8_3_45_1)
 };

static const UType JSum_8_3_46_1[]=
 {
  397046u,
  398307u,
  397656u
 };

static const PtrLen<const UType> JTable_8_3_46[]=
 {
  Range(JSum_8_3_46_1)
 };

static const UType JSum_8_3_47_1[]=
 {
  647570u,
  646107u,
  646260u
 };

static const PtrLen<const UType> JTable_8_3_47[]=
 {
  Range(JSum_8_3_47_1)
 };

static const UType JSum_8_3_48_1[]=
 {
  783803u,
  782292u,
  782250u
 };

static const PtrLen<const UType> JTable_8_3_48[]=
 {
  Range(JSum_8_3_48_1)
 };

static const UType JSum_8_3_49_1[]=
 {
  873803u,
  875286u,
  875532u
 };

static const PtrLen<const UType> JTable_8_3_49[]=
 {
  Range(JSum_8_3_49_1)
 };

static const UType JSum_8_3_50_1[]=
 {
  966350u,
  966324u,
  964635u
 };

static const PtrLen<const UType> JTable_8_3_50[]=
 {
  Range(JSum_8_3_50_1)
 };

static const UType JSum_8_3_51_1[]=
 {
  4373786u,
  4376691u,
  4372632u
 };

static const PtrLen<const UType> JTable_8_3_51[]=
 {
  Range(JSum_8_3_51_1)
 };

static const UType JSum_8_3_52_1[]=
 {
  5718566u,
  5719371u,
  5723052u
 };

static const PtrLen<const UType> JTable_8_3_52[]=
 {
  Range(JSum_8_3_52_1)
 };

static const TestSet::JTable JSet_8_3[]=
 {
  { 7u , Range(JTable_8_3_1) },
  { 31u , Range(JTable_8_3_2) },
  { 43u , Range(JTable_8_3_3) },
  { 67u , Range(JTable_8_3_4) },
  { 79u , Range(JTable_8_3_5) },
  { 103u , Range(JTable_8_3_6) },
  { 139u , Range(JTable_8_3_7) },
  { 211u , Range(JTable_8_3_8) },
  { 331u , Range(JTable_8_3_9) },
  { 463u , Range(JTable_8_3_10) },
  { 547u , Range(JTable_8_3_11) },
  { 571u , Range(JTable_8_3_12) },
  { 691u , Range(JTable_8_3_13) },
  { 859u , Range(JTable_8_3_14) },
  { 967u , Range(JTable_8_3_15) },
  { 1123u , Range(JTable_8_3_16) },
  { 1327u , Range(JTable_8_3_17) },
  { 1483u , Range(JTable_8_3_18) },
  { 2311u , Range(JTable_8_3_19) },
  { 2347u , Range(JTable_8_3_20) },
  { 2731u , Range(JTable_8_3_21) },
  { 3571u , Range(JTable_8_3_22) },
  { 4831u , Range(JTable_8_3_23) },
  { 6007u , Range(JTable_8_3_24) },
  { 6271u , Range(JTable_8_3_25) },
  { 7411u , Range(JTable_8_3_26) },
  { 7591u , Range(JTable_8_3_27) },
  { 8779u , Range(JTable_8_3_28) },
  { 8971u , Range(JTable_8_3_29) },
  { 9283u , Range(JTable_8_3_30) },
  { 10627u , Range(JTable_8_3_31) },
  { 11731u , Range(JTable_8_3_32) },
  { 13567u , Range(JTable_8_3_33) },
  { 21319u , Range(JTable_8_3_34) },
  { 28843u , Range(JTable_8_3_35) },
  { 43891u , Range(JTable_8_3_36) },
  { 46411u , Range(JTable_8_3_37) },
  { 51871u , Range(JTable_8_3_38) },
  { 62791u , Range(JTable_8_3_39) },
  { 72931u , Range(JTable_8_3_40) },
  { 91771u , Range(JTable_8_3_41) },
  { 102103u , Range(JTable_8_3_42) },
  { 106591u , Range(JTable_8_3_43) },
  { 138139u , Range(JTable_8_3_44) },
  { 903211u , Range(JTable_8_3_45) },
  { 1193011u , Range(JTable_8_3_46) },
  { 1939939u , Range(JTable_8_3_47) },
  { 2348347u , Range(JTable_8_3_48) },
  { 2624623u , Range(JTable_8_3_49) },
  { 2897311u , Range(JTable_8_3_50) },
  { 13123111u , Range(JTable_8_3_51) },
  { 17160991u , Range(JTable_8_3_52) }
 };

static const UType JSum_8_5_1_1[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const UType JSum_8_5_1_2[]=
 {
  2u,
  1u,
  4u,
  2u,
  0u
 };

static const UType JSum_8_5_1_3[]=
 {
  2u,
  4u,
  0u,
  1u,
  2u
 };

static const PtrLen<const UType> JTable_8_5_1[]=
 {
  Range(JSum_8_5_1_1),
  Range(JSum_8_5_1_2),
  Range(JSum_8_5_1_3)
 };

static const UType JSum_8_5_2_1[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const UType JSum_8_5_2_2[]=
 {
  8u,
  8u,
  2u,
  6u,
  5u
 };

static const UType JSum_8_5_2_3[]=
 {
  8u,
  2u,
  5u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_8_5_2[]=
 {
  Range(JSum_8_5_2_1),
  Range(JSum_8_5_2_2),
  Range(JSum_8_5_2_3)
 };

static const UType JSum_8_5_3_1[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const UType JSum_8_5_3_2[]=
 {
  10u,
  13u,
  20u,
  12u,
  14u
 };

static const UType JSum_8_5_3_3[]=
 {
  10u,
  20u,
  14u,
  13u,
  12u
 };

static const PtrLen<const UType> JTable_8_5_3[]=
 {
  Range(JSum_8_5_3_1),
  Range(JSum_8_5_3_2),
  Range(JSum_8_5_3_3)
 };

static const UType JSum_8_5_4_1[]=
 {
  28u,
  22u,
  20u,
  33u,
  26u
 };

static const UType JSum_8_5_4_2[]=
 {
  28u,
  33u,
  22u,
  26u,
  20u
 };

static const UType JSum_8_5_4_3[]=
 {
  28u,
  22u,
  20u,
  33u,
  26u
 };

static const PtrLen<const UType> JTable_8_5_4[]=
 {
  Range(JSum_8_5_4_1),
  Range(JSum_8_5_4_2),
  Range(JSum_8_5_4_3)
 };

static const UType JSum_8_5_5_1[]=
 {
  46u,
  38u,
  29u,
  40u,
  36u
 };

static const UType JSum_8_5_5_2[]=
 {
  46u,
  40u,
  38u,
  36u,
  29u
 };

static const UType JSum_8_5_5_3[]=
 {
  46u,
  38u,
  29u,
  40u,
  36u
 };

static const PtrLen<const UType> JTable_8_5_5[]=
 {
  Range(JSum_8_5_5_1),
  Range(JSum_8_5_5_2),
  Range(JSum_8_5_5_3)
 };

static const UType JSum_8_5_6_1[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const UType JSum_8_5_6_2[]=
 {
  42u,
  33u,
  48u,
  48u,
  38u
 };

static const UType JSum_8_5_6_3[]=
 {
  42u,
  48u,
  38u,
  33u,
  48u
 };

static const PtrLen<const UType> JTable_8_5_6[]=
 {
  Range(JSum_8_5_6_1),
  Range(JSum_8_5_6_2),
  Range(JSum_8_5_6_3)
 };

static const UType JSum_8_5_7_1[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const UType JSum_8_5_7_2[]=
 {
  78u,
  57u,
  60u,
  68u,
  66u
 };

static const UType JSum_8_5_7_3[]=
 {
  78u,
  60u,
  66u,
  57u,
  68u
 };

static const PtrLen<const UType> JTable_8_5_7[]=
 {
  Range(JSum_8_5_7_1),
  Range(JSum_8_5_7_2),
  Range(JSum_8_5_7_3)
 };

static const UType JSum_8_5_8_1[]=
 {
  105u,
  114u,
  102u,
  120u,
  128u
 };

static const UType JSum_8_5_8_2[]=
 {
  105u,
  120u,
  114u,
  128u,
  102u
 };

static const UType JSum_8_5_8_3[]=
 {
  105u,
  114u,
  102u,
  120u,
  128u
 };

static const PtrLen<const UType> JTable_8_5_8[]=
 {
  Range(JSum_8_5_8_1),
  Range(JSum_8_5_8_2),
  Range(JSum_8_5_8_3)
 };

static const UType JSum_8_5_9_1[]=
 {
  146u,
  152u,
  122u,
  137u,
  132u
 };

static const UType JSum_8_5_9_2[]=
 {
  146u,
  137u,
  152u,
  132u,
  122u
 };

static const UType JSum_8_5_9_3[]=
 {
  146u,
  152u,
  122u,
  137u,
  132u
 };

static const PtrLen<const UType> JTable_8_5_9[]=
 {
  Range(JSum_8_5_9_1),
  Range(JSum_8_5_9_2),
  Range(JSum_8_5_9_3)
 };

static const UType JSum_8_5_10_1[]=
 {
  197u,
  190u,
  162u,
  184u,
  176u
 };

static const UType JSum_8_5_10_2[]=
 {
  197u,
  184u,
  190u,
  176u,
  162u
 };

static const UType JSum_8_5_10_3[]=
 {
  197u,
  190u,
  162u,
  184u,
  176u
 };

static const PtrLen<const UType> JTable_8_5_10[]=
 {
  Range(JSum_8_5_10_1),
  Range(JSum_8_5_10_2),
  Range(JSum_8_5_10_3)
 };

static const UType JSum_8_5_11_1[]=
 {
  390u,
  376u,
  386u,
  341u,
  376u
 };

static const UType JSum_8_5_11_2[]=
 {
  390u,
  341u,
  376u,
  376u,
  386u
 };

static const UType JSum_8_5_11_3[]=
 {
  390u,
  376u,
  386u,
  341u,
  376u
 };

static const PtrLen<const UType> JTable_8_5_11[]=
 {
  Range(JSum_8_5_11_1),
  Range(JSum_8_5_11_2),
  Range(JSum_8_5_11_3)
 };

static const UType JSum_8_5_12_1[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const UType JSum_8_5_12_2[]=
 {
  432u,
  450u,
  477u,
  464u,
  486u
 };

static const UType JSum_8_5_12_3[]=
 {
  432u,
  477u,
  486u,
  450u,
  464u
 };

static const PtrLen<const UType> JTable_8_5_12[]=
 {
  Range(JSum_8_5_12_1),
  Range(JSum_8_5_12_2),
  Range(JSum_8_5_12_3)
 };

static const UType JSum_8_5_13_1[]=
 {
  518u,
  512u,
  520u,
  513u,
  466u
 };

static const UType JSum_8_5_13_2[]=
 {
  518u,
  513u,
  512u,
  466u,
  520u
 };

static const UType JSum_8_5_13_3[]=
 {
  518u,
  512u,
  520u,
  513u,
  466u
 };

static const PtrLen<const UType> JTable_8_5_13[]=
 {
  Range(JSum_8_5_13_1),
  Range(JSum_8_5_13_2),
  Range(JSum_8_5_13_3)
 };

static const UType JSum_8_5_14_1[]=
 {
  513u,
  576u,
  558u,
  540u,
  542u
 };

static const UType JSum_8_5_14_2[]=
 {
  513u,
  540u,
  576u,
  542u,
  558u
 };

static const UType JSum_8_5_14_3[]=
 {
  513u,
  576u,
  558u,
  540u,
  542u
 };

static const PtrLen<const UType> JTable_8_5_14[]=
 {
  Range(JSum_8_5_14_1),
  Range(JSum_8_5_14_2),
  Range(JSum_8_5_14_3)
 };

static const UType JSum_8_5_15_1[]=
 {
  750u,
  696u,
  716u,
  681u,
  726u
 };

static const UType JSum_8_5_15_2[]=
 {
  750u,
  681u,
  696u,
  726u,
  716u
 };

static const UType JSum_8_5_15_3[]=
 {
  750u,
  696u,
  716u,
  681u,
  726u
 };

static const PtrLen<const UType> JTable_8_5_15[]=
 {
  Range(JSum_8_5_15_1),
  Range(JSum_8_5_15_2),
  Range(JSum_8_5_15_3)
 };

static const UType JSum_8_5_16_1[]=
 {
  782u,
  760u,
  762u,
  829u,
  776u
 };

static const UType JSum_8_5_16_2[]=
 {
  782u,
  829u,
  760u,
  776u,
  762u
 };

static const UType JSum_8_5_16_3[]=
 {
  782u,
  760u,
  762u,
  829u,
  776u
 };

static const PtrLen<const UType> JTable_8_5_16[]=
 {
  Range(JSum_8_5_16_1),
  Range(JSum_8_5_16_2),
  Range(JSum_8_5_16_3)
 };

static const UType JSum_8_5_17_1[]=
 {
  968u,
  950u,
  1016u,
  962u,
  933u
 };

static const UType JSum_8_5_17_2[]=
 {
  968u,
  962u,
  950u,
  933u,
  1016u
 };

static const UType JSum_8_5_17_3[]=
 {
  968u,
  950u,
  1016u,
  962u,
  933u
 };

static const PtrLen<const UType> JTable_8_5_17[]=
 {
  Range(JSum_8_5_17_1),
  Range(JSum_8_5_17_2),
  Range(JSum_8_5_17_3)
 };

static const UType JSum_8_5_18_1[]=
 {
  1260u,
  1301u,
  1206u,
  1236u,
  1266u
 };

static const UType JSum_8_5_18_2[]=
 {
  1260u,
  1236u,
  1301u,
  1266u,
  1206u
 };

static const UType JSum_8_5_18_3[]=
 {
  1260u,
  1301u,
  1206u,
  1236u,
  1266u
 };

static const PtrLen<const UType> JTable_8_5_18[]=
 {
  Range(JSum_8_5_18_1),
  Range(JSum_8_5_18_2),
  Range(JSum_8_5_18_3)
 };

static const UType JSum_8_5_19_1[]=
 {
  1472u,
  1466u,
  1464u,
  1457u,
  1550u
 };

static const UType JSum_8_5_19_2[]=
 {
  1472u,
  1457u,
  1466u,
  1550u,
  1464u
 };

static const UType JSum_8_5_19_3[]=
 {
  1472u,
  1466u,
  1464u,
  1457u,
  1550u
 };

static const PtrLen<const UType> JTable_8_5_19[]=
 {
  Range(JSum_8_5_19_1),
  Range(JSum_8_5_19_2),
  Range(JSum_8_5_19_3)
 };

static const UType JSum_8_5_20_1[]=
 {
  1496u,
  1518u,
  1584u,
  1485u,
  1506u
 };

static const UType JSum_8_5_20_2[]=
 {
  1496u,
  1485u,
  1518u,
  1506u,
  1584u
 };

static const UType JSum_8_5_20_3[]=
 {
  1496u,
  1518u,
  1584u,
  1485u,
  1506u
 };

static const PtrLen<const UType> JTable_8_5_20[]=
 {
  Range(JSum_8_5_20_1),
  Range(JSum_8_5_20_2),
  Range(JSum_8_5_20_3)
 };

static const UType JSum_8_5_21_1[]=
 {
  1820u,
  1850u,
  1754u,
  1793u,
  1752u
 };

static const UType JSum_8_5_21_2[]=
 {
  1820u,
  1793u,
  1850u,
  1752u,
  1754u
 };

static const UType JSum_8_5_21_3[]=
 {
  1820u,
  1850u,
  1754u,
  1793u,
  1752u
 };

static const PtrLen<const UType> JTable_8_5_21[]=
 {
  Range(JSum_8_5_21_1),
  Range(JSum_8_5_21_2),
  Range(JSum_8_5_21_3)
 };

static const UType JSum_8_5_22_1[]=
 {
  2318u,
  2330u,
  2321u,
  2432u,
  2328u
 };

static const UType JSum_8_5_22_2[]=
 {
  2318u,
  2432u,
  2330u,
  2328u,
  2321u
 };

static const UType JSum_8_5_22_3[]=
 {
  2318u,
  2330u,
  2321u,
  2432u,
  2328u
 };

static const PtrLen<const UType> JTable_8_5_22[]=
 {
  Range(JSum_8_5_22_1),
  Range(JSum_8_5_22_2),
  Range(JSum_8_5_22_3)
 };

static const UType JSum_8_5_23_1[]=
 {
  3481u,
  3440u,
  3368u,
  3526u,
  3474u
 };

static const UType JSum_8_5_23_2[]=
 {
  3481u,
  3526u,
  3440u,
  3474u,
  3368u
 };

static const UType JSum_8_5_23_3[]=
 {
  3481u,
  3440u,
  3368u,
  3526u,
  3474u
 };

static const PtrLen<const UType> JTable_8_5_23[]=
 {
  Range(JSum_8_5_23_1),
  Range(JSum_8_5_23_2),
  Range(JSum_8_5_23_3)
 };

static const UType JSum_8_5_24_1[]=
 {
  7153u,
  7118u,
  7172u,
  7126u,
  6960u
 };

static const UType JSum_8_5_24_2[]=
 {
  7153u,
  7126u,
  7118u,
  6960u,
  7172u
 };

static const UType JSum_8_5_24_3[]=
 {
  7153u,
  7118u,
  7172u,
  7126u,
  6960u
 };

static const PtrLen<const UType> JTable_8_5_24[]=
 {
  Range(JSum_8_5_24_1),
  Range(JSum_8_5_24_2),
  Range(JSum_8_5_24_3)
 };

static const UType JSum_8_5_25_1[]=
 {
  8841u,
  8616u,
  8790u,
  8844u,
  8798u
 };

static const UType JSum_8_5_25_2[]=
 {
  8841u,
  8844u,
  8616u,
  8798u,
  8790u
 };

static const UType JSum_8_5_25_3[]=
 {
  8841u,
  8616u,
  8790u,
  8844u,
  8798u
 };

static const PtrLen<const UType> JTable_8_5_25[]=
 {
  Range(JSum_8_5_25_1),
  Range(JSum_8_5_25_2),
  Range(JSum_8_5_25_3)
 };

static const UType JSum_8_5_26_1[]=
 {
  9152u,
  9332u,
  9266u,
  9410u,
  9249u
 };

static const UType JSum_8_5_26_2[]=
 {
  9152u,
  9410u,
  9332u,
  9249u,
  9266u
 };

static const UType JSum_8_5_26_3[]=
 {
  9152u,
  9332u,
  9266u,
  9410u,
  9249u
 };

static const PtrLen<const UType> JTable_8_5_26[]=
 {
  Range(JSum_8_5_26_1),
  Range(JSum_8_5_26_2),
  Range(JSum_8_5_26_3)
 };

static const UType JSum_8_5_27_1[]=
 {
  10230u,
  10400u,
  10334u,
  10508u,
  10397u
 };

static const UType JSum_8_5_27_2[]=
 {
  10230u,
  10508u,
  10400u,
  10397u,
  10334u
 };

static const UType JSum_8_5_27_3[]=
 {
  10230u,
  10400u,
  10334u,
  10508u,
  10397u
 };

static const PtrLen<const UType> JTable_8_5_27[]=
 {
  Range(JSum_8_5_27_1),
  Range(JSum_8_5_27_2),
  Range(JSum_8_5_27_3)
 };

static const UType JSum_8_5_28_1[]=
 {
  12666u,
  12570u,
  12648u,
  12516u,
  12389u
 };

static const UType JSum_8_5_28_2[]=
 {
  12666u,
  12516u,
  12570u,
  12389u,
  12648u
 };

static const UType JSum_8_5_28_3[]=
 {
  12666u,
  12570u,
  12648u,
  12516u,
  12389u
 };

static const PtrLen<const UType> JTable_8_5_28[]=
 {
  Range(JSum_8_5_28_1),
  Range(JSum_8_5_28_2),
  Range(JSum_8_5_28_3)
 };

static const UType JSum_8_5_29_1[]=
 {
  14778u,
  14544u,
  14609u,
  14454u,
  14544u
 };

static const UType JSum_8_5_29_2[]=
 {
  14778u,
  14454u,
  14544u,
  14544u,
  14609u
 };

static const UType JSum_8_5_29_3[]=
 {
  14778u,
  14544u,
  14609u,
  14454u,
  14544u
 };

static const PtrLen<const UType> JTable_8_5_29[]=
 {
  Range(JSum_8_5_29_1),
  Range(JSum_8_5_29_2),
  Range(JSum_8_5_29_3)
 };

static const UType JSum_8_5_30_1[]=
 {
  18510u,
  18188u,
  18350u,
  18257u,
  18464u
 };

static const UType JSum_8_5_30_2[]=
 {
  18510u,
  18257u,
  18188u,
  18464u,
  18350u
 };

static const UType JSum_8_5_30_3[]=
 {
  18510u,
  18188u,
  18350u,
  18257u,
  18464u
 };

static const PtrLen<const UType> JTable_8_5_30[]=
 {
  Range(JSum_8_5_30_1),
  Range(JSum_8_5_30_2),
  Range(JSum_8_5_30_3)
 };

static const UType JSum_8_5_31_1[]=
 {
  21356u,
  21290u,
  21548u,
  21221u,
  21174u
 };

static const UType JSum_8_5_31_2[]=
 {
  21356u,
  21221u,
  21290u,
  21174u,
  21548u
 };

static const UType JSum_8_5_31_3[]=
 {
  21356u,
  21290u,
  21548u,
  21221u,
  21174u
 };

static const PtrLen<const UType> JTable_8_5_31[]=
 {
  Range(JSum_8_5_31_1),
  Range(JSum_8_5_31_2),
  Range(JSum_8_5_31_3)
 };

static const UType JSum_8_5_32_1[]=
 {
  67156u,
  66944u,
  67521u,
  67298u,
  67570u
 };

static const UType JSum_8_5_32_2[]=
 {
  67156u,
  67298u,
  66944u,
  67570u,
  67521u
 };

static const UType JSum_8_5_32_3[]=
 {
  67156u,
  66944u,
  67521u,
  67298u,
  67570u
 };

static const PtrLen<const UType> JTable_8_5_32[]=
 {
  Range(JSum_8_5_32_1),
  Range(JSum_8_5_32_2),
  Range(JSum_8_5_32_3)
 };

static const UType JSum_8_5_33_1[]=
 {
  70922u,
  71396u,
  71164u,
  71457u,
  70870u
 };

static const UType JSum_8_5_33_2[]=
 {
  70922u,
  71457u,
  71396u,
  70870u,
  71164u
 };

static const UType JSum_8_5_33_3[]=
 {
  70922u,
  71396u,
  71164u,
  71457u,
  70870u
 };

static const PtrLen<const UType> JTable_8_5_33[]=
 {
  Range(JSum_8_5_33_1),
  Range(JSum_8_5_33_2),
  Range(JSum_8_5_33_3)
 };

static const UType JSum_8_5_34_1[]=
 {
  92146u,
  92906u,
  92345u,
  92224u,
  92268u
 };

static const UType JSum_8_5_34_2[]=
 {
  92146u,
  92224u,
  92906u,
  92268u,
  92345u
 };

static const UType JSum_8_5_34_3[]=
 {
  92146u,
  92906u,
  92345u,
  92224u,
  92268u
 };

static const PtrLen<const UType> JTable_8_5_34[]=
 {
  Range(JSum_8_5_34_1),
  Range(JSum_8_5_34_2),
  Range(JSum_8_5_34_3)
 };

static const UType JSum_8_5_35_1[]=
 {
  104148u,
  104140u,
  104246u,
  103442u,
  104053u
 };

static const UType JSum_8_5_35_2[]=
 {
  104148u,
  103442u,
  104140u,
  104053u,
  104246u
 };

static const UType JSum_8_5_35_3[]=
 {
  104148u,
  104140u,
  104246u,
  103442u,
  104053u
 };

static const PtrLen<const UType> JTable_8_5_35[]=
 {
  Range(JSum_8_5_35_1),
  Range(JSum_8_5_35_2),
  Range(JSum_8_5_35_3)
 };

static const UType JSum_8_5_36_1[]=
 {
  181292u,
  180138u,
  180438u,
  180633u,
  180708u
 };

static const UType JSum_8_5_36_2[]=
 {
  181292u,
  180633u,
  180138u,
  180708u,
  180438u
 };

static const UType JSum_8_5_36_3[]=
 {
  181292u,
  180138u,
  180438u,
  180633u,
  180708u
 };

static const PtrLen<const UType> JTable_8_5_36[]=
 {
  Range(JSum_8_5_36_1),
  Range(JSum_8_5_36_2),
  Range(JSum_8_5_36_3)
 };

static const UType JSum_8_5_37_1[]=
 {
  238812u,
  238706u,
  238934u,
  238817u,
  237740u
 };

static const UType JSum_8_5_37_2[]=
 {
  238812u,
  238817u,
  238706u,
  237740u,
  238934u
 };

static const UType JSum_8_5_37_3[]=
 {
  238812u,
  238706u,
  238934u,
  238817u,
  237740u
 };

static const PtrLen<const UType> JTable_8_5_37[]=
 {
  Range(JSum_8_5_37_1),
  Range(JSum_8_5_37_2),
  Range(JSum_8_5_37_3)
 };

static const UType JSum_8_5_38_1[]=
 {
  579222u,
  579672u,
  580626u,
  578565u,
  579224u
 };

static const UType JSum_8_5_38_2[]=
 {
  579222u,
  578565u,
  579672u,
  579224u,
  580626u
 };

static const UType JSum_8_5_38_3[]=
 {
  579222u,
  579672u,
  580626u,
  578565u,
  579224u
 };

static const PtrLen<const UType> JTable_8_5_38[]=
 {
  Range(JSum_8_5_38_1),
  Range(JSum_8_5_38_2),
  Range(JSum_8_5_38_3)
 };

static const UType JSum_8_5_39_1[]=
 {
  646618u,
  647024u,
  645924u,
  645869u,
  647794u
 };

static const UType JSum_8_5_39_2[]=
 {
  646618u,
  645869u,
  647024u,
  647794u,
  645924u
 };

static const UType JSum_8_5_39_3[]=
 {
  646618u,
  647024u,
  645924u,
  645869u,
  647794u
 };

static const PtrLen<const UType> JTable_8_5_39[]=
 {
  Range(JSum_8_5_39_1),
  Range(JSum_8_5_39_2),
  Range(JSum_8_5_39_3)
 };

static const UType JSum_8_5_40_1[]=
 {
  2626037u,
  2623328u,
  2622698u,
  2626388u,
  2624658u
 };

static const UType JSum_8_5_40_2[]=
 {
  2626037u,
  2626388u,
  2623328u,
  2624658u,
  2622698u
 };

static const UType JSum_8_5_40_3[]=
 {
  2626037u,
  2623328u,
  2622698u,
  2626388u,
  2624658u
 };

static const PtrLen<const UType> JTable_8_5_40[]=
 {
  Range(JSum_8_5_40_1),
  Range(JSum_8_5_40_2),
  Range(JSum_8_5_40_3)
 };

static const UType JSum_8_5_41_1[]=
 {
  3432236u,
  3433397u,
  3432662u,
  3433652u,
  3429042u
 };

static const UType JSum_8_5_41_2[]=
 {
  3432236u,
  3433652u,
  3433397u,
  3429042u,
  3432662u
 };

static const UType JSum_8_5_41_3[]=
 {
  3432236u,
  3433397u,
  3432662u,
  3433652u,
  3429042u
 };

static const PtrLen<const UType> JTable_8_5_41[]=
 {
  Range(JSum_8_5_41_1),
  Range(JSum_8_5_41_2),
  Range(JSum_8_5_41_3)
 };

static const TestSet::JTable JSet_8_5[]=
 {
  { 11u , Range(JTable_8_5_1) },
  { 31u , Range(JTable_8_5_2) },
  { 71u , Range(JTable_8_5_3) },
  { 131u , Range(JTable_8_5_4) },
  { 191u , Range(JTable_8_5_5) },
  { 211u , Range(JTable_8_5_6) },
  { 331u , Range(JTable_8_5_7) },
  { 571u , Range(JTable_8_5_8) },
  { 691u , Range(JTable_8_5_9) },
  { 911u , Range(JTable_8_5_10) },
  { 1871u , Range(JTable_8_5_11) },
  { 2311u , Range(JTable_8_5_12) },
  { 2531u , Range(JTable_8_5_13) },
  { 2731u , Range(JTable_8_5_14) },
  { 3571u , Range(JTable_8_5_15) },
  { 3911u , Range(JTable_8_5_16) },
  { 4831u , Range(JTable_8_5_17) },
  { 6271u , Range(JTable_8_5_18) },
  { 7411u , Range(JTable_8_5_19) },
  { 7591u , Range(JTable_8_5_20) },
  { 8971u , Range(JTable_8_5_21) },
  { 11731u , Range(JTable_8_5_22) },
  { 17291u , Range(JTable_8_5_23) },
  { 35531u , Range(JTable_8_5_24) },
  { 43891u , Range(JTable_8_5_25) },
  { 46411u , Range(JTable_8_5_26) },
  { 51871u , Range(JTable_8_5_27) },
  { 62791u , Range(JTable_8_5_28) },
  { 72931u , Range(JTable_8_5_29) },
  { 91771u , Range(JTable_8_5_30) },
  { 106591u , Range(JTable_8_5_31) },
  { 336491u , Range(JTable_8_5_32) },
  { 355811u , Range(JTable_8_5_33) },
  { 461891u , Range(JTable_8_5_34) },
  { 520031u , Range(JTable_8_5_35) },
  { 903211u , Range(JTable_8_5_36) },
  { 1193011u , Range(JTable_8_5_37) },
  { 2897311u , Range(JTable_8_5_38) },
  { 3233231u , Range(JTable_8_5_39) },
  { 13123111u , Range(JTable_8_5_40) },
  { 17160991u , Range(JTable_8_5_41) }
 };

static const UType JSum_8_7_1_1[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const UType JSum_8_7_1_2[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_8_7_1_3[]=
 {
  6u,
  4u,
  6u,
  4u,
  10u,
  8u,
  3u
 };

static const UType JSum_8_7_1_4[]=
 {
  11u,
  6u,
  6u,
  4u,
  6u,
  4u,
  4u
 };

static const UType JSum_8_7_1_5[]=
 {
  6u,
  4u,
  3u,
  6u,
  8u,
  4u,
  10u
 };

static const PtrLen<const UType> JTable_8_7_1[]=
 {
  Range(JSum_8_7_1_1),
  Range(JSum_8_7_1_2),
  Range(JSum_8_7_1_3),
  Range(JSum_8_7_1_4),
  Range(JSum_8_7_1_5)
 };

static const UType JSum_8_7_2_1[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const UType JSum_8_7_2_2[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_8_7_2_3[]=
 {
  12u,
  8u,
  12u,
  6u,
  6u,
  14u,
  11u
 };

static const UType JSum_8_7_2_4[]=
 {
  3u,
  10u,
  10u,
  12u,
  10u,
  12u,
  12u
 };

static const UType JSum_8_7_2_5[]=
 {
  12u,
  6u,
  11u,
  12u,
  14u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_8_7_2[]=
 {
  Range(JSum_8_7_2_1),
  Range(JSum_8_7_2_2),
  Range(JSum_8_7_2_3),
  Range(JSum_8_7_2_4),
  Range(JSum_8_7_2_5)
 };

static const UType JSum_8_7_3_1[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const UType JSum_8_7_3_2[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_8_7_3_3[]=
 {
  22u,
  27u,
  28u,
  30u,
  30u,
  32u,
  40u
 };

static const UType JSum_8_7_3_4[]=
 {
  35u,
  34u,
  34u,
  24u,
  34u,
  24u,
  24u
 };

static const UType JSum_8_7_3_5[]=
 {
  22u,
  30u,
  40u,
  28u,
  32u,
  27u,
  30u
 };

static const PtrLen<const UType> JTable_8_7_3[]=
 {
  Range(JSum_8_7_3_1),
  Range(JSum_8_7_3_2),
  Range(JSum_8_7_3_3),
  Range(JSum_8_7_3_4),
  Range(JSum_8_7_3_5)
 };

static const UType JSum_8_7_4_1[]=
 {
  42u,
  27u,
  36u,
  32u,
  26u,
  36u,
  38u
 };

static const UType JSum_8_7_4_2[]=
 {
  27u,
  30u,
  30u,
  40u,
  30u,
  40u,
  40u
 };

static const UType JSum_8_7_4_3[]=
 {
  42u,
  36u,
  32u,
  27u,
  38u,
  26u,
  36u
 };

static const UType JSum_8_7_4_4[]=
 {
  27u,
  30u,
  30u,
  40u,
  30u,
  40u,
  40u
 };

static const UType JSum_8_7_4_5[]=
 {
  42u,
  27u,
  36u,
  32u,
  26u,
  36u,
  38u
 };

static const PtrLen<const UType> JTable_8_7_4[]=
 {
  Range(JSum_8_7_4_1),
  Range(JSum_8_7_4_2),
  Range(JSum_8_7_4_3),
  Range(JSum_8_7_4_4),
  Range(JSum_8_7_4_5)
 };

static const UType JSum_8_7_5_1[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const UType JSum_8_7_5_2[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_8_7_5_3[]=
 {
  66u,
  66u,
  78u,
  60u,
  60u,
  56u,
  75u
 };

static const UType JSum_8_7_5_4[]=
 {
  83u,
  60u,
  60u,
  66u,
  60u,
  66u,
  66u
 };

static const UType JSum_8_7_5_5[]=
 {
  66u,
  60u,
  75u,
  78u,
  56u,
  66u,
  60u
 };

static const PtrLen<const UType> JTable_8_7_5[]=
 {
  Range(JSum_8_7_5_1),
  Range(JSum_8_7_5_2),
  Range(JSum_8_7_5_3),
  Range(JSum_8_7_5_4),
  Range(JSum_8_7_5_5)
 };

static const UType JSum_8_7_6_1[]=
 {
  84u,
  86u,
  60u,
  78u,
  78u,
  75u,
  84u
 };

static const UType JSum_8_7_6_2[]=
 {
  59u,
  78u,
  78u,
  84u,
  78u,
  84u,
  84u
 };

static const UType JSum_8_7_6_3[]=
 {
  84u,
  75u,
  78u,
  86u,
  84u,
  78u,
  60u
 };

static const UType JSum_8_7_6_4[]=
 {
  59u,
  78u,
  78u,
  84u,
  78u,
  84u,
  84u
 };

static const UType JSum_8_7_6_5[]=
 {
  84u,
  86u,
  60u,
  78u,
  78u,
  75u,
  84u
 };

static const PtrLen<const UType> JTable_8_7_6[]=
 {
  Range(JSum_8_7_6_1),
  Range(JSum_8_7_6_2),
  Range(JSum_8_7_6_3),
  Range(JSum_8_7_6_4),
  Range(JSum_8_7_6_5)
 };

static const UType JSum_8_7_7_1[]=
 {
  134u,
  132u,
  116u,
  116u,
  147u,
  126u,
  138u
 };

static const UType JSum_8_7_7_2[]=
 {
  123u,
  142u,
  142u,
  120u,
  142u,
  120u,
  120u
 };

static const UType JSum_8_7_7_3[]=
 {
  134u,
  126u,
  116u,
  132u,
  138u,
  147u,
  116u
 };

static const UType JSum_8_7_7_4[]=
 {
  123u,
  142u,
  142u,
  120u,
  142u,
  120u,
  120u
 };

static const UType JSum_8_7_7_5[]=
 {
  134u,
  132u,
  116u,
  116u,
  147u,
  126u,
  138u
 };

static const PtrLen<const UType> JTable_8_7_7[]=
 {
  Range(JSum_8_7_7_1),
  Range(JSum_8_7_7_2),
  Range(JSum_8_7_7_3),
  Range(JSum_8_7_7_4),
  Range(JSum_8_7_7_5)
 };

static const UType JSum_8_7_8_1[]=
 {
  156u,
  147u,
  126u,
  146u,
  126u,
  132u,
  132u
 };

static const UType JSum_8_7_8_2[]=
 {
  155u,
  126u,
  126u,
  144u,
  126u,
  144u,
  144u
 };

static const UType JSum_8_7_8_3[]=
 {
  156u,
  132u,
  146u,
  147u,
  132u,
  126u,
  126u
 };

static const UType JSum_8_7_8_4[]=
 {
  155u,
  126u,
  126u,
  144u,
  126u,
  144u,
  144u
 };

static const UType JSum_8_7_8_5[]=
 {
  156u,
  147u,
  126u,
  146u,
  126u,
  132u,
  132u
 };

static const PtrLen<const UType> JTable_8_7_8[]=
 {
  Range(JSum_8_7_8_1),
  Range(JSum_8_7_8_2),
  Range(JSum_8_7_8_3),
  Range(JSum_8_7_8_4),
  Range(JSum_8_7_8_5)
 };

static const UType JSum_8_7_9_1[]=
 {
  291u,
  272u,
  288u,
  320u,
  278u,
  282u,
  270u
 };

static const UType JSum_8_7_9_2[]=
 {
  315u,
  292u,
  292u,
  270u,
  292u,
  270u,
  270u
 };

static const UType JSum_8_7_9_3[]=
 {
  291u,
  282u,
  320u,
  272u,
  270u,
  278u,
  288u
 };

static const UType JSum_8_7_9_4[]=
 {
  315u,
  292u,
  292u,
  270u,
  292u,
  270u,
  270u
 };

static const UType JSum_8_7_9_5[]=
 {
  291u,
  272u,
  288u,
  320u,
  278u,
  282u,
  270u
 };

static const PtrLen<const UType> JTable_8_7_9[]=
 {
  Range(JSum_8_7_9_1),
  Range(JSum_8_7_9_2),
  Range(JSum_8_7_9_3),
  Range(JSum_8_7_9_4),
  Range(JSum_8_7_9_5)
 };

static const UType JSum_8_7_10_1[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const UType JSum_8_7_10_2[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_8_7_10_3[]=
 {
  352u,
  348u,
  310u,
  318u,
  318u,
  347u,
  316u
 };

static const UType JSum_8_7_10_4[]=
 {
  371u,
  322u,
  322u,
  324u,
  322u,
  324u,
  324u
 };

static const UType JSum_8_7_10_5[]=
 {
  352u,
  318u,
  316u,
  310u,
  347u,
  348u,
  318u
 };

static const PtrLen<const UType> JTable_8_7_10[]=
 {
  Range(JSum_8_7_10_1),
  Range(JSum_8_7_10_2),
  Range(JSum_8_7_10_3),
  Range(JSum_8_7_10_4),
  Range(JSum_8_7_10_5)
 };

static const UType JSum_8_7_11_1[]=
 {
  379u,
  364u,
  406u,
  382u,
  392u,
  424u,
  382u
 };

static const UType JSum_8_7_11_2[]=
 {
  419u,
  400u,
  400u,
  370u,
  400u,
  370u,
  370u
 };

static const UType JSum_8_7_11_3[]=
 {
  379u,
  424u,
  382u,
  364u,
  382u,
  392u,
  406u
 };

static const UType JSum_8_7_11_4[]=
 {
  419u,
  400u,
  400u,
  370u,
  400u,
  370u,
  370u
 };

static const UType JSum_8_7_11_5[]=
 {
  379u,
  364u,
  406u,
  382u,
  392u,
  424u,
  382u
 };

static const PtrLen<const UType> JTable_8_7_11[]=
 {
  Range(JSum_8_7_11_1),
  Range(JSum_8_7_11_2),
  Range(JSum_8_7_11_3),
  Range(JSum_8_7_11_4),
  Range(JSum_8_7_11_5)
 };

static const UType JSum_8_7_12_1[]=
 {
  408u,
  394u,
  418u,
  408u,
  424u,
  414u,
  459u
 };

static const UType JSum_8_7_12_2[]=
 {
  435u,
  396u,
  396u,
  434u,
  396u,
  434u,
  434u
 };

static const UType JSum_8_7_12_3[]=
 {
  408u,
  414u,
  408u,
  394u,
  459u,
  424u,
  418u
 };

static const UType JSum_8_7_12_4[]=
 {
  435u,
  396u,
  396u,
  434u,
  396u,
  434u,
  434u
 };

static const UType JSum_8_7_12_5[]=
 {
  408u,
  394u,
  418u,
  408u,
  424u,
  414u,
  459u
 };

static const PtrLen<const UType> JTable_8_7_12[]=
 {
  Range(JSum_8_7_12_1),
  Range(JSum_8_7_12_2),
  Range(JSum_8_7_12_3),
  Range(JSum_8_7_12_4),
  Range(JSum_8_7_12_5)
 };

static const UType JSum_8_7_13_1[]=
 {
  498u,
  528u,
  522u,
  516u,
  482u,
  483u,
  540u
 };

static const UType JSum_8_7_13_2[]=
 {
  491u,
  534u,
  534u,
  492u,
  534u,
  492u,
  492u
 };

static const UType JSum_8_7_13_3[]=
 {
  498u,
  483u,
  516u,
  528u,
  540u,
  482u,
  522u
 };

static const UType JSum_8_7_13_4[]=
 {
  491u,
  534u,
  534u,
  492u,
  534u,
  492u,
  492u
 };

static const UType JSum_8_7_13_5[]=
 {
  498u,
  528u,
  522u,
  516u,
  482u,
  483u,
  540u
 };

static const PtrLen<const UType> JTable_8_7_13[]=
 {
  Range(JSum_8_7_13_1),
  Range(JSum_8_7_13_2),
  Range(JSum_8_7_13_3),
  Range(JSum_8_7_13_4),
  Range(JSum_8_7_13_5)
 };

static const UType JSum_8_7_14_1[]=
 {
  656u,
  674u,
  636u,
  656u,
  651u,
  594u,
  654u
 };

static const UType JSum_8_7_14_2[]=
 {
  603u,
  636u,
  636u,
  670u,
  636u,
  670u,
  670u
 };

static const UType JSum_8_7_14_3[]=
 {
  656u,
  594u,
  656u,
  674u,
  654u,
  651u,
  636u
 };

static const UType JSum_8_7_14_4[]=
 {
  603u,
  636u,
  636u,
  670u,
  636u,
  670u,
  670u
 };

static const UType JSum_8_7_14_5[]=
 {
  656u,
  674u,
  636u,
  656u,
  651u,
  594u,
  654u
 };

static const PtrLen<const UType> JTable_8_7_14[]=
 {
  Range(JSum_8_7_14_1),
  Range(JSum_8_7_14_2),
  Range(JSum_8_7_14_3),
  Range(JSum_8_7_14_4),
  Range(JSum_8_7_14_5)
 };

static const UType JSum_8_7_15_1[]=
 {
  676u,
  678u,
  718u,
  682u,
  707u,
  720u,
  648u
 };

static const UType JSum_8_7_15_2[]=
 {
  731u,
  664u,
  664u,
  702u,
  664u,
  702u,
  702u
 };

static const UType JSum_8_7_15_3[]=
 {
  676u,
  720u,
  682u,
  678u,
  648u,
  707u,
  718u
 };

static const UType JSum_8_7_15_4[]=
 {
  731u,
  664u,
  664u,
  702u,
  664u,
  702u,
  702u
 };

static const UType JSum_8_7_15_5[]=
 {
  676u,
  678u,
  718u,
  682u,
  707u,
  720u,
  648u
 };

static const PtrLen<const UType> JTable_8_7_15[]=
 {
  Range(JSum_8_7_15_1),
  Range(JSum_8_7_15_2),
  Range(JSum_8_7_15_3),
  Range(JSum_8_7_15_4),
  Range(JSum_8_7_15_5)
 };

static const UType JSum_8_7_16_1[]=
 {
  844u,
  834u,
  820u,
  898u,
  848u,
  870u,
  891u
 };

static const UType JSum_8_7_16_2[]=
 {
  899u,
  874u,
  874u,
  828u,
  874u,
  828u,
  828u
 };

static const UType JSum_8_7_16_3[]=
 {
  844u,
  870u,
  898u,
  834u,
  891u,
  848u,
  820u
 };

static const UType JSum_8_7_16_4[]=
 {
  899u,
  874u,
  874u,
  828u,
  874u,
  828u,
  828u
 };

static const UType JSum_8_7_16_5[]=
 {
  844u,
  834u,
  820u,
  898u,
  848u,
  870u,
  891u
 };

static const PtrLen<const UType> JTable_8_7_16[]=
 {
  Range(JSum_8_7_16_1),
  Range(JSum_8_7_16_2),
  Range(JSum_8_7_16_3),
  Range(JSum_8_7_16_4),
  Range(JSum_8_7_16_5)
 };

static const UType JSum_8_7_17_1[]=
 {
  1256u,
  1324u,
  1234u,
  1243u,
  1264u,
  1210u,
  1246u
 };

static const UType JSum_8_7_17_2[]=
 {
  1283u,
  1216u,
  1216u,
  1282u,
  1216u,
  1282u,
  1282u
 };

static const UType JSum_8_7_17_3[]=
 {
  1256u,
  1210u,
  1243u,
  1324u,
  1246u,
  1264u,
  1234u
 };

static const UType JSum_8_7_17_4[]=
 {
  1283u,
  1216u,
  1216u,
  1282u,
  1216u,
  1282u,
  1282u
 };

static const UType JSum_8_7_17_5[]=
 {
  1256u,
  1324u,
  1234u,
  1243u,
  1264u,
  1210u,
  1246u
 };

static const PtrLen<const UType> JTable_8_7_17[]=
 {
  Range(JSum_8_7_17_1),
  Range(JSum_8_7_17_2),
  Range(JSum_8_7_17_3),
  Range(JSum_8_7_17_4),
  Range(JSum_8_7_17_5)
 };

static const UType JSum_8_7_18_1[]=
 {
  1314u,
  1306u,
  1404u,
  1324u,
  1306u,
  1331u,
  1296u
 };

static const UType JSum_8_7_18_2[]=
 {
  1403u,
  1300u,
  1300u,
  1326u,
  1300u,
  1326u,
  1326u
 };

static const UType JSum_8_7_18_3[]=
 {
  1314u,
  1331u,
  1324u,
  1306u,
  1296u,
  1306u,
  1404u
 };

static const UType JSum_8_7_18_4[]=
 {
  1403u,
  1300u,
  1300u,
  1326u,
  1300u,
  1326u,
  1326u
 };

static const UType JSum_8_7_18_5[]=
 {
  1314u,
  1306u,
  1404u,
  1324u,
  1306u,
  1331u,
  1296u
 };

static const PtrLen<const UType> JTable_8_7_18[]=
 {
  Range(JSum_8_7_18_1),
  Range(JSum_8_7_18_2),
  Range(JSum_8_7_18_3),
  Range(JSum_8_7_18_4),
  Range(JSum_8_7_18_5)
 };

static const UType JSum_8_7_19_1[]=
 {
  1491u,
  1504u,
  1506u,
  1516u,
  1510u,
  1604u,
  1494u
 };

static const UType JSum_8_7_19_2[]=
 {
  1595u,
  1486u,
  1486u,
  1524u,
  1486u,
  1524u,
  1524u
 };

static const UType JSum_8_7_19_3[]=
 {
  1491u,
  1604u,
  1516u,
  1504u,
  1494u,
  1510u,
  1506u
 };

static const UType JSum_8_7_19_4[]=
 {
  1595u,
  1486u,
  1486u,
  1524u,
  1486u,
  1524u,
  1524u
 };

static const UType JSum_8_7_19_5[]=
 {
  1491u,
  1504u,
  1506u,
  1516u,
  1510u,
  1604u,
  1494u
 };

static const PtrLen<const UType> JTable_8_7_19[]=
 {
  Range(JSum_8_7_19_1),
  Range(JSum_8_7_19_2),
  Range(JSum_8_7_19_3),
  Range(JSum_8_7_19_4),
  Range(JSum_8_7_19_5)
 };

static const UType JSum_8_7_20_1[]=
 {
  1966u,
  1900u,
  1915u,
  1954u,
  1868u,
  1984u,
  1978u
 };

static const UType JSum_8_7_20_2[]=
 {
  1859u,
  1978u,
  1978u,
  1924u,
  1978u,
  1924u,
  1924u
 };

static const UType JSum_8_7_20_3[]=
 {
  1966u,
  1984u,
  1954u,
  1900u,
  1978u,
  1868u,
  1915u
 };

static const UType JSum_8_7_20_4[]=
 {
  1859u,
  1978u,
  1978u,
  1924u,
  1978u,
  1924u,
  1924u
 };

static const UType JSum_8_7_20_5[]=
 {
  1966u,
  1900u,
  1915u,
  1954u,
  1868u,
  1984u,
  1978u
 };

static const PtrLen<const UType> JTable_8_7_20[]=
 {
  Range(JSum_8_7_20_1),
  Range(JSum_8_7_20_2),
  Range(JSum_8_7_20_3),
  Range(JSum_8_7_20_4),
  Range(JSum_8_7_20_5)
 };

static const UType JSum_8_7_21_1[]=
 {
  2556u,
  2490u,
  2472u,
  2398u,
  2478u,
  2467u,
  2428u
 };

static const UType JSum_8_7_21_2[]=
 {
  2451u,
  2522u,
  2522u,
  2424u,
  2522u,
  2424u,
  2424u
 };

static const UType JSum_8_7_21_3[]=
 {
  2556u,
  2467u,
  2398u,
  2490u,
  2428u,
  2478u,
  2472u
 };

static const UType JSum_8_7_21_4[]=
 {
  2451u,
  2522u,
  2522u,
  2424u,
  2522u,
  2424u,
  2424u
 };

static const UType JSum_8_7_21_5[]=
 {
  2556u,
  2490u,
  2472u,
  2398u,
  2478u,
  2467u,
  2428u
 };

static const PtrLen<const UType> JTable_8_7_21[]=
 {
  Range(JSum_8_7_21_1),
  Range(JSum_8_7_21_2),
  Range(JSum_8_7_21_3),
  Range(JSum_8_7_21_4),
  Range(JSum_8_7_21_5)
 };

static const UType JSum_8_7_22_1[]=
 {
  5454u,
  5475u,
  5540u,
  5366u,
  5460u,
  5426u,
  5316u
 };

static const UType JSum_8_7_22_2[]=
 {
  5355u,
  5382u,
  5382u,
  5512u,
  5382u,
  5512u,
  5512u
 };

static const UType JSum_8_7_22_3[]=
 {
  5454u,
  5426u,
  5366u,
  5475u,
  5316u,
  5460u,
  5540u
 };

static const UType JSum_8_7_22_4[]=
 {
  5355u,
  5382u,
  5382u,
  5512u,
  5382u,
  5512u,
  5512u
 };

static const UType JSum_8_7_22_5[]=
 {
  5454u,
  5475u,
  5540u,
  5366u,
  5460u,
  5426u,
  5316u
 };

static const PtrLen<const UType> JTable_8_7_22[]=
 {
  Range(JSum_8_7_22_1),
  Range(JSum_8_7_22_2),
  Range(JSum_8_7_22_3),
  Range(JSum_8_7_22_4),
  Range(JSum_8_7_22_5)
 };

static const UType JSum_8_7_23_1[]=
 {
  6226u,
  6202u,
  6331u,
  6208u,
  6344u,
  6382u,
  6196u
 };

static const UType JSum_8_7_23_2[]=
 {
  6443u,
  6262u,
  6262u,
  6220u,
  6262u,
  6220u,
  6220u
 };

static const UType JSum_8_7_23_3[]=
 {
  6226u,
  6382u,
  6208u,
  6202u,
  6196u,
  6344u,
  6331u
 };

static const UType JSum_8_7_23_4[]=
 {
  6443u,
  6262u,
  6262u,
  6220u,
  6262u,
  6220u,
  6220u
 };

static const UType JSum_8_7_23_5[]=
 {
  6226u,
  6202u,
  6331u,
  6208u,
  6344u,
  6382u,
  6196u
 };

static const PtrLen<const UType> JTable_8_7_23[]=
 {
  Range(JSum_8_7_23_1),
  Range(JSum_8_7_23_2),
  Range(JSum_8_7_23_3),
  Range(JSum_8_7_23_4),
  Range(JSum_8_7_23_5)
 };

static const UType JSum_8_7_24_1[]=
 {
  6510u,
  6576u,
  6768u,
  6612u,
  6683u,
  6618u,
  6642u
 };

static const UType JSum_8_7_24_2[]=
 {
  6611u,
  6714u,
  6714u,
  6552u,
  6714u,
  6552u,
  6552u
 };

static const UType JSum_8_7_24_3[]=
 {
  6510u,
  6618u,
  6612u,
  6576u,
  6642u,
  6683u,
  6768u
 };

static const UType JSum_8_7_24_4[]=
 {
  6611u,
  6714u,
  6714u,
  6552u,
  6714u,
  6552u,
  6552u
 };

static const UType JSum_8_7_24_5[]=
 {
  6510u,
  6576u,
  6768u,
  6612u,
  6683u,
  6618u,
  6642u
 };

static const PtrLen<const UType> JTable_8_7_24[]=
 {
  Range(JSum_8_7_24_1),
  Range(JSum_8_7_24_2),
  Range(JSum_8_7_24_3),
  Range(JSum_8_7_24_4),
  Range(JSum_8_7_24_5)
 };

static const UType JSum_8_7_25_1[]=
 {
  7444u,
  7402u,
  7532u,
  7266u,
  7344u,
  7414u,
  7467u
 };

static const UType JSum_8_7_25_2[]=
 {
  7379u,
  7330u,
  7330u,
  7500u,
  7330u,
  7500u,
  7500u
 };

static const UType JSum_8_7_25_3[]=
 {
  7444u,
  7414u,
  7266u,
  7402u,
  7467u,
  7344u,
  7532u
 };

static const UType JSum_8_7_25_4[]=
 {
  7379u,
  7330u,
  7330u,
  7500u,
  7330u,
  7500u,
  7500u
 };

static const UType JSum_8_7_25_5[]=
 {
  7444u,
  7402u,
  7532u,
  7266u,
  7344u,
  7414u,
  7467u
 };

static const PtrLen<const UType> JTable_8_7_25[]=
 {
  Range(JSum_8_7_25_1),
  Range(JSum_8_7_25_2),
  Range(JSum_8_7_25_3),
  Range(JSum_8_7_25_4),
  Range(JSum_8_7_25_5)
 };

static const UType JSum_8_7_26_1[]=
 {
  8464u,
  8344u,
  8358u,
  8278u,
  8484u,
  8523u,
  8334u
 };

static const UType JSum_8_7_26_2[]=
 {
  8595u,
  8394u,
  8394u,
  8336u,
  8394u,
  8336u,
  8336u
 };

static const UType JSum_8_7_26_3[]=
 {
  8464u,
  8523u,
  8278u,
  8344u,
  8334u,
  8484u,
  8358u
 };

static const UType JSum_8_7_26_4[]=
 {
  8595u,
  8394u,
  8394u,
  8336u,
  8394u,
  8336u,
  8336u
 };

static const UType JSum_8_7_26_5[]=
 {
  8464u,
  8344u,
  8358u,
  8278u,
  8484u,
  8523u,
  8334u
 };

static const PtrLen<const UType> JTable_8_7_26[]=
 {
  Range(JSum_8_7_26_1),
  Range(JSum_8_7_26_2),
  Range(JSum_8_7_26_3),
  Range(JSum_8_7_26_4),
  Range(JSum_8_7_26_5)
 };

static const UType JSum_8_7_27_1[]=
 {
  8979u,
  9094u,
  9024u,
  8964u,
  8870u,
  9034u,
  8824u
 };

static const UType JSum_8_7_27_2[]=
 {
  8795u,
  9054u,
  9054u,
  8944u,
  9054u,
  8944u,
  8944u
 };

static const UType JSum_8_7_27_3[]=
 {
  8979u,
  9034u,
  8964u,
  9094u,
  8824u,
  8870u,
  9024u
 };

static const UType JSum_8_7_27_4[]=
 {
  8795u,
  9054u,
  9054u,
  8944u,
  9054u,
  8944u,
  8944u
 };

static const UType JSum_8_7_27_5[]=
 {
  8979u,
  9094u,
  9024u,
  8964u,
  8870u,
  9034u,
  8824u
 };

static const PtrLen<const UType> JTable_8_7_27[]=
 {
  Range(JSum_8_7_27_1),
  Range(JSum_8_7_27_2),
  Range(JSum_8_7_27_3),
  Range(JSum_8_7_27_4),
  Range(JSum_8_7_27_5)
 };

static const UType JSum_8_7_28_1[]=
 {
  13076u,
  13180u,
  13042u,
  12898u,
  13228u,
  13147u,
  13198u
 };

static const UType JSum_8_7_28_2[]=
 {
  12851u,
  13162u,
  13162u,
  13144u,
  13162u,
  13144u,
  13144u
 };

static const UType JSum_8_7_28_3[]=
 {
  13076u,
  13147u,
  12898u,
  13180u,
  13198u,
  13228u,
  13042u
 };

static const UType JSum_8_7_28_4[]=
 {
  12851u,
  13162u,
  13162u,
  13144u,
  13162u,
  13144u,
  13144u
 };

static const UType JSum_8_7_28_5[]=
 {
  13076u,
  13180u,
  13042u,
  12898u,
  13228u,
  13147u,
  13198u
 };

static const PtrLen<const UType> JTable_8_7_28[]=
 {
  Range(JSum_8_7_28_1),
  Range(JSum_8_7_28_2),
  Range(JSum_8_7_28_3),
  Range(JSum_8_7_28_4),
  Range(JSum_8_7_28_5)
 };

static const UType JSum_8_7_29_1[]=
 {
  14674u,
  14526u,
  14794u,
  14496u,
  14448u,
  14528u,
  14635u
 };

static const UType JSum_8_7_29_2[]=
 {
  14771u,
  14466u,
  14466u,
  14644u,
  14466u,
  14644u,
  14644u
 };

static const UType JSum_8_7_29_3[]=
 {
  14674u,
  14528u,
  14496u,
  14526u,
  14635u,
  14448u,
  14794u
 };

static const UType JSum_8_7_29_4[]=
 {
  14771u,
  14466u,
  14466u,
  14644u,
  14466u,
  14644u,
  14644u
 };

static const UType JSum_8_7_29_5[]=
 {
  14674u,
  14526u,
  14794u,
  14496u,
  14448u,
  14528u,
  14635u
 };

static const PtrLen<const UType> JTable_8_7_29[]=
 {
  Range(JSum_8_7_29_1),
  Range(JSum_8_7_29_2),
  Range(JSum_8_7_29_3),
  Range(JSum_8_7_29_4),
  Range(JSum_8_7_29_5)
 };

static const UType JSum_8_7_30_1[]=
 {
  19560u,
  19635u,
  19690u,
  19980u,
  19660u,
  19810u,
  19802u
 };

static const UType JSum_8_7_30_2[]=
 {
  20027u,
  19630u,
  19630u,
  19740u,
  19630u,
  19740u,
  19740u
 };

static const UType JSum_8_7_30_3[]=
 {
  19560u,
  19810u,
  19980u,
  19635u,
  19802u,
  19660u,
  19690u
 };

static const UType JSum_8_7_30_4[]=
 {
  20027u,
  19630u,
  19630u,
  19740u,
  19630u,
  19740u,
  19740u
 };

static const UType JSum_8_7_30_5[]=
 {
  19560u,
  19635u,
  19690u,
  19980u,
  19660u,
  19810u,
  19802u
 };

static const PtrLen<const UType> JTable_8_7_30[]=
 {
  Range(JSum_8_7_30_1),
  Range(JSum_8_7_30_2),
  Range(JSum_8_7_30_3),
  Range(JSum_8_7_30_4),
  Range(JSum_8_7_30_5)
 };

static const UType JSum_8_7_31_1[]=
 {
  47715u,
  47892u,
  48260u,
  48200u,
  48198u,
  47942u,
  48282u
 };

static const UType JSum_8_7_31_2[]=
 {
  47595u,
  48084u,
  48084u,
  48214u,
  48084u,
  48214u,
  48214u
 };

static const UType JSum_8_7_31_3[]=
 {
  47715u,
  47942u,
  48200u,
  47892u,
  48282u,
  48198u,
  48260u
 };

static const UType JSum_8_7_31_4[]=
 {
  47595u,
  48084u,
  48084u,
  48214u,
  48084u,
  48214u,
  48214u
 };

static const UType JSum_8_7_31_5[]=
 {
  47715u,
  47892u,
  48260u,
  48200u,
  48198u,
  47942u,
  48282u
 };

static const PtrLen<const UType> JTable_8_7_31[]=
 {
  Range(JSum_8_7_31_1),
  Range(JSum_8_7_31_2),
  Range(JSum_8_7_31_3),
  Range(JSum_8_7_31_4),
  Range(JSum_8_7_31_5)
 };

static const UType JSum_8_7_32_1[]=
 {
  50802u,
  50552u,
  50610u,
  51188u,
  50726u,
  51003u,
  50928u
 };

static const UType JSum_8_7_32_2[]=
 {
  50931u,
  51034u,
  51034u,
  50592u,
  51034u,
  50592u,
  50592u
 };

static const UType JSum_8_7_32_3[]=
 {
  50802u,
  51003u,
  51188u,
  50552u,
  50928u,
  50726u,
  50610u
 };

static const UType JSum_8_7_32_4[]=
 {
  50931u,
  51034u,
  51034u,
  50592u,
  51034u,
  50592u,
  50592u
 };

static const UType JSum_8_7_32_5[]=
 {
  50802u,
  50552u,
  50610u,
  51188u,
  50726u,
  51003u,
  50928u
 };

static const PtrLen<const UType> JTable_8_7_32[]=
 {
  Range(JSum_8_7_32_1),
  Range(JSum_8_7_32_2),
  Range(JSum_8_7_32_3),
  Range(JSum_8_7_32_4),
  Range(JSum_8_7_32_5)
 };

static const UType JSum_8_7_33_1[]=
 {
  74187u,
  74446u,
  74284u,
  74724u,
  74142u,
  73854u,
  74392u
 };

static const UType JSum_8_7_33_2[]=
 {
  74019u,
  74090u,
  74090u,
  74580u,
  74090u,
  74580u,
  74580u
 };

static const UType JSum_8_7_33_3[]=
 {
  74187u,
  73854u,
  74724u,
  74446u,
  74392u,
  74142u,
  74284u
 };

static const UType JSum_8_7_33_4[]=
 {
  74019u,
  74090u,
  74090u,
  74580u,
  74090u,
  74580u,
  74580u
 };

static const UType JSum_8_7_33_5[]=
 {
  74187u,
  74446u,
  74284u,
  74724u,
  74142u,
  73854u,
  74392u
 };

static const PtrLen<const UType> JTable_8_7_33[]=
 {
  Range(JSum_8_7_33_1),
  Range(JSum_8_7_33_2),
  Range(JSum_8_7_33_3),
  Range(JSum_8_7_33_4),
  Range(JSum_8_7_33_5)
 };

static const UType JSum_8_7_34_1[]=
 {
  111678u,
  112232u,
  111426u,
  111570u,
  111627u,
  112268u,
  111980u
 };

static const UType JSum_8_7_34_2[]=
 {
  112395u,
  111510u,
  111510u,
  111952u,
  111510u,
  111952u,
  111952u
 };

static const UType JSum_8_7_34_3[]=
 {
  111678u,
  112268u,
  111570u,
  112232u,
  111980u,
  111627u,
  111426u
 };

static const UType JSum_8_7_34_4[]=
 {
  112395u,
  111510u,
  111510u,
  111952u,
  111510u,
  111952u,
  111952u
 };

static const UType JSum_8_7_34_5[]=
 {
  111678u,
  112232u,
  111426u,
  111570u,
  111627u,
  112268u,
  111980u
 };

static const PtrLen<const UType> JTable_8_7_34[]=
 {
  Range(JSum_8_7_34_1),
  Range(JSum_8_7_34_2),
  Range(JSum_8_7_34_3),
  Range(JSum_8_7_34_4),
  Range(JSum_8_7_34_5)
 };

static const UType JSum_8_7_35_1[]=
 {
  129716u,
  129196u,
  129034u,
  128806u,
  128962u,
  128923u,
  128572u
 };

static const UType JSum_8_7_35_2[]=
 {
  129203u,
  129352u,
  129352u,
  128650u,
  129352u,
  128650u,
  128650u
 };

static const UType JSum_8_7_35_3[]=
 {
  129716u,
  128923u,
  128806u,
  129196u,
  128572u,
  128962u,
  129034u
 };

static const UType JSum_8_7_35_4[]=
 {
  129203u,
  129352u,
  129352u,
  128650u,
  129352u,
  128650u,
  128650u
 };

static const UType JSum_8_7_35_5[]=
 {
  129716u,
  129196u,
  129034u,
  128806u,
  128962u,
  128923u,
  128572u
 };

static const PtrLen<const UType> JTable_8_7_35[]=
 {
  Range(JSum_8_7_35_1),
  Range(JSum_8_7_35_2),
  Range(JSum_8_7_35_3),
  Range(JSum_8_7_35_4),
  Range(JSum_8_7_35_5)
 };

static const UType JSum_8_7_36_1[]=
 {
  170230u,
  169858u,
  170612u,
  170512u,
  170230u,
  171187u,
  170380u
 };

static const UType JSum_8_7_36_2[]=
 {
  171035u,
  170644u,
  170644u,
  170014u,
  170644u,
  170014u,
  170014u
 };

static const UType JSum_8_7_36_3[]=
 {
  170230u,
  171187u,
  170512u,
  169858u,
  170380u,
  170230u,
  170612u
 };

static const UType JSum_8_7_36_4[]=
 {
  171035u,
  170644u,
  170644u,
  170014u,
  170644u,
  170014u,
  170014u
 };

static const UType JSum_8_7_36_5[]=
 {
  170230u,
  169858u,
  170612u,
  170512u,
  170230u,
  171187u,
  170380u
 };

static const PtrLen<const UType> JTable_8_7_36[]=
 {
  Range(JSum_8_7_36_1),
  Range(JSum_8_7_36_2),
  Range(JSum_8_7_36_3),
  Range(JSum_8_7_36_4),
  Range(JSum_8_7_36_5)
 };

static const UType JSum_8_7_37_1[]=
 {
  276232u,
  277856u,
  277078u,
  277378u,
  277426u,
  277243u,
  276724u
 };

static const UType JSum_8_7_37_2[]=
 {
  276659u,
  277696u,
  277696u,
  276730u,
  277696u,
  276730u,
  276730u
 };

static const UType JSum_8_7_37_3[]=
 {
  276232u,
  277243u,
  277378u,
  277856u,
  276724u,
  277426u,
  277078u
 };

static const UType JSum_8_7_37_4[]=
 {
  276659u,
  277696u,
  277696u,
  276730u,
  277696u,
  276730u,
  276730u
 };

static const UType JSum_8_7_37_5[]=
 {
  276232u,
  277856u,
  277078u,
  277378u,
  277426u,
  277243u,
  276724u
 };

static const PtrLen<const UType> JTable_8_7_37[]=
 {
  Range(JSum_8_7_37_1),
  Range(JSum_8_7_37_2),
  Range(JSum_8_7_37_3),
  Range(JSum_8_7_37_4),
  Range(JSum_8_7_37_5)
 };

static const UType JSum_8_7_38_1[]=
 {
  335851u,
  335194u,
  335920u,
  334612u,
  334922u,
  336190u,
  335656u
 };

static const UType JSum_8_7_38_2[]=
 {
  334211u,
  335842u,
  335842u,
  335536u,
  335842u,
  335536u,
  335536u
 };

static const UType JSum_8_7_38_3[]=
 {
  335851u,
  336190u,
  334612u,
  335194u,
  335656u,
  334922u,
  335920u
 };

static const UType JSum_8_7_38_4[]=
 {
  334211u,
  335842u,
  335842u,
  335536u,
  335842u,
  335536u,
  335536u
 };

static const UType JSum_8_7_38_5[]=
 {
  335851u,
  335194u,
  335920u,
  334612u,
  334922u,
  336190u,
  335656u
 };

static const PtrLen<const UType> JTable_8_7_38[]=
 {
  Range(JSum_8_7_38_1),
  Range(JSum_8_7_38_2),
  Range(JSum_8_7_38_3),
  Range(JSum_8_7_38_4),
  Range(JSum_8_7_38_5)
 };

static const UType JSum_8_7_39_1[]=
 {
  375258u,
  375480u,
  375620u,
  373806u,
  375018u,
  374772u,
  374667u
 };

static const UType JSum_8_7_39_2[]=
 {
  373955u,
  374682u,
  374682u,
  375540u,
  374682u,
  375540u,
  375540u
 };

static const UType JSum_8_7_39_3[]=
 {
  375258u,
  374772u,
  373806u,
  375480u,
  374667u,
  375018u,
  375620u
 };

static const UType JSum_8_7_39_4[]=
 {
  373955u,
  374682u,
  374682u,
  375540u,
  374682u,
  375540u,
  375540u
 };

static const UType JSum_8_7_39_5[]=
 {
  375258u,
  375480u,
  375620u,
  373806u,
  375018u,
  374772u,
  374667u
 };

static const PtrLen<const UType> JTable_8_7_39[]=
 {
  Range(JSum_8_7_39_1),
  Range(JSum_8_7_39_2),
  Range(JSum_8_7_39_3),
  Range(JSum_8_7_39_4),
  Range(JSum_8_7_39_5)
 };

static const UType JSum_8_7_40_1[]=
 {
  462819u,
  461092u,
  461434u,
  461352u,
  462622u,
  461616u,
  462294u
 };

static const UType JSum_8_7_40_2[]=
 {
  463419u,
  461550u,
  461550u,
  461720u,
  461550u,
  461720u,
  461720u
 };

static const UType JSum_8_7_40_3[]=
 {
  462819u,
  461616u,
  461352u,
  461092u,
  462294u,
  462622u,
  461434u
 };

static const UType JSum_8_7_40_4[]=
 {
  463419u,
  461550u,
  461550u,
  461720u,
  461550u,
  461720u,
  461720u
 };

static const UType JSum_8_7_40_5[]=
 {
  462819u,
  461092u,
  461434u,
  461352u,
  462622u,
  461616u,
  462294u
 };

static const PtrLen<const UType> JTable_8_7_40[]=
 {
  Range(JSum_8_7_40_1),
  Range(JSum_8_7_40_2),
  Range(JSum_8_7_40_3),
  Range(JSum_8_7_40_4),
  Range(JSum_8_7_40_5)
 };

static const UType JSum_8_7_41_1[]=
 {
  1877156u,
  1873288u,
  1873186u,
  1874514u,
  1875082u,
  1875507u,
  1874376u
 };

static const UType JSum_8_7_41_2[]=
 {
  1875563u,
  1873272u,
  1873272u,
  1875910u,
  1873272u,
  1875910u,
  1875910u
 };

static const UType JSum_8_7_41_3[]=
 {
  1877156u,
  1875507u,
  1874514u,
  1873288u,
  1874376u,
  1875082u,
  1873186u
 };

static const UType JSum_8_7_41_4[]=
 {
  1875563u,
  1873272u,
  1873272u,
  1875910u,
  1873272u,
  1875910u,
  1875910u
 };

static const UType JSum_8_7_41_5[]=
 {
  1877156u,
  1873288u,
  1873186u,
  1874514u,
  1875082u,
  1875507u,
  1874376u
 };

static const PtrLen<const UType> JTable_8_7_41[]=
 {
  Range(JSum_8_7_41_1),
  Range(JSum_8_7_41_2),
  Range(JSum_8_7_41_3),
  Range(JSum_8_7_41_4),
  Range(JSum_8_7_41_5)
 };

static const UType JSum_8_7_42_1[]=
 {
  2453358u,
  2451363u,
  2452712u,
  2451378u,
  2451966u,
  2448420u,
  2451792u
 };

static const UType JSum_8_7_42_2[]=
 {
  2449931u,
  2453232u,
  2453232u,
  2450454u,
  2453232u,
  2450454u,
  2450454u
 };

static const UType JSum_8_7_42_3[]=
 {
  2453358u,
  2448420u,
  2451378u,
  2451363u,
  2451792u,
  2451966u,
  2452712u
 };

static const UType JSum_8_7_42_4[]=
 {
  2449931u,
  2453232u,
  2453232u,
  2450454u,
  2453232u,
  2450454u,
  2450454u
 };

static const UType JSum_8_7_42_5[]=
 {
  2453358u,
  2451363u,
  2452712u,
  2451378u,
  2451966u,
  2448420u,
  2451792u
 };

static const PtrLen<const UType> JTable_8_7_42[]=
 {
  Range(JSum_8_7_42_1),
  Range(JSum_8_7_42_2),
  Range(JSum_8_7_42_3),
  Range(JSum_8_7_42_4),
  Range(JSum_8_7_42_5)
 };

static const TestSet::JTable JSet_8_7[]=
 {
  { 43u , Range(JTable_8_7_1) },
  { 71u , Range(JTable_8_7_2) },
  { 211u , Range(JTable_8_7_3) },
  { 239u , Range(JTable_8_7_4) },
  { 463u , Range(JTable_8_7_5) },
  { 547u , Range(JTable_8_7_6) },
  { 911u , Range(JTable_8_7_7) },
  { 967u , Range(JTable_8_7_8) },
  { 2003u , Range(JTable_8_7_9) },
  { 2311u , Range(JTable_8_7_10) },
  { 2731u , Range(JTable_8_7_11) },
  { 2927u , Range(JTable_8_7_12) },
  { 3571u , Range(JTable_8_7_13) },
  { 4523u , Range(JTable_8_7_14) },
  { 4831u , Range(JTable_8_7_15) },
  { 6007u , Range(JTable_8_7_16) },
  { 8779u , Range(JTable_8_7_17) },
  { 9283u , Range(JTable_8_7_18) },
  { 10627u , Range(JTable_8_7_19) },
  { 13567u , Range(JTable_8_7_20) },
  { 17291u , Range(JTable_8_7_21) },
  { 38039u , Range(JTable_8_7_22) },
  { 43891u , Range(JTable_8_7_23) },
  { 46411u , Range(JTable_8_7_24) },
  { 51871u , Range(JTable_8_7_25) },
  { 58787u , Range(JTable_8_7_26) },
  { 62791u , Range(JTable_8_7_27) },
  { 91771u , Range(JTable_8_7_28) },
  { 102103u , Range(JTable_8_7_29) },
  { 138139u , Range(JTable_8_7_30) },
  { 336491u , Range(JTable_8_7_31) },
  { 355811u , Range(JTable_8_7_32) },
  { 520031u , Range(JTable_8_7_33) },
  { 782783u , Range(JTable_8_7_34) },
  { 903211u , Range(JTable_8_7_35) },
  { 1193011u , Range(JTable_8_7_36) },
  { 1939939u , Range(JTable_8_7_37) },
  { 2348347u , Range(JTable_8_7_38) },
  { 2624623u , Range(JTable_8_7_39) },
  { 3233231u , Range(JTable_8_7_40) },
  { 13123111u , Range(JTable_8_7_41) },
  { 17160991u , Range(JTable_8_7_42) }
 };

static const UType JSum_8_11_1_1[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const UType JSum_8_11_1_2[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_8_11_1_3[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_8_11_1_4[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_8_11_1_5[]=
 {
  0u,
  2u,
  3u,
  4u,
  2u,
  2u,
  0u,
  2u,
  0u,
  2u,
  4u
 };

static const UType JSum_8_11_1_6[]=
 {
  3u,
  2u,
  4u,
  1u,
  0u,
  1u,
  3u,
  1u,
  2u,
  0u,
  4u
 };

static const UType JSum_8_11_1_7[]=
 {
  3u,
  0u,
  2u,
  2u,
  1u,
  0u,
  4u,
  3u,
  4u,
  1u,
  1u
 };

static const UType JSum_8_11_1_8[]=
 {
  3u,
  3u,
  2u,
  1u,
  4u,
  2u,
  1u,
  0u,
  0u,
  4u,
  1u
 };

static const UType JSum_8_11_1_9[]=
 {
  0u,
  2u,
  4u,
  2u,
  2u,
  4u,
  0u,
  3u,
  2u,
  2u,
  0u
 };

static const PtrLen<const UType> JTable_8_11_1[]=
 {
  Range(JSum_8_11_1_1),
  Range(JSum_8_11_1_2),
  Range(JSum_8_11_1_3),
  Range(JSum_8_11_1_4),
  Range(JSum_8_11_1_5),
  Range(JSum_8_11_1_6),
  Range(JSum_8_11_1_7),
  Range(JSum_8_11_1_8),
  Range(JSum_8_11_1_9)
 };

static const UType JSum_8_11_2_1[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const UType JSum_8_11_2_2[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_8_11_2_3[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_8_11_2_4[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_8_11_2_5[]=
 {
  8u,
  3u,
  2u,
  6u,
  6u,
  10u,
  4u,
  6u,
  8u,
  8u,
  4u
 };

static const UType JSum_8_11_2_6[]=
 {
  8u,
  10u,
  5u,
  6u,
  5u,
  3u,
  3u,
  10u,
  4u,
  6u,
  5u
 };

static const UType JSum_8_11_2_7[]=
 {
  8u,
  5u,
  4u,
  10u,
  3u,
  6u,
  5u,
  3u,
  5u,
  6u,
  10u
 };

static const UType JSum_8_11_2_8[]=
 {
  8u,
  3u,
  10u,
  10u,
  5u,
  4u,
  6u,
  6u,
  5u,
  5u,
  3u
 };

static const UType JSum_8_11_2_9[]=
 {
  8u,
  10u,
  4u,
  6u,
  8u,
  6u,
  8u,
  2u,
  6u,
  3u,
  4u
 };

static const PtrLen<const UType> JTable_8_11_2[]=
 {
  Range(JSum_8_11_2_1),
  Range(JSum_8_11_2_2),
  Range(JSum_8_11_2_3),
  Range(JSum_8_11_2_4),
  Range(JSum_8_11_2_5),
  Range(JSum_8_11_2_6),
  Range(JSum_8_11_2_7),
  Range(JSum_8_11_2_8),
  Range(JSum_8_11_2_9)
 };

static const UType JSum_8_11_3_1[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const UType JSum_8_11_3_2[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_8_11_3_3[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_8_11_3_4[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_8_11_3_5[]=
 {
  27u,
  24u,
  32u,
  30u,
  38u,
  34u,
  28u,
  24u,
  40u,
  26u,
  26u
 };

static const UType JSum_8_11_3_6[]=
 {
  36u,
  31u,
  32u,
  29u,
  27u,
  27u,
  38u,
  18u,
  26u,
  31u,
  34u
 };

static const UType JSum_8_11_3_7[]=
 {
  36u,
  27u,
  26u,
  31u,
  27u,
  31u,
  32u,
  38u,
  34u,
  29u,
  18u
 };

static const UType JSum_8_11_3_8[]=
 {
  36u,
  38u,
  31u,
  18u,
  32u,
  26u,
  29u,
  31u,
  27u,
  34u,
  27u
 };

static const UType JSum_8_11_3_9[]=
 {
  27u,
  34u,
  26u,
  38u,
  26u,
  30u,
  40u,
  32u,
  24u,
  24u,
  28u
 };

static const PtrLen<const UType> JTable_8_11_3[]=
 {
  Range(JSum_8_11_3_1),
  Range(JSum_8_11_3_2),
  Range(JSum_8_11_3_3),
  Range(JSum_8_11_3_4),
  Range(JSum_8_11_3_5),
  Range(JSum_8_11_3_6),
  Range(JSum_8_11_3_7),
  Range(JSum_8_11_3_8),
  Range(JSum_8_11_3_9)
 };

static const UType JSum_8_11_4_1[]=
 {
  44u,
  40u,
  30u,
  32u,
  30u,
  48u,
  34u,
  42u,
  44u,
  35u,
  38u
 };

static const UType JSum_8_11_4_2[]=
 {
  40u,
  42u,
  35u,
  36u,
  54u,
  34u,
  36u,
  32u,
  34u,
  34u,
  40u
 };

static const UType JSum_8_11_4_3[]=
 {
  40u,
  34u,
  34u,
  35u,
  40u,
  32u,
  54u,
  42u,
  34u,
  36u,
  36u
 };

static const UType JSum_8_11_4_4[]=
 {
  40u,
  35u,
  54u,
  36u,
  34u,
  40u,
  42u,
  36u,
  34u,
  32u,
  34u
 };

static const UType JSum_8_11_4_5[]=
 {
  44u,
  35u,
  42u,
  48u,
  32u,
  40u,
  38u,
  44u,
  34u,
  30u,
  30u
 };

static const UType JSum_8_11_4_6[]=
 {
  40u,
  35u,
  54u,
  36u,
  34u,
  40u,
  42u,
  36u,
  34u,
  32u,
  34u
 };

static const UType JSum_8_11_4_7[]=
 {
  40u,
  34u,
  34u,
  35u,
  40u,
  32u,
  54u,
  42u,
  34u,
  36u,
  36u
 };

static const UType JSum_8_11_4_8[]=
 {
  40u,
  42u,
  35u,
  36u,
  54u,
  34u,
  36u,
  32u,
  34u,
  34u,
  40u
 };

static const UType JSum_8_11_4_9[]=
 {
  44u,
  40u,
  30u,
  32u,
  30u,
  48u,
  34u,
  42u,
  44u,
  35u,
  38u
 };

static const PtrLen<const UType> JTable_8_11_4[]=
 {
  Range(JSum_8_11_4_1),
  Range(JSum_8_11_4_2),
  Range(JSum_8_11_4_3),
  Range(JSum_8_11_4_4),
  Range(JSum_8_11_4_5),
  Range(JSum_8_11_4_6),
  Range(JSum_8_11_4_7),
  Range(JSum_8_11_4_8),
  Range(JSum_8_11_4_9)
 };

static const UType JSum_8_11_5_1[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const UType JSum_8_11_5_2[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_8_11_5_3[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_8_11_5_4[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_8_11_5_5[]=
 {
  44u,
  35u,
  42u,
  54u,
  50u,
  36u,
  44u,
  34u,
  46u,
  36u,
  40u
 };

static const UType JSum_8_11_5_6[]=
 {
  49u,
  46u,
  42u,
  55u,
  38u,
  38u,
  36u,
  45u,
  41u,
  39u,
  32u
 };

static const UType JSum_8_11_5_7[]=
 {
  49u,
  38u,
  41u,
  46u,
  38u,
  39u,
  42u,
  36u,
  32u,
  55u,
  45u
 };

static const UType JSum_8_11_5_8[]=
 {
  49u,
  36u,
  46u,
  45u,
  42u,
  41u,
  55u,
  39u,
  38u,
  32u,
  38u
 };

static const UType JSum_8_11_5_9[]=
 {
  44u,
  36u,
  40u,
  50u,
  36u,
  54u,
  46u,
  42u,
  34u,
  35u,
  44u
 };

static const PtrLen<const UType> JTable_8_11_5[]=
 {
  Range(JSum_8_11_5_1),
  Range(JSum_8_11_5_2),
  Range(JSum_8_11_5_3),
  Range(JSum_8_11_5_4),
  Range(JSum_8_11_5_5),
  Range(JSum_8_11_5_6),
  Range(JSum_8_11_5_7),
  Range(JSum_8_11_5_8),
  Range(JSum_8_11_5_9)
 };

static const UType JSum_8_11_6_1[]=
 {
  84u,
  76u,
  74u,
  90u,
  80u,
  84u,
  62u,
  74u,
  76u,
  67u,
  90u
 };

static const UType JSum_8_11_6_2[]=
 {
  77u,
  72u,
  86u,
  63u,
  80u,
  79u,
  75u,
  87u,
  94u,
  76u,
  68u
 };

static const UType JSum_8_11_6_3[]=
 {
  77u,
  94u,
  79u,
  86u,
  68u,
  87u,
  80u,
  72u,
  76u,
  75u,
  63u
 };

static const UType JSum_8_11_6_4[]=
 {
  77u,
  86u,
  80u,
  75u,
  94u,
  68u,
  72u,
  63u,
  79u,
  87u,
  76u
 };

static const UType JSum_8_11_6_5[]=
 {
  84u,
  67u,
  74u,
  84u,
  90u,
  76u,
  90u,
  76u,
  62u,
  80u,
  74u
 };

static const UType JSum_8_11_6_6[]=
 {
  77u,
  86u,
  80u,
  75u,
  94u,
  68u,
  72u,
  63u,
  79u,
  87u,
  76u
 };

static const UType JSum_8_11_6_7[]=
 {
  77u,
  94u,
  79u,
  86u,
  68u,
  87u,
  80u,
  72u,
  76u,
  75u,
  63u
 };

static const UType JSum_8_11_6_8[]=
 {
  77u,
  72u,
  86u,
  63u,
  80u,
  79u,
  75u,
  87u,
  94u,
  76u,
  68u
 };

static const UType JSum_8_11_6_9[]=
 {
  84u,
  76u,
  74u,
  90u,
  80u,
  84u,
  62u,
  74u,
  76u,
  67u,
  90u
 };

static const PtrLen<const UType> JTable_8_11_6[]=
 {
  Range(JSum_8_11_6_1),
  Range(JSum_8_11_6_2),
  Range(JSum_8_11_6_3),
  Range(JSum_8_11_6_4),
  Range(JSum_8_11_6_5),
  Range(JSum_8_11_6_6),
  Range(JSum_8_11_6_7),
  Range(JSum_8_11_6_8),
  Range(JSum_8_11_6_9)
 };

static const UType JSum_8_11_7_1[]=
 {
  104u,
  92u,
  92u,
  118u,
  108u,
  118u,
  90u,
  102u,
  104u,
  91u,
  102u
 };

static const UType JSum_8_11_7_2[]=
 {
  88u,
  110u,
  107u,
  80u,
  102u,
  100u,
  110u,
  108u,
  114u,
  100u,
  102u
 };

static const UType JSum_8_11_7_3[]=
 {
  88u,
  114u,
  100u,
  107u,
  102u,
  108u,
  102u,
  110u,
  100u,
  110u,
  80u
 };

static const UType JSum_8_11_7_4[]=
 {
  88u,
  107u,
  102u,
  110u,
  114u,
  102u,
  110u,
  80u,
  100u,
  108u,
  100u
 };

static const UType JSum_8_11_7_5[]=
 {
  104u,
  91u,
  102u,
  118u,
  118u,
  92u,
  102u,
  104u,
  90u,
  108u,
  92u
 };

static const UType JSum_8_11_7_6[]=
 {
  88u,
  107u,
  102u,
  110u,
  114u,
  102u,
  110u,
  80u,
  100u,
  108u,
  100u
 };

static const UType JSum_8_11_7_7[]=
 {
  88u,
  114u,
  100u,
  107u,
  102u,
  108u,
  102u,
  110u,
  100u,
  110u,
  80u
 };

static const UType JSum_8_11_7_8[]=
 {
  88u,
  110u,
  107u,
  80u,
  102u,
  100u,
  110u,
  108u,
  114u,
  100u,
  102u
 };

static const UType JSum_8_11_7_9[]=
 {
  104u,
  92u,
  92u,
  118u,
  108u,
  118u,
  90u,
  102u,
  104u,
  91u,
  102u
 };

static const PtrLen<const UType> JTable_8_11_7[]=
 {
  Range(JSum_8_11_7_1),
  Range(JSum_8_11_7_2),
  Range(JSum_8_11_7_3),
  Range(JSum_8_11_7_4),
  Range(JSum_8_11_7_5),
  Range(JSum_8_11_7_6),
  Range(JSum_8_11_7_7),
  Range(JSum_8_11_7_8),
  Range(JSum_8_11_7_9)
 };

static const UType JSum_8_11_8_1[]=
 {
  184u,
  166u,
  188u,
  152u,
  164u,
  166u,
  170u,
  174u,
  148u,
  170u,
  187u
 };

static const UType JSum_8_11_8_2[]=
 {
  146u,
  182u,
  157u,
  182u,
  189u,
  169u,
  161u,
  178u,
  178u,
  166u,
  161u
 };

static const UType JSum_8_11_8_3[]=
 {
  146u,
  178u,
  169u,
  157u,
  161u,
  178u,
  189u,
  182u,
  166u,
  161u,
  182u
 };

static const UType JSum_8_11_8_4[]=
 {
  146u,
  157u,
  189u,
  161u,
  178u,
  161u,
  182u,
  182u,
  169u,
  178u,
  166u
 };

static const UType JSum_8_11_8_5[]=
 {
  184u,
  170u,
  174u,
  166u,
  152u,
  166u,
  187u,
  148u,
  170u,
  164u,
  188u
 };

static const UType JSum_8_11_8_6[]=
 {
  146u,
  157u,
  189u,
  161u,
  178u,
  161u,
  182u,
  182u,
  169u,
  178u,
  166u
 };

static const UType JSum_8_11_8_7[]=
 {
  146u,
  178u,
  169u,
  157u,
  161u,
  178u,
  189u,
  182u,
  166u,
  161u,
  182u
 };

static const UType JSum_8_11_8_8[]=
 {
  146u,
  182u,
  157u,
  182u,
  189u,
  169u,
  161u,
  178u,
  178u,
  166u,
  161u
 };

static const UType JSum_8_11_8_9[]=
 {
  184u,
  166u,
  188u,
  152u,
  164u,
  166u,
  170u,
  174u,
  148u,
  170u,
  187u
 };

static const PtrLen<const UType> JTable_8_11_8[]=
 {
  Range(JSum_8_11_8_1),
  Range(JSum_8_11_8_2),
  Range(JSum_8_11_8_3),
  Range(JSum_8_11_8_4),
  Range(JSum_8_11_8_5),
  Range(JSum_8_11_8_6),
  Range(JSum_8_11_8_7),
  Range(JSum_8_11_8_8),
  Range(JSum_8_11_8_9)
 };

static const UType JSum_8_11_9_1[]=
 {
  188u,
  192u,
  186u,
  170u,
  202u,
  188u,
  164u,
  172u,
  162u,
  198u,
  179u
 };

static const UType JSum_8_11_9_2[]=
 {
  182u,
  187u,
  184u,
  188u,
  190u,
  192u,
  180u,
  166u,
  154u,
  204u,
  174u
 };

static const UType JSum_8_11_9_3[]=
 {
  182u,
  154u,
  192u,
  184u,
  174u,
  166u,
  190u,
  187u,
  204u,
  180u,
  188u
 };

static const UType JSum_8_11_9_4[]=
 {
  182u,
  184u,
  190u,
  180u,
  154u,
  174u,
  187u,
  188u,
  192u,
  166u,
  204u
 };

static const UType JSum_8_11_9_5[]=
 {
  188u,
  198u,
  172u,
  188u,
  170u,
  192u,
  179u,
  162u,
  164u,
  202u,
  186u
 };

static const UType JSum_8_11_9_6[]=
 {
  182u,
  184u,
  190u,
  180u,
  154u,
  174u,
  187u,
  188u,
  192u,
  166u,
  204u
 };

static const UType JSum_8_11_9_7[]=
 {
  182u,
  154u,
  192u,
  184u,
  174u,
  166u,
  190u,
  187u,
  204u,
  180u,
  188u
 };

static const UType JSum_8_11_9_8[]=
 {
  182u,
  187u,
  184u,
  188u,
  190u,
  192u,
  180u,
  166u,
  154u,
  204u,
  174u
 };

static const UType JSum_8_11_9_9[]=
 {
  188u,
  192u,
  186u,
  170u,
  202u,
  188u,
  164u,
  172u,
  162u,
  198u,
  179u
 };

static const PtrLen<const UType> JTable_8_11_9[]=
 {
  Range(JSum_8_11_9_1),
  Range(JSum_8_11_9_2),
  Range(JSum_8_11_9_3),
  Range(JSum_8_11_9_4),
  Range(JSum_8_11_9_5),
  Range(JSum_8_11_9_6),
  Range(JSum_8_11_9_7),
  Range(JSum_8_11_9_8),
  Range(JSum_8_11_9_9)
 };

static const UType JSum_8_11_10_1[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const UType JSum_8_11_10_2[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_8_11_10_3[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_8_11_10_4[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_8_11_10_5[]=
 {
  198u,
  208u,
  224u,
  206u,
  210u,
  204u,
  236u,
  222u,
  194u,
  220u,
  187u
 };

static const UType JSum_8_11_10_6[]=
 {
  207u,
  206u,
  199u,
  211u,
  219u,
  196u,
  206u,
  242u,
  213u,
  222u,
  188u
 };

static const UType JSum_8_11_10_7[]=
 {
  207u,
  219u,
  213u,
  206u,
  196u,
  222u,
  199u,
  206u,
  188u,
  211u,
  242u
 };

static const UType JSum_8_11_10_8[]=
 {
  207u,
  206u,
  206u,
  242u,
  199u,
  213u,
  211u,
  222u,
  219u,
  188u,
  196u
 };

static const UType JSum_8_11_10_9[]=
 {
  198u,
  204u,
  187u,
  210u,
  220u,
  206u,
  194u,
  224u,
  222u,
  208u,
  236u
 };

static const PtrLen<const UType> JTable_8_11_10[]=
 {
  Range(JSum_8_11_10_1),
  Range(JSum_8_11_10_2),
  Range(JSum_8_11_10_3),
  Range(JSum_8_11_10_4),
  Range(JSum_8_11_10_5),
  Range(JSum_8_11_10_6),
  Range(JSum_8_11_10_7),
  Range(JSum_8_11_10_8),
  Range(JSum_8_11_10_9)
 };

static const UType JSum_8_11_11_1[]=
 {
  222u,
  254u,
  230u,
  218u,
  204u,
  228u,
  232u,
  244u,
  212u,
  243u,
  242u
 };

static const UType JSum_8_11_11_2[]=
 {
  251u,
  228u,
  246u,
  223u,
  220u,
  223u,
  207u,
  229u,
  252u,
  238u,
  212u
 };

static const UType JSum_8_11_11_3[]=
 {
  251u,
  252u,
  223u,
  246u,
  212u,
  229u,
  220u,
  228u,
  238u,
  207u,
  223u
 };

static const UType JSum_8_11_11_4[]=
 {
  251u,
  246u,
  220u,
  207u,
  252u,
  212u,
  228u,
  223u,
  223u,
  229u,
  238u
 };

static const UType JSum_8_11_11_5[]=
 {
  222u,
  243u,
  244u,
  228u,
  218u,
  254u,
  242u,
  212u,
  232u,
  204u,
  230u
 };

static const UType JSum_8_11_11_6[]=
 {
  251u,
  246u,
  220u,
  207u,
  252u,
  212u,
  228u,
  223u,
  223u,
  229u,
  238u
 };

static const UType JSum_8_11_11_7[]=
 {
  251u,
  252u,
  223u,
  246u,
  212u,
  229u,
  220u,
  228u,
  238u,
  207u,
  223u
 };

static const UType JSum_8_11_11_8[]=
 {
  251u,
  228u,
  246u,
  223u,
  220u,
  223u,
  207u,
  229u,
  252u,
  238u,
  212u
 };

static const UType JSum_8_11_11_9[]=
 {
  222u,
  254u,
  230u,
  218u,
  204u,
  228u,
  232u,
  244u,
  212u,
  243u,
  242u
 };

static const PtrLen<const UType> JTable_8_11_11[]=
 {
  Range(JSum_8_11_11_1),
  Range(JSum_8_11_11_2),
  Range(JSum_8_11_11_3),
  Range(JSum_8_11_11_4),
  Range(JSum_8_11_11_5),
  Range(JSum_8_11_11_6),
  Range(JSum_8_11_11_7),
  Range(JSum_8_11_11_8),
  Range(JSum_8_11_11_9)
 };

static const UType JSum_8_11_12_1[]=
 {
  272u,
  230u,
  254u,
  288u,
  256u,
  264u,
  267u,
  278u,
  270u,
  286u,
  260u
 };

static const UType JSum_8_11_12_2[]=
 {
  252u,
  286u,
  268u,
  244u,
  238u,
  275u,
  264u,
  286u,
  258u,
  276u,
  278u
 };

static const UType JSum_8_11_12_3[]=
 {
  252u,
  258u,
  275u,
  268u,
  278u,
  286u,
  238u,
  286u,
  276u,
  264u,
  244u
 };

static const UType JSum_8_11_12_4[]=
 {
  252u,
  268u,
  238u,
  264u,
  258u,
  278u,
  286u,
  244u,
  275u,
  286u,
  276u
 };

static const UType JSum_8_11_12_5[]=
 {
  272u,
  286u,
  278u,
  264u,
  288u,
  230u,
  260u,
  270u,
  267u,
  256u,
  254u
 };

static const UType JSum_8_11_12_6[]=
 {
  252u,
  268u,
  238u,
  264u,
  258u,
  278u,
  286u,
  244u,
  275u,
  286u,
  276u
 };

static const UType JSum_8_11_12_7[]=
 {
  252u,
  258u,
  275u,
  268u,
  278u,
  286u,
  238u,
  286u,
  276u,
  264u,
  244u
 };

static const UType JSum_8_11_12_8[]=
 {
  252u,
  286u,
  268u,
  244u,
  238u,
  275u,
  264u,
  286u,
  258u,
  276u,
  278u
 };

static const UType JSum_8_11_12_9[]=
 {
  272u,
  230u,
  254u,
  288u,
  256u,
  264u,
  267u,
  278u,
  270u,
  286u,
  260u
 };

static const PtrLen<const UType> JTable_8_11_12[]=
 {
  Range(JSum_8_11_12_1),
  Range(JSum_8_11_12_2),
  Range(JSum_8_11_12_3),
  Range(JSum_8_11_12_4),
  Range(JSum_8_11_12_5),
  Range(JSum_8_11_12_6),
  Range(JSum_8_11_12_7),
  Range(JSum_8_11_12_8),
  Range(JSum_8_11_12_9)
 };

static const UType JSum_8_11_13_1[]=
 {
  560u,
  530u,
  564u,
  574u,
  530u,
  498u,
  552u,
  523u,
  570u,
  544u,
  560u
 };

static const UType JSum_8_11_13_2[]=
 {
  540u,
  550u,
  564u,
  534u,
  539u,
  580u,
  582u,
  512u,
  554u,
  512u,
  538u
 };

static const UType JSum_8_11_13_3[]=
 {
  540u,
  554u,
  580u,
  564u,
  538u,
  512u,
  539u,
  550u,
  512u,
  582u,
  534u
 };

static const UType JSum_8_11_13_4[]=
 {
  540u,
  564u,
  539u,
  582u,
  554u,
  538u,
  550u,
  534u,
  580u,
  512u,
  512u
 };

static const UType JSum_8_11_13_5[]=
 {
  560u,
  544u,
  523u,
  498u,
  574u,
  530u,
  560u,
  570u,
  552u,
  530u,
  564u
 };

static const UType JSum_8_11_13_6[]=
 {
  540u,
  564u,
  539u,
  582u,
  554u,
  538u,
  550u,
  534u,
  580u,
  512u,
  512u
 };

static const UType JSum_8_11_13_7[]=
 {
  540u,
  554u,
  580u,
  564u,
  538u,
  512u,
  539u,
  550u,
  512u,
  582u,
  534u
 };

static const UType JSum_8_11_13_8[]=
 {
  540u,
  550u,
  564u,
  534u,
  539u,
  580u,
  582u,
  512u,
  554u,
  512u,
  538u
 };

static const UType JSum_8_11_13_9[]=
 {
  560u,
  530u,
  564u,
  574u,
  530u,
  498u,
  552u,
  523u,
  570u,
  544u,
  560u
 };

static const PtrLen<const UType> JTable_8_11_13[]=
 {
  Range(JSum_8_11_13_1),
  Range(JSum_8_11_13_2),
  Range(JSum_8_11_13_3),
  Range(JSum_8_11_13_4),
  Range(JSum_8_11_13_5),
  Range(JSum_8_11_13_6),
  Range(JSum_8_11_13_7),
  Range(JSum_8_11_13_8),
  Range(JSum_8_11_13_9)
 };

static const UType JSum_8_11_14_1[]=
 {
  558u,
  608u,
  570u,
  592u,
  574u,
  524u,
  550u,
  588u,
  570u,
  548u,
  587u
 };

static const UType JSum_8_11_14_2[]=
 {
  573u,
  556u,
  518u,
  571u,
  604u,
  558u,
  590u,
  555u,
  599u,
  575u,
  570u
 };

static const UType JSum_8_11_14_3[]=
 {
  573u,
  599u,
  558u,
  518u,
  570u,
  555u,
  604u,
  556u,
  575u,
  590u,
  571u
 };

static const UType JSum_8_11_14_4[]=
 {
  573u,
  518u,
  604u,
  590u,
  599u,
  570u,
  556u,
  571u,
  558u,
  555u,
  575u
 };

static const UType JSum_8_11_14_5[]=
 {
  558u,
  548u,
  588u,
  524u,
  592u,
  608u,
  587u,
  570u,
  550u,
  574u,
  570u
 };

static const UType JSum_8_11_14_6[]=
 {
  573u,
  518u,
  604u,
  590u,
  599u,
  570u,
  556u,
  571u,
  558u,
  555u,
  575u
 };

static const UType JSum_8_11_14_7[]=
 {
  573u,
  599u,
  558u,
  518u,
  570u,
  555u,
  604u,
  556u,
  575u,
  590u,
  571u
 };

static const UType JSum_8_11_14_8[]=
 {
  573u,
  556u,
  518u,
  571u,
  604u,
  558u,
  590u,
  555u,
  599u,
  575u,
  570u
 };

static const UType JSum_8_11_14_9[]=
 {
  558u,
  608u,
  570u,
  592u,
  574u,
  524u,
  550u,
  588u,
  570u,
  548u,
  587u
 };

static const PtrLen<const UType> JTable_8_11_14[]=
 {
  Range(JSum_8_11_14_1),
  Range(JSum_8_11_14_2),
  Range(JSum_8_11_14_3),
  Range(JSum_8_11_14_4),
  Range(JSum_8_11_14_5),
  Range(JSum_8_11_14_6),
  Range(JSum_8_11_14_7),
  Range(JSum_8_11_14_8),
  Range(JSum_8_11_14_9)
 };

static const UType JSum_8_11_15_1[]=
 {
  704u,
  684u,
  678u,
  632u,
  698u,
  712u,
  702u,
  688u,
  730u,
  662u,
  699u
 };

static const UType JSum_8_11_15_2[]=
 {
  704u,
  680u,
  723u,
  678u,
  707u,
  693u,
  701u,
  712u,
  628u,
  666u,
  697u
 };

static const UType JSum_8_11_15_3[]=
 {
  704u,
  628u,
  693u,
  723u,
  697u,
  712u,
  707u,
  680u,
  666u,
  701u,
  678u
 };

static const UType JSum_8_11_15_4[]=
 {
  704u,
  723u,
  707u,
  701u,
  628u,
  697u,
  680u,
  678u,
  693u,
  712u,
  666u
 };

static const UType JSum_8_11_15_5[]=
 {
  704u,
  662u,
  688u,
  712u,
  632u,
  684u,
  699u,
  730u,
  702u,
  698u,
  678u
 };

static const UType JSum_8_11_15_6[]=
 {
  704u,
  723u,
  707u,
  701u,
  628u,
  697u,
  680u,
  678u,
  693u,
  712u,
  666u
 };

static const UType JSum_8_11_15_7[]=
 {
  704u,
  628u,
  693u,
  723u,
  697u,
  712u,
  707u,
  680u,
  666u,
  701u,
  678u
 };

static const UType JSum_8_11_15_8[]=
 {
  704u,
  680u,
  723u,
  678u,
  707u,
  693u,
  701u,
  712u,
  628u,
  666u,
  697u
 };

static const UType JSum_8_11_15_9[]=
 {
  704u,
  684u,
  678u,
  632u,
  698u,
  712u,
  702u,
  688u,
  730u,
  662u,
  699u
 };

static const PtrLen<const UType> JTable_8_11_15[]=
 {
  Range(JSum_8_11_15_1),
  Range(JSum_8_11_15_2),
  Range(JSum_8_11_15_3),
  Range(JSum_8_11_15_4),
  Range(JSum_8_11_15_5),
  Range(JSum_8_11_15_6),
  Range(JSum_8_11_15_7),
  Range(JSum_8_11_15_8),
  Range(JSum_8_11_15_9)
 };

static const UType JSum_8_11_16_1[]=
 {
  792u,
  828u,
  824u,
  750u,
  842u,
  814u,
  812u,
  776u,
  771u,
  778u,
  790u
 };

static const UType JSum_8_11_16_2[]=
 {
  782u,
  819u,
  774u,
  784u,
  799u,
  792u,
  785u,
  851u,
  811u,
  830u,
  750u
 };

static const UType JSum_8_11_16_3[]=
 {
  782u,
  811u,
  792u,
  774u,
  750u,
  851u,
  799u,
  819u,
  830u,
  785u,
  784u
 };

static const UType JSum_8_11_16_4[]=
 {
  782u,
  774u,
  799u,
  785u,
  811u,
  750u,
  819u,
  784u,
  792u,
  851u,
  830u
 };

static const UType JSum_8_11_16_5[]=
 {
  792u,
  778u,
  776u,
  814u,
  750u,
  828u,
  790u,
  771u,
  812u,
  842u,
  824u
 };

static const UType JSum_8_11_16_6[]=
 {
  782u,
  774u,
  799u,
  785u,
  811u,
  750u,
  819u,
  784u,
  792u,
  851u,
  830u
 };

static const UType JSum_8_11_16_7[]=
 {
  782u,
  811u,
  792u,
  774u,
  750u,
  851u,
  799u,
  819u,
  830u,
  785u,
  784u
 };

static const UType JSum_8_11_16_8[]=
 {
  782u,
  819u,
  774u,
  784u,
  799u,
  792u,
  785u,
  851u,
  811u,
  830u,
  750u
 };

static const UType JSum_8_11_16_9[]=
 {
  792u,
  828u,
  824u,
  750u,
  842u,
  814u,
  812u,
  776u,
  771u,
  778u,
  790u
 };

static const PtrLen<const UType> JTable_8_11_16[]=
 {
  Range(JSum_8_11_16_1),
  Range(JSum_8_11_16_2),
  Range(JSum_8_11_16_3),
  Range(JSum_8_11_16_4),
  Range(JSum_8_11_16_5),
  Range(JSum_8_11_16_6),
  Range(JSum_8_11_16_7),
  Range(JSum_8_11_16_8),
  Range(JSum_8_11_16_9)
 };

static const UType JSum_8_11_17_1[]=
 {
  962u,
  976u,
  1022u,
  944u,
  1008u,
  946u,
  914u,
  948u,
  990u,
  960u,
  955u
 };

static const UType JSum_8_11_17_2[]=
 {
  932u,
  947u,
  994u,
  1016u,
  940u,
  984u,
  954u,
  1008u,
  962u,
  922u,
  966u
 };

static const UType JSum_8_11_17_3[]=
 {
  932u,
  962u,
  984u,
  994u,
  966u,
  1008u,
  940u,
  947u,
  922u,
  954u,
  1016u
 };

static const UType JSum_8_11_17_4[]=
 {
  932u,
  994u,
  940u,
  954u,
  962u,
  966u,
  947u,
  1016u,
  984u,
  1008u,
  922u
 };

static const UType JSum_8_11_17_5[]=
 {
  962u,
  960u,
  948u,
  946u,
  944u,
  976u,
  955u,
  990u,
  914u,
  1008u,
  1022u
 };

static const UType JSum_8_11_17_6[]=
 {
  932u,
  994u,
  940u,
  954u,
  962u,
  966u,
  947u,
  1016u,
  984u,
  1008u,
  922u
 };

static const UType JSum_8_11_17_7[]=
 {
  932u,
  962u,
  984u,
  994u,
  966u,
  1008u,
  940u,
  947u,
  922u,
  954u,
  1016u
 };

static const UType JSum_8_11_17_8[]=
 {
  932u,
  947u,
  994u,
  1016u,
  940u,
  984u,
  954u,
  1008u,
  962u,
  922u,
  966u
 };

static const UType JSum_8_11_17_9[]=
 {
  962u,
  976u,
  1022u,
  944u,
  1008u,
  946u,
  914u,
  948u,
  990u,
  960u,
  955u
 };

static const PtrLen<const UType> JTable_8_11_17[]=
 {
  Range(JSum_8_11_17_1),
  Range(JSum_8_11_17_2),
  Range(JSum_8_11_17_3),
  Range(JSum_8_11_17_4),
  Range(JSum_8_11_17_5),
  Range(JSum_8_11_17_6),
  Range(JSum_8_11_17_7),
  Range(JSum_8_11_17_8),
  Range(JSum_8_11_17_9)
 };

static const UType JSum_8_11_18_1[]=
 {
  1966u,
  1938u,
  1922u,
  1952u,
  1996u,
  1988u,
  1860u,
  1964u,
  1875u,
  1902u,
  1954u
 };

static const UType JSum_8_11_18_2[]=
 {
  1968u,
  1875u,
  1940u,
  1962u,
  1883u,
  1960u,
  1883u,
  1943u,
  1917u,
  1972u,
  2014u
 };

static const UType JSum_8_11_18_3[]=
 {
  1968u,
  1917u,
  1960u,
  1940u,
  2014u,
  1943u,
  1883u,
  1875u,
  1972u,
  1883u,
  1962u
 };

static const UType JSum_8_11_18_4[]=
 {
  1968u,
  1940u,
  1883u,
  1883u,
  1917u,
  2014u,
  1875u,
  1962u,
  1960u,
  1943u,
  1972u
 };

static const UType JSum_8_11_18_5[]=
 {
  1966u,
  1902u,
  1964u,
  1988u,
  1952u,
  1938u,
  1954u,
  1875u,
  1860u,
  1996u,
  1922u
 };

static const UType JSum_8_11_18_6[]=
 {
  1968u,
  1940u,
  1883u,
  1883u,
  1917u,
  2014u,
  1875u,
  1962u,
  1960u,
  1943u,
  1972u
 };

static const UType JSum_8_11_18_7[]=
 {
  1968u,
  1917u,
  1960u,
  1940u,
  2014u,
  1943u,
  1883u,
  1875u,
  1972u,
  1883u,
  1962u
 };

static const UType JSum_8_11_18_8[]=
 {
  1968u,
  1875u,
  1940u,
  1962u,
  1883u,
  1960u,
  1883u,
  1943u,
  1917u,
  1972u,
  2014u
 };

static const UType JSum_8_11_18_9[]=
 {
  1966u,
  1938u,
  1922u,
  1952u,
  1996u,
  1988u,
  1860u,
  1964u,
  1875u,
  1902u,
  1954u
 };

static const PtrLen<const UType> JTable_8_11_18[]=
 {
  Range(JSum_8_11_18_1),
  Range(JSum_8_11_18_2),
  Range(JSum_8_11_18_3),
  Range(JSum_8_11_18_4),
  Range(JSum_8_11_18_5),
  Range(JSum_8_11_18_6),
  Range(JSum_8_11_18_7),
  Range(JSum_8_11_18_8),
  Range(JSum_8_11_18_9)
 };

static const UType JSum_8_11_19_1[]=
 {
  2618u,
  2582u,
  2666u,
  2588u,
  2646u,
  2624u,
  2672u,
  2720u,
  2540u,
  2579u,
  2606u
 };

static const UType JSum_8_11_19_2[]=
 {
  2642u,
  2573u,
  2666u,
  2624u,
  2741u,
  2606u,
  2552u,
  2610u,
  2615u,
  2579u,
  2633u
 };

static const UType JSum_8_11_19_3[]=
 {
  2642u,
  2615u,
  2606u,
  2666u,
  2633u,
  2610u,
  2741u,
  2573u,
  2579u,
  2552u,
  2624u
 };

static const UType JSum_8_11_19_4[]=
 {
  2642u,
  2666u,
  2741u,
  2552u,
  2615u,
  2633u,
  2573u,
  2624u,
  2606u,
  2610u,
  2579u
 };

static const UType JSum_8_11_19_5[]=
 {
  2618u,
  2579u,
  2720u,
  2624u,
  2588u,
  2582u,
  2606u,
  2540u,
  2672u,
  2646u,
  2666u
 };

static const UType JSum_8_11_19_6[]=
 {
  2642u,
  2666u,
  2741u,
  2552u,
  2615u,
  2633u,
  2573u,
  2624u,
  2606u,
  2610u,
  2579u
 };

static const UType JSum_8_11_19_7[]=
 {
  2642u,
  2615u,
  2606u,
  2666u,
  2633u,
  2610u,
  2741u,
  2573u,
  2579u,
  2552u,
  2624u
 };

static const UType JSum_8_11_19_8[]=
 {
  2642u,
  2573u,
  2666u,
  2624u,
  2741u,
  2606u,
  2552u,
  2610u,
  2615u,
  2579u,
  2633u
 };

static const UType JSum_8_11_19_9[]=
 {
  2618u,
  2582u,
  2666u,
  2588u,
  2646u,
  2624u,
  2672u,
  2720u,
  2540u,
  2579u,
  2606u
 };

static const PtrLen<const UType> JTable_8_11_19[]=
 {
  Range(JSum_8_11_19_1),
  Range(JSum_8_11_19_2),
  Range(JSum_8_11_19_3),
  Range(JSum_8_11_19_4),
  Range(JSum_8_11_19_5),
  Range(JSum_8_11_19_6),
  Range(JSum_8_11_19_7),
  Range(JSum_8_11_19_8),
  Range(JSum_8_11_19_9)
 };

static const UType JSum_8_11_20_1[]=
 {
  3188u,
  3202u,
  3283u,
  3180u,
  3354u,
  3284u,
  3182u,
  3200u,
  3198u,
  3260u,
  3198u
 };

static const UType JSum_8_11_20_2[]=
 {
  3175u,
  3222u,
  3204u,
  3260u,
  3239u,
  3211u,
  3207u,
  3388u,
  3213u,
  3214u,
  3196u
 };

static const UType JSum_8_11_20_3[]=
 {
  3175u,
  3213u,
  3211u,
  3204u,
  3196u,
  3388u,
  3239u,
  3222u,
  3214u,
  3207u,
  3260u
 };

static const UType JSum_8_11_20_4[]=
 {
  3175u,
  3204u,
  3239u,
  3207u,
  3213u,
  3196u,
  3222u,
  3260u,
  3211u,
  3388u,
  3214u
 };

static const UType JSum_8_11_20_5[]=
 {
  3188u,
  3260u,
  3200u,
  3284u,
  3180u,
  3202u,
  3198u,
  3198u,
  3182u,
  3354u,
  3283u
 };

static const UType JSum_8_11_20_6[]=
 {
  3175u,
  3204u,
  3239u,
  3207u,
  3213u,
  3196u,
  3222u,
  3260u,
  3211u,
  3388u,
  3214u
 };

static const UType JSum_8_11_20_7[]=
 {
  3175u,
  3213u,
  3211u,
  3204u,
  3196u,
  3388u,
  3239u,
  3222u,
  3214u,
  3207u,
  3260u
 };

static const UType JSum_8_11_20_8[]=
 {
  3175u,
  3222u,
  3204u,
  3260u,
  3239u,
  3211u,
  3207u,
  3388u,
  3213u,
  3214u,
  3196u
 };

static const UType JSum_8_11_20_9[]=
 {
  3188u,
  3202u,
  3283u,
  3180u,
  3354u,
  3284u,
  3182u,
  3200u,
  3198u,
  3260u,
  3198u
 };

static const PtrLen<const UType> JTable_8_11_20[]=
 {
  Range(JSum_8_11_20_1),
  Range(JSum_8_11_20_2),
  Range(JSum_8_11_20_3),
  Range(JSum_8_11_20_4),
  Range(JSum_8_11_20_5),
  Range(JSum_8_11_20_6),
  Range(JSum_8_11_20_7),
  Range(JSum_8_11_20_8),
  Range(JSum_8_11_20_9)
 };

static const UType JSum_8_11_21_1[]=
 {
  3515u,
  3408u,
  3526u,
  3432u,
  3482u,
  3370u,
  3364u,
  3492u,
  3526u,
  3444u,
  3478u
 };

static const UType JSum_8_11_21_2[]=
 {
  3464u,
  3510u,
  3433u,
  3410u,
  3468u,
  3320u,
  3489u,
  3527u,
  3497u,
  3424u,
  3495u
 };

static const UType JSum_8_11_21_3[]=
 {
  3464u,
  3497u,
  3320u,
  3433u,
  3495u,
  3527u,
  3468u,
  3510u,
  3424u,
  3489u,
  3410u
 };

static const UType JSum_8_11_21_4[]=
 {
  3464u,
  3433u,
  3468u,
  3489u,
  3497u,
  3495u,
  3510u,
  3410u,
  3320u,
  3527u,
  3424u
 };

static const UType JSum_8_11_21_5[]=
 {
  3515u,
  3444u,
  3492u,
  3370u,
  3432u,
  3408u,
  3478u,
  3526u,
  3364u,
  3482u,
  3526u
 };

static const UType JSum_8_11_21_6[]=
 {
  3464u,
  3433u,
  3468u,
  3489u,
  3497u,
  3495u,
  3510u,
  3410u,
  3320u,
  3527u,
  3424u
 };

static const UType JSum_8_11_21_7[]=
 {
  3464u,
  3497u,
  3320u,
  3433u,
  3495u,
  3527u,
  3468u,
  3510u,
  3424u,
  3489u,
  3410u
 };

static const UType JSum_8_11_21_8[]=
 {
  3464u,
  3510u,
  3433u,
  3410u,
  3468u,
  3320u,
  3489u,
  3527u,
  3497u,
  3424u,
  3495u
 };

static const UType JSum_8_11_21_9[]=
 {
  3515u,
  3408u,
  3526u,
  3432u,
  3482u,
  3370u,
  3364u,
  3492u,
  3526u,
  3444u,
  3478u
 };

static const PtrLen<const UType> JTable_8_11_21[]=
 {
  Range(JSum_8_11_21_1),
  Range(JSum_8_11_21_2),
  Range(JSum_8_11_21_3),
  Range(JSum_8_11_21_4),
  Range(JSum_8_11_21_5),
  Range(JSum_8_11_21_6),
  Range(JSum_8_11_21_7),
  Range(JSum_8_11_21_8),
  Range(JSum_8_11_21_9)
 };

static const UType JSum_8_11_22_1[]=
 {
  4020u,
  3994u,
  3968u,
  4026u,
  4050u,
  4027u,
  3936u,
  4048u,
  3842u,
  3944u,
  4034u
 };

static const UType JSum_8_11_22_2[]=
 {
  3974u,
  4009u,
  4005u,
  3811u,
  4020u,
  4011u,
  4046u,
  4030u,
  3993u,
  4016u,
  3974u
 };

static const UType JSum_8_11_22_3[]=
 {
  3974u,
  3993u,
  4011u,
  4005u,
  3974u,
  4030u,
  4020u,
  4009u,
  4016u,
  4046u,
  3811u
 };

static const UType JSum_8_11_22_4[]=
 {
  3974u,
  4005u,
  4020u,
  4046u,
  3993u,
  3974u,
  4009u,
  3811u,
  4011u,
  4030u,
  4016u
 };

static const UType JSum_8_11_22_5[]=
 {
  4020u,
  3944u,
  4048u,
  4027u,
  4026u,
  3994u,
  4034u,
  3842u,
  3936u,
  4050u,
  3968u
 };

static const UType JSum_8_11_22_6[]=
 {
  3974u,
  4005u,
  4020u,
  4046u,
  3993u,
  3974u,
  4009u,
  3811u,
  4011u,
  4030u,
  4016u
 };

static const UType JSum_8_11_22_7[]=
 {
  3974u,
  3993u,
  4011u,
  4005u,
  3974u,
  4030u,
  4020u,
  4009u,
  4016u,
  4046u,
  3811u
 };

static const UType JSum_8_11_22_8[]=
 {
  3974u,
  4009u,
  4005u,
  3811u,
  4020u,
  4011u,
  4046u,
  4030u,
  3993u,
  4016u,
  3974u
 };

static const UType JSum_8_11_22_9[]=
 {
  4020u,
  3994u,
  3968u,
  4026u,
  4050u,
  4027u,
  3936u,
  4048u,
  3842u,
  3944u,
  4034u
 };

static const PtrLen<const UType> JTable_8_11_22[]=
 {
  Range(JSum_8_11_22_1),
  Range(JSum_8_11_22_2),
  Range(JSum_8_11_22_3),
  Range(JSum_8_11_22_4),
  Range(JSum_8_11_22_5),
  Range(JSum_8_11_22_6),
  Range(JSum_8_11_22_7),
  Range(JSum_8_11_22_8),
  Range(JSum_8_11_22_9)
 };

static const UType JSum_8_11_23_1[]=
 {
  6780u,
  6606u,
  6547u,
  6704u,
  6634u,
  6610u,
  6498u,
  6584u,
  6642u,
  6728u,
  6596u
 };

static const UType JSum_8_11_23_2[]=
 {
  6763u,
  6590u,
  6556u,
  6630u,
  6501u,
  6605u,
  6713u,
  6684u,
  6539u,
  6708u,
  6640u
 };

static const UType JSum_8_11_23_3[]=
 {
  6763u,
  6539u,
  6605u,
  6556u,
  6640u,
  6684u,
  6501u,
  6590u,
  6708u,
  6713u,
  6630u
 };

static const UType JSum_8_11_23_4[]=
 {
  6763u,
  6556u,
  6501u,
  6713u,
  6539u,
  6640u,
  6590u,
  6630u,
  6605u,
  6684u,
  6708u
 };

static const UType JSum_8_11_23_5[]=
 {
  6780u,
  6728u,
  6584u,
  6610u,
  6704u,
  6606u,
  6596u,
  6642u,
  6498u,
  6634u,
  6547u
 };

static const UType JSum_8_11_23_6[]=
 {
  6763u,
  6556u,
  6501u,
  6713u,
  6539u,
  6640u,
  6590u,
  6630u,
  6605u,
  6684u,
  6708u
 };

static const UType JSum_8_11_23_7[]=
 {
  6763u,
  6539u,
  6605u,
  6556u,
  6640u,
  6684u,
  6501u,
  6590u,
  6708u,
  6713u,
  6630u
 };

static const UType JSum_8_11_23_8[]=
 {
  6763u,
  6590u,
  6556u,
  6630u,
  6501u,
  6605u,
  6713u,
  6684u,
  6539u,
  6708u,
  6640u
 };

static const UType JSum_8_11_23_9[]=
 {
  6780u,
  6606u,
  6547u,
  6704u,
  6634u,
  6610u,
  6498u,
  6584u,
  6642u,
  6728u,
  6596u
 };

static const PtrLen<const UType> JTable_8_11_23[]=
 {
  Range(JSum_8_11_23_1),
  Range(JSum_8_11_23_2),
  Range(JSum_8_11_23_3),
  Range(JSum_8_11_23_4),
  Range(JSum_8_11_23_5),
  Range(JSum_8_11_23_6),
  Range(JSum_8_11_23_7),
  Range(JSum_8_11_23_8),
  Range(JSum_8_11_23_9)
 };

static const UType JSum_8_11_24_1[]=
 {
  9438u,
  9340u,
  9347u,
  9254u,
  9228u,
  9432u,
  9254u,
  9186u,
  9212u,
  9268u,
  9142u
 };

static const UType JSum_8_11_24_2[]=
 {
  9201u,
  9290u,
  9234u,
  9276u,
  9299u,
  9143u,
  9499u,
  9390u,
  9283u,
  9208u,
  9278u
 };

static const UType JSum_8_11_24_3[]=
 {
  9201u,
  9283u,
  9143u,
  9234u,
  9278u,
  9390u,
  9299u,
  9290u,
  9208u,
  9499u,
  9276u
 };

static const UType JSum_8_11_24_4[]=
 {
  9201u,
  9234u,
  9299u,
  9499u,
  9283u,
  9278u,
  9290u,
  9276u,
  9143u,
  9390u,
  9208u
 };

static const UType JSum_8_11_24_5[]=
 {
  9438u,
  9268u,
  9186u,
  9432u,
  9254u,
  9340u,
  9142u,
  9212u,
  9254u,
  9228u,
  9347u
 };

static const UType JSum_8_11_24_6[]=
 {
  9201u,
  9234u,
  9299u,
  9499u,
  9283u,
  9278u,
  9290u,
  9276u,
  9143u,
  9390u,
  9208u
 };

static const UType JSum_8_11_24_7[]=
 {
  9201u,
  9283u,
  9143u,
  9234u,
  9278u,
  9390u,
  9299u,
  9290u,
  9208u,
  9499u,
  9276u
 };

static const UType JSum_8_11_24_8[]=
 {
  9201u,
  9290u,
  9234u,
  9276u,
  9299u,
  9143u,
  9499u,
  9390u,
  9283u,
  9208u,
  9278u
 };

static const UType JSum_8_11_24_9[]=
 {
  9438u,
  9340u,
  9347u,
  9254u,
  9228u,
  9432u,
  9254u,
  9186u,
  9212u,
  9268u,
  9142u
 };

static const PtrLen<const UType> JTable_8_11_24[]=
 {
  Range(JSum_8_11_24_1),
  Range(JSum_8_11_24_2),
  Range(JSum_8_11_24_3),
  Range(JSum_8_11_24_4),
  Range(JSum_8_11_24_5),
  Range(JSum_8_11_24_6),
  Range(JSum_8_11_24_7),
  Range(JSum_8_11_24_8),
  Range(JSum_8_11_24_9)
 };

static const UType JSum_8_11_25_1[]=
 {
  9563u,
  9654u,
  9568u,
  9830u,
  9672u,
  9804u,
  9802u,
  9606u,
  9616u,
  9770u,
  9704u
 };

static const UType JSum_8_11_25_2[]=
 {
  9688u,
  9723u,
  9736u,
  9801u,
  9639u,
  9821u,
  9496u,
  9552u,
  9734u,
  9737u,
  9662u
 };

static const UType JSum_8_11_25_3[]=
 {
  9688u,
  9734u,
  9821u,
  9736u,
  9662u,
  9552u,
  9639u,
  9723u,
  9737u,
  9496u,
  9801u
 };

static const UType JSum_8_11_25_4[]=
 {
  9688u,
  9736u,
  9639u,
  9496u,
  9734u,
  9662u,
  9723u,
  9801u,
  9821u,
  9552u,
  9737u
 };

static const UType JSum_8_11_25_5[]=
 {
  9563u,
  9770u,
  9606u,
  9804u,
  9830u,
  9654u,
  9704u,
  9616u,
  9802u,
  9672u,
  9568u
 };

static const UType JSum_8_11_25_6[]=
 {
  9688u,
  9736u,
  9639u,
  9496u,
  9734u,
  9662u,
  9723u,
  9801u,
  9821u,
  9552u,
  9737u
 };

static const UType JSum_8_11_25_7[]=
 {
  9688u,
  9734u,
  9821u,
  9736u,
  9662u,
  9552u,
  9639u,
  9723u,
  9737u,
  9496u,
  9801u
 };

static const UType JSum_8_11_25_8[]=
 {
  9688u,
  9723u,
  9736u,
  9801u,
  9639u,
  9821u,
  9496u,
  9552u,
  9734u,
  9737u,
  9662u
 };

static const UType JSum_8_11_25_9[]=
 {
  9563u,
  9654u,
  9568u,
  9830u,
  9672u,
  9804u,
  9802u,
  9606u,
  9616u,
  9770u,
  9704u
 };

static const PtrLen<const UType> JTable_8_11_25[]=
 {
  Range(JSum_8_11_25_1),
  Range(JSum_8_11_25_2),
  Range(JSum_8_11_25_3),
  Range(JSum_8_11_25_4),
  Range(JSum_8_11_25_5),
  Range(JSum_8_11_25_6),
  Range(JSum_8_11_25_7),
  Range(JSum_8_11_25_8),
  Range(JSum_8_11_25_9)
 };

static const UType JSum_8_11_26_1[]=
 {
  10202u,
  10326u,
  10224u,
  10108u,
  10214u,
  10238u,
  10036u,
  10280u,
  10056u,
  10083u,
  10058u
 };

static const UType JSum_8_11_26_2[]=
 {
  10060u,
  10238u,
  10251u,
  10260u,
  10138u,
  10246u,
  10140u,
  10050u,
  10324u,
  10058u,
  10060u
 };

static const UType JSum_8_11_26_3[]=
 {
  10060u,
  10324u,
  10246u,
  10251u,
  10060u,
  10050u,
  10138u,
  10238u,
  10058u,
  10140u,
  10260u
 };

static const UType JSum_8_11_26_4[]=
 {
  10060u,
  10251u,
  10138u,
  10140u,
  10324u,
  10060u,
  10238u,
  10260u,
  10246u,
  10050u,
  10058u
 };

static const UType JSum_8_11_26_5[]=
 {
  10202u,
  10083u,
  10280u,
  10238u,
  10108u,
  10326u,
  10058u,
  10056u,
  10036u,
  10214u,
  10224u
 };

static const UType JSum_8_11_26_6[]=
 {
  10060u,
  10251u,
  10138u,
  10140u,
  10324u,
  10060u,
  10238u,
  10260u,
  10246u,
  10050u,
  10058u
 };

static const UType JSum_8_11_26_7[]=
 {
  10060u,
  10324u,
  10246u,
  10251u,
  10060u,
  10050u,
  10138u,
  10238u,
  10058u,
  10140u,
  10260u
 };

static const UType JSum_8_11_26_8[]=
 {
  10060u,
  10238u,
  10251u,
  10260u,
  10138u,
  10246u,
  10140u,
  10050u,
  10324u,
  10058u,
  10060u
 };

static const UType JSum_8_11_26_9[]=
 {
  10202u,
  10326u,
  10224u,
  10108u,
  10214u,
  10238u,
  10036u,
  10280u,
  10056u,
  10083u,
  10058u
 };

static const PtrLen<const UType> JTable_8_11_26[]=
 {
  Range(JSum_8_11_26_1),
  Range(JSum_8_11_26_2),
  Range(JSum_8_11_26_3),
  Range(JSum_8_11_26_4),
  Range(JSum_8_11_26_5),
  Range(JSum_8_11_26_6),
  Range(JSum_8_11_26_7),
  Range(JSum_8_11_26_8),
  Range(JSum_8_11_26_9)
 };

static const UType JSum_8_11_27_1[]=
 {
  12586u,
  12616u,
  12642u,
  12467u,
  12632u,
  12454u,
  12308u,
  12648u,
  12590u,
  12684u,
  12510u
 };

static const UType JSum_8_11_27_2[]=
 {
  12666u,
  12512u,
  12498u,
  12476u,
  12538u,
  12368u,
  12746u,
  12714u,
  12523u,
  12592u,
  12504u
 };

static const UType JSum_8_11_27_3[]=
 {
  12666u,
  12523u,
  12368u,
  12498u,
  12504u,
  12714u,
  12538u,
  12512u,
  12592u,
  12746u,
  12476u
 };

static const UType JSum_8_11_27_4[]=
 {
  12666u,
  12498u,
  12538u,
  12746u,
  12523u,
  12504u,
  12512u,
  12476u,
  12368u,
  12714u,
  12592u
 };

static const UType JSum_8_11_27_5[]=
 {
  12586u,
  12684u,
  12648u,
  12454u,
  12467u,
  12616u,
  12510u,
  12590u,
  12308u,
  12632u,
  12642u
 };

static const UType JSum_8_11_27_6[]=
 {
  12666u,
  12498u,
  12538u,
  12746u,
  12523u,
  12504u,
  12512u,
  12476u,
  12368u,
  12714u,
  12592u
 };

static const UType JSum_8_11_27_7[]=
 {
  12666u,
  12523u,
  12368u,
  12498u,
  12504u,
  12714u,
  12538u,
  12512u,
  12592u,
  12746u,
  12476u
 };

static const UType JSum_8_11_27_8[]=
 {
  12666u,
  12512u,
  12498u,
  12476u,
  12538u,
  12368u,
  12746u,
  12714u,
  12523u,
  12592u,
  12504u
 };

static const UType JSum_8_11_27_9[]=
 {
  12586u,
  12616u,
  12642u,
  12467u,
  12632u,
  12454u,
  12308u,
  12648u,
  12590u,
  12684u,
  12510u
 };

static const PtrLen<const UType> JTable_8_11_27[]=
 {
  Range(JSum_8_11_27_1),
  Range(JSum_8_11_27_2),
  Range(JSum_8_11_27_3),
  Range(JSum_8_11_27_4),
  Range(JSum_8_11_27_5),
  Range(JSum_8_11_27_6),
  Range(JSum_8_11_27_7),
  Range(JSum_8_11_27_8),
  Range(JSum_8_11_27_9)
 };

static const UType JSum_8_11_28_1[]=
 {
  30448u,
  30712u,
  30539u,
  30538u,
  30378u,
  30308u,
  30940u,
  30644u,
  30650u,
  30650u,
  30682u
 };

static const UType JSum_8_11_28_2[]=
 {
  30755u,
  30536u,
  30496u,
  30868u,
  30415u,
  30515u,
  30253u,
  30618u,
  30779u,
  30610u,
  30644u
 };

static const UType JSum_8_11_28_3[]=
 {
  30755u,
  30779u,
  30515u,
  30496u,
  30644u,
  30618u,
  30415u,
  30536u,
  30610u,
  30253u,
  30868u
 };

static const UType JSum_8_11_28_4[]=
 {
  30755u,
  30496u,
  30415u,
  30253u,
  30779u,
  30644u,
  30536u,
  30868u,
  30515u,
  30618u,
  30610u
 };

static const UType JSum_8_11_28_5[]=
 {
  30448u,
  30650u,
  30644u,
  30308u,
  30538u,
  30712u,
  30682u,
  30650u,
  30940u,
  30378u,
  30539u
 };

static const UType JSum_8_11_28_6[]=
 {
  30755u,
  30496u,
  30415u,
  30253u,
  30779u,
  30644u,
  30536u,
  30868u,
  30515u,
  30618u,
  30610u
 };

static const UType JSum_8_11_28_7[]=
 {
  30755u,
  30779u,
  30515u,
  30496u,
  30644u,
  30618u,
  30415u,
  30536u,
  30610u,
  30253u,
  30868u
 };

static const UType JSum_8_11_28_8[]=
 {
  30755u,
  30536u,
  30496u,
  30868u,
  30415u,
  30515u,
  30253u,
  30618u,
  30779u,
  30610u,
  30644u
 };

static const UType JSum_8_11_28_9[]=
 {
  30448u,
  30712u,
  30539u,
  30538u,
  30378u,
  30308u,
  30940u,
  30644u,
  30650u,
  30650u,
  30682u
 };

static const PtrLen<const UType> JTable_8_11_28[]=
 {
  Range(JSum_8_11_28_1),
  Range(JSum_8_11_28_2),
  Range(JSum_8_11_28_3),
  Range(JSum_8_11_28_4),
  Range(JSum_8_11_28_5),
  Range(JSum_8_11_28_6),
  Range(JSum_8_11_28_7),
  Range(JSum_8_11_28_8),
  Range(JSum_8_11_28_9)
 };

static const UType JSum_8_11_29_1[]=
 {
  42011u,
  42050u,
  42108u,
  42354u,
  41908u,
  41876u,
  41750u,
  41974u,
  42200u,
  41610u,
  42048u
 };

static const UType JSum_8_11_29_2[]=
 {
  42104u,
  42315u,
  41580u,
  41833u,
  41803u,
  42129u,
  42012u,
  41968u,
  41978u,
  42217u,
  41950u
 };

static const UType JSum_8_11_29_3[]=
 {
  42104u,
  41978u,
  42129u,
  41580u,
  41950u,
  41968u,
  41803u,
  42315u,
  42217u,
  42012u,
  41833u
 };

static const UType JSum_8_11_29_4[]=
 {
  42104u,
  41580u,
  41803u,
  42012u,
  41978u,
  41950u,
  42315u,
  41833u,
  42129u,
  41968u,
  42217u
 };

static const UType JSum_8_11_29_5[]=
 {
  42011u,
  41610u,
  41974u,
  41876u,
  42354u,
  42050u,
  42048u,
  42200u,
  41750u,
  41908u,
  42108u
 };

static const UType JSum_8_11_29_6[]=
 {
  42104u,
  41580u,
  41803u,
  42012u,
  41978u,
  41950u,
  42315u,
  41833u,
  42129u,
  41968u,
  42217u
 };

static const UType JSum_8_11_29_7[]=
 {
  42104u,
  41978u,
  42129u,
  41580u,
  41950u,
  41968u,
  41803u,
  42315u,
  42217u,
  42012u,
  41833u
 };

static const UType JSum_8_11_29_8[]=
 {
  42104u,
  42315u,
  41580u,
  41833u,
  41803u,
  42129u,
  42012u,
  41968u,
  41978u,
  42217u,
  41950u
 };

static const UType JSum_8_11_29_9[]=
 {
  42011u,
  42050u,
  42108u,
  42354u,
  41908u,
  41876u,
  41750u,
  41974u,
  42200u,
  41610u,
  42048u
 };

static const PtrLen<const UType> JTable_8_11_29[]=
 {
  Range(JSum_8_11_29_1),
  Range(JSum_8_11_29_2),
  Range(JSum_8_11_29_3),
  Range(JSum_8_11_29_4),
  Range(JSum_8_11_29_5),
  Range(JSum_8_11_29_6),
  Range(JSum_8_11_29_7),
  Range(JSum_8_11_29_8),
  Range(JSum_8_11_29_9)
 };

static const UType JSum_8_11_30_1[]=
 {
  71296u,
  71224u,
  70674u,
  70942u,
  71370u,
  71206u,
  70838u,
  71355u,
  71068u,
  71616u,
  71192u
 };

static const UType JSum_8_11_30_2[]=
 {
  70884u,
  70706u,
  71243u,
  71230u,
  71196u,
  71327u,
  71490u,
  70759u,
  71483u,
  71277u,
  71186u
 };

static const UType JSum_8_11_30_3[]=
 {
  70884u,
  71483u,
  71327u,
  71243u,
  71186u,
  70759u,
  71196u,
  70706u,
  71277u,
  71490u,
  71230u
 };

static const UType JSum_8_11_30_4[]=
 {
  70884u,
  71243u,
  71196u,
  71490u,
  71483u,
  71186u,
  70706u,
  71230u,
  71327u,
  70759u,
  71277u
 };

static const UType JSum_8_11_30_5[]=
 {
  71296u,
  71616u,
  71355u,
  71206u,
  70942u,
  71224u,
  71192u,
  71068u,
  70838u,
  71370u,
  70674u
 };

static const UType JSum_8_11_30_6[]=
 {
  70884u,
  71243u,
  71196u,
  71490u,
  71483u,
  71186u,
  70706u,
  71230u,
  71327u,
  70759u,
  71277u
 };

static const UType JSum_8_11_30_7[]=
 {
  70884u,
  71483u,
  71327u,
  71243u,
  71186u,
  70759u,
  71196u,
  70706u,
  71277u,
  71490u,
  71230u
 };

static const UType JSum_8_11_30_8[]=
 {
  70884u,
  70706u,
  71243u,
  71230u,
  71196u,
  71327u,
  71490u,
  70759u,
  71483u,
  71277u,
  71186u
 };

static const UType JSum_8_11_30_9[]=
 {
  71296u,
  71224u,
  70674u,
  70942u,
  71370u,
  71206u,
  70838u,
  71355u,
  71068u,
  71616u,
  71192u
 };

static const PtrLen<const UType> JTable_8_11_30[]=
 {
  Range(JSum_8_11_30_1),
  Range(JSum_8_11_30_2),
  Range(JSum_8_11_30_3),
  Range(JSum_8_11_30_4),
  Range(JSum_8_11_30_5),
  Range(JSum_8_11_30_6),
  Range(JSum_8_11_30_7),
  Range(JSum_8_11_30_8),
  Range(JSum_8_11_30_9)
 };

static const UType JSum_8_11_31_1[]=
 {
  81702u,
  82418u,
  82162u,
  82536u,
  81794u,
  82184u,
  82508u,
  82060u,
  81984u,
  82051u,
  81810u
 };

static const UType JSum_8_11_31_2[]=
 {
  82053u,
  81622u,
  82148u,
  82197u,
  81948u,
  82765u,
  82179u,
  82159u,
  81800u,
  82118u,
  82220u
 };

static const UType JSum_8_11_31_3[]=
 {
  82053u,
  81800u,
  82765u,
  82148u,
  82220u,
  82159u,
  81948u,
  81622u,
  82118u,
  82179u,
  82197u
 };

static const UType JSum_8_11_31_4[]=
 {
  82053u,
  82148u,
  81948u,
  82179u,
  81800u,
  82220u,
  81622u,
  82197u,
  82765u,
  82159u,
  82118u
 };

static const UType JSum_8_11_31_5[]=
 {
  81702u,
  82051u,
  82060u,
  82184u,
  82536u,
  82418u,
  81810u,
  81984u,
  82508u,
  81794u,
  82162u
 };

static const UType JSum_8_11_31_6[]=
 {
  82053u,
  82148u,
  81948u,
  82179u,
  81800u,
  82220u,
  81622u,
  82197u,
  82765u,
  82159u,
  82118u
 };

static const UType JSum_8_11_31_7[]=
 {
  82053u,
  81800u,
  82765u,
  82148u,
  82220u,
  82159u,
  81948u,
  81622u,
  82118u,
  82179u,
  82197u
 };

static const UType JSum_8_11_31_8[]=
 {
  82053u,
  81622u,
  82148u,
  82197u,
  81948u,
  82765u,
  82179u,
  82159u,
  81800u,
  82118u,
  82220u
 };

static const UType JSum_8_11_31_9[]=
 {
  81702u,
  82418u,
  82162u,
  82536u,
  81794u,
  82184u,
  82508u,
  82060u,
  81984u,
  82051u,
  81810u
 };

static const PtrLen<const UType> JTable_8_11_31[]=
 {
  Range(JSum_8_11_31_1),
  Range(JSum_8_11_31_2),
  Range(JSum_8_11_31_3),
  Range(JSum_8_11_31_4),
  Range(JSum_8_11_31_5),
  Range(JSum_8_11_31_6),
  Range(JSum_8_11_31_7),
  Range(JSum_8_11_31_8),
  Range(JSum_8_11_31_9)
 };

static const UType JSum_8_11_32_1[]=
 {
  176070u,
  176460u,
  176814u,
  176510u,
  176476u,
  176268u,
  175846u,
  176216u,
  175646u,
  177139u,
  176492u
 };

static const UType JSum_8_11_32_2[]=
 {
  175625u,
  176476u,
  177050u,
  176627u,
  176554u,
  175929u,
  176563u,
  176477u,
  176202u,
  175818u,
  176616u
 };

static const UType JSum_8_11_32_3[]=
 {
  175625u,
  176202u,
  175929u,
  177050u,
  176616u,
  176477u,
  176554u,
  176476u,
  175818u,
  176563u,
  176627u
 };

static const UType JSum_8_11_32_4[]=
 {
  175625u,
  177050u,
  176554u,
  176563u,
  176202u,
  176616u,
  176476u,
  176627u,
  175929u,
  176477u,
  175818u
 };

static const UType JSum_8_11_32_5[]=
 {
  176070u,
  177139u,
  176216u,
  176268u,
  176510u,
  176460u,
  176492u,
  175646u,
  175846u,
  176476u,
  176814u
 };

static const UType JSum_8_11_32_6[]=
 {
  175625u,
  177050u,
  176554u,
  176563u,
  176202u,
  176616u,
  176476u,
  176627u,
  175929u,
  176477u,
  175818u
 };

static const UType JSum_8_11_32_7[]=
 {
  175625u,
  176202u,
  175929u,
  177050u,
  176616u,
  176477u,
  176554u,
  176476u,
  175818u,
  176563u,
  176627u
 };

static const UType JSum_8_11_32_8[]=
 {
  175625u,
  176476u,
  177050u,
  176627u,
  176554u,
  175929u,
  176563u,
  176477u,
  176202u,
  175818u,
  176616u
 };

static const UType JSum_8_11_32_9[]=
 {
  176070u,
  176460u,
  176814u,
  176510u,
  176476u,
  176268u,
  175846u,
  176216u,
  175646u,
  177139u,
  176492u
 };

static const PtrLen<const UType> JTable_8_11_32[]=
 {
  Range(JSum_8_11_32_1),
  Range(JSum_8_11_32_2),
  Range(JSum_8_11_32_3),
  Range(JSum_8_11_32_4),
  Range(JSum_8_11_32_5),
  Range(JSum_8_11_32_6),
  Range(JSum_8_11_32_7),
  Range(JSum_8_11_32_8),
  Range(JSum_8_11_32_9)
 };

static const UType JSum_8_11_33_1[]=
 {
  213546u,
  213600u,
  212978u,
  213238u,
  212790u,
  213926u,
  213971u,
  212788u,
  213836u,
  213712u,
  213960u
 };

static const UType JSum_8_11_33_2[]=
 {
  212903u,
  213115u,
  213977u,
  213488u,
  213765u,
  214300u,
  212846u,
  213609u,
  213492u,
  213774u,
  213076u
 };

static const UType JSum_8_11_33_3[]=
 {
  212903u,
  213492u,
  214300u,
  213977u,
  213076u,
  213609u,
  213765u,
  213115u,
  213774u,
  212846u,
  213488u
 };

static const UType JSum_8_11_33_4[]=
 {
  212903u,
  213977u,
  213765u,
  212846u,
  213492u,
  213076u,
  213115u,
  213488u,
  214300u,
  213609u,
  213774u
 };

static const UType JSum_8_11_33_5[]=
 {
  213546u,
  213712u,
  212788u,
  213926u,
  213238u,
  213600u,
  213960u,
  213836u,
  213971u,
  212790u,
  212978u
 };

static const UType JSum_8_11_33_6[]=
 {
  212903u,
  213977u,
  213765u,
  212846u,
  213492u,
  213076u,
  213115u,
  213488u,
  214300u,
  213609u,
  213774u
 };

static const UType JSum_8_11_33_7[]=
 {
  212903u,
  213492u,
  214300u,
  213977u,
  213076u,
  213609u,
  213765u,
  213115u,
  213774u,
  212846u,
  213488u
 };

static const UType JSum_8_11_33_8[]=
 {
  212903u,
  213115u,
  213977u,
  213488u,
  213765u,
  214300u,
  212846u,
  213609u,
  213492u,
  213774u,
  213076u
 };

static const UType JSum_8_11_33_9[]=
 {
  213546u,
  213600u,
  212978u,
  213238u,
  212790u,
  213926u,
  213971u,
  212788u,
  213836u,
  213712u,
  213960u
 };

static const PtrLen<const UType> JTable_8_11_33[]=
 {
  Range(JSum_8_11_33_1),
  Range(JSum_8_11_33_2),
  Range(JSum_8_11_33_3),
  Range(JSum_8_11_33_4),
  Range(JSum_8_11_33_5),
  Range(JSum_8_11_33_6),
  Range(JSum_8_11_33_7),
  Range(JSum_8_11_33_8),
  Range(JSum_8_11_33_9)
 };

static const UType JSum_8_11_34_1[]=
 {
  238796u,
  238562u,
  239360u,
  238578u,
  238588u,
  237654u,
  238176u,
  239275u,
  238154u,
  238732u,
  238746u
 };

static const UType JSum_8_11_34_2[]=
 {
  238595u,
  238787u,
  239094u,
  237937u,
  238364u,
  237682u,
  239091u,
  238968u,
  238378u,
  238542u,
  239183u
 };

static const UType JSum_8_11_34_3[]=
 {
  238595u,
  238378u,
  237682u,
  239094u,
  239183u,
  238968u,
  238364u,
  238787u,
  238542u,
  239091u,
  237937u
 };

static const UType JSum_8_11_34_4[]=
 {
  238595u,
  239094u,
  238364u,
  239091u,
  238378u,
  239183u,
  238787u,
  237937u,
  237682u,
  238968u,
  238542u
 };

static const UType JSum_8_11_34_5[]=
 {
  238796u,
  238732u,
  239275u,
  237654u,
  238578u,
  238562u,
  238746u,
  238154u,
  238176u,
  238588u,
  239360u
 };

static const UType JSum_8_11_34_6[]=
 {
  238595u,
  239094u,
  238364u,
  239091u,
  238378u,
  239183u,
  238787u,
  237937u,
  237682u,
  238968u,
  238542u
 };

static const UType JSum_8_11_34_7[]=
 {
  238595u,
  238378u,
  237682u,
  239094u,
  239183u,
  238968u,
  238364u,
  238787u,
  238542u,
  239091u,
  237937u
 };

static const UType JSum_8_11_34_8[]=
 {
  238595u,
  238787u,
  239094u,
  237937u,
  238364u,
  237682u,
  239091u,
  238968u,
  238378u,
  238542u,
  239183u
 };

static const UType JSum_8_11_34_9[]=
 {
  238796u,
  238562u,
  239360u,
  238578u,
  238588u,
  237654u,
  238176u,
  239275u,
  238154u,
  238732u,
  238746u
 };

static const PtrLen<const UType> JTable_8_11_34[]=
 {
  Range(JSum_8_11_34_1),
  Range(JSum_8_11_34_2),
  Range(JSum_8_11_34_3),
  Range(JSum_8_11_34_4),
  Range(JSum_8_11_34_5),
  Range(JSum_8_11_34_6),
  Range(JSum_8_11_34_7),
  Range(JSum_8_11_34_8),
  Range(JSum_8_11_34_9)
 };

static const UType JSum_8_11_35_1[]=
 {
  293954u,
  294212u,
  294418u,
  294164u,
  292816u,
  293316u,
  294456u,
  293387u,
  294462u,
  293826u,
  294218u
 };

static const UType JSum_8_11_35_2[]=
 {
  294100u,
  294408u,
  293778u,
  293830u,
  294195u,
  294492u,
  294668u,
  292834u,
  294062u,
  293404u,
  293458u
 };

static const UType JSum_8_11_35_3[]=
 {
  294100u,
  294062u,
  294492u,
  293778u,
  293458u,
  292834u,
  294195u,
  294408u,
  293404u,
  294668u,
  293830u
 };

static const UType JSum_8_11_35_4[]=
 {
  294100u,
  293778u,
  294195u,
  294668u,
  294062u,
  293458u,
  294408u,
  293830u,
  294492u,
  292834u,
  293404u
 };

static const UType JSum_8_11_35_5[]=
 {
  293954u,
  293826u,
  293387u,
  293316u,
  294164u,
  294212u,
  294218u,
  294462u,
  294456u,
  292816u,
  294418u
 };

static const UType JSum_8_11_35_6[]=
 {
  294100u,
  293778u,
  294195u,
  294668u,
  294062u,
  293458u,
  294408u,
  293830u,
  294492u,
  292834u,
  293404u
 };

static const UType JSum_8_11_35_7[]=
 {
  294100u,
  294062u,
  294492u,
  293778u,
  293458u,
  292834u,
  294195u,
  294408u,
  293404u,
  294668u,
  293830u
 };

static const UType JSum_8_11_35_8[]=
 {
  294100u,
  294408u,
  293778u,
  293830u,
  294195u,
  294492u,
  294668u,
  292834u,
  294062u,
  293404u,
  293458u
 };

static const UType JSum_8_11_35_9[]=
 {
  293954u,
  294212u,
  294418u,
  294164u,
  292816u,
  293316u,
  294456u,
  293387u,
  294462u,
  293826u,
  294218u
 };

static const PtrLen<const UType> JTable_8_11_35[]=
 {
  Range(JSum_8_11_35_1),
  Range(JSum_8_11_35_2),
  Range(JSum_8_11_35_3),
  Range(JSum_8_11_35_4),
  Range(JSum_8_11_35_5),
  Range(JSum_8_11_35_6),
  Range(JSum_8_11_35_7),
  Range(JSum_8_11_35_8),
  Range(JSum_8_11_35_9)
 };

static const UType JSum_8_11_36_1[]=
 {
  1194718u,
  1191790u,
  1193856u,
  1193670u,
  1194298u,
  1192739u,
  1191336u,
  1191920u,
  1193574u,
  1192640u,
  1192568u
 };

static const UType JSum_8_11_36_2[]=
 {
  1191930u,
  1193159u,
  1194253u,
  1191465u,
  1193928u,
  1193917u,
  1194556u,
  1192544u,
  1191959u,
  1191912u,
  1193486u
 };

static const UType JSum_8_11_36_3[]=
 {
  1191930u,
  1191959u,
  1193917u,
  1194253u,
  1193486u,
  1192544u,
  1193928u,
  1193159u,
  1191912u,
  1194556u,
  1191465u
 };

static const UType JSum_8_11_36_4[]=
 {
  1191930u,
  1194253u,
  1193928u,
  1194556u,
  1191959u,
  1193486u,
  1193159u,
  1191465u,
  1193917u,
  1192544u,
  1191912u
 };

static const UType JSum_8_11_36_5[]=
 {
  1194718u,
  1192640u,
  1191920u,
  1192739u,
  1193670u,
  1191790u,
  1192568u,
  1193574u,
  1191336u,
  1194298u,
  1193856u
 };

static const UType JSum_8_11_36_6[]=
 {
  1191930u,
  1194253u,
  1193928u,
  1194556u,
  1191959u,
  1193486u,
  1193159u,
  1191465u,
  1193917u,
  1192544u,
  1191912u
 };

static const UType JSum_8_11_36_7[]=
 {
  1191930u,
  1191959u,
  1193917u,
  1194253u,
  1193486u,
  1192544u,
  1193928u,
  1193159u,
  1191912u,
  1194556u,
  1191465u
 };

static const UType JSum_8_11_36_8[]=
 {
  1191930u,
  1193159u,
  1194253u,
  1191465u,
  1193928u,
  1193917u,
  1194556u,
  1192544u,
  1191959u,
  1191912u,
  1193486u
 };

static const UType JSum_8_11_36_9[]=
 {
  1194718u,
  1191790u,
  1193856u,
  1193670u,
  1194298u,
  1192739u,
  1191336u,
  1191920u,
  1193574u,
  1192640u,
  1192568u
 };

static const PtrLen<const UType> JTable_8_11_36[]=
 {
  Range(JSum_8_11_36_1),
  Range(JSum_8_11_36_2),
  Range(JSum_8_11_36_3),
  Range(JSum_8_11_36_4),
  Range(JSum_8_11_36_5),
  Range(JSum_8_11_36_6),
  Range(JSum_8_11_36_7),
  Range(JSum_8_11_36_8),
  Range(JSum_8_11_36_9)
 };

static const UType JSum_8_11_37_1[]=
 {
  1560182u,
  1560696u,
  1559182u,
  1558980u,
  1557714u,
  1562464u,
  1560380u,
  1560376u,
  1561347u,
  1559906u,
  1559762u
 };

static const UType JSum_8_11_37_2[]=
 {
  1561206u,
  1561274u,
  1559534u,
  1559267u,
  1562868u,
  1559236u,
  1559828u,
  1558444u,
  1559232u,
  1560090u,
  1560010u
 };

static const UType JSum_8_11_37_3[]=
 {
  1561206u,
  1559232u,
  1559236u,
  1559534u,
  1560010u,
  1558444u,
  1562868u,
  1561274u,
  1560090u,
  1559828u,
  1559267u
 };

static const UType JSum_8_11_37_4[]=
 {
  1561206u,
  1559534u,
  1562868u,
  1559828u,
  1559232u,
  1560010u,
  1561274u,
  1559267u,
  1559236u,
  1558444u,
  1560090u
 };

static const UType JSum_8_11_37_5[]=
 {
  1560182u,
  1559906u,
  1560376u,
  1562464u,
  1558980u,
  1560696u,
  1559762u,
  1561347u,
  1560380u,
  1557714u,
  1559182u
 };

static const UType JSum_8_11_37_6[]=
 {
  1561206u,
  1559534u,
  1562868u,
  1559828u,
  1559232u,
  1560010u,
  1561274u,
  1559267u,
  1559236u,
  1558444u,
  1560090u
 };

static const UType JSum_8_11_37_7[]=
 {
  1561206u,
  1559232u,
  1559236u,
  1559534u,
  1560010u,
  1558444u,
  1562868u,
  1561274u,
  1560090u,
  1559828u,
  1559267u
 };

static const UType JSum_8_11_37_8[]=
 {
  1561206u,
  1561274u,
  1559534u,
  1559267u,
  1562868u,
  1559236u,
  1559828u,
  1558444u,
  1559232u,
  1560090u,
  1560010u
 };

static const UType JSum_8_11_37_9[]=
 {
  1560182u,
  1560696u,
  1559182u,
  1558980u,
  1557714u,
  1562464u,
  1560380u,
  1560376u,
  1561347u,
  1559906u,
  1559762u
 };

static const PtrLen<const UType> JTable_8_11_37[]=
 {
  Range(JSum_8_11_37_1),
  Range(JSum_8_11_37_2),
  Range(JSum_8_11_37_3),
  Range(JSum_8_11_37_4),
  Range(JSum_8_11_37_5),
  Range(JSum_8_11_37_6),
  Range(JSum_8_11_37_7),
  Range(JSum_8_11_37_8),
  Range(JSum_8_11_37_9)
 };

static const TestSet::JTable JSet_8_11[]=
 {
  { 23u , Range(JTable_8_11_1) },
  { 67u , Range(JTable_8_11_2) },
  { 331u , Range(JTable_8_11_3) },
  { 419u , Range(JTable_8_11_4) },
  { 463u , Range(JTable_8_11_5) },
  { 859u , Range(JTable_8_11_6) },
  { 1123u , Range(JTable_8_11_7) },
  { 1871u , Range(JTable_8_11_8) },
  { 2003u , Range(JTable_8_11_9) },
  { 2311u , Range(JTable_8_11_10) },
  { 2531u , Range(JTable_8_11_11) },
  { 2927u , Range(JTable_8_11_12) },
  { 6007u , Range(JTable_8_11_13) },
  { 6271u , Range(JTable_8_11_14) },
  { 7591u , Range(JTable_8_11_15) },
  { 8779u , Range(JTable_8_11_16) },
  { 10627u , Range(JTable_8_11_17) },
  { 21319u , Range(JTable_8_11_18) },
  { 28843u , Range(JTable_8_11_19) },
  { 35531u , Range(JTable_8_11_20) },
  { 38039u , Range(JTable_8_11_21) },
  { 43891u , Range(JTable_8_11_22) },
  { 72931u , Range(JTable_8_11_23) },
  { 102103u , Range(JTable_8_11_24) },
  { 106591u , Range(JTable_8_11_25) },
  { 111827u , Range(JTable_8_11_26) },
  { 138139u , Range(JTable_8_11_27) },
  { 336491u , Range(JTable_8_11_28) },
  { 461891u , Range(JTable_8_11_29) },
  { 782783u , Range(JTable_8_11_30) },
  { 903211u , Range(JTable_8_11_31) },
  { 1939939u , Range(JTable_8_11_32) },
  { 2348347u , Range(JTable_8_11_33) },
  { 2624623u , Range(JTable_8_11_34) },
  { 3233231u , Range(JTable_8_11_35) },
  { 13123111u , Range(JTable_8_11_36) },
  { 17160991u , Range(JTable_8_11_37) }
 };

static const UType JSum_8_13_1_1[]=
 {
  8u,
  6u,
  4u,
  10u,
  6u,
  5u,
  8u,
  8u,
  2u,
  4u,
  2u,
  8u,
  6u
 };

static const UType JSum_8_13_1_2[]=
 {
  8u,
  7u,
  8u,
  5u,
  5u,
  11u,
  3u,
  7u,
  7u,
  6u,
  2u,
  3u,
  5u
 };

static const UType JSum_8_13_1_3[]=
 {
  8u,
  3u,
  4u,
  3u,
  9u,
  4u,
  4u,
  7u,
  7u,
  3u,
  9u,
  7u,
  9u
 };

static const UType JSum_8_13_1_4[]=
 {
  8u,
  2u,
  7u,
  5u,
  7u,
  3u,
  7u,
  11u,
  8u,
  5u,
  6u,
  3u,
  5u
 };

static const UType JSum_8_13_1_5[]=
 {
  8u,
  8u,
  5u,
  3u,
  7u,
  2u,
  5u,
  7u,
  5u,
  11u,
  7u,
  6u,
  3u
 };

static const UType JSum_8_13_1_6[]=
 {
  8u,
  8u,
  4u,
  8u,
  5u,
  10u,
  6u,
  6u,
  2u,
  2u,
  8u,
  6u,
  4u
 };

static const UType JSum_8_13_1_7[]=
 {
  8u,
  8u,
  5u,
  3u,
  7u,
  2u,
  5u,
  7u,
  5u,
  11u,
  7u,
  6u,
  3u
 };

static const UType JSum_8_13_1_8[]=
 {
  8u,
  2u,
  7u,
  5u,
  7u,
  3u,
  7u,
  11u,
  8u,
  5u,
  6u,
  3u,
  5u
 };

static const UType JSum_8_13_1_9[]=
 {
  8u,
  3u,
  4u,
  3u,
  9u,
  4u,
  4u,
  7u,
  7u,
  3u,
  9u,
  7u,
  9u
 };

static const UType JSum_8_13_1_10[]=
 {
  8u,
  7u,
  8u,
  5u,
  5u,
  11u,
  3u,
  7u,
  7u,
  6u,
  2u,
  3u,
  5u
 };

static const UType JSum_8_13_1_11[]=
 {
  8u,
  6u,
  4u,
  10u,
  6u,
  5u,
  8u,
  8u,
  2u,
  4u,
  2u,
  8u,
  6u
 };

static const PtrLen<const UType> JTable_8_13_1[]=
 {
  Range(JSum_8_13_1_1),
  Range(JSum_8_13_1_2),
  Range(JSum_8_13_1_3),
  Range(JSum_8_13_1_4),
  Range(JSum_8_13_1_5),
  Range(JSum_8_13_1_6),
  Range(JSum_8_13_1_7),
  Range(JSum_8_13_1_8),
  Range(JSum_8_13_1_9),
  Range(JSum_8_13_1_10),
  Range(JSum_8_13_1_11)
 };

static const UType JSum_8_13_2_1[]=
 {
  8u,
  10u,
  8u,
  8u,
  10u,
  12u,
  10u,
  14u,
  12u,
  14u,
  2u,
  9u,
  12u
 };

static const UType JSum_8_13_2_2[]=
 {
  9u,
  14u,
  4u,
  13u,
  11u,
  10u,
  9u,
  12u,
  13u,
  13u,
  9u,
  7u,
  5u
 };

static const UType JSum_8_13_2_3[]=
 {
  12u,
  15u,
  8u,
  15u,
  9u,
  8u,
  8u,
  7u,
  7u,
  15u,
  9u,
  7u,
  9u
 };

static const UType JSum_8_13_2_4[]=
 {
  9u,
  9u,
  12u,
  11u,
  14u,
  7u,
  13u,
  10u,
  4u,
  5u,
  13u,
  9u,
  13u
 };

static const UType JSum_8_13_2_5[]=
 {
  9u,
  4u,
  11u,
  9u,
  13u,
  9u,
  5u,
  14u,
  13u,
  10u,
  12u,
  13u,
  7u
 };

static const UType JSum_8_13_2_6[]=
 {
  8u,
  9u,
  14u,
  14u,
  12u,
  8u,
  10u,
  12u,
  2u,
  12u,
  10u,
  10u,
  8u
 };

static const UType JSum_8_13_2_7[]=
 {
  9u,
  4u,
  11u,
  9u,
  13u,
  9u,
  5u,
  14u,
  13u,
  10u,
  12u,
  13u,
  7u
 };

static const UType JSum_8_13_2_8[]=
 {
  9u,
  9u,
  12u,
  11u,
  14u,
  7u,
  13u,
  10u,
  4u,
  5u,
  13u,
  9u,
  13u
 };

static const UType JSum_8_13_2_9[]=
 {
  12u,
  15u,
  8u,
  15u,
  9u,
  8u,
  8u,
  7u,
  7u,
  15u,
  9u,
  7u,
  9u
 };

static const UType JSum_8_13_2_10[]=
 {
  9u,
  14u,
  4u,
  13u,
  11u,
  10u,
  9u,
  12u,
  13u,
  13u,
  9u,
  7u,
  5u
 };

static const UType JSum_8_13_2_11[]=
 {
  8u,
  10u,
  8u,
  8u,
  10u,
  12u,
  10u,
  14u,
  12u,
  14u,
  2u,
  9u,
  12u
 };

static const PtrLen<const UType> JTable_8_13_2[]=
 {
  Range(JSum_8_13_2_1),
  Range(JSum_8_13_2_2),
  Range(JSum_8_13_2_3),
  Range(JSum_8_13_2_4),
  Range(JSum_8_13_2_5),
  Range(JSum_8_13_2_6),
  Range(JSum_8_13_2_7),
  Range(JSum_8_13_2_8),
  Range(JSum_8_13_2_9),
  Range(JSum_8_13_2_10),
  Range(JSum_8_13_2_11)
 };

static const UType JSum_8_13_3_1[]=
 {
  28u,
  42u,
  42u,
  30u,
  44u,
  30u,
  36u,
  32u,
  32u,
  34u,
  34u,
  33u,
  24u
 };

static const UType JSum_8_13_3_2[]=
 {
  37u,
  37u,
  39u,
  30u,
  43u,
  27u,
  33u,
  42u,
  32u,
  27u,
  24u,
  35u,
  35u
 };

static const UType JSum_8_13_3_3[]=
 {
  18u,
  31u,
  39u,
  31u,
  38u,
  39u,
  39u,
  33u,
  33u,
  31u,
  38u,
  33u,
  38u
 };

static const UType JSum_8_13_3_4[]=
 {
  37u,
  24u,
  42u,
  43u,
  37u,
  35u,
  32u,
  27u,
  39u,
  35u,
  27u,
  33u,
  30u
 };

static const UType JSum_8_13_3_5[]=
 {
  37u,
  39u,
  43u,
  33u,
  32u,
  24u,
  35u,
  37u,
  30u,
  27u,
  42u,
  27u,
  35u
 };

static const UType JSum_8_13_3_6[]=
 {
  28u,
  33u,
  34u,
  32u,
  30u,
  30u,
  42u,
  24u,
  34u,
  32u,
  36u,
  44u,
  42u
 };

static const UType JSum_8_13_3_7[]=
 {
  37u,
  39u,
  43u,
  33u,
  32u,
  24u,
  35u,
  37u,
  30u,
  27u,
  42u,
  27u,
  35u
 };

static const UType JSum_8_13_3_8[]=
 {
  37u,
  24u,
  42u,
  43u,
  37u,
  35u,
  32u,
  27u,
  39u,
  35u,
  27u,
  33u,
  30u
 };

static const UType JSum_8_13_3_9[]=
 {
  18u,
  31u,
  39u,
  31u,
  38u,
  39u,
  39u,
  33u,
  33u,
  31u,
  38u,
  33u,
  38u
 };

static const UType JSum_8_13_3_10[]=
 {
  37u,
  37u,
  39u,
  30u,
  43u,
  27u,
  33u,
  42u,
  32u,
  27u,
  24u,
  35u,
  35u
 };

static const UType JSum_8_13_3_11[]=
 {
  28u,
  42u,
  42u,
  30u,
  44u,
  30u,
  36u,
  32u,
  32u,
  34u,
  34u,
  33u,
  24u
 };

static const PtrLen<const UType> JTable_8_13_3[]=
 {
  Range(JSum_8_13_3_1),
  Range(JSum_8_13_3_2),
  Range(JSum_8_13_3_3),
  Range(JSum_8_13_3_4),
  Range(JSum_8_13_3_5),
  Range(JSum_8_13_3_6),
  Range(JSum_8_13_3_7),
  Range(JSum_8_13_3_8),
  Range(JSum_8_13_3_9),
  Range(JSum_8_13_3_10),
  Range(JSum_8_13_3_11)
 };

static const UType JSum_8_13_4_1[]=
 {
  52u,
  44u,
  46u,
  44u,
  38u,
  28u,
  42u,
  44u,
  46u,
  34u,
  42u,
  49u,
  36u
 };

static const UType JSum_8_13_4_2[]=
 {
  43u,
  51u,
  49u,
  33u,
  46u,
  31u,
  38u,
  42u,
  37u,
  47u,
  47u,
  46u,
  35u
 };

static const UType JSum_8_13_4_3[]=
 {
  56u,
  40u,
  49u,
  40u,
  37u,
  49u,
  49u,
  37u,
  37u,
  40u,
  37u,
  37u,
  37u
 };

static const UType JSum_8_13_4_4[]=
 {
  43u,
  47u,
  42u,
  46u,
  51u,
  46u,
  37u,
  31u,
  49u,
  35u,
  47u,
  38u,
  33u
 };

static const UType JSum_8_13_4_5[]=
 {
  43u,
  49u,
  46u,
  38u,
  37u,
  47u,
  35u,
  51u,
  33u,
  31u,
  42u,
  47u,
  46u
 };

static const UType JSum_8_13_4_6[]=
 {
  52u,
  49u,
  34u,
  44u,
  28u,
  44u,
  44u,
  36u,
  42u,
  46u,
  42u,
  38u,
  46u
 };

static const UType JSum_8_13_4_7[]=
 {
  43u,
  49u,
  46u,
  38u,
  37u,
  47u,
  35u,
  51u,
  33u,
  31u,
  42u,
  47u,
  46u
 };

static const UType JSum_8_13_4_8[]=
 {
  43u,
  47u,
  42u,
  46u,
  51u,
  46u,
  37u,
  31u,
  49u,
  35u,
  47u,
  38u,
  33u
 };

static const UType JSum_8_13_4_9[]=
 {
  56u,
  40u,
  49u,
  40u,
  37u,
  49u,
  49u,
  37u,
  37u,
  40u,
  37u,
  37u,
  37u
 };

static const UType JSum_8_13_4_10[]=
 {
  43u,
  51u,
  49u,
  33u,
  46u,
  31u,
  38u,
  42u,
  37u,
  47u,
  47u,
  46u,
  35u
 };

static const UType JSum_8_13_4_11[]=
 {
  52u,
  44u,
  46u,
  44u,
  38u,
  28u,
  42u,
  44u,
  46u,
  34u,
  42u,
  49u,
  36u
 };

static const PtrLen<const UType> JTable_8_13_4[]=
 {
  Range(JSum_8_13_4_1),
  Range(JSum_8_13_4_2),
  Range(JSum_8_13_4_3),
  Range(JSum_8_13_4_4),
  Range(JSum_8_13_4_5),
  Range(JSum_8_13_4_6),
  Range(JSum_8_13_4_7),
  Range(JSum_8_13_4_8),
  Range(JSum_8_13_4_9),
  Range(JSum_8_13_4_10),
  Range(JSum_8_13_4_11)
 };

static const UType JSum_8_13_5_1[]=
 {
  46u,
  40u,
  50u,
  44u,
  42u,
  36u,
  42u,
  52u,
  48u,
  61u,
  38u,
  46u,
  52u
 };

static const UType JSum_8_13_5_2[]=
 {
  58u,
  52u,
  41u,
  47u,
  47u,
  50u,
  37u,
  53u,
  39u,
  41u,
  45u,
  36u,
  51u
 };

static const UType JSum_8_13_5_3[]=
 {
  66u,
  42u,
  41u,
  42u,
  45u,
  41u,
  41u,
  49u,
  49u,
  42u,
  45u,
  49u,
  45u
 };

static const UType JSum_8_13_5_4[]=
 {
  58u,
  45u,
  53u,
  47u,
  52u,
  36u,
  39u,
  50u,
  41u,
  51u,
  41u,
  37u,
  47u
 };

static const UType JSum_8_13_5_5[]=
 {
  58u,
  41u,
  47u,
  37u,
  39u,
  45u,
  51u,
  52u,
  47u,
  50u,
  53u,
  41u,
  36u
 };

static const UType JSum_8_13_5_6[]=
 {
  46u,
  46u,
  61u,
  52u,
  36u,
  44u,
  40u,
  52u,
  38u,
  48u,
  42u,
  42u,
  50u
 };

static const UType JSum_8_13_5_7[]=
 {
  58u,
  41u,
  47u,
  37u,
  39u,
  45u,
  51u,
  52u,
  47u,
  50u,
  53u,
  41u,
  36u
 };

static const UType JSum_8_13_5_8[]=
 {
  58u,
  45u,
  53u,
  47u,
  52u,
  36u,
  39u,
  50u,
  41u,
  51u,
  41u,
  37u,
  47u
 };

static const UType JSum_8_13_5_9[]=
 {
  66u,
  42u,
  41u,
  42u,
  45u,
  41u,
  41u,
  49u,
  49u,
  42u,
  45u,
  49u,
  45u
 };

static const UType JSum_8_13_5_10[]=
 {
  58u,
  52u,
  41u,
  47u,
  47u,
  50u,
  37u,
  53u,
  39u,
  41u,
  45u,
  36u,
  51u
 };

static const UType JSum_8_13_5_11[]=
 {
  46u,
  40u,
  50u,
  44u,
  42u,
  36u,
  42u,
  52u,
  48u,
  61u,
  38u,
  46u,
  52u
 };

static const PtrLen<const UType> JTable_8_13_5[]=
 {
  Range(JSum_8_13_5_1),
  Range(JSum_8_13_5_2),
  Range(JSum_8_13_5_3),
  Range(JSum_8_13_5_4),
  Range(JSum_8_13_5_5),
  Range(JSum_8_13_5_6),
  Range(JSum_8_13_5_7),
  Range(JSum_8_13_5_8),
  Range(JSum_8_13_5_9),
  Range(JSum_8_13_5_10),
  Range(JSum_8_13_5_11)
 };

static const UType JSum_8_13_6_1[]=
 {
  86u,
  72u,
  68u,
  64u,
  70u,
  60u,
  58u,
  62u,
  74u,
  60u,
  62u,
  65u,
  56u
 };

static const UType JSum_8_13_6_2[]=
 {
  62u,
  61u,
  75u,
  67u,
  61u,
  59u,
  63u,
  56u,
  71u,
  68u,
  65u,
  87u,
  62u
 };

static const UType JSum_8_13_6_3[]=
 {
  68u,
  57u,
  79u,
  57u,
  63u,
  79u,
  79u,
  64u,
  64u,
  57u,
  63u,
  64u,
  63u
 };

static const UType JSum_8_13_6_4[]=
 {
  62u,
  65u,
  56u,
  61u,
  61u,
  87u,
  71u,
  59u,
  75u,
  62u,
  68u,
  63u,
  67u
 };

static const UType JSum_8_13_6_5[]=
 {
  62u,
  75u,
  61u,
  63u,
  71u,
  65u,
  62u,
  61u,
  67u,
  59u,
  56u,
  68u,
  87u
 };

static const UType JSum_8_13_6_6[]=
 {
  86u,
  65u,
  60u,
  62u,
  60u,
  64u,
  72u,
  56u,
  62u,
  74u,
  58u,
  70u,
  68u
 };

static const UType JSum_8_13_6_7[]=
 {
  62u,
  75u,
  61u,
  63u,
  71u,
  65u,
  62u,
  61u,
  67u,
  59u,
  56u,
  68u,
  87u
 };

static const UType JSum_8_13_6_8[]=
 {
  62u,
  65u,
  56u,
  61u,
  61u,
  87u,
  71u,
  59u,
  75u,
  62u,
  68u,
  63u,
  67u
 };

static const UType JSum_8_13_6_9[]=
 {
  68u,
  57u,
  79u,
  57u,
  63u,
  79u,
  79u,
  64u,
  64u,
  57u,
  63u,
  64u,
  63u
 };

static const UType JSum_8_13_6_10[]=
 {
  62u,
  61u,
  75u,
  67u,
  61u,
  59u,
  63u,
  56u,
  71u,
  68u,
  65u,
  87u,
  62u
 };

static const UType JSum_8_13_6_11[]=
 {
  86u,
  72u,
  68u,
  64u,
  70u,
  60u,
  58u,
  62u,
  74u,
  60u,
  62u,
  65u,
  56u
 };

static const PtrLen<const UType> JTable_8_13_6[]=
 {
  Range(JSum_8_13_6_1),
  Range(JSum_8_13_6_2),
  Range(JSum_8_13_6_3),
  Range(JSum_8_13_6_4),
  Range(JSum_8_13_6_5),
  Range(JSum_8_13_6_6),
  Range(JSum_8_13_6_7),
  Range(JSum_8_13_6_8),
  Range(JSum_8_13_6_9),
  Range(JSum_8_13_6_10),
  Range(JSum_8_13_6_11)
 };

static const UType JSum_8_13_7_1[]=
 {
  74u,
  69u,
  72u,
  62u,
  54u,
  70u,
  78u,
  70u,
  76u,
  72u,
  84u,
  56u,
  72u
 };

static const UType JSum_8_13_7_2[]=
 {
  89u,
  63u,
  71u,
  66u,
  64u,
  63u,
  60u,
  79u,
  69u,
  79u,
  69u,
  63u,
  74u
 };

static const UType JSum_8_13_7_3[]=
 {
  90u,
  63u,
  67u,
  63u,
  78u,
  67u,
  67u,
  65u,
  65u,
  63u,
  78u,
  65u,
  78u
 };

static const UType JSum_8_13_7_4[]=
 {
  89u,
  69u,
  79u,
  64u,
  63u,
  63u,
  69u,
  63u,
  71u,
  74u,
  79u,
  60u,
  66u
 };

static const UType JSum_8_13_7_5[]=
 {
  89u,
  71u,
  64u,
  60u,
  69u,
  69u,
  74u,
  63u,
  66u,
  63u,
  79u,
  79u,
  63u
 };

static const UType JSum_8_13_7_6[]=
 {
  74u,
  56u,
  72u,
  70u,
  70u,
  62u,
  69u,
  72u,
  84u,
  76u,
  78u,
  54u,
  72u
 };

static const UType JSum_8_13_7_7[]=
 {
  89u,
  71u,
  64u,
  60u,
  69u,
  69u,
  74u,
  63u,
  66u,
  63u,
  79u,
  79u,
  63u
 };

static const UType JSum_8_13_7_8[]=
 {
  89u,
  69u,
  79u,
  64u,
  63u,
  63u,
  69u,
  63u,
  71u,
  74u,
  79u,
  60u,
  66u
 };

static const UType JSum_8_13_7_9[]=
 {
  90u,
  63u,
  67u,
  63u,
  78u,
  67u,
  67u,
  65u,
  65u,
  63u,
  78u,
  65u,
  78u
 };

static const UType JSum_8_13_7_10[]=
 {
  89u,
  63u,
  71u,
  66u,
  64u,
  63u,
  60u,
  79u,
  69u,
  79u,
  69u,
  63u,
  74u
 };

static const UType JSum_8_13_7_11[]=
 {
  74u,
  69u,
  72u,
  62u,
  54u,
  70u,
  78u,
  70u,
  76u,
  72u,
  84u,
  56u,
  72u
 };

static const PtrLen<const UType> JTable_8_13_7[]=
 {
  Range(JSum_8_13_7_1),
  Range(JSum_8_13_7_2),
  Range(JSum_8_13_7_3),
  Range(JSum_8_13_7_4),
  Range(JSum_8_13_7_5),
  Range(JSum_8_13_7_6),
  Range(JSum_8_13_7_7),
  Range(JSum_8_13_7_8),
  Range(JSum_8_13_7_9),
  Range(JSum_8_13_7_10),
  Range(JSum_8_13_7_11)
 };

static const UType JSum_8_13_8_1[]=
 {
  114u,
  110u,
  104u,
  92u,
  108u,
  90u,
  82u,
  116u,
  101u,
  106u,
  92u,
  104u,
  106u
 };

static const UType JSum_8_13_8_2[]=
 {
  92u,
  106u,
  86u,
  104u,
  100u,
  114u,
  114u,
  104u,
  104u,
  86u,
  114u,
  109u,
  92u
 };

static const UType JSum_8_13_8_3[]=
 {
  77u,
  94u,
  102u,
  94u,
  112u,
  102u,
  102u,
  108u,
  108u,
  94u,
  112u,
  108u,
  112u
 };

static const UType JSum_8_13_8_4[]=
 {
  92u,
  114u,
  104u,
  100u,
  106u,
  109u,
  104u,
  114u,
  86u,
  92u,
  86u,
  114u,
  104u
 };

static const UType JSum_8_13_8_5[]=
 {
  92u,
  86u,
  100u,
  114u,
  104u,
  114u,
  92u,
  106u,
  104u,
  114u,
  104u,
  86u,
  109u
 };

static const UType JSum_8_13_8_6[]=
 {
  114u,
  104u,
  106u,
  116u,
  90u,
  92u,
  110u,
  106u,
  92u,
  101u,
  82u,
  108u,
  104u
 };

static const UType JSum_8_13_8_7[]=
 {
  92u,
  86u,
  100u,
  114u,
  104u,
  114u,
  92u,
  106u,
  104u,
  114u,
  104u,
  86u,
  109u
 };

static const UType JSum_8_13_8_8[]=
 {
  92u,
  114u,
  104u,
  100u,
  106u,
  109u,
  104u,
  114u,
  86u,
  92u,
  86u,
  114u,
  104u
 };

static const UType JSum_8_13_8_9[]=
 {
  77u,
  94u,
  102u,
  94u,
  112u,
  102u,
  102u,
  108u,
  108u,
  94u,
  112u,
  108u,
  112u
 };

static const UType JSum_8_13_8_10[]=
 {
  92u,
  106u,
  86u,
  104u,
  100u,
  114u,
  114u,
  104u,
  104u,
  86u,
  114u,
  109u,
  92u
 };

static const UType JSum_8_13_8_11[]=
 {
  114u,
  110u,
  104u,
  92u,
  108u,
  90u,
  82u,
  116u,
  101u,
  106u,
  92u,
  104u,
  106u
 };

static const PtrLen<const UType> JTable_8_13_8[]=
 {
  Range(JSum_8_13_8_1),
  Range(JSum_8_13_8_2),
  Range(JSum_8_13_8_3),
  Range(JSum_8_13_8_4),
  Range(JSum_8_13_8_5),
  Range(JSum_8_13_8_6),
  Range(JSum_8_13_8_7),
  Range(JSum_8_13_8_8),
  Range(JSum_8_13_8_9),
  Range(JSum_8_13_8_10),
  Range(JSum_8_13_8_11)
 };

static const UType JSum_8_13_9_1[]=
 {
  126u,
  100u,
  96u,
  108u,
  120u,
  110u,
  126u,
  106u,
  110u,
  132u,
  110u,
  121u,
  116u
 };

static const UType JSum_8_13_9_2[]=
 {
  110u,
  127u,
  107u,
  87u,
  113u,
  115u,
  117u,
  122u,
  117u,
  108u,
  129u,
  109u,
  120u
 };

static const UType JSum_8_13_9_3[]=
 {
  104u,
  105u,
  105u,
  105u,
  129u,
  105u,
  105u,
  120u,
  120u,
  105u,
  129u,
  120u,
  129u
 };

static const UType JSum_8_13_9_4[]=
 {
  110u,
  129u,
  122u,
  113u,
  127u,
  109u,
  117u,
  115u,
  107u,
  120u,
  108u,
  117u,
  87u
 };

static const UType JSum_8_13_9_5[]=
 {
  110u,
  107u,
  113u,
  117u,
  117u,
  129u,
  120u,
  127u,
  87u,
  115u,
  122u,
  108u,
  109u
 };

static const UType JSum_8_13_9_6[]=
 {
  126u,
  121u,
  132u,
  106u,
  110u,
  108u,
  100u,
  116u,
  110u,
  110u,
  126u,
  120u,
  96u
 };

static const UType JSum_8_13_9_7[]=
 {
  110u,
  107u,
  113u,
  117u,
  117u,
  129u,
  120u,
  127u,
  87u,
  115u,
  122u,
  108u,
  109u
 };

static const UType JSum_8_13_9_8[]=
 {
  110u,
  129u,
  122u,
  113u,
  127u,
  109u,
  117u,
  115u,
  107u,
  120u,
  108u,
  117u,
  87u
 };

static const UType JSum_8_13_9_9[]=
 {
  104u,
  105u,
  105u,
  105u,
  129u,
  105u,
  105u,
  120u,
  120u,
  105u,
  129u,
  120u,
  129u
 };

static const UType JSum_8_13_9_10[]=
 {
  110u,
  127u,
  107u,
  87u,
  113u,
  115u,
  117u,
  122u,
  117u,
  108u,
  129u,
  109u,
  120u
 };

static const UType JSum_8_13_9_11[]=
 {
  126u,
  100u,
  96u,
  108u,
  120u,
  110u,
  126u,
  106u,
  110u,
  132u,
  110u,
  121u,
  116u
 };

static const PtrLen<const UType> JTable_8_13_9[]=
 {
  Range(JSum_8_13_9_1),
  Range(JSum_8_13_9_2),
  Range(JSum_8_13_9_3),
  Range(JSum_8_13_9_4),
  Range(JSum_8_13_9_5),
  Range(JSum_8_13_9_6),
  Range(JSum_8_13_9_7),
  Range(JSum_8_13_9_8),
  Range(JSum_8_13_9_9),
  Range(JSum_8_13_9_10),
  Range(JSum_8_13_9_11)
 };

static const UType JSum_8_13_10_1[]=
 {
  160u,
  142u,
  152u,
  138u,
  177u,
  160u,
  154u,
  168u,
  166u,
  134u,
  148u,
  146u,
  156u
 };

static const UType JSum_8_13_10_2[]=
 {
  160u,
  146u,
  134u,
  132u,
  178u,
  152u,
  154u,
  164u,
  150u,
  164u,
  152u,
  162u,
  153u
 };

static const UType JSum_8_13_10_3[]=
 {
  129u,
  162u,
  140u,
  162u,
  156u,
  140u,
  140u,
  166u,
  166u,
  162u,
  156u,
  166u,
  156u
 };

static const UType JSum_8_13_10_4[]=
 {
  160u,
  152u,
  164u,
  178u,
  146u,
  162u,
  150u,
  152u,
  134u,
  153u,
  164u,
  154u,
  132u
 };

static const UType JSum_8_13_10_5[]=
 {
  160u,
  134u,
  178u,
  154u,
  150u,
  152u,
  153u,
  146u,
  132u,
  152u,
  164u,
  164u,
  162u
 };

static const UType JSum_8_13_10_6[]=
 {
  160u,
  146u,
  134u,
  168u,
  160u,
  138u,
  142u,
  156u,
  148u,
  166u,
  154u,
  177u,
  152u
 };

static const UType JSum_8_13_10_7[]=
 {
  160u,
  134u,
  178u,
  154u,
  150u,
  152u,
  153u,
  146u,
  132u,
  152u,
  164u,
  164u,
  162u
 };

static const UType JSum_8_13_10_8[]=
 {
  160u,
  152u,
  164u,
  178u,
  146u,
  162u,
  150u,
  152u,
  134u,
  153u,
  164u,
  154u,
  132u
 };

static const UType JSum_8_13_10_9[]=
 {
  129u,
  162u,
  140u,
  162u,
  156u,
  140u,
  140u,
  166u,
  166u,
  162u,
  156u,
  166u,
  156u
 };

static const UType JSum_8_13_10_10[]=
 {
  160u,
  146u,
  134u,
  132u,
  178u,
  152u,
  154u,
  164u,
  150u,
  164u,
  152u,
  162u,
  153u
 };

static const UType JSum_8_13_10_11[]=
 {
  160u,
  142u,
  152u,
  138u,
  177u,
  160u,
  154u,
  168u,
  166u,
  134u,
  148u,
  146u,
  156u
 };

static const PtrLen<const UType> JTable_8_13_10[]=
 {
  Range(JSum_8_13_10_1),
  Range(JSum_8_13_10_2),
  Range(JSum_8_13_10_3),
  Range(JSum_8_13_10_4),
  Range(JSum_8_13_10_5),
  Range(JSum_8_13_10_6),
  Range(JSum_8_13_10_7),
  Range(JSum_8_13_10_8),
  Range(JSum_8_13_10_9),
  Range(JSum_8_13_10_10),
  Range(JSum_8_13_10_11)
 };

static const UType JSum_8_13_11_1[]=
 {
  204u,
  190u,
  214u,
  226u,
  232u,
  204u,
  216u,
  226u,
  180u,
  212u,
  201u,
  214u,
  210u
 };

static const UType JSum_8_13_11_2[]=
 {
  204u,
  230u,
  204u,
  220u,
  225u,
  210u,
  202u,
  220u,
  202u,
  220u,
  216u,
  174u,
  202u
 };

static const UType JSum_8_13_11_3[]=
 {
  185u,
  220u,
  198u,
  220u,
  202u,
  198u,
  198u,
  228u,
  228u,
  220u,
  202u,
  228u,
  202u
 };

static const UType JSum_8_13_11_4[]=
 {
  204u,
  216u,
  220u,
  225u,
  230u,
  174u,
  202u,
  210u,
  204u,
  202u,
  220u,
  202u,
  220u
 };

static const UType JSum_8_13_11_5[]=
 {
  204u,
  204u,
  225u,
  202u,
  202u,
  216u,
  202u,
  230u,
  220u,
  210u,
  220u,
  220u,
  174u
 };

static const UType JSum_8_13_11_6[]=
 {
  204u,
  214u,
  212u,
  226u,
  204u,
  226u,
  190u,
  210u,
  201u,
  180u,
  216u,
  232u,
  214u
 };

static const UType JSum_8_13_11_7[]=
 {
  204u,
  204u,
  225u,
  202u,
  202u,
  216u,
  202u,
  230u,
  220u,
  210u,
  220u,
  220u,
  174u
 };

static const UType JSum_8_13_11_8[]=
 {
  204u,
  216u,
  220u,
  225u,
  230u,
  174u,
  202u,
  210u,
  204u,
  202u,
  220u,
  202u,
  220u
 };

static const UType JSum_8_13_11_9[]=
 {
  185u,
  220u,
  198u,
  220u,
  202u,
  198u,
  198u,
  228u,
  228u,
  220u,
  202u,
  228u,
  202u
 };

static const UType JSum_8_13_11_10[]=
 {
  204u,
  230u,
  204u,
  220u,
  225u,
  210u,
  202u,
  220u,
  202u,
  220u,
  216u,
  174u,
  202u
 };

static const UType JSum_8_13_11_11[]=
 {
  204u,
  190u,
  214u,
  226u,
  232u,
  204u,
  216u,
  226u,
  180u,
  212u,
  201u,
  214u,
  210u
 };

static const PtrLen<const UType> JTable_8_13_11[]=
 {
  Range(JSum_8_13_11_1),
  Range(JSum_8_13_11_2),
  Range(JSum_8_13_11_3),
  Range(JSum_8_13_11_4),
  Range(JSum_8_13_11_5),
  Range(JSum_8_13_11_6),
  Range(JSum_8_13_11_7),
  Range(JSum_8_13_11_8),
  Range(JSum_8_13_11_9),
  Range(JSum_8_13_11_10),
  Range(JSum_8_13_11_11)
 };

static const UType JSum_8_13_12_1[]=
 {
  478u,
  456u,
  474u,
  446u,
  500u,
  448u,
  458u,
  496u,
  478u,
  436u,
  445u,
  434u,
  456u
 };

static const UType JSum_8_13_12_2[]=
 {
  487u,
  487u,
  460u,
  463u,
  434u,
  457u,
  437u,
  467u,
  453u,
  471u,
  499u,
  426u,
  464u
 };

static const UType JSum_8_13_12_3[]=
 {
  458u,
  451u,
  478u,
  451u,
  433u,
  478u,
  478u,
  487u,
  487u,
  451u,
  433u,
  487u,
  433u
 };

static const UType JSum_8_13_12_4[]=
 {
  487u,
  499u,
  467u,
  434u,
  487u,
  426u,
  453u,
  457u,
  460u,
  464u,
  471u,
  437u,
  463u
 };

static const UType JSum_8_13_12_5[]=
 {
  487u,
  460u,
  434u,
  437u,
  453u,
  499u,
  464u,
  487u,
  463u,
  457u,
  467u,
  471u,
  426u
 };

static const UType JSum_8_13_12_6[]=
 {
  478u,
  434u,
  436u,
  496u,
  448u,
  446u,
  456u,
  456u,
  445u,
  478u,
  458u,
  500u,
  474u
 };

static const UType JSum_8_13_12_7[]=
 {
  487u,
  460u,
  434u,
  437u,
  453u,
  499u,
  464u,
  487u,
  463u,
  457u,
  467u,
  471u,
  426u
 };

static const UType JSum_8_13_12_8[]=
 {
  487u,
  499u,
  467u,
  434u,
  487u,
  426u,
  453u,
  457u,
  460u,
  464u,
  471u,
  437u,
  463u
 };

static const UType JSum_8_13_12_9[]=
 {
  458u,
  451u,
  478u,
  451u,
  433u,
  478u,
  478u,
  487u,
  487u,
  451u,
  433u,
  487u,
  433u
 };

static const UType JSum_8_13_12_10[]=
 {
  487u,
  487u,
  460u,
  463u,
  434u,
  457u,
  437u,
  467u,
  453u,
  471u,
  499u,
  426u,
  464u
 };

static const UType JSum_8_13_12_11[]=
 {
  478u,
  456u,
  474u,
  446u,
  500u,
  448u,
  458u,
  496u,
  478u,
  436u,
  445u,
  434u,
  456u
 };

static const PtrLen<const UType> JTable_8_13_12[]=
 {
  Range(JSum_8_13_12_1),
  Range(JSum_8_13_12_2),
  Range(JSum_8_13_12_3),
  Range(JSum_8_13_12_4),
  Range(JSum_8_13_12_5),
  Range(JSum_8_13_12_6),
  Range(JSum_8_13_12_7),
  Range(JSum_8_13_12_8),
  Range(JSum_8_13_12_9),
  Range(JSum_8_13_12_10),
  Range(JSum_8_13_12_11)
 };

static const UType JSum_8_13_13_1[]=
 {
  548u,
  608u,
  576u,
  568u,
  602u,
  560u,
  562u,
  566u,
  602u,
  562u,
  534u,
  537u,
  584u
 };

static const UType JSum_8_13_13_2[]=
 {
  537u,
  546u,
  568u,
  605u,
  569u,
  550u,
  587u,
  596u,
  547u,
  609u,
  563u,
  581u,
  551u
 };

static const UType JSum_8_13_13_3[]=
 {
  626u,
  589u,
  546u,
  589u,
  553u,
  546u,
  546u,
  573u,
  573u,
  589u,
  553u,
  573u,
  553u
 };

static const UType JSum_8_13_13_4[]=
 {
  537u,
  563u,
  596u,
  569u,
  546u,
  581u,
  547u,
  550u,
  568u,
  551u,
  609u,
  587u,
  605u
 };

static const UType JSum_8_13_13_5[]=
 {
  537u,
  568u,
  569u,
  587u,
  547u,
  563u,
  551u,
  546u,
  605u,
  550u,
  596u,
  609u,
  581u
 };

static const UType JSum_8_13_13_6[]=
 {
  548u,
  537u,
  562u,
  566u,
  560u,
  568u,
  608u,
  584u,
  534u,
  602u,
  562u,
  602u,
  576u
 };

static const UType JSum_8_13_13_7[]=
 {
  537u,
  568u,
  569u,
  587u,
  547u,
  563u,
  551u,
  546u,
  605u,
  550u,
  596u,
  609u,
  581u
 };

static const UType JSum_8_13_13_8[]=
 {
  537u,
  563u,
  596u,
  569u,
  546u,
  581u,
  547u,
  550u,
  568u,
  551u,
  609u,
  587u,
  605u
 };

static const UType JSum_8_13_13_9[]=
 {
  626u,
  589u,
  546u,
  589u,
  553u,
  546u,
  546u,
  573u,
  573u,
  589u,
  553u,
  573u,
  553u
 };

static const UType JSum_8_13_13_10[]=
 {
  537u,
  546u,
  568u,
  605u,
  569u,
  550u,
  587u,
  596u,
  547u,
  609u,
  563u,
  581u,
  551u
 };

static const UType JSum_8_13_13_11[]=
 {
  548u,
  608u,
  576u,
  568u,
  602u,
  560u,
  562u,
  566u,
  602u,
  562u,
  534u,
  537u,
  584u
 };

static const PtrLen<const UType> JTable_8_13_13[]=
 {
  Range(JSum_8_13_13_1),
  Range(JSum_8_13_13_2),
  Range(JSum_8_13_13_3),
  Range(JSum_8_13_13_4),
  Range(JSum_8_13_13_5),
  Range(JSum_8_13_13_6),
  Range(JSum_8_13_13_7),
  Range(JSum_8_13_13_8),
  Range(JSum_8_13_13_9),
  Range(JSum_8_13_13_10),
  Range(JSum_8_13_13_11)
 };

static const UType JSum_8_13_14_1[]=
 {
  648u,
  742u,
  722u,
  680u,
  702u,
  672u,
  718u,
  688u,
  704u,
  666u,
  672u,
  681u,
  674u
 };

static const UType JSum_8_13_14_2[]=
 {
  669u,
  693u,
  683u,
  701u,
  652u,
  699u,
  698u,
  654u,
  699u,
  657u,
  701u,
  736u,
  727u
 };

static const UType JSum_8_13_14_3[]=
 {
  680u,
  648u,
  705u,
  648u,
  693u,
  705u,
  705u,
  717u,
  717u,
  648u,
  693u,
  717u,
  693u
 };

static const UType JSum_8_13_14_4[]=
 {
  669u,
  701u,
  654u,
  652u,
  693u,
  736u,
  699u,
  699u,
  683u,
  727u,
  657u,
  698u,
  701u
 };

static const UType JSum_8_13_14_5[]=
 {
  669u,
  683u,
  652u,
  698u,
  699u,
  701u,
  727u,
  693u,
  701u,
  699u,
  654u,
  657u,
  736u
 };

static const UType JSum_8_13_14_6[]=
 {
  648u,
  681u,
  666u,
  688u,
  672u,
  680u,
  742u,
  674u,
  672u,
  704u,
  718u,
  702u,
  722u
 };

static const UType JSum_8_13_14_7[]=
 {
  669u,
  683u,
  652u,
  698u,
  699u,
  701u,
  727u,
  693u,
  701u,
  699u,
  654u,
  657u,
  736u
 };

static const UType JSum_8_13_14_8[]=
 {
  669u,
  701u,
  654u,
  652u,
  693u,
  736u,
  699u,
  699u,
  683u,
  727u,
  657u,
  698u,
  701u
 };

static const UType JSum_8_13_14_9[]=
 {
  680u,
  648u,
  705u,
  648u,
  693u,
  705u,
  705u,
  717u,
  717u,
  648u,
  693u,
  717u,
  693u
 };

static const UType JSum_8_13_14_10[]=
 {
  669u,
  693u,
  683u,
  701u,
  652u,
  699u,
  698u,
  654u,
  699u,
  657u,
  701u,
  736u,
  727u
 };

static const UType JSum_8_13_14_11[]=
 {
  648u,
  742u,
  722u,
  680u,
  702u,
  672u,
  718u,
  688u,
  704u,
  666u,
  672u,
  681u,
  674u
 };

static const PtrLen<const UType> JTable_8_13_14[]=
 {
  Range(JSum_8_13_14_1),
  Range(JSum_8_13_14_2),
  Range(JSum_8_13_14_3),
  Range(JSum_8_13_14_4),
  Range(JSum_8_13_14_5),
  Range(JSum_8_13_14_6),
  Range(JSum_8_13_14_7),
  Range(JSum_8_13_14_8),
  Range(JSum_8_13_14_9),
  Range(JSum_8_13_14_10),
  Range(JSum_8_13_14_11)
 };

static const UType JSum_8_13_15_1[]=
 {
  718u,
  734u,
  766u,
  720u,
  702u,
  712u,
  734u,
  656u,
  728u,
  716u,
  702u,
  713u,
  680u
 };

static const UType JSum_8_13_15_2[]=
 {
  710u,
  712u,
  728u,
  746u,
  732u,
  722u,
  704u,
  689u,
  722u,
  760u,
  654u,
  708u,
  694u
 };

static const UType JSum_8_13_15_3[]=
 {
  689u,
  730u,
  726u,
  730u,
  736u,
  726u,
  726u,
  672u,
  672u,
  730u,
  736u,
  672u,
  736u
 };

static const UType JSum_8_13_15_4[]=
 {
  710u,
  654u,
  689u,
  732u,
  712u,
  708u,
  722u,
  722u,
  728u,
  694u,
  760u,
  704u,
  746u
 };

static const UType JSum_8_13_15_5[]=
 {
  710u,
  728u,
  732u,
  704u,
  722u,
  654u,
  694u,
  712u,
  746u,
  722u,
  689u,
  760u,
  708u
 };

static const UType JSum_8_13_15_6[]=
 {
  718u,
  713u,
  716u,
  656u,
  712u,
  720u,
  734u,
  680u,
  702u,
  728u,
  734u,
  702u,
  766u
 };

static const UType JSum_8_13_15_7[]=
 {
  710u,
  728u,
  732u,
  704u,
  722u,
  654u,
  694u,
  712u,
  746u,
  722u,
  689u,
  760u,
  708u
 };

static const UType JSum_8_13_15_8[]=
 {
  710u,
  654u,
  689u,
  732u,
  712u,
  708u,
  722u,
  722u,
  728u,
  694u,
  760u,
  704u,
  746u
 };

static const UType JSum_8_13_15_9[]=
 {
  689u,
  730u,
  726u,
  730u,
  736u,
  726u,
  726u,
  672u,
  672u,
  730u,
  736u,
  672u,
  736u
 };

static const UType JSum_8_13_15_10[]=
 {
  710u,
  712u,
  728u,
  746u,
  732u,
  722u,
  704u,
  689u,
  722u,
  760u,
  654u,
  708u,
  694u
 };

static const UType JSum_8_13_15_11[]=
 {
  718u,
  734u,
  766u,
  720u,
  702u,
  712u,
  734u,
  656u,
  728u,
  716u,
  702u,
  713u,
  680u
 };

static const PtrLen<const UType> JTable_8_13_15[]=
 {
  Range(JSum_8_13_15_1),
  Range(JSum_8_13_15_2),
  Range(JSum_8_13_15_3),
  Range(JSum_8_13_15_4),
  Range(JSum_8_13_15_5),
  Range(JSum_8_13_15_6),
  Range(JSum_8_13_15_7),
  Range(JSum_8_13_15_8),
  Range(JSum_8_13_15_9),
  Range(JSum_8_13_15_10),
  Range(JSum_8_13_15_11)
 };

static const UType JSum_8_13_16_1[]=
 {
  1324u,
  1272u,
  1302u,
  1360u,
  1394u,
  1338u,
  1320u,
  1342u,
  1358u,
  1281u,
  1376u,
  1296u,
  1326u
 };

static const UType JSum_8_13_16_2[]=
 {
  1304u,
  1350u,
  1377u,
  1247u,
  1329u,
  1308u,
  1321u,
  1305u,
  1363u,
  1379u,
  1359u,
  1314u,
  1333u
 };

static const UType JSum_8_13_16_3[]=
 {
  1260u,
  1372u,
  1353u,
  1372u,
  1325u,
  1353u,
  1353u,
  1293u,
  1293u,
  1372u,
  1325u,
  1293u,
  1325u
 };

static const UType JSum_8_13_16_4[]=
 {
  1304u,
  1359u,
  1305u,
  1329u,
  1350u,
  1314u,
  1363u,
  1308u,
  1377u,
  1333u,
  1379u,
  1321u,
  1247u
 };

static const UType JSum_8_13_16_5[]=
 {
  1304u,
  1377u,
  1329u,
  1321u,
  1363u,
  1359u,
  1333u,
  1350u,
  1247u,
  1308u,
  1305u,
  1379u,
  1314u
 };

static const UType JSum_8_13_16_6[]=
 {
  1324u,
  1296u,
  1281u,
  1342u,
  1338u,
  1360u,
  1272u,
  1326u,
  1376u,
  1358u,
  1320u,
  1394u,
  1302u
 };

static const UType JSum_8_13_16_7[]=
 {
  1304u,
  1377u,
  1329u,
  1321u,
  1363u,
  1359u,
  1333u,
  1350u,
  1247u,
  1308u,
  1305u,
  1379u,
  1314u
 };

static const UType JSum_8_13_16_8[]=
 {
  1304u,
  1359u,
  1305u,
  1329u,
  1350u,
  1314u,
  1363u,
  1308u,
  1377u,
  1333u,
  1379u,
  1321u,
  1247u
 };

static const UType JSum_8_13_16_9[]=
 {
  1260u,
  1372u,
  1353u,
  1372u,
  1325u,
  1353u,
  1353u,
  1293u,
  1293u,
  1372u,
  1325u,
  1293u,
  1325u
 };

static const UType JSum_8_13_16_10[]=
 {
  1304u,
  1350u,
  1377u,
  1247u,
  1329u,
  1308u,
  1321u,
  1305u,
  1363u,
  1379u,
  1359u,
  1314u,
  1333u
 };

static const UType JSum_8_13_16_11[]=
 {
  1324u,
  1272u,
  1302u,
  1360u,
  1394u,
  1338u,
  1320u,
  1342u,
  1358u,
  1281u,
  1376u,
  1296u,
  1326u
 };

static const PtrLen<const UType> JTable_8_13_16[]=
 {
  Range(JSum_8_13_16_1),
  Range(JSum_8_13_16_2),
  Range(JSum_8_13_16_3),
  Range(JSum_8_13_16_4),
  Range(JSum_8_13_16_5),
  Range(JSum_8_13_16_6),
  Range(JSum_8_13_16_7),
  Range(JSum_8_13_16_8),
  Range(JSum_8_13_16_9),
  Range(JSum_8_13_16_10),
  Range(JSum_8_13_16_11)
 };

static const UType JSum_8_13_17_1[]=
 {
  2912u,
  2846u,
  2864u,
  2924u,
  2904u,
  3037u,
  2906u,
  2918u,
  2926u,
  2976u,
  2970u,
  2868u,
  2986u
 };

static const UType JSum_8_13_17_2[]=
 {
  3023u,
  2916u,
  2908u,
  2893u,
  2971u,
  2959u,
  2852u,
  2859u,
  2907u,
  2907u,
  2969u,
  3001u,
  2872u
 };

static const UType JSum_8_13_17_3[]=
 {
  2910u,
  2870u,
  3009u,
  2870u,
  2941u,
  3009u,
  3009u,
  2889u,
  2889u,
  2870u,
  2941u,
  2889u,
  2941u
 };

static const UType JSum_8_13_17_4[]=
 {
  3023u,
  2969u,
  2859u,
  2971u,
  2916u,
  3001u,
  2907u,
  2959u,
  2908u,
  2872u,
  2907u,
  2852u,
  2893u
 };

static const UType JSum_8_13_17_5[]=
 {
  3023u,
  2908u,
  2971u,
  2852u,
  2907u,
  2969u,
  2872u,
  2916u,
  2893u,
  2959u,
  2859u,
  2907u,
  3001u
 };

static const UType JSum_8_13_17_6[]=
 {
  2912u,
  2868u,
  2976u,
  2918u,
  3037u,
  2924u,
  2846u,
  2986u,
  2970u,
  2926u,
  2906u,
  2904u,
  2864u
 };

static const UType JSum_8_13_17_7[]=
 {
  3023u,
  2908u,
  2971u,
  2852u,
  2907u,
  2969u,
  2872u,
  2916u,
  2893u,
  2959u,
  2859u,
  2907u,
  3001u
 };

static const UType JSum_8_13_17_8[]=
 {
  3023u,
  2969u,
  2859u,
  2971u,
  2916u,
  3001u,
  2907u,
  2959u,
  2908u,
  2872u,
  2907u,
  2852u,
  2893u
 };

static const UType JSum_8_13_17_9[]=
 {
  2910u,
  2870u,
  3009u,
  2870u,
  2941u,
  3009u,
  3009u,
  2889u,
  2889u,
  2870u,
  2941u,
  2889u,
  2941u
 };

static const UType JSum_8_13_17_10[]=
 {
  3023u,
  2916u,
  2908u,
  2893u,
  2971u,
  2959u,
  2852u,
  2859u,
  2907u,
  2907u,
  2969u,
  3001u,
  2872u
 };

static const UType JSum_8_13_17_11[]=
 {
  2912u,
  2846u,
  2864u,
  2924u,
  2904u,
  3037u,
  2906u,
  2918u,
  2926u,
  2976u,
  2970u,
  2868u,
  2986u
 };

static const PtrLen<const UType> JTable_8_13_17[]=
 {
  Range(JSum_8_13_17_1),
  Range(JSum_8_13_17_2),
  Range(JSum_8_13_17_3),
  Range(JSum_8_13_17_4),
  Range(JSum_8_13_17_5),
  Range(JSum_8_13_17_6),
  Range(JSum_8_13_17_7),
  Range(JSum_8_13_17_8),
  Range(JSum_8_13_17_9),
  Range(JSum_8_13_17_10),
  Range(JSum_8_13_17_11)
 };

static const UType JSum_8_13_18_1[]=
 {
  3658u,
  3632u,
  3522u,
  3524u,
  3514u,
  3484u,
  3649u,
  3530u,
  3608u,
  3574u,
  3636u,
  3558u,
  3520u
 };

static const UType JSum_8_13_18_2[]=
 {
  3534u,
  3553u,
  3575u,
  3620u,
  3553u,
  3544u,
  3559u,
  3653u,
  3627u,
  3569u,
  3547u,
  3649u,
  3426u
 };

static const UType JSum_8_13_18_3[]=
 {
  3530u,
  3493u,
  3658u,
  3493u,
  3577u,
  3658u,
  3658u,
  3565u,
  3565u,
  3493u,
  3577u,
  3565u,
  3577u
 };

static const UType JSum_8_13_18_4[]=
 {
  3534u,
  3547u,
  3653u,
  3553u,
  3553u,
  3649u,
  3627u,
  3544u,
  3575u,
  3426u,
  3569u,
  3559u,
  3620u
 };

static const UType JSum_8_13_18_5[]=
 {
  3534u,
  3575u,
  3553u,
  3559u,
  3627u,
  3547u,
  3426u,
  3553u,
  3620u,
  3544u,
  3653u,
  3569u,
  3649u
 };

static const UType JSum_8_13_18_6[]=
 {
  3658u,
  3558u,
  3574u,
  3530u,
  3484u,
  3524u,
  3632u,
  3520u,
  3636u,
  3608u,
  3649u,
  3514u,
  3522u
 };

static const UType JSum_8_13_18_7[]=
 {
  3534u,
  3575u,
  3553u,
  3559u,
  3627u,
  3547u,
  3426u,
  3553u,
  3620u,
  3544u,
  3653u,
  3569u,
  3649u
 };

static const UType JSum_8_13_18_8[]=
 {
  3534u,
  3547u,
  3653u,
  3553u,
  3553u,
  3649u,
  3627u,
  3544u,
  3575u,
  3426u,
  3569u,
  3559u,
  3620u
 };

static const UType JSum_8_13_18_9[]=
 {
  3530u,
  3493u,
  3658u,
  3493u,
  3577u,
  3658u,
  3658u,
  3565u,
  3565u,
  3493u,
  3577u,
  3565u,
  3577u
 };

static const UType JSum_8_13_18_10[]=
 {
  3534u,
  3553u,
  3575u,
  3620u,
  3553u,
  3544u,
  3559u,
  3653u,
  3627u,
  3569u,
  3547u,
  3649u,
  3426u
 };

static const UType JSum_8_13_18_11[]=
 {
  3658u,
  3632u,
  3522u,
  3524u,
  3514u,
  3484u,
  3649u,
  3530u,
  3608u,
  3574u,
  3636u,
  3558u,
  3520u
 };

static const PtrLen<const UType> JTable_8_13_18[]=
 {
  Range(JSum_8_13_18_1),
  Range(JSum_8_13_18_2),
  Range(JSum_8_13_18_3),
  Range(JSum_8_13_18_4),
  Range(JSum_8_13_18_5),
  Range(JSum_8_13_18_6),
  Range(JSum_8_13_18_7),
  Range(JSum_8_13_18_8),
  Range(JSum_8_13_18_9),
  Range(JSum_8_13_18_10),
  Range(JSum_8_13_18_11)
 };

static const UType JSum_8_13_19_1[]=
 {
  3956u,
  4090u,
  3917u,
  3944u,
  3978u,
  3972u,
  3976u,
  4086u,
  3974u,
  4096u,
  4012u,
  3958u,
  3910u
 };

static const UType JSum_8_13_19_2[]=
 {
  4024u,
  3932u,
  4027u,
  3931u,
  3844u,
  4039u,
  4004u,
  4053u,
  3919u,
  4011u,
  4011u,
  4025u,
  4049u
 };

static const UType JSum_8_13_19_3[]=
 {
  3986u,
  4069u,
  3946u,
  4069u,
  4033u,
  3946u,
  3946u,
  3913u,
  3913u,
  4069u,
  4033u,
  3913u,
  4033u
 };

static const UType JSum_8_13_19_4[]=
 {
  4024u,
  4011u,
  4053u,
  3844u,
  3932u,
  4025u,
  3919u,
  4039u,
  4027u,
  4049u,
  4011u,
  4004u,
  3931u
 };

static const UType JSum_8_13_19_5[]=
 {
  4024u,
  4027u,
  3844u,
  4004u,
  3919u,
  4011u,
  4049u,
  3932u,
  3931u,
  4039u,
  4053u,
  4011u,
  4025u
 };

static const UType JSum_8_13_19_6[]=
 {
  3956u,
  3958u,
  4096u,
  4086u,
  3972u,
  3944u,
  4090u,
  3910u,
  4012u,
  3974u,
  3976u,
  3978u,
  3917u
 };

static const UType JSum_8_13_19_7[]=
 {
  4024u,
  4027u,
  3844u,
  4004u,
  3919u,
  4011u,
  4049u,
  3932u,
  3931u,
  4039u,
  4053u,
  4011u,
  4025u
 };

static const UType JSum_8_13_19_8[]=
 {
  4024u,
  4011u,
  4053u,
  3844u,
  3932u,
  4025u,
  3919u,
  4039u,
  4027u,
  4049u,
  4011u,
  4004u,
  3931u
 };

static const UType JSum_8_13_19_9[]=
 {
  3986u,
  4069u,
  3946u,
  4069u,
  4033u,
  3946u,
  3946u,
  3913u,
  3913u,
  4069u,
  4033u,
  3913u,
  4033u
 };

static const UType JSum_8_13_19_10[]=
 {
  4024u,
  3932u,
  4027u,
  3931u,
  3844u,
  4039u,
  4004u,
  4053u,
  3919u,
  4011u,
  4011u,
  4025u,
  4049u
 };

static const UType JSum_8_13_19_11[]=
 {
  3956u,
  4090u,
  3917u,
  3944u,
  3978u,
  3972u,
  3976u,
  4086u,
  3974u,
  4096u,
  4012u,
  3958u,
  3910u
 };

static const PtrLen<const UType> JTable_8_13_19[]=
 {
  Range(JSum_8_13_19_1),
  Range(JSum_8_13_19_2),
  Range(JSum_8_13_19_3),
  Range(JSum_8_13_19_4),
  Range(JSum_8_13_19_5),
  Range(JSum_8_13_19_6),
  Range(JSum_8_13_19_7),
  Range(JSum_8_13_19_8),
  Range(JSum_8_13_19_9),
  Range(JSum_8_13_19_10),
  Range(JSum_8_13_19_11)
 };

static const UType JSum_8_13_20_1[]=
 {
  4584u,
  4506u,
  4614u,
  4558u,
  4612u,
  4382u,
  4492u,
  4580u,
  4488u,
  4518u,
  4478u,
  4449u,
  4524u
 };

static const UType JSum_8_13_20_2[]=
 {
  4503u,
  4446u,
  4566u,
  4521u,
  4587u,
  4492u,
  4473u,
  4572u,
  4681u,
  4463u,
  4537u,
  4505u,
  4439u
 };

static const UType JSum_8_13_20_3[]=
 {
  4722u,
  4469u,
  4482u,
  4469u,
  4537u,
  4482u,
  4482u,
  4533u,
  4533u,
  4469u,
  4537u,
  4533u,
  4537u
 };

static const UType JSum_8_13_20_4[]=
 {
  4503u,
  4537u,
  4572u,
  4587u,
  4446u,
  4505u,
  4681u,
  4492u,
  4566u,
  4439u,
  4463u,
  4473u,
  4521u
 };

static const UType JSum_8_13_20_5[]=
 {
  4503u,
  4566u,
  4587u,
  4473u,
  4681u,
  4537u,
  4439u,
  4446u,
  4521u,
  4492u,
  4572u,
  4463u,
  4505u
 };

static const UType JSum_8_13_20_6[]=
 {
  4584u,
  4449u,
  4518u,
  4580u,
  4382u,
  4558u,
  4506u,
  4524u,
  4478u,
  4488u,
  4492u,
  4612u,
  4614u
 };

static const UType JSum_8_13_20_7[]=
 {
  4503u,
  4566u,
  4587u,
  4473u,
  4681u,
  4537u,
  4439u,
  4446u,
  4521u,
  4492u,
  4572u,
  4463u,
  4505u
 };

static const UType JSum_8_13_20_8[]=
 {
  4503u,
  4537u,
  4572u,
  4587u,
  4446u,
  4505u,
  4681u,
  4492u,
  4566u,
  4439u,
  4463u,
  4473u,
  4521u
 };

static const UType JSum_8_13_20_9[]=
 {
  4722u,
  4469u,
  4482u,
  4469u,
  4537u,
  4482u,
  4482u,
  4533u,
  4533u,
  4469u,
  4537u,
  4533u,
  4537u
 };

static const UType JSum_8_13_20_10[]=
 {
  4503u,
  4446u,
  4566u,
  4521u,
  4587u,
  4492u,
  4473u,
  4572u,
  4681u,
  4463u,
  4537u,
  4505u,
  4439u
 };

static const UType JSum_8_13_20_11[]=
 {
  4584u,
  4506u,
  4614u,
  4558u,
  4612u,
  4382u,
  4492u,
  4580u,
  4488u,
  4518u,
  4478u,
  4449u,
  4524u
 };

static const PtrLen<const UType> JTable_8_13_20[]=
 {
  Range(JSum_8_13_20_1),
  Range(JSum_8_13_20_2),
  Range(JSum_8_13_20_3),
  Range(JSum_8_13_20_4),
  Range(JSum_8_13_20_5),
  Range(JSum_8_13_20_6),
  Range(JSum_8_13_20_7),
  Range(JSum_8_13_20_8),
  Range(JSum_8_13_20_9),
  Range(JSum_8_13_20_10),
  Range(JSum_8_13_20_11)
 };

static const UType JSum_8_13_21_1[]=
 {
  4916u,
  4877u,
  4890u,
  4860u,
  4768u,
  4684u,
  4886u,
  4782u,
  4824u,
  4812u,
  4886u,
  4866u,
  4738u
 };

static const UType JSum_8_13_21_2[]=
 {
  4856u,
  4821u,
  4824u,
  4950u,
  4787u,
  4939u,
  4867u,
  4746u,
  4707u,
  4853u,
  4835u,
  4843u,
  4761u
 };

static const UType JSum_8_13_21_3[]=
 {
  4874u,
  4830u,
  4785u,
  4830u,
  4935u,
  4785u,
  4785u,
  4755u,
  4755u,
  4830u,
  4935u,
  4755u,
  4935u
 };

static const UType JSum_8_13_21_4[]=
 {
  4856u,
  4835u,
  4746u,
  4787u,
  4821u,
  4843u,
  4707u,
  4939u,
  4824u,
  4761u,
  4853u,
  4867u,
  4950u
 };

static const UType JSum_8_13_21_5[]=
 {
  4856u,
  4824u,
  4787u,
  4867u,
  4707u,
  4835u,
  4761u,
  4821u,
  4950u,
  4939u,
  4746u,
  4853u,
  4843u
 };

static const UType JSum_8_13_21_6[]=
 {
  4916u,
  4866u,
  4812u,
  4782u,
  4684u,
  4860u,
  4877u,
  4738u,
  4886u,
  4824u,
  4886u,
  4768u,
  4890u
 };

static const UType JSum_8_13_21_7[]=
 {
  4856u,
  4824u,
  4787u,
  4867u,
  4707u,
  4835u,
  4761u,
  4821u,
  4950u,
  4939u,
  4746u,
  4853u,
  4843u
 };

static const UType JSum_8_13_21_8[]=
 {
  4856u,
  4835u,
  4746u,
  4787u,
  4821u,
  4843u,
  4707u,
  4939u,
  4824u,
  4761u,
  4853u,
  4867u,
  4950u
 };

static const UType JSum_8_13_21_9[]=
 {
  4874u,
  4830u,
  4785u,
  4830u,
  4935u,
  4785u,
  4785u,
  4755u,
  4755u,
  4830u,
  4935u,
  4755u,
  4935u
 };

static const UType JSum_8_13_21_10[]=
 {
  4856u,
  4821u,
  4824u,
  4950u,
  4787u,
  4939u,
  4867u,
  4746u,
  4707u,
  4853u,
  4835u,
  4843u,
  4761u
 };

static const UType JSum_8_13_21_11[]=
 {
  4916u,
  4877u,
  4890u,
  4860u,
  4768u,
  4684u,
  4886u,
  4782u,
  4824u,
  4812u,
  4886u,
  4866u,
  4738u
 };

static const PtrLen<const UType> JTable_8_13_21[]=
 {
  Range(JSum_8_13_21_1),
  Range(JSum_8_13_21_2),
  Range(JSum_8_13_21_3),
  Range(JSum_8_13_21_4),
  Range(JSum_8_13_21_5),
  Range(JSum_8_13_21_6),
  Range(JSum_8_13_21_7),
  Range(JSum_8_13_21_8),
  Range(JSum_8_13_21_9),
  Range(JSum_8_13_21_10),
  Range(JSum_8_13_21_11)
 };

static const UType JSum_8_13_22_1[]=
 {
  5682u,
  5610u,
  5630u,
  5521u,
  5600u,
  5660u,
  5612u,
  5752u,
  5594u,
  5630u,
  5644u,
  5540u,
  5454u
 };

static const UType JSum_8_13_22_2[]=
 {
  5517u,
  5613u,
  5699u,
  5557u,
  5699u,
  5672u,
  5587u,
  5549u,
  5693u,
  5654u,
  5626u,
  5459u,
  5604u
 };

static const UType JSum_8_13_22_3[]=
 {
  5720u,
  5553u,
  5713u,
  5553u,
  5592u,
  5713u,
  5713u,
  5545u,
  5545u,
  5553u,
  5592u,
  5545u,
  5592u
 };

static const UType JSum_8_13_22_4[]=
 {
  5517u,
  5626u,
  5549u,
  5699u,
  5613u,
  5459u,
  5693u,
  5672u,
  5699u,
  5604u,
  5654u,
  5587u,
  5557u
 };

static const UType JSum_8_13_22_5[]=
 {
  5517u,
  5699u,
  5699u,
  5587u,
  5693u,
  5626u,
  5604u,
  5613u,
  5557u,
  5672u,
  5549u,
  5654u,
  5459u
 };

static const UType JSum_8_13_22_6[]=
 {
  5682u,
  5540u,
  5630u,
  5752u,
  5660u,
  5521u,
  5610u,
  5454u,
  5644u,
  5594u,
  5612u,
  5600u,
  5630u
 };

static const UType JSum_8_13_22_7[]=
 {
  5517u,
  5699u,
  5699u,
  5587u,
  5693u,
  5626u,
  5604u,
  5613u,
  5557u,
  5672u,
  5549u,
  5654u,
  5459u
 };

static const UType JSum_8_13_22_8[]=
 {
  5517u,
  5626u,
  5549u,
  5699u,
  5613u,
  5459u,
  5693u,
  5672u,
  5699u,
  5604u,
  5654u,
  5587u,
  5557u
 };

static const UType JSum_8_13_22_9[]=
 {
  5720u,
  5553u,
  5713u,
  5553u,
  5592u,
  5713u,
  5713u,
  5545u,
  5545u,
  5553u,
  5592u,
  5545u,
  5592u
 };

static const UType JSum_8_13_22_10[]=
 {
  5517u,
  5613u,
  5699u,
  5557u,
  5699u,
  5672u,
  5587u,
  5549u,
  5693u,
  5654u,
  5626u,
  5459u,
  5604u
 };

static const UType JSum_8_13_22_11[]=
 {
  5682u,
  5610u,
  5630u,
  5521u,
  5600u,
  5660u,
  5612u,
  5752u,
  5594u,
  5630u,
  5644u,
  5540u,
  5454u
 };

static const PtrLen<const UType> JTable_8_13_22[]=
 {
  Range(JSum_8_13_22_1),
  Range(JSum_8_13_22_2),
  Range(JSum_8_13_22_3),
  Range(JSum_8_13_22_4),
  Range(JSum_8_13_22_5),
  Range(JSum_8_13_22_6),
  Range(JSum_8_13_22_7),
  Range(JSum_8_13_22_8),
  Range(JSum_8_13_22_9),
  Range(JSum_8_13_22_10),
  Range(JSum_8_13_22_11)
 };

static const UType JSum_8_13_23_1[]=
 {
  7876u,
  7954u,
  7912u,
  7802u,
  7978u,
  7788u,
  7760u,
  7694u,
  7885u,
  7948u,
  7782u,
  7926u,
  7796u
 };

static const UType JSum_8_13_23_2[]=
 {
  7813u,
  7853u,
  7904u,
  7887u,
  7879u,
  7823u,
  7873u,
  7699u,
  7894u,
  7691u,
  7848u,
  8034u,
  7903u
 };

static const UType JSum_8_13_23_3[]=
 {
  7814u,
  7882u,
  7945u,
  7882u,
  7711u,
  7945u,
  7945u,
  7891u,
  7891u,
  7882u,
  7711u,
  7891u,
  7711u
 };

static const UType JSum_8_13_23_4[]=
 {
  7813u,
  7848u,
  7699u,
  7879u,
  7853u,
  8034u,
  7894u,
  7823u,
  7904u,
  7903u,
  7691u,
  7873u,
  7887u
 };

static const UType JSum_8_13_23_5[]=
 {
  7813u,
  7904u,
  7879u,
  7873u,
  7894u,
  7848u,
  7903u,
  7853u,
  7887u,
  7823u,
  7699u,
  7691u,
  8034u
 };

static const UType JSum_8_13_23_6[]=
 {
  7876u,
  7926u,
  7948u,
  7694u,
  7788u,
  7802u,
  7954u,
  7796u,
  7782u,
  7885u,
  7760u,
  7978u,
  7912u
 };

static const UType JSum_8_13_23_7[]=
 {
  7813u,
  7904u,
  7879u,
  7873u,
  7894u,
  7848u,
  7903u,
  7853u,
  7887u,
  7823u,
  7699u,
  7691u,
  8034u
 };

static const UType JSum_8_13_23_8[]=
 {
  7813u,
  7848u,
  7699u,
  7879u,
  7853u,
  8034u,
  7894u,
  7823u,
  7904u,
  7903u,
  7691u,
  7873u,
  7887u
 };

static const UType JSum_8_13_23_9[]=
 {
  7814u,
  7882u,
  7945u,
  7882u,
  7711u,
  7945u,
  7945u,
  7891u,
  7891u,
  7882u,
  7711u,
  7891u,
  7711u
 };

static const UType JSum_8_13_23_10[]=
 {
  7813u,
  7853u,
  7904u,
  7887u,
  7879u,
  7823u,
  7873u,
  7699u,
  7894u,
  7691u,
  7848u,
  8034u,
  7903u
 };

static const UType JSum_8_13_23_11[]=
 {
  7876u,
  7954u,
  7912u,
  7802u,
  7978u,
  7788u,
  7760u,
  7694u,
  7885u,
  7948u,
  7782u,
  7926u,
  7796u
 };

static const PtrLen<const UType> JTable_8_13_23[]=
 {
  Range(JSum_8_13_23_1),
  Range(JSum_8_13_23_2),
  Range(JSum_8_13_23_3),
  Range(JSum_8_13_23_4),
  Range(JSum_8_13_23_5),
  Range(JSum_8_13_23_6),
  Range(JSum_8_13_23_7),
  Range(JSum_8_13_23_8),
  Range(JSum_8_13_23_9),
  Range(JSum_8_13_23_10),
  Range(JSum_8_13_23_11)
 };

static const UType JSum_8_13_24_1[]=
 {
  8426u,
  8692u,
  8642u,
  8604u,
  8622u,
  8588u,
  8570u,
  8796u,
  8558u,
  8656u,
  8586u,
  8617u,
  8468u
 };

static const UType JSum_8_13_24_2[]=
 {
  8562u,
  8557u,
  8591u,
  8593u,
  8455u,
  8525u,
  8631u,
  8792u,
  8557u,
  8712u,
  8539u,
  8581u,
  8730u
 };

static const UType JSum_8_13_24_3[]=
 {
  8586u,
  8697u,
  8557u,
  8697u,
  8685u,
  8557u,
  8557u,
  8474u,
  8474u,
  8697u,
  8685u,
  8474u,
  8685u
 };

static const UType JSum_8_13_24_4[]=
 {
  8562u,
  8539u,
  8792u,
  8455u,
  8557u,
  8581u,
  8557u,
  8525u,
  8591u,
  8730u,
  8712u,
  8631u,
  8593u
 };

static const UType JSum_8_13_24_5[]=
 {
  8562u,
  8591u,
  8455u,
  8631u,
  8557u,
  8539u,
  8730u,
  8557u,
  8593u,
  8525u,
  8792u,
  8712u,
  8581u
 };

static const UType JSum_8_13_24_6[]=
 {
  8426u,
  8617u,
  8656u,
  8796u,
  8588u,
  8604u,
  8692u,
  8468u,
  8586u,
  8558u,
  8570u,
  8622u,
  8642u
 };

static const UType JSum_8_13_24_7[]=
 {
  8562u,
  8591u,
  8455u,
  8631u,
  8557u,
  8539u,
  8730u,
  8557u,
  8593u,
  8525u,
  8792u,
  8712u,
  8581u
 };

static const UType JSum_8_13_24_8[]=
 {
  8562u,
  8539u,
  8792u,
  8455u,
  8557u,
  8581u,
  8557u,
  8525u,
  8591u,
  8730u,
  8712u,
  8631u,
  8593u
 };

static const UType JSum_8_13_24_9[]=
 {
  8586u,
  8697u,
  8557u,
  8697u,
  8685u,
  8557u,
  8557u,
  8474u,
  8474u,
  8697u,
  8685u,
  8474u,
  8685u
 };

static const UType JSum_8_13_24_10[]=
 {
  8562u,
  8557u,
  8591u,
  8593u,
  8455u,
  8525u,
  8631u,
  8792u,
  8557u,
  8712u,
  8539u,
  8581u,
  8730u
 };

static const UType JSum_8_13_24_11[]=
 {
  8426u,
  8692u,
  8642u,
  8604u,
  8622u,
  8588u,
  8570u,
  8796u,
  8558u,
  8656u,
  8586u,
  8617u,
  8468u
 };

static const PtrLen<const UType> JTable_8_13_24[]=
 {
  Range(JSum_8_13_24_1),
  Range(JSum_8_13_24_2),
  Range(JSum_8_13_24_3),
  Range(JSum_8_13_24_4),
  Range(JSum_8_13_24_5),
  Range(JSum_8_13_24_6),
  Range(JSum_8_13_24_7),
  Range(JSum_8_13_24_8),
  Range(JSum_8_13_24_9),
  Range(JSum_8_13_24_10),
  Range(JSum_8_13_24_11)
 };

static const UType JSum_8_13_25_1[]=
 {
  10550u,
  10776u,
  10628u,
  10666u,
  10505u,
  10788u,
  10726u,
  10634u,
  10588u,
  10522u,
  10462u,
  10704u,
  10588u
 };

static const UType JSum_8_13_25_2[]=
 {
  10687u,
  10447u,
  10657u,
  10589u,
  10579u,
  10701u,
  10580u,
  10612u,
  10571u,
  10833u,
  10772u,
  10585u,
  10524u
 };

static const UType JSum_8_13_25_3[]=
 {
  10640u,
  10495u,
  10684u,
  10495u,
  10561u,
  10684u,
  10684u,
  10759u,
  10759u,
  10495u,
  10561u,
  10759u,
  10561u
 };

static const UType JSum_8_13_25_4[]=
 {
  10687u,
  10772u,
  10612u,
  10579u,
  10447u,
  10585u,
  10571u,
  10701u,
  10657u,
  10524u,
  10833u,
  10580u,
  10589u
 };

static const UType JSum_8_13_25_5[]=
 {
  10687u,
  10657u,
  10579u,
  10580u,
  10571u,
  10772u,
  10524u,
  10447u,
  10589u,
  10701u,
  10612u,
  10833u,
  10585u
 };

static const UType JSum_8_13_25_6[]=
 {
  10550u,
  10704u,
  10522u,
  10634u,
  10788u,
  10666u,
  10776u,
  10588u,
  10462u,
  10588u,
  10726u,
  10505u,
  10628u
 };

static const UType JSum_8_13_25_7[]=
 {
  10687u,
  10657u,
  10579u,
  10580u,
  10571u,
  10772u,
  10524u,
  10447u,
  10589u,
  10701u,
  10612u,
  10833u,
  10585u
 };

static const UType JSum_8_13_25_8[]=
 {
  10687u,
  10772u,
  10612u,
  10579u,
  10447u,
  10585u,
  10571u,
  10701u,
  10657u,
  10524u,
  10833u,
  10580u,
  10589u
 };

static const UType JSum_8_13_25_9[]=
 {
  10640u,
  10495u,
  10684u,
  10495u,
  10561u,
  10684u,
  10684u,
  10759u,
  10759u,
  10495u,
  10561u,
  10759u,
  10561u
 };

static const UType JSum_8_13_25_10[]=
 {
  10687u,
  10447u,
  10657u,
  10589u,
  10579u,
  10701u,
  10580u,
  10612u,
  10571u,
  10833u,
  10772u,
  10585u,
  10524u
 };

static const UType JSum_8_13_25_11[]=
 {
  10550u,
  10776u,
  10628u,
  10666u,
  10505u,
  10788u,
  10726u,
  10634u,
  10588u,
  10522u,
  10462u,
  10704u,
  10588u
 };

static const PtrLen<const UType> JTable_8_13_25[]=
 {
  Range(JSum_8_13_25_1),
  Range(JSum_8_13_25_2),
  Range(JSum_8_13_25_3),
  Range(JSum_8_13_25_4),
  Range(JSum_8_13_25_5),
  Range(JSum_8_13_25_6),
  Range(JSum_8_13_25_7),
  Range(JSum_8_13_25_8),
  Range(JSum_8_13_25_9),
  Range(JSum_8_13_25_10),
  Range(JSum_8_13_25_11)
 };

static const UType JSum_8_13_26_1[]=
 {
  27294u,
  27254u,
  27142u,
  27320u,
  27436u,
  27654u,
  27494u,
  27128u,
  27664u,
  27300u,
  27342u,
  27353u,
  27428u
 };

static const UType JSum_8_13_26_2[]=
 {
  27471u,
  27244u,
  27130u,
  27135u,
  27597u,
  27350u,
  27433u,
  27544u,
  27471u,
  27269u,
  27517u,
  27155u,
  27493u
 };

static const UType JSum_8_13_26_3[]=
 {
  27030u,
  27477u,
  27190u,
  27477u,
  27393u,
  27190u,
  27190u,
  27533u,
  27533u,
  27477u,
  27393u,
  27533u,
  27393u
 };

static const UType JSum_8_13_26_4[]=
 {
  27471u,
  27517u,
  27544u,
  27597u,
  27244u,
  27155u,
  27471u,
  27350u,
  27130u,
  27493u,
  27269u,
  27433u,
  27135u
 };

static const UType JSum_8_13_26_5[]=
 {
  27471u,
  27130u,
  27597u,
  27433u,
  27471u,
  27517u,
  27493u,
  27244u,
  27135u,
  27350u,
  27544u,
  27269u,
  27155u
 };

static const UType JSum_8_13_26_6[]=
 {
  27294u,
  27353u,
  27300u,
  27128u,
  27654u,
  27320u,
  27254u,
  27428u,
  27342u,
  27664u,
  27494u,
  27436u,
  27142u
 };

static const UType JSum_8_13_26_7[]=
 {
  27471u,
  27130u,
  27597u,
  27433u,
  27471u,
  27517u,
  27493u,
  27244u,
  27135u,
  27350u,
  27544u,
  27269u,
  27155u
 };

static const UType JSum_8_13_26_8[]=
 {
  27471u,
  27517u,
  27544u,
  27597u,
  27244u,
  27155u,
  27471u,
  27350u,
  27130u,
  27493u,
  27269u,
  27433u,
  27135u
 };

static const UType JSum_8_13_26_9[]=
 {
  27030u,
  27477u,
  27190u,
  27477u,
  27393u,
  27190u,
  27190u,
  27533u,
  27533u,
  27477u,
  27393u,
  27533u,
  27393u
 };

static const UType JSum_8_13_26_10[]=
 {
  27471u,
  27244u,
  27130u,
  27135u,
  27597u,
  27350u,
  27433u,
  27544u,
  27471u,
  27269u,
  27517u,
  27155u,
  27493u
 };

static const UType JSum_8_13_26_11[]=
 {
  27294u,
  27254u,
  27142u,
  27320u,
  27436u,
  27654u,
  27494u,
  27128u,
  27664u,
  27300u,
  27342u,
  27353u,
  27428u
 };

static const PtrLen<const UType> JTable_8_13_26[]=
 {
  Range(JSum_8_13_26_1),
  Range(JSum_8_13_26_2),
  Range(JSum_8_13_26_3),
  Range(JSum_8_13_26_4),
  Range(JSum_8_13_26_5),
  Range(JSum_8_13_26_6),
  Range(JSum_8_13_26_7),
  Range(JSum_8_13_26_8),
  Range(JSum_8_13_26_9),
  Range(JSum_8_13_26_10),
  Range(JSum_8_13_26_11)
 };

static const UType JSum_8_13_27_1[]=
 {
  36022u,
  35664u,
  35522u,
  35532u,
  35486u,
  35540u,
  35196u,
  35646u,
  35518u,
  35481u,
  35464u,
  35448u,
  35370u
 };

static const UType JSum_8_13_27_2[]=
 {
  35531u,
  35304u,
  35613u,
  35695u,
  35239u,
  35529u,
  35221u,
  35517u,
  35786u,
  35736u,
  35439u,
  35741u,
  35538u
 };

static const UType JSum_8_13_27_3[]=
 {
  35550u,
  35313u,
  35822u,
  35313u,
  35433u,
  35822u,
  35822u,
  35545u,
  35545u,
  35313u,
  35433u,
  35545u,
  35433u
 };

static const UType JSum_8_13_27_4[]=
 {
  35531u,
  35439u,
  35517u,
  35239u,
  35304u,
  35741u,
  35786u,
  35529u,
  35613u,
  35538u,
  35736u,
  35221u,
  35695u
 };

static const UType JSum_8_13_27_5[]=
 {
  35531u,
  35613u,
  35239u,
  35221u,
  35786u,
  35439u,
  35538u,
  35304u,
  35695u,
  35529u,
  35517u,
  35736u,
  35741u
 };

static const UType JSum_8_13_27_6[]=
 {
  36022u,
  35448u,
  35481u,
  35646u,
  35540u,
  35532u,
  35664u,
  35370u,
  35464u,
  35518u,
  35196u,
  35486u,
  35522u
 };

static const UType JSum_8_13_27_7[]=
 {
  35531u,
  35613u,
  35239u,
  35221u,
  35786u,
  35439u,
  35538u,
  35304u,
  35695u,
  35529u,
  35517u,
  35736u,
  35741u
 };

static const UType JSum_8_13_27_8[]=
 {
  35531u,
  35439u,
  35517u,
  35239u,
  35304u,
  35741u,
  35786u,
  35529u,
  35613u,
  35538u,
  35736u,
  35221u,
  35695u
 };

static const UType JSum_8_13_27_9[]=
 {
  35550u,
  35313u,
  35822u,
  35313u,
  35433u,
  35822u,
  35822u,
  35545u,
  35545u,
  35313u,
  35433u,
  35545u,
  35433u
 };

static const UType JSum_8_13_27_10[]=
 {
  35531u,
  35304u,
  35613u,
  35695u,
  35239u,
  35529u,
  35221u,
  35517u,
  35786u,
  35736u,
  35439u,
  35741u,
  35538u
 };

static const UType JSum_8_13_27_11[]=
 {
  36022u,
  35664u,
  35522u,
  35532u,
  35486u,
  35540u,
  35196u,
  35646u,
  35518u,
  35481u,
  35464u,
  35448u,
  35370u
 };

static const PtrLen<const UType> JTable_8_13_27[]=
 {
  Range(JSum_8_13_27_1),
  Range(JSum_8_13_27_2),
  Range(JSum_8_13_27_3),
  Range(JSum_8_13_27_4),
  Range(JSum_8_13_27_5),
  Range(JSum_8_13_27_6),
  Range(JSum_8_13_27_7),
  Range(JSum_8_13_27_8),
  Range(JSum_8_13_27_9),
  Range(JSum_8_13_27_10),
  Range(JSum_8_13_27_11)
 };

static const UType JSum_8_13_28_1[]=
 {
  60226u,
  60312u,
  60044u,
  59678u,
  60348u,
  60132u,
  60348u,
  60373u,
  59898u,
  60318u,
  60330u,
  60656u,
  60118u
 };

static const UType JSum_8_13_28_2[]=
 {
  60381u,
  59865u,
  60233u,
  60045u,
  59781u,
  60588u,
  60589u,
  60304u,
  60120u,
  60305u,
  60185u,
  60349u,
  60036u
 };

static const UType JSum_8_13_28_3[]=
 {
  60828u,
  60424u,
  60033u,
  60424u,
  60023u,
  60033u,
  60033u,
  60171u,
  60171u,
  60424u,
  60023u,
  60171u,
  60023u
 };

static const UType JSum_8_13_28_4[]=
 {
  60381u,
  60185u,
  60304u,
  59781u,
  59865u,
  60349u,
  60120u,
  60588u,
  60233u,
  60036u,
  60305u,
  60589u,
  60045u
 };

static const UType JSum_8_13_28_5[]=
 {
  60381u,
  60233u,
  59781u,
  60589u,
  60120u,
  60185u,
  60036u,
  59865u,
  60045u,
  60588u,
  60304u,
  60305u,
  60349u
 };

static const UType JSum_8_13_28_6[]=
 {
  60226u,
  60656u,
  60318u,
  60373u,
  60132u,
  59678u,
  60312u,
  60118u,
  60330u,
  59898u,
  60348u,
  60348u,
  60044u
 };

static const UType JSum_8_13_28_7[]=
 {
  60381u,
  60233u,
  59781u,
  60589u,
  60120u,
  60185u,
  60036u,
  59865u,
  60045u,
  60588u,
  60304u,
  60305u,
  60349u
 };

static const UType JSum_8_13_28_8[]=
 {
  60381u,
  60185u,
  60304u,
  59781u,
  59865u,
  60349u,
  60120u,
  60588u,
  60233u,
  60036u,
  60305u,
  60589u,
  60045u
 };

static const UType JSum_8_13_28_9[]=
 {
  60828u,
  60424u,
  60033u,
  60424u,
  60023u,
  60033u,
  60033u,
  60171u,
  60171u,
  60424u,
  60023u,
  60171u,
  60023u
 };

static const UType JSum_8_13_28_10[]=
 {
  60381u,
  59865u,
  60233u,
  60045u,
  59781u,
  60588u,
  60589u,
  60304u,
  60120u,
  60305u,
  60185u,
  60349u,
  60036u
 };

static const UType JSum_8_13_28_11[]=
 {
  60226u,
  60312u,
  60044u,
  59678u,
  60348u,
  60132u,
  60348u,
  60373u,
  59898u,
  60318u,
  60330u,
  60656u,
  60118u
 };

static const PtrLen<const UType> JTable_8_13_28[]=
 {
  Range(JSum_8_13_28_1),
  Range(JSum_8_13_28_2),
  Range(JSum_8_13_28_3),
  Range(JSum_8_13_28_4),
  Range(JSum_8_13_28_5),
  Range(JSum_8_13_28_6),
  Range(JSum_8_13_28_7),
  Range(JSum_8_13_28_8),
  Range(JSum_8_13_28_9),
  Range(JSum_8_13_28_10),
  Range(JSum_8_13_28_11)
 };

static const UType JSum_8_13_29_1[]=
 {
  91766u,
  92110u,
  91736u,
  91464u,
  91980u,
  92182u,
  91450u,
  92274u,
  91784u,
  91880u,
  91428u,
  91377u,
  91578u
 };

static const UType JSum_8_13_29_2[]=
 {
  92297u,
  91417u,
  91763u,
  91911u,
  92184u,
  91767u,
  91208u,
  91832u,
  91413u,
  91609u,
  91867u,
  91920u,
  91821u
 };

static const UType JSum_8_13_29_3[]=
 {
  91436u,
  91368u,
  92169u,
  91368u,
  91863u,
  92169u,
  92169u,
  91791u,
  91791u,
  91368u,
  91863u,
  91791u,
  91863u
 };

static const UType JSum_8_13_29_4[]=
 {
  92297u,
  91867u,
  91832u,
  92184u,
  91417u,
  91920u,
  91413u,
  91767u,
  91763u,
  91821u,
  91609u,
  91208u,
  91911u
 };

static const UType JSum_8_13_29_5[]=
 {
  92297u,
  91763u,
  92184u,
  91208u,
  91413u,
  91867u,
  91821u,
  91417u,
  91911u,
  91767u,
  91832u,
  91609u,
  91920u
 };

static const UType JSum_8_13_29_6[]=
 {
  91766u,
  91377u,
  91880u,
  92274u,
  92182u,
  91464u,
  92110u,
  91578u,
  91428u,
  91784u,
  91450u,
  91980u,
  91736u
 };

static const UType JSum_8_13_29_7[]=
 {
  92297u,
  91763u,
  92184u,
  91208u,
  91413u,
  91867u,
  91821u,
  91417u,
  91911u,
  91767u,
  91832u,
  91609u,
  91920u
 };

static const UType JSum_8_13_29_8[]=
 {
  92297u,
  91867u,
  91832u,
  92184u,
  91417u,
  91920u,
  91413u,
  91767u,
  91763u,
  91821u,
  91609u,
  91208u,
  91911u
 };

static const UType JSum_8_13_29_9[]=
 {
  91436u,
  91368u,
  92169u,
  91368u,
  91863u,
  92169u,
  92169u,
  91791u,
  91791u,
  91368u,
  91863u,
  91791u,
  91863u
 };

static const UType JSum_8_13_29_10[]=
 {
  92297u,
  91417u,
  91763u,
  91911u,
  92184u,
  91767u,
  91208u,
  91832u,
  91413u,
  91609u,
  91867u,
  91920u,
  91821u
 };

static const UType JSum_8_13_29_11[]=
 {
  91766u,
  92110u,
  91736u,
  91464u,
  91980u,
  92182u,
  91450u,
  92274u,
  91784u,
  91880u,
  91428u,
  91377u,
  91578u
 };

static const PtrLen<const UType> JTable_8_13_29[]=
 {
  Range(JSum_8_13_29_1),
  Range(JSum_8_13_29_2),
  Range(JSum_8_13_29_3),
  Range(JSum_8_13_29_4),
  Range(JSum_8_13_29_5),
  Range(JSum_8_13_29_6),
  Range(JSum_8_13_29_7),
  Range(JSum_8_13_29_8),
  Range(JSum_8_13_29_9),
  Range(JSum_8_13_29_10),
  Range(JSum_8_13_29_11)
 };

static const UType JSum_8_13_30_1[]=
 {
  149302u,
  149270u,
  149102u,
  149390u,
  149362u,
  149132u,
  149756u,
  149488u,
  149612u,
  148164u,
  149106u,
  149289u,
  148964u
 };

static const UType JSum_8_13_30_2[]=
 {
  149738u,
  149332u,
  149078u,
  149172u,
  149532u,
  149574u,
  149666u,
  149089u,
  148796u,
  148784u,
  149146u,
  149558u,
  148472u
 };

static const UType JSum_8_13_30_3[]=
 {
  149417u,
  149832u,
  148918u,
  149832u,
  149214u,
  148918u,
  148918u,
  148876u,
  148876u,
  149832u,
  149214u,
  148876u,
  149214u
 };

static const UType JSum_8_13_30_4[]=
 {
  149738u,
  149146u,
  149089u,
  149532u,
  149332u,
  149558u,
  148796u,
  149574u,
  149078u,
  148472u,
  148784u,
  149666u,
  149172u
 };

static const UType JSum_8_13_30_5[]=
 {
  149738u,
  149078u,
  149532u,
  149666u,
  148796u,
  149146u,
  148472u,
  149332u,
  149172u,
  149574u,
  149089u,
  148784u,
  149558u
 };

static const UType JSum_8_13_30_6[]=
 {
  149302u,
  149289u,
  148164u,
  149488u,
  149132u,
  149390u,
  149270u,
  148964u,
  149106u,
  149612u,
  149756u,
  149362u,
  149102u
 };

static const UType JSum_8_13_30_7[]=
 {
  149738u,
  149078u,
  149532u,
  149666u,
  148796u,
  149146u,
  148472u,
  149332u,
  149172u,
  149574u,
  149089u,
  148784u,
  149558u
 };

static const UType JSum_8_13_30_8[]=
 {
  149738u,
  149146u,
  149089u,
  149532u,
  149332u,
  149558u,
  148796u,
  149574u,
  149078u,
  148472u,
  148784u,
  149666u,
  149172u
 };

static const UType JSum_8_13_30_9[]=
 {
  149417u,
  149832u,
  148918u,
  149832u,
  149214u,
  148918u,
  148918u,
  148876u,
  148876u,
  149832u,
  149214u,
  148876u,
  149214u
 };

static const UType JSum_8_13_30_10[]=
 {
  149738u,
  149332u,
  149078u,
  149172u,
  149532u,
  149574u,
  149666u,
  149089u,
  148796u,
  148784u,
  149146u,
  149558u,
  148472u
 };

static const UType JSum_8_13_30_11[]=
 {
  149302u,
  149270u,
  149102u,
  149390u,
  149362u,
  149132u,
  149756u,
  149488u,
  149612u,
  148164u,
  149106u,
  149289u,
  148964u
 };

static const PtrLen<const UType> JTable_8_13_30[]=
 {
  Range(JSum_8_13_30_1),
  Range(JSum_8_13_30_2),
  Range(JSum_8_13_30_3),
  Range(JSum_8_13_30_4),
  Range(JSum_8_13_30_5),
  Range(JSum_8_13_30_6),
  Range(JSum_8_13_30_7),
  Range(JSum_8_13_30_8),
  Range(JSum_8_13_30_9),
  Range(JSum_8_13_30_10),
  Range(JSum_8_13_30_11)
 };

static const UType JSum_8_13_31_1[]=
 {
  180582u,
  180860u,
  180890u,
  180176u,
  180552u,
  181137u,
  180814u,
  180446u,
  181568u,
  180394u,
  180728u,
  180080u,
  180118u
 };

static const UType JSum_8_13_31_2[]=
 {
  180869u,
  180913u,
  180542u,
  181220u,
  180109u,
  180798u,
  181401u,
  180497u,
  180293u,
  179867u,
  180735u,
  180400u,
  180701u
 };

static const UType JSum_8_13_31_3[]=
 {
  179834u,
  180223u,
  181143u,
  180223u,
  180910u,
  181143u,
  181143u,
  180561u,
  180561u,
  180223u,
  180910u,
  180561u,
  180910u
 };

static const UType JSum_8_13_31_4[]=
 {
  180869u,
  180735u,
  180497u,
  180109u,
  180913u,
  180400u,
  180293u,
  180798u,
  180542u,
  180701u,
  179867u,
  181401u,
  181220u
 };

static const UType JSum_8_13_31_5[]=
 {
  180869u,
  180542u,
  180109u,
  181401u,
  180293u,
  180735u,
  180701u,
  180913u,
  181220u,
  180798u,
  180497u,
  179867u,
  180400u
 };

static const UType JSum_8_13_31_6[]=
 {
  180582u,
  180080u,
  180394u,
  180446u,
  181137u,
  180176u,
  180860u,
  180118u,
  180728u,
  181568u,
  180814u,
  180552u,
  180890u
 };

static const UType JSum_8_13_31_7[]=
 {
  180869u,
  180542u,
  180109u,
  181401u,
  180293u,
  180735u,
  180701u,
  180913u,
  181220u,
  180798u,
  180497u,
  179867u,
  180400u
 };

static const UType JSum_8_13_31_8[]=
 {
  180869u,
  180735u,
  180497u,
  180109u,
  180913u,
  180400u,
  180293u,
  180798u,
  180542u,
  180701u,
  179867u,
  181401u,
  181220u
 };

static const UType JSum_8_13_31_9[]=
 {
  179834u,
  180223u,
  181143u,
  180223u,
  180910u,
  181143u,
  181143u,
  180561u,
  180561u,
  180223u,
  180910u,
  180561u,
  180910u
 };

static const UType JSum_8_13_31_10[]=
 {
  180869u,
  180913u,
  180542u,
  181220u,
  180109u,
  180798u,
  181401u,
  180497u,
  180293u,
  179867u,
  180735u,
  180400u,
  180701u
 };

static const UType JSum_8_13_31_11[]=
 {
  180582u,
  180860u,
  180890u,
  180176u,
  180552u,
  181137u,
  180814u,
  180446u,
  181568u,
  180394u,
  180728u,
  180080u,
  180118u
 };

static const PtrLen<const UType> JTable_8_13_31[]=
 {
  Range(JSum_8_13_31_1),
  Range(JSum_8_13_31_2),
  Range(JSum_8_13_31_3),
  Range(JSum_8_13_31_4),
  Range(JSum_8_13_31_5),
  Range(JSum_8_13_31_6),
  Range(JSum_8_13_31_7),
  Range(JSum_8_13_31_8),
  Range(JSum_8_13_31_9),
  Range(JSum_8_13_31_10),
  Range(JSum_8_13_31_11)
 };

static const UType JSum_8_13_32_1[]=
 {
  201772u,
  202058u,
  201914u,
  201461u,
  201756u,
  201912u,
  202554u,
  202380u,
  202186u,
  201636u,
  201346u,
  202544u,
  201102u
 };

static const UType JSum_8_13_32_2[]=
 {
  202119u,
  200992u,
  201852u,
  202299u,
  201735u,
  201555u,
  201803u,
  201245u,
  202313u,
  201778u,
  202431u,
  202034u,
  202465u
 };

static const UType JSum_8_13_32_3[]=
 {
  201830u,
  201225u,
  201759u,
  201225u,
  202299u,
  201759u,
  201759u,
  202314u,
  202314u,
  201225u,
  202299u,
  202314u,
  202299u
 };

static const UType JSum_8_13_32_4[]=
 {
  202119u,
  202431u,
  201245u,
  201735u,
  200992u,
  202034u,
  202313u,
  201555u,
  201852u,
  202465u,
  201778u,
  201803u,
  202299u
 };

static const UType JSum_8_13_32_5[]=
 {
  202119u,
  201852u,
  201735u,
  201803u,
  202313u,
  202431u,
  202465u,
  200992u,
  202299u,
  201555u,
  201245u,
  201778u,
  202034u
 };

static const UType JSum_8_13_32_6[]=
 {
  201772u,
  202544u,
  201636u,
  202380u,
  201912u,
  201461u,
  202058u,
  201102u,
  201346u,
  202186u,
  202554u,
  201756u,
  201914u
 };

static const UType JSum_8_13_32_7[]=
 {
  202119u,
  201852u,
  201735u,
  201803u,
  202313u,
  202431u,
  202465u,
  200992u,
  202299u,
  201555u,
  201245u,
  201778u,
  202034u
 };

static const UType JSum_8_13_32_8[]=
 {
  202119u,
  202431u,
  201245u,
  201735u,
  200992u,
  202034u,
  202313u,
  201555u,
  201852u,
  202465u,
  201778u,
  201803u,
  202299u
 };

static const UType JSum_8_13_32_9[]=
 {
  201830u,
  201225u,
  201759u,
  201225u,
  202299u,
  201759u,
  201759u,
  202314u,
  202314u,
  201225u,
  202299u,
  202314u,
  202299u
 };

static const UType JSum_8_13_32_10[]=
 {
  202119u,
  200992u,
  201852u,
  202299u,
  201735u,
  201555u,
  201803u,
  201245u,
  202313u,
  201778u,
  202431u,
  202034u,
  202465u
 };

static const UType JSum_8_13_32_11[]=
 {
  201772u,
  202058u,
  201914u,
  201461u,
  201756u,
  201912u,
  202554u,
  202380u,
  202186u,
  201636u,
  201346u,
  202544u,
  201102u
 };

static const PtrLen<const UType> JTable_8_13_32[]=
 {
  Range(JSum_8_13_32_1),
  Range(JSum_8_13_32_2),
  Range(JSum_8_13_32_3),
  Range(JSum_8_13_32_4),
  Range(JSum_8_13_32_5),
  Range(JSum_8_13_32_6),
  Range(JSum_8_13_32_7),
  Range(JSum_8_13_32_8),
  Range(JSum_8_13_32_9),
  Range(JSum_8_13_32_10),
  Range(JSum_8_13_32_11)
 };

static const UType JSum_8_13_33_1[]=
 {
  222484u,
  223669u,
  222110u,
  222270u,
  223222u,
  223356u,
  223044u,
  223388u,
  222938u,
  222874u,
  222698u,
  222364u,
  222892u
 };

static const UType JSum_8_13_33_2[]=
 {
  223558u,
  223504u,
  222658u,
  222941u,
  222748u,
  222950u,
  223472u,
  222504u,
  222684u,
  221932u,
  223230u,
  222554u,
  222574u
 };

static const UType JSum_8_13_33_3[]=
 {
  222245u,
  223480u,
  223198u,
  223480u,
  222418u,
  223198u,
  223198u,
  222592u,
  222592u,
  223480u,
  222418u,
  222592u,
  222418u
 };

static const UType JSum_8_13_33_4[]=
 {
  223558u,
  223230u,
  222504u,
  222748u,
  223504u,
  222554u,
  222684u,
  222950u,
  222658u,
  222574u,
  221932u,
  223472u,
  222941u
 };

static const UType JSum_8_13_33_5[]=
 {
  223558u,
  222658u,
  222748u,
  223472u,
  222684u,
  223230u,
  222574u,
  223504u,
  222941u,
  222950u,
  222504u,
  221932u,
  222554u
 };

static const UType JSum_8_13_33_6[]=
 {
  222484u,
  222364u,
  222874u,
  223388u,
  223356u,
  222270u,
  223669u,
  222892u,
  222698u,
  222938u,
  223044u,
  223222u,
  222110u
 };

static const UType JSum_8_13_33_7[]=
 {
  223558u,
  222658u,
  222748u,
  223472u,
  222684u,
  223230u,
  222574u,
  223504u,
  222941u,
  222950u,
  222504u,
  221932u,
  222554u
 };

static const UType JSum_8_13_33_8[]=
 {
  223558u,
  223230u,
  222504u,
  222748u,
  223504u,
  222554u,
  222684u,
  222950u,
  222658u,
  222574u,
  221932u,
  223472u,
  222941u
 };

static const UType JSum_8_13_33_9[]=
 {
  222245u,
  223480u,
  223198u,
  223480u,
  222418u,
  223198u,
  223198u,
  222592u,
  222592u,
  223480u,
  222418u,
  222592u,
  222418u
 };

static const UType JSum_8_13_33_10[]=
 {
  223558u,
  223504u,
  222658u,
  222941u,
  222748u,
  222950u,
  223472u,
  222504u,
  222684u,
  221932u,
  223230u,
  222554u,
  222574u
 };

static const UType JSum_8_13_33_11[]=
 {
  222484u,
  223669u,
  222110u,
  222270u,
  223222u,
  223356u,
  223044u,
  223388u,
  222938u,
  222874u,
  222698u,
  222364u,
  222892u
 };

static const PtrLen<const UType> JTable_8_13_33[]=
 {
  Range(JSum_8_13_33_1),
  Range(JSum_8_13_33_2),
  Range(JSum_8_13_33_3),
  Range(JSum_8_13_33_4),
  Range(JSum_8_13_33_5),
  Range(JSum_8_13_33_6),
  Range(JSum_8_13_33_7),
  Range(JSum_8_13_33_8),
  Range(JSum_8_13_33_9),
  Range(JSum_8_13_33_10),
  Range(JSum_8_13_33_11)
 };

static const UType JSum_8_13_34_1[]=
 {
  248612u,
  248556u,
  248504u,
  248800u,
  249360u,
  248432u,
  248490u,
  248830u,
  249634u,
  249086u,
  248102u,
  249042u,
  247781u
 };

static const UType JSum_8_13_34_2[]=
 {
  248536u,
  248535u,
  248027u,
  249391u,
  248529u,
  248371u,
  247984u,
  249117u,
  249181u,
  248929u,
  248882u,
  249506u,
  248241u
 };

static const UType JSum_8_13_34_3[]=
 {
  249396u,
  249361u,
  248733u,
  249361u,
  248204u,
  248733u,
  248733u,
  248313u,
  248313u,
  249361u,
  248204u,
  248313u,
  248204u
 };

static const UType JSum_8_13_34_4[]=
 {
  248536u,
  248882u,
  249117u,
  248529u,
  248535u,
  249506u,
  249181u,
  248371u,
  248027u,
  248241u,
  248929u,
  247984u,
  249391u
 };

static const UType JSum_8_13_34_5[]=
 {
  248536u,
  248027u,
  248529u,
  247984u,
  249181u,
  248882u,
  248241u,
  248535u,
  249391u,
  248371u,
  249117u,
  248929u,
  249506u
 };

static const UType JSum_8_13_34_6[]=
 {
  248612u,
  249042u,
  249086u,
  248830u,
  248432u,
  248800u,
  248556u,
  247781u,
  248102u,
  249634u,
  248490u,
  249360u,
  248504u
 };

static const UType JSum_8_13_34_7[]=
 {
  248536u,
  248027u,
  248529u,
  247984u,
  249181u,
  248882u,
  248241u,
  248535u,
  249391u,
  248371u,
  249117u,
  248929u,
  249506u
 };

static const UType JSum_8_13_34_8[]=
 {
  248536u,
  248882u,
  249117u,
  248529u,
  248535u,
  249506u,
  249181u,
  248371u,
  248027u,
  248241u,
  248929u,
  247984u,
  249391u
 };

static const UType JSum_8_13_34_9[]=
 {
  249396u,
  249361u,
  248733u,
  249361u,
  248204u,
  248733u,
  248733u,
  248313u,
  248313u,
  249361u,
  248204u,
  248313u,
  248204u
 };

static const UType JSum_8_13_34_10[]=
 {
  248536u,
  248535u,
  248027u,
  249391u,
  248529u,
  248371u,
  247984u,
  249117u,
  249181u,
  248929u,
  248882u,
  249506u,
  248241u
 };

static const UType JSum_8_13_34_11[]=
 {
  248612u,
  248556u,
  248504u,
  248800u,
  249360u,
  248432u,
  248490u,
  248830u,
  249634u,
  249086u,
  248102u,
  249042u,
  247781u
 };

static const PtrLen<const UType> JTable_8_13_34[]=
 {
  Range(JSum_8_13_34_1),
  Range(JSum_8_13_34_2),
  Range(JSum_8_13_34_3),
  Range(JSum_8_13_34_4),
  Range(JSum_8_13_34_5),
  Range(JSum_8_13_34_6),
  Range(JSum_8_13_34_7),
  Range(JSum_8_13_34_8),
  Range(JSum_8_13_34_9),
  Range(JSum_8_13_34_10),
  Range(JSum_8_13_34_11)
 };

static const UType JSum_8_13_35_1[]=
 {
  1011086u,
  1008002u,
  1009524u,
  1009114u,
  1010266u,
  1009272u,
  1009661u,
  1011330u,
  1009796u,
  1009316u,
  1008802u,
  1007984u,
  1008956u
 };

static const UType JSum_8_13_35_2[]=
 {
  1008320u,
  1009472u,
  1010438u,
  1009454u,
  1009672u,
  1010885u,
  1008950u,
  1010448u,
  1007948u,
  1008438u,
  1008286u,
  1010206u,
  1010592u
 };

static const UType JSum_8_13_35_3[]=
 {
  1008797u,
  1010754u,
  1010182u,
  1010754u,
  1008300u,
  1010182u,
  1010182u,
  1008868u,
  1008868u,
  1010754u,
  1008300u,
  1008868u,
  1008300u
 };

static const UType JSum_8_13_35_4[]=
 {
  1008320u,
  1008286u,
  1010448u,
  1009672u,
  1009472u,
  1010206u,
  1007948u,
  1010885u,
  1010438u,
  1010592u,
  1008438u,
  1008950u,
  1009454u
 };

static const UType JSum_8_13_35_5[]=
 {
  1008320u,
  1010438u,
  1009672u,
  1008950u,
  1007948u,
  1008286u,
  1010592u,
  1009472u,
  1009454u,
  1010885u,
  1010448u,
  1008438u,
  1010206u
 };

static const UType JSum_8_13_35_6[]=
 {
  1011086u,
  1007984u,
  1009316u,
  1011330u,
  1009272u,
  1009114u,
  1008002u,
  1008956u,
  1008802u,
  1009796u,
  1009661u,
  1010266u,
  1009524u
 };

static const UType JSum_8_13_35_7[]=
 {
  1008320u,
  1010438u,
  1009672u,
  1008950u,
  1007948u,
  1008286u,
  1010592u,
  1009472u,
  1009454u,
  1010885u,
  1010448u,
  1008438u,
  1010206u
 };

static const UType JSum_8_13_35_8[]=
 {
  1008320u,
  1008286u,
  1010448u,
  1009672u,
  1009472u,
  1010206u,
  1007948u,
  1010885u,
  1010438u,
  1010592u,
  1008438u,
  1008950u,
  1009454u
 };

static const UType JSum_8_13_35_9[]=
 {
  1008797u,
  1010754u,
  1010182u,
  1010754u,
  1008300u,
  1010182u,
  1010182u,
  1008868u,
  1008868u,
  1010754u,
  1008300u,
  1008868u,
  1008300u
 };

static const UType JSum_8_13_35_10[]=
 {
  1008320u,
  1009472u,
  1010438u,
  1009454u,
  1009672u,
  1010885u,
  1008950u,
  1010448u,
  1007948u,
  1008438u,
  1008286u,
  1010206u,
  1010592u
 };

static const UType JSum_8_13_35_11[]=
 {
  1011086u,
  1008002u,
  1009524u,
  1009114u,
  1010266u,
  1009272u,
  1009661u,
  1011330u,
  1009796u,
  1009316u,
  1008802u,
  1007984u,
  1008956u
 };

static const PtrLen<const UType> JTable_8_13_35[]=
 {
  Range(JSum_8_13_35_1),
  Range(JSum_8_13_35_2),
  Range(JSum_8_13_35_3),
  Range(JSum_8_13_35_4),
  Range(JSum_8_13_35_5),
  Range(JSum_8_13_35_6),
  Range(JSum_8_13_35_7),
  Range(JSum_8_13_35_8),
  Range(JSum_8_13_35_9),
  Range(JSum_8_13_35_10),
  Range(JSum_8_13_35_11)
 };

static const TestSet::JTable JSet_8_13[]=
 {
  { 79u , Range(JTable_8_13_1) },
  { 131u , Range(JTable_8_13_2) },
  { 443u , Range(JTable_8_13_3) },
  { 547u , Range(JTable_8_13_4) },
  { 599u , Range(JTable_8_13_5) },
  { 859u , Range(JTable_8_13_6) },
  { 911u , Range(JTable_8_13_7) },
  { 1327u , Range(JTable_8_13_8) },
  { 1483u , Range(JTable_8_13_9) },
  { 2003u , Range(JTable_8_13_10) },
  { 2731u , Range(JTable_8_13_11) },
  { 6007u , Range(JTable_8_13_12) },
  { 7411u , Range(JTable_8_13_13) },
  { 8971u , Range(JTable_8_13_14) },
  { 9283u , Range(JTable_8_13_15) },
  { 17291u , Range(JTable_8_13_16) },
  { 38039u , Range(JTable_8_13_17) },
  { 46411u , Range(JTable_8_13_18) },
  { 51871u , Range(JTable_8_13_19) },
  { 58787u , Range(JTable_8_13_20) },
  { 62791u , Range(JTable_8_13_21) },
  { 72931u , Range(JTable_8_13_22) },
  { 102103u , Range(JTable_8_13_23) },
  { 111827u , Range(JTable_8_13_24) },
  { 138139u , Range(JTable_8_13_25) },
  { 355811u , Range(JTable_8_13_26) },
  { 461891u , Range(JTable_8_13_27) },
  { 782783u , Range(JTable_8_13_28) },
  { 1193011u , Range(JTable_8_13_29) },
  { 1939939u , Range(JTable_8_13_30) },
  { 2348347u , Range(JTable_8_13_31) },
  { 2624623u , Range(JTable_8_13_32) },
  { 2897311u , Range(JTable_8_13_33) },
  { 3233231u , Range(JTable_8_13_34) },
  { 13123111u , Range(JTable_8_13_35) }
 };

static const UType JSum_8_17_1_1[]=
 {
  8u,
  8u,
  6u,
  6u,
  8u,
  10u,
  4u,
  2u,
  8u,
  0u,
  6u,
  6u,
  8u,
  6u,
  5u,
  4u,
  6u
 };

static const UType JSum_8_17_1_2[]=
 {
  9u,
  8u,
  2u,
  9u,
  7u,
  8u,
  3u,
  2u,
  3u,
  6u,
  6u,
  8u,
  5u,
  7u,
  7u,
  8u,
  3u
 };

static const UType JSum_8_17_1_3[]=
 {
  7u,
  6u,
  3u,
  6u,
  3u,
  5u,
  6u,
  12u,
  3u,
  7u,
  10u,
  7u,
  7u,
  3u,
  4u,
  6u,
  6u
 };

static const UType JSum_8_17_1_4[]=
 {
  7u,
  3u,
  7u,
  5u,
  6u,
  4u,
  10u,
  6u,
  3u,
  6u,
  7u,
  12u,
  6u,
  6u,
  7u,
  3u,
  3u
 };

static const UType JSum_8_17_1_5[]=
 {
  9u,
  7u,
  8u,
  3u,
  8u,
  2u,
  3u,
  7u,
  6u,
  2u,
  7u,
  8u,
  8u,
  5u,
  6u,
  3u,
  9u
 };

static const UType JSum_8_17_1_6[]=
 {
  7u,
  6u,
  6u,
  7u,
  7u,
  6u,
  6u,
  3u,
  12u,
  10u,
  3u,
  6u,
  3u,
  5u,
  3u,
  7u,
  4u
 };

static const UType JSum_8_17_1_7[]=
 {
  9u,
  2u,
  7u,
  3u,
  3u,
  6u,
  5u,
  7u,
  3u,
  8u,
  9u,
  8u,
  2u,
  6u,
  8u,
  7u,
  8u
 };

static const UType JSum_8_17_1_8[]=
 {
  8u,
  4u,
  6u,
  6u,
  0u,
  2u,
  10u,
  6u,
  8u,
  6u,
  5u,
  8u,
  6u,
  8u,
  4u,
  8u,
  6u
 };

static const UType JSum_8_17_1_9[]=
 {
  9u,
  2u,
  7u,
  3u,
  3u,
  6u,
  5u,
  7u,
  3u,
  8u,
  9u,
  8u,
  2u,
  6u,
  8u,
  7u,
  8u
 };

static const UType JSum_8_17_1_10[]=
 {
  7u,
  6u,
  6u,
  7u,
  7u,
  6u,
  6u,
  3u,
  12u,
  10u,
  3u,
  6u,
  3u,
  5u,
  3u,
  7u,
  4u
 };

static const UType JSum_8_17_1_11[]=
 {
  9u,
  7u,
  8u,
  3u,
  8u,
  2u,
  3u,
  7u,
  6u,
  2u,
  7u,
  8u,
  8u,
  5u,
  6u,
  3u,
  9u
 };

static const UType JSum_8_17_1_12[]=
 {
  7u,
  3u,
  7u,
  5u,
  6u,
  4u,
  10u,
  6u,
  3u,
  6u,
  7u,
  12u,
  6u,
  6u,
  7u,
  3u,
  3u
 };

static const UType JSum_8_17_1_13[]=
 {
  7u,
  6u,
  3u,
  6u,
  3u,
  5u,
  6u,
  12u,
  3u,
  7u,
  10u,
  7u,
  7u,
  3u,
  4u,
  6u,
  6u
 };

static const UType JSum_8_17_1_14[]=
 {
  9u,
  8u,
  2u,
  9u,
  7u,
  8u,
  3u,
  2u,
  3u,
  6u,
  6u,
  8u,
  5u,
  7u,
  7u,
  8u,
  3u
 };

static const UType JSum_8_17_1_15[]=
 {
  8u,
  8u,
  6u,
  6u,
  8u,
  10u,
  4u,
  2u,
  8u,
  0u,
  6u,
  6u,
  8u,
  6u,
  5u,
  4u,
  6u
 };

static const PtrLen<const UType> JTable_8_17_1[]=
 {
  Range(JSum_8_17_1_1),
  Range(JSum_8_17_1_2),
  Range(JSum_8_17_1_3),
  Range(JSum_8_17_1_4),
  Range(JSum_8_17_1_5),
  Range(JSum_8_17_1_6),
  Range(JSum_8_17_1_7),
  Range(JSum_8_17_1_8),
  Range(JSum_8_17_1_9),
  Range(JSum_8_17_1_10),
  Range(JSum_8_17_1_11),
  Range(JSum_8_17_1_12),
  Range(JSum_8_17_1_13),
  Range(JSum_8_17_1_14),
  Range(JSum_8_17_1_15)
 };

static const UType JSum_8_17_2_1[]=
 {
  16u,
  10u,
  16u,
  14u,
  21u,
  16u,
  14u,
  12u,
  10u,
  12u,
  10u,
  12u,
  20u,
  10u,
  10u,
  20u,
  14u
 };

static const UType JSum_8_17_2_2[]=
 {
  13u,
  13u,
  11u,
  14u,
  13u,
  9u,
  14u,
  12u,
  17u,
  15u,
  10u,
  17u,
  12u,
  13u,
  14u,
  26u,
  14u
 };

static const UType JSum_8_17_2_3[]=
 {
  12u,
  13u,
  16u,
  9u,
  21u,
  12u,
  8u,
  11u,
  15u,
  12u,
  15u,
  13u,
  15u,
  18u,
  22u,
  12u,
  13u
 };

static const UType JSum_8_17_2_4[]=
 {
  12u,
  18u,
  12u,
  12u,
  13u,
  22u,
  15u,
  8u,
  16u,
  12u,
  13u,
  11u,
  9u,
  13u,
  15u,
  15u,
  21u
 };

static const UType JSum_8_17_2_5[]=
 {
  13u,
  14u,
  17u,
  17u,
  9u,
  11u,
  14u,
  13u,
  10u,
  12u,
  13u,
  13u,
  26u,
  12u,
  15u,
  14u,
  14u
 };

static const UType JSum_8_17_2_6[]=
 {
  12u,
  9u,
  8u,
  12u,
  15u,
  12u,
  13u,
  21u,
  11u,
  15u,
  18u,
  13u,
  16u,
  12u,
  15u,
  13u,
  22u
 };

static const UType JSum_8_17_2_7[]=
 {
  13u,
  11u,
  13u,
  14u,
  17u,
  10u,
  12u,
  14u,
  14u,
  13u,
  14u,
  9u,
  12u,
  15u,
  17u,
  13u,
  26u
 };

static const UType JSum_8_17_2_8[]=
 {
  16u,
  20u,
  10u,
  12u,
  12u,
  12u,
  16u,
  14u,
  10u,
  14u,
  10u,
  20u,
  10u,
  10u,
  14u,
  21u,
  16u
 };

static const UType JSum_8_17_2_9[]=
 {
  13u,
  11u,
  13u,
  14u,
  17u,
  10u,
  12u,
  14u,
  14u,
  13u,
  14u,
  9u,
  12u,
  15u,
  17u,
  13u,
  26u
 };

static const UType JSum_8_17_2_10[]=
 {
  12u,
  9u,
  8u,
  12u,
  15u,
  12u,
  13u,
  21u,
  11u,
  15u,
  18u,
  13u,
  16u,
  12u,
  15u,
  13u,
  22u
 };

static const UType JSum_8_17_2_11[]=
 {
  13u,
  14u,
  17u,
  17u,
  9u,
  11u,
  14u,
  13u,
  10u,
  12u,
  13u,
  13u,
  26u,
  12u,
  15u,
  14u,
  14u
 };

static const UType JSum_8_17_2_12[]=
 {
  12u,
  18u,
  12u,
  12u,
  13u,
  22u,
  15u,
  8u,
  16u,
  12u,
  13u,
  11u,
  9u,
  13u,
  15u,
  15u,
  21u
 };

static const UType JSum_8_17_2_13[]=
 {
  12u,
  13u,
  16u,
  9u,
  21u,
  12u,
  8u,
  11u,
  15u,
  12u,
  15u,
  13u,
  15u,
  18u,
  22u,
  12u,
  13u
 };

static const UType JSum_8_17_2_14[]=
 {
  13u,
  13u,
  11u,
  14u,
  13u,
  9u,
  14u,
  12u,
  17u,
  15u,
  10u,
  17u,
  12u,
  13u,
  14u,
  26u,
  14u
 };

static const UType JSum_8_17_2_15[]=
 {
  16u,
  10u,
  16u,
  14u,
  21u,
  16u,
  14u,
  12u,
  10u,
  12u,
  10u,
  12u,
  20u,
  10u,
  10u,
  20u,
  14u
 };

static const PtrLen<const UType> JTable_8_17_2[]=
 {
  Range(JSum_8_17_2_1),
  Range(JSum_8_17_2_2),
  Range(JSum_8_17_2_3),
  Range(JSum_8_17_2_4),
  Range(JSum_8_17_2_5),
  Range(JSum_8_17_2_6),
  Range(JSum_8_17_2_7),
  Range(JSum_8_17_2_8),
  Range(JSum_8_17_2_9),
  Range(JSum_8_17_2_10),
  Range(JSum_8_17_2_11),
  Range(JSum_8_17_2_12),
  Range(JSum_8_17_2_13),
  Range(JSum_8_17_2_14),
  Range(JSum_8_17_2_15)
 };

static const UType JSum_8_17_3_1[]=
 {
  22u,
  32u,
  26u,
  34u,
  28u,
  24u,
  28u,
  30u,
  22u,
  18u,
  28u,
  28u,
  26u,
  28u,
  18u,
  17u,
  32u
 };

static const UType JSum_8_17_3_2[]=
 {
  31u,
  30u,
  26u,
  31u,
  26u,
  20u,
  27u,
  38u,
  21u,
  29u,
  21u,
  29u,
  26u,
  19u,
  22u,
  20u,
  25u
 };

static const UType JSum_8_17_3_3[]=
 {
  19u,
  29u,
  35u,
  21u,
  30u,
  21u,
  30u,
  30u,
  29u,
  30u,
  22u,
  23u,
  19u,
  22u,
  22u,
  33u,
  26u
 };

static const UType JSum_8_17_3_4[]=
 {
  19u,
  22u,
  30u,
  21u,
  29u,
  22u,
  22u,
  30u,
  35u,
  33u,
  23u,
  30u,
  21u,
  26u,
  19u,
  29u,
  30u
 };

static const UType JSum_8_17_3_5[]=
 {
  31u,
  22u,
  29u,
  21u,
  20u,
  26u,
  25u,
  19u,
  21u,
  38u,
  26u,
  30u,
  20u,
  26u,
  29u,
  27u,
  31u
 };

static const UType JSum_8_17_3_6[]=
 {
  19u,
  21u,
  30u,
  30u,
  19u,
  33u,
  29u,
  30u,
  30u,
  22u,
  22u,
  26u,
  35u,
  21u,
  29u,
  23u,
  22u
 };

static const UType JSum_8_17_3_7[]=
 {
  31u,
  26u,
  26u,
  27u,
  21u,
  21u,
  26u,
  22u,
  25u,
  30u,
  31u,
  20u,
  38u,
  29u,
  29u,
  19u,
  20u
 };

static const UType JSum_8_17_3_8[]=
 {
  22u,
  17u,
  28u,
  28u,
  18u,
  30u,
  24u,
  34u,
  32u,
  32u,
  18u,
  26u,
  28u,
  22u,
  28u,
  28u,
  26u
 };

static const UType JSum_8_17_3_9[]=
 {
  31u,
  26u,
  26u,
  27u,
  21u,
  21u,
  26u,
  22u,
  25u,
  30u,
  31u,
  20u,
  38u,
  29u,
  29u,
  19u,
  20u
 };

static const UType JSum_8_17_3_10[]=
 {
  19u,
  21u,
  30u,
  30u,
  19u,
  33u,
  29u,
  30u,
  30u,
  22u,
  22u,
  26u,
  35u,
  21u,
  29u,
  23u,
  22u
 };

static const UType JSum_8_17_3_11[]=
 {
  31u,
  22u,
  29u,
  21u,
  20u,
  26u,
  25u,
  19u,
  21u,
  38u,
  26u,
  30u,
  20u,
  26u,
  29u,
  27u,
  31u
 };

static const UType JSum_8_17_3_12[]=
 {
  19u,
  22u,
  30u,
  21u,
  29u,
  22u,
  22u,
  30u,
  35u,
  33u,
  23u,
  30u,
  21u,
  26u,
  19u,
  29u,
  30u
 };

static const UType JSum_8_17_3_13[]=
 {
  19u,
  29u,
  35u,
  21u,
  30u,
  21u,
  30u,
  30u,
  29u,
  30u,
  22u,
  23u,
  19u,
  22u,
  22u,
  33u,
  26u
 };

static const UType JSum_8_17_3_14[]=
 {
  31u,
  30u,
  26u,
  31u,
  26u,
  20u,
  27u,
  38u,
  21u,
  29u,
  21u,
  29u,
  26u,
  19u,
  22u,
  20u,
  25u
 };

static const UType JSum_8_17_3_15[]=
 {
  22u,
  32u,
  26u,
  34u,
  28u,
  24u,
  28u,
  30u,
  22u,
  18u,
  28u,
  28u,
  26u,
  28u,
  18u,
  17u,
  32u
 };

static const PtrLen<const UType> JTable_8_17_3[]=
 {
  Range(JSum_8_17_3_1),
  Range(JSum_8_17_3_2),
  Range(JSum_8_17_3_3),
  Range(JSum_8_17_3_4),
  Range(JSum_8_17_3_5),
  Range(JSum_8_17_3_6),
  Range(JSum_8_17_3_7),
  Range(JSum_8_17_3_8),
  Range(JSum_8_17_3_9),
  Range(JSum_8_17_3_10),
  Range(JSum_8_17_3_11),
  Range(JSum_8_17_3_12),
  Range(JSum_8_17_3_13),
  Range(JSum_8_17_3_14),
  Range(JSum_8_17_3_15)
 };

static const UType JSum_8_17_4_1[]=
 {
  40u,
  30u,
  42u,
  34u,
  44u,
  46u,
  46u,
  37u,
  36u,
  36u,
  34u,
  40u,
  36u,
  24u,
  42u,
  46u,
  32u
 };

static const UType JSum_8_17_4_2[]=
 {
  47u,
  38u,
  44u,
  31u,
  41u,
  30u,
  42u,
  41u,
  34u,
  38u,
  33u,
  30u,
  45u,
  35u,
  29u,
  39u,
  48u
 };

static const UType JSum_8_17_4_3[]=
 {
  39u,
  39u,
  38u,
  44u,
  37u,
  26u,
  41u,
  29u,
  33u,
  35u,
  50u,
  37u,
  40u,
  36u,
  31u,
  46u,
  44u
 };

static const UType JSum_8_17_4_4[]=
 {
  39u,
  36u,
  35u,
  26u,
  39u,
  31u,
  50u,
  41u,
  38u,
  46u,
  37u,
  29u,
  44u,
  44u,
  40u,
  33u,
  37u
 };

static const UType JSum_8_17_4_5[]=
 {
  47u,
  29u,
  30u,
  34u,
  30u,
  44u,
  48u,
  35u,
  33u,
  41u,
  41u,
  38u,
  39u,
  45u,
  38u,
  42u,
  31u
 };

static const UType JSum_8_17_4_6[]=
 {
  39u,
  44u,
  41u,
  35u,
  40u,
  46u,
  39u,
  37u,
  29u,
  50u,
  36u,
  44u,
  38u,
  26u,
  33u,
  37u,
  31u
 };

static const UType JSum_8_17_4_7[]=
 {
  47u,
  44u,
  41u,
  42u,
  34u,
  33u,
  45u,
  29u,
  48u,
  38u,
  31u,
  30u,
  41u,
  38u,
  30u,
  35u,
  39u
 };

static const UType JSum_8_17_4_8[]=
 {
  40u,
  46u,
  24u,
  40u,
  36u,
  37u,
  46u,
  34u,
  30u,
  32u,
  42u,
  36u,
  34u,
  36u,
  46u,
  44u,
  42u
 };

static const UType JSum_8_17_4_9[]=
 {
  47u,
  44u,
  41u,
  42u,
  34u,
  33u,
  45u,
  29u,
  48u,
  38u,
  31u,
  30u,
  41u,
  38u,
  30u,
  35u,
  39u
 };

static const UType JSum_8_17_4_10[]=
 {
  39u,
  44u,
  41u,
  35u,
  40u,
  46u,
  39u,
  37u,
  29u,
  50u,
  36u,
  44u,
  38u,
  26u,
  33u,
  37u,
  31u
 };

static const UType JSum_8_17_4_11[]=
 {
  47u,
  29u,
  30u,
  34u,
  30u,
  44u,
  48u,
  35u,
  33u,
  41u,
  41u,
  38u,
  39u,
  45u,
  38u,
  42u,
  31u
 };

static const UType JSum_8_17_4_12[]=
 {
  39u,
  36u,
  35u,
  26u,
  39u,
  31u,
  50u,
  41u,
  38u,
  46u,
  37u,
  29u,
  44u,
  44u,
  40u,
  33u,
  37u
 };

static const UType JSum_8_17_4_13[]=
 {
  39u,
  39u,
  38u,
  44u,
  37u,
  26u,
  41u,
  29u,
  33u,
  35u,
  50u,
  37u,
  40u,
  36u,
  31u,
  46u,
  44u
 };

static const UType JSum_8_17_4_14[]=
 {
  47u,
  38u,
  44u,
  31u,
  41u,
  30u,
  42u,
  41u,
  34u,
  38u,
  33u,
  30u,
  45u,
  35u,
  29u,
  39u,
  48u
 };

static const UType JSum_8_17_4_15[]=
 {
  40u,
  30u,
  42u,
  34u,
  44u,
  46u,
  46u,
  37u,
  36u,
  36u,
  34u,
  40u,
  36u,
  24u,
  42u,
  46u,
  32u
 };

static const PtrLen<const UType> JTable_8_17_4[]=
 {
  Range(JSum_8_17_4_1),
  Range(JSum_8_17_4_2),
  Range(JSum_8_17_4_3),
  Range(JSum_8_17_4_4),
  Range(JSum_8_17_4_5),
  Range(JSum_8_17_4_6),
  Range(JSum_8_17_4_7),
  Range(JSum_8_17_4_8),
  Range(JSum_8_17_4_9),
  Range(JSum_8_17_4_10),
  Range(JSum_8_17_4_11),
  Range(JSum_8_17_4_12),
  Range(JSum_8_17_4_13),
  Range(JSum_8_17_4_14),
  Range(JSum_8_17_4_15)
 };

static const UType JSum_8_17_5_1[]=
 {
  64u,
  76u,
  68u,
  84u,
  72u,
  56u,
  62u,
  68u,
  66u,
  62u,
  54u,
  74u,
  62u,
  66u,
  60u,
  73u,
  54u
 };

static const UType JSum_8_17_5_2[]=
 {
  60u,
  72u,
  62u,
  61u,
  67u,
  60u,
  58u,
  75u,
  66u,
  77u,
  83u,
  60u,
  65u,
  54u,
  77u,
  65u,
  59u
 };

static const UType JSum_8_17_5_3[]=
 {
  68u,
  69u,
  69u,
  64u,
  45u,
  70u,
  64u,
  71u,
  61u,
  56u,
  74u,
  62u,
  69u,
  65u,
  61u,
  70u,
  83u
 };

static const UType JSum_8_17_5_4[]=
 {
  68u,
  65u,
  56u,
  70u,
  69u,
  61u,
  74u,
  64u,
  69u,
  70u,
  62u,
  71u,
  64u,
  83u,
  69u,
  61u,
  45u
 };

static const UType JSum_8_17_5_5[]=
 {
  60u,
  77u,
  60u,
  66u,
  60u,
  62u,
  59u,
  54u,
  83u,
  75u,
  67u,
  72u,
  65u,
  65u,
  77u,
  58u,
  61u
 };

static const UType JSum_8_17_5_6[]=
 {
  68u,
  64u,
  64u,
  56u,
  69u,
  70u,
  69u,
  45u,
  71u,
  74u,
  65u,
  83u,
  69u,
  70u,
  61u,
  62u,
  61u
 };

static const UType JSum_8_17_5_7[]=
 {
  60u,
  62u,
  67u,
  58u,
  66u,
  83u,
  65u,
  77u,
  59u,
  72u,
  61u,
  60u,
  75u,
  77u,
  60u,
  54u,
  65u
 };

static const UType JSum_8_17_5_8[]=
 {
  64u,
  73u,
  66u,
  74u,
  62u,
  68u,
  56u,
  84u,
  76u,
  54u,
  60u,
  62u,
  54u,
  66u,
  62u,
  72u,
  68u
 };

static const UType JSum_8_17_5_9[]=
 {
  60u,
  62u,
  67u,
  58u,
  66u,
  83u,
  65u,
  77u,
  59u,
  72u,
  61u,
  60u,
  75u,
  77u,
  60u,
  54u,
  65u
 };

static const UType JSum_8_17_5_10[]=
 {
  68u,
  64u,
  64u,
  56u,
  69u,
  70u,
  69u,
  45u,
  71u,
  74u,
  65u,
  83u,
  69u,
  70u,
  61u,
  62u,
  61u
 };

static const UType JSum_8_17_5_11[]=
 {
  60u,
  77u,
  60u,
  66u,
  60u,
  62u,
  59u,
  54u,
  83u,
  75u,
  67u,
  72u,
  65u,
  65u,
  77u,
  58u,
  61u
 };

static const UType JSum_8_17_5_12[]=
 {
  68u,
  65u,
  56u,
  70u,
  69u,
  61u,
  74u,
  64u,
  69u,
  70u,
  62u,
  71u,
  64u,
  83u,
  69u,
  61u,
  45u
 };

static const UType JSum_8_17_5_13[]=
 {
  68u,
  69u,
  69u,
  64u,
  45u,
  70u,
  64u,
  71u,
  61u,
  56u,
  74u,
  62u,
  69u,
  65u,
  61u,
  70u,
  83u
 };

static const UType JSum_8_17_5_14[]=
 {
  60u,
  72u,
  62u,
  61u,
  67u,
  60u,
  58u,
  75u,
  66u,
  77u,
  83u,
  60u,
  65u,
  54u,
  77u,
  65u,
  59u
 };

static const UType JSum_8_17_5_15[]=
 {
  64u,
  76u,
  68u,
  84u,
  72u,
  56u,
  62u,
  68u,
  66u,
  62u,
  54u,
  74u,
  62u,
  66u,
  60u,
  73u,
  54u
 };

static const PtrLen<const UType> JTable_8_17_5[]=
 {
  Range(JSum_8_17_5_1),
  Range(JSum_8_17_5_2),
  Range(JSum_8_17_5_3),
  Range(JSum_8_17_5_4),
  Range(JSum_8_17_5_5),
  Range(JSum_8_17_5_6),
  Range(JSum_8_17_5_7),
  Range(JSum_8_17_5_8),
  Range(JSum_8_17_5_9),
  Range(JSum_8_17_5_10),
  Range(JSum_8_17_5_11),
  Range(JSum_8_17_5_12),
  Range(JSum_8_17_5_13),
  Range(JSum_8_17_5_14),
  Range(JSum_8_17_5_15)
 };

static const UType JSum_8_17_6_1[]=
 {
  72u,
  66u,
  80u,
  88u,
  74u,
  68u,
  74u,
  74u,
  72u,
  82u,
  90u,
  90u,
  80u,
  69u,
  94u,
  68u,
  84u
 };

static const UType JSum_8_17_6_2[]=
 {
  76u,
  81u,
  86u,
  81u,
  72u,
  70u,
  57u,
  89u,
  77u,
  68u,
  83u,
  88u,
  80u,
  87u,
  75u,
  87u,
  68u
 };

static const UType JSum_8_17_6_3[]=
 {
  76u,
  80u,
  85u,
  82u,
  83u,
  76u,
  86u,
  93u,
  69u,
  57u,
  84u,
  64u,
  83u,
  76u,
  83u,
  77u,
  71u
 };

static const UType JSum_8_17_6_4[]=
 {
  76u,
  76u,
  57u,
  76u,
  80u,
  83u,
  84u,
  86u,
  85u,
  77u,
  64u,
  93u,
  82u,
  71u,
  83u,
  69u,
  83u
 };

static const UType JSum_8_17_6_5[]=
 {
  76u,
  75u,
  88u,
  77u,
  70u,
  86u,
  68u,
  87u,
  83u,
  89u,
  72u,
  81u,
  87u,
  80u,
  68u,
  57u,
  81u
 };

static const UType JSum_8_17_6_6[]=
 {
  76u,
  82u,
  86u,
  57u,
  83u,
  77u,
  80u,
  83u,
  93u,
  84u,
  76u,
  71u,
  85u,
  76u,
  69u,
  64u,
  83u
 };

static const UType JSum_8_17_6_7[]=
 {
  76u,
  86u,
  72u,
  57u,
  77u,
  83u,
  80u,
  75u,
  68u,
  81u,
  81u,
  70u,
  89u,
  68u,
  88u,
  87u,
  87u
 };

static const UType JSum_8_17_6_8[]=
 {
  72u,
  68u,
  69u,
  90u,
  82u,
  74u,
  68u,
  88u,
  66u,
  84u,
  94u,
  80u,
  90u,
  72u,
  74u,
  74u,
  80u
 };

static const UType JSum_8_17_6_9[]=
 {
  76u,
  86u,
  72u,
  57u,
  77u,
  83u,
  80u,
  75u,
  68u,
  81u,
  81u,
  70u,
  89u,
  68u,
  88u,
  87u,
  87u
 };

static const UType JSum_8_17_6_10[]=
 {
  76u,
  82u,
  86u,
  57u,
  83u,
  77u,
  80u,
  83u,
  93u,
  84u,
  76u,
  71u,
  85u,
  76u,
  69u,
  64u,
  83u
 };

static const UType JSum_8_17_6_11[]=
 {
  76u,
  75u,
  88u,
  77u,
  70u,
  86u,
  68u,
  87u,
  83u,
  89u,
  72u,
  81u,
  87u,
  80u,
  68u,
  57u,
  81u
 };

static const UType JSum_8_17_6_12[]=
 {
  76u,
  76u,
  57u,
  76u,
  80u,
  83u,
  84u,
  86u,
  85u,
  77u,
  64u,
  93u,
  82u,
  71u,
  83u,
  69u,
  83u
 };

static const UType JSum_8_17_6_13[]=
 {
  76u,
  80u,
  85u,
  82u,
  83u,
  76u,
  86u,
  93u,
  69u,
  57u,
  84u,
  64u,
  83u,
  76u,
  83u,
  77u,
  71u
 };

static const UType JSum_8_17_6_14[]=
 {
  76u,
  81u,
  86u,
  81u,
  72u,
  70u,
  57u,
  89u,
  77u,
  68u,
  83u,
  88u,
  80u,
  87u,
  75u,
  87u,
  68u
 };

static const UType JSum_8_17_6_15[]=
 {
  72u,
  66u,
  80u,
  88u,
  74u,
  68u,
  74u,
  74u,
  72u,
  82u,
  90u,
  90u,
  80u,
  69u,
  94u,
  68u,
  84u
 };

static const PtrLen<const UType> JTable_8_17_6[]=
 {
  Range(JSum_8_17_6_1),
  Range(JSum_8_17_6_2),
  Range(JSum_8_17_6_3),
  Range(JSum_8_17_6_4),
  Range(JSum_8_17_6_5),
  Range(JSum_8_17_6_6),
  Range(JSum_8_17_6_7),
  Range(JSum_8_17_6_8),
  Range(JSum_8_17_6_9),
  Range(JSum_8_17_6_10),
  Range(JSum_8_17_6_11),
  Range(JSum_8_17_6_12),
  Range(JSum_8_17_6_13),
  Range(JSum_8_17_6_14),
  Range(JSum_8_17_6_15)
 };

static const UType JSum_8_17_7_1[]=
 {
  118u,
  104u,
  124u,
  116u,
  110u,
  88u,
  106u,
  108u,
  94u,
  116u,
  114u,
  116u,
  110u,
  110u,
  126u,
  116u,
  93u
 };

static const UType JSum_8_17_7_2[]=
 {
  106u,
  126u,
  103u,
  128u,
  96u,
  101u,
  119u,
  121u,
  121u,
  110u,
  115u,
  110u,
  99u,
  97u,
  114u,
  106u,
  97u
 };

static const UType JSum_8_17_7_3[]=
 {
  126u,
  107u,
  93u,
  110u,
  103u,
  106u,
  109u,
  111u,
  121u,
  97u,
  106u,
  100u,
  125u,
  116u,
  130u,
  107u,
  102u
 };

static const UType JSum_8_17_7_4[]=
 {
  126u,
  116u,
  97u,
  106u,
  107u,
  130u,
  106u,
  109u,
  93u,
  107u,
  100u,
  111u,
  110u,
  102u,
  125u,
  121u,
  103u
 };

static const UType JSum_8_17_7_5[]=
 {
  106u,
  114u,
  110u,
  121u,
  101u,
  103u,
  97u,
  97u,
  115u,
  121u,
  96u,
  126u,
  106u,
  99u,
  110u,
  119u,
  128u
 };

static const UType JSum_8_17_7_6[]=
 {
  126u,
  110u,
  109u,
  97u,
  125u,
  107u,
  107u,
  103u,
  111u,
  106u,
  116u,
  102u,
  93u,
  106u,
  121u,
  100u,
  130u
 };

static const UType JSum_8_17_7_7[]=
 {
  106u,
  103u,
  96u,
  119u,
  121u,
  115u,
  99u,
  114u,
  97u,
  126u,
  128u,
  101u,
  121u,
  110u,
  110u,
  97u,
  106u
 };

static const UType JSum_8_17_7_8[]=
 {
  118u,
  116u,
  110u,
  116u,
  116u,
  108u,
  88u,
  116u,
  104u,
  93u,
  126u,
  110u,
  114u,
  94u,
  106u,
  110u,
  124u
 };

static const UType JSum_8_17_7_9[]=
 {
  106u,
  103u,
  96u,
  119u,
  121u,
  115u,
  99u,
  114u,
  97u,
  126u,
  128u,
  101u,
  121u,
  110u,
  110u,
  97u,
  106u
 };

static const UType JSum_8_17_7_10[]=
 {
  126u,
  110u,
  109u,
  97u,
  125u,
  107u,
  107u,
  103u,
  111u,
  106u,
  116u,
  102u,
  93u,
  106u,
  121u,
  100u,
  130u
 };

static const UType JSum_8_17_7_11[]=
 {
  106u,
  114u,
  110u,
  121u,
  101u,
  103u,
  97u,
  97u,
  115u,
  121u,
  96u,
  126u,
  106u,
  99u,
  110u,
  119u,
  128u
 };

static const UType JSum_8_17_7_12[]=
 {
  126u,
  116u,
  97u,
  106u,
  107u,
  130u,
  106u,
  109u,
  93u,
  107u,
  100u,
  111u,
  110u,
  102u,
  125u,
  121u,
  103u
 };

static const UType JSum_8_17_7_13[]=
 {
  126u,
  107u,
  93u,
  110u,
  103u,
  106u,
  109u,
  111u,
  121u,
  97u,
  106u,
  100u,
  125u,
  116u,
  130u,
  107u,
  102u
 };

static const UType JSum_8_17_7_14[]=
 {
  106u,
  126u,
  103u,
  128u,
  96u,
  101u,
  119u,
  121u,
  121u,
  110u,
  115u,
  110u,
  99u,
  97u,
  114u,
  106u,
  97u
 };

static const UType JSum_8_17_7_15[]=
 {
  118u,
  104u,
  124u,
  116u,
  110u,
  88u,
  106u,
  108u,
  94u,
  116u,
  114u,
  116u,
  110u,
  110u,
  126u,
  116u,
  93u
 };

static const PtrLen<const UType> JTable_8_17_7[]=
 {
  Range(JSum_8_17_7_1),
  Range(JSum_8_17_7_2),
  Range(JSum_8_17_7_3),
  Range(JSum_8_17_7_4),
  Range(JSum_8_17_7_5),
  Range(JSum_8_17_7_6),
  Range(JSum_8_17_7_7),
  Range(JSum_8_17_7_8),
  Range(JSum_8_17_7_9),
  Range(JSum_8_17_7_10),
  Range(JSum_8_17_7_11),
  Range(JSum_8_17_7_12),
  Range(JSum_8_17_7_13),
  Range(JSum_8_17_7_14),
  Range(JSum_8_17_7_15)
 };

static const UType JSum_8_17_8_1[]=
 {
  126u,
  126u,
  130u,
  156u,
  142u,
  128u,
  126u,
  142u,
  137u,
  148u,
  136u,
  166u,
  136u,
  130u,
  152u,
  128u,
  136u
 };

static const UType JSum_8_17_8_2[]=
 {
  143u,
  139u,
  139u,
  148u,
  142u,
  121u,
  146u,
  139u,
  147u,
  131u,
  118u,
  144u,
  115u,
  132u,
  147u,
  160u,
  134u
 };

static const UType JSum_8_17_8_3[]=
 {
  139u,
  152u,
  153u,
  122u,
  132u,
  127u,
  139u,
  125u,
  140u,
  122u,
  141u,
  162u,
  141u,
  128u,
  150u,
  129u,
  143u
 };

static const UType JSum_8_17_8_4[]=
 {
  139u,
  128u,
  122u,
  127u,
  152u,
  150u,
  141u,
  139u,
  153u,
  129u,
  162u,
  125u,
  122u,
  143u,
  141u,
  140u,
  132u
 };

static const UType JSum_8_17_8_5[]=
 {
  143u,
  147u,
  144u,
  147u,
  121u,
  139u,
  134u,
  132u,
  118u,
  139u,
  142u,
  139u,
  160u,
  115u,
  131u,
  146u,
  148u
 };

static const UType JSum_8_17_8_6[]=
 {
  139u,
  122u,
  139u,
  122u,
  141u,
  129u,
  152u,
  132u,
  125u,
  141u,
  128u,
  143u,
  153u,
  127u,
  140u,
  162u,
  150u
 };

static const UType JSum_8_17_8_7[]=
 {
  143u,
  139u,
  142u,
  146u,
  147u,
  118u,
  115u,
  147u,
  134u,
  139u,
  148u,
  121u,
  139u,
  131u,
  144u,
  132u,
  160u
 };

static const UType JSum_8_17_8_8[]=
 {
  126u,
  128u,
  130u,
  166u,
  148u,
  142u,
  128u,
  156u,
  126u,
  136u,
  152u,
  136u,
  136u,
  137u,
  126u,
  142u,
  130u
 };

static const UType JSum_8_17_8_9[]=
 {
  143u,
  139u,
  142u,
  146u,
  147u,
  118u,
  115u,
  147u,
  134u,
  139u,
  148u,
  121u,
  139u,
  131u,
  144u,
  132u,
  160u
 };

static const UType JSum_8_17_8_10[]=
 {
  139u,
  122u,
  139u,
  122u,
  141u,
  129u,
  152u,
  132u,
  125u,
  141u,
  128u,
  143u,
  153u,
  127u,
  140u,
  162u,
  150u
 };

static const UType JSum_8_17_8_11[]=
 {
  143u,
  147u,
  144u,
  147u,
  121u,
  139u,
  134u,
  132u,
  118u,
  139u,
  142u,
  139u,
  160u,
  115u,
  131u,
  146u,
  148u
 };

static const UType JSum_8_17_8_12[]=
 {
  139u,
  128u,
  122u,
  127u,
  152u,
  150u,
  141u,
  139u,
  153u,
  129u,
  162u,
  125u,
  122u,
  143u,
  141u,
  140u,
  132u
 };

static const UType JSum_8_17_8_13[]=
 {
  139u,
  152u,
  153u,
  122u,
  132u,
  127u,
  139u,
  125u,
  140u,
  122u,
  141u,
  162u,
  141u,
  128u,
  150u,
  129u,
  143u
 };

static const UType JSum_8_17_8_14[]=
 {
  143u,
  139u,
  139u,
  148u,
  142u,
  121u,
  146u,
  139u,
  147u,
  131u,
  118u,
  144u,
  115u,
  132u,
  147u,
  160u,
  134u
 };

static const UType JSum_8_17_8_15[]=
 {
  126u,
  126u,
  130u,
  156u,
  142u,
  128u,
  126u,
  142u,
  137u,
  148u,
  136u,
  166u,
  136u,
  130u,
  152u,
  128u,
  136u
 };

static const PtrLen<const UType> JTable_8_17_8[]=
 {
  Range(JSum_8_17_8_1),
  Range(JSum_8_17_8_2),
  Range(JSum_8_17_8_3),
  Range(JSum_8_17_8_4),
  Range(JSum_8_17_8_5),
  Range(JSum_8_17_8_6),
  Range(JSum_8_17_8_7),
  Range(JSum_8_17_8_8),
  Range(JSum_8_17_8_9),
  Range(JSum_8_17_8_10),
  Range(JSum_8_17_8_11),
  Range(JSum_8_17_8_12),
  Range(JSum_8_17_8_13),
  Range(JSum_8_17_8_14),
  Range(JSum_8_17_8_15)
 };

static const UType JSum_8_17_9_1[]=
 {
  206u,
  202u,
  222u,
  168u,
  216u,
  210u,
  196u,
  206u,
  220u,
  226u,
  226u,
  208u,
  200u,
  204u,
  222u,
  225u,
  212u
 };

static const UType JSum_8_17_9_2[]=
 {
  198u,
  201u,
  236u,
  190u,
  220u,
  190u,
  190u,
  224u,
  232u,
  216u,
  210u,
  222u,
  222u,
  208u,
  200u,
  206u,
  204u
 };

static const UType JSum_8_17_9_3[]=
 {
  212u,
  238u,
  208u,
  206u,
  204u,
  218u,
  200u,
  212u,
  202u,
  196u,
  217u,
  230u,
  176u,
  202u,
  202u,
  220u,
  226u
 };

static const UType JSum_8_17_9_4[]=
 {
  212u,
  202u,
  196u,
  218u,
  238u,
  202u,
  217u,
  200u,
  208u,
  220u,
  230u,
  212u,
  206u,
  226u,
  176u,
  202u,
  204u
 };

static const UType JSum_8_17_9_5[]=
 {
  198u,
  200u,
  222u,
  232u,
  190u,
  236u,
  204u,
  208u,
  210u,
  224u,
  220u,
  201u,
  206u,
  222u,
  216u,
  190u,
  190u
 };

static const UType JSum_8_17_9_6[]=
 {
  212u,
  206u,
  200u,
  196u,
  176u,
  220u,
  238u,
  204u,
  212u,
  217u,
  202u,
  226u,
  208u,
  218u,
  202u,
  230u,
  202u
 };

static const UType JSum_8_17_9_7[]=
 {
  198u,
  236u,
  220u,
  190u,
  232u,
  210u,
  222u,
  200u,
  204u,
  201u,
  190u,
  190u,
  224u,
  216u,
  222u,
  208u,
  206u
 };

static const UType JSum_8_17_9_8[]=
 {
  206u,
  225u,
  204u,
  208u,
  226u,
  206u,
  210u,
  168u,
  202u,
  212u,
  222u,
  200u,
  226u,
  220u,
  196u,
  216u,
  222u
 };

static const UType JSum_8_17_9_9[]=
 {
  198u,
  236u,
  220u,
  190u,
  232u,
  210u,
  222u,
  200u,
  204u,
  201u,
  190u,
  190u,
  224u,
  216u,
  222u,
  208u,
  206u
 };

static const UType JSum_8_17_9_10[]=
 {
  212u,
  206u,
  200u,
  196u,
  176u,
  220u,
  238u,
  204u,
  212u,
  217u,
  202u,
  226u,
  208u,
  218u,
  202u,
  230u,
  202u
 };

static const UType JSum_8_17_9_11[]=
 {
  198u,
  200u,
  222u,
  232u,
  190u,
  236u,
  204u,
  208u,
  210u,
  224u,
  220u,
  201u,
  206u,
  222u,
  216u,
  190u,
  190u
 };

static const UType JSum_8_17_9_12[]=
 {
  212u,
  202u,
  196u,
  218u,
  238u,
  202u,
  217u,
  200u,
  208u,
  220u,
  230u,
  212u,
  206u,
  226u,
  176u,
  202u,
  204u
 };

static const UType JSum_8_17_9_13[]=
 {
  212u,
  238u,
  208u,
  206u,
  204u,
  218u,
  200u,
  212u,
  202u,
  196u,
  217u,
  230u,
  176u,
  202u,
  202u,
  220u,
  226u
 };

static const UType JSum_8_17_9_14[]=
 {
  198u,
  201u,
  236u,
  190u,
  220u,
  190u,
  190u,
  224u,
  232u,
  216u,
  210u,
  222u,
  222u,
  208u,
  200u,
  206u,
  204u
 };

static const UType JSum_8_17_9_15[]=
 {
  206u,
  202u,
  222u,
  168u,
  216u,
  210u,
  196u,
  206u,
  220u,
  226u,
  226u,
  208u,
  200u,
  204u,
  222u,
  225u,
  212u
 };

static const PtrLen<const UType> JTable_8_17_9[]=
 {
  Range(JSum_8_17_9_1),
  Range(JSum_8_17_9_2),
  Range(JSum_8_17_9_3),
  Range(JSum_8_17_9_4),
  Range(JSum_8_17_9_5),
  Range(JSum_8_17_9_6),
  Range(JSum_8_17_9_7),
  Range(JSum_8_17_9_8),
  Range(JSum_8_17_9_9),
  Range(JSum_8_17_9_10),
  Range(JSum_8_17_9_11),
  Range(JSum_8_17_9_12),
  Range(JSum_8_17_9_13),
  Range(JSum_8_17_9_14),
  Range(JSum_8_17_9_15)
 };

static const UType JSum_8_17_10_1[]=
 {
  224u,
  262u,
  238u,
  256u,
  222u,
  228u,
  232u,
  218u,
  236u,
  214u,
  228u,
  238u,
  213u,
  224u,
  250u,
  212u,
  214u
 };

static const UType JSum_8_17_10_2[]=
 {
  230u,
  259u,
  249u,
  209u,
  213u,
  236u,
  229u,
  238u,
  212u,
  237u,
  228u,
  206u,
  233u,
  227u,
  232u,
  218u,
  253u
 };

static const UType JSum_8_17_10_3[]=
 {
  229u,
  229u,
  214u,
  231u,
  242u,
  220u,
  261u,
  251u,
  238u,
  202u,
  229u,
  234u,
  234u,
  229u,
  216u,
  243u,
  207u
 };

static const UType JSum_8_17_10_4[]=
 {
  229u,
  229u,
  202u,
  220u,
  229u,
  216u,
  229u,
  261u,
  214u,
  243u,
  234u,
  251u,
  231u,
  207u,
  234u,
  238u,
  242u
 };

static const UType JSum_8_17_10_5[]=
 {
  230u,
  232u,
  206u,
  212u,
  236u,
  249u,
  253u,
  227u,
  228u,
  238u,
  213u,
  259u,
  218u,
  233u,
  237u,
  229u,
  209u
 };

static const UType JSum_8_17_10_6[]=
 {
  229u,
  231u,
  261u,
  202u,
  234u,
  243u,
  229u,
  242u,
  251u,
  229u,
  229u,
  207u,
  214u,
  220u,
  238u,
  234u,
  216u
 };

static const UType JSum_8_17_10_7[]=
 {
  230u,
  249u,
  213u,
  229u,
  212u,
  228u,
  233u,
  232u,
  253u,
  259u,
  209u,
  236u,
  238u,
  237u,
  206u,
  227u,
  218u
 };

static const UType JSum_8_17_10_8[]=
 {
  224u,
  212u,
  224u,
  238u,
  214u,
  218u,
  228u,
  256u,
  262u,
  214u,
  250u,
  213u,
  228u,
  236u,
  232u,
  222u,
  238u
 };

static const UType JSum_8_17_10_9[]=
 {
  230u,
  249u,
  213u,
  229u,
  212u,
  228u,
  233u,
  232u,
  253u,
  259u,
  209u,
  236u,
  238u,
  237u,
  206u,
  227u,
  218u
 };

static const UType JSum_8_17_10_10[]=
 {
  229u,
  231u,
  261u,
  202u,
  234u,
  243u,
  229u,
  242u,
  251u,
  229u,
  229u,
  207u,
  214u,
  220u,
  238u,
  234u,
  216u
 };

static const UType JSum_8_17_10_11[]=
 {
  230u,
  232u,
  206u,
  212u,
  236u,
  249u,
  253u,
  227u,
  228u,
  238u,
  213u,
  259u,
  218u,
  233u,
  237u,
  229u,
  209u
 };

static const UType JSum_8_17_10_12[]=
 {
  229u,
  229u,
  202u,
  220u,
  229u,
  216u,
  229u,
  261u,
  214u,
  243u,
  234u,
  251u,
  231u,
  207u,
  234u,
  238u,
  242u
 };

static const UType JSum_8_17_10_13[]=
 {
  229u,
  229u,
  214u,
  231u,
  242u,
  220u,
  261u,
  251u,
  238u,
  202u,
  229u,
  234u,
  234u,
  229u,
  216u,
  243u,
  207u
 };

static const UType JSum_8_17_10_14[]=
 {
  230u,
  259u,
  249u,
  209u,
  213u,
  236u,
  229u,
  238u,
  212u,
  237u,
  228u,
  206u,
  233u,
  227u,
  232u,
  218u,
  253u
 };

static const UType JSum_8_17_10_15[]=
 {
  224u,
  262u,
  238u,
  256u,
  222u,
  228u,
  232u,
  218u,
  236u,
  214u,
  228u,
  238u,
  213u,
  224u,
  250u,
  212u,
  214u
 };

static const PtrLen<const UType> JTable_8_17_10[]=
 {
  Range(JSum_8_17_10_1),
  Range(JSum_8_17_10_2),
  Range(JSum_8_17_10_3),
  Range(JSum_8_17_10_4),
  Range(JSum_8_17_10_5),
  Range(JSum_8_17_10_6),
  Range(JSum_8_17_10_7),
  Range(JSum_8_17_10_8),
  Range(JSum_8_17_10_9),
  Range(JSum_8_17_10_10),
  Range(JSum_8_17_10_11),
  Range(JSum_8_17_10_12),
  Range(JSum_8_17_10_13),
  Range(JSum_8_17_10_14),
  Range(JSum_8_17_10_15)
 };

static const UType JSum_8_17_11_1[]=
 {
  265u,
  298u,
  292u,
  262u,
  256u,
  284u,
  264u,
  254u,
  256u,
  270u,
  240u,
  290u,
  254u,
  262u,
  268u,
  246u,
  260u
 };

static const UType JSum_8_17_11_2[]=
 {
  274u,
  285u,
  264u,
  269u,
  283u,
  276u,
  274u,
  257u,
  272u,
  272u,
  233u,
  290u,
  262u,
  273u,
  257u,
  245u,
  235u
 };

static const UType JSum_8_17_11_3[]=
 {
  274u,
  269u,
  299u,
  257u,
  271u,
  270u,
  258u,
  263u,
  240u,
  266u,
  277u,
  266u,
  270u,
  245u,
  235u,
  292u,
  269u
 };

static const UType JSum_8_17_11_4[]=
 {
  274u,
  245u,
  266u,
  270u,
  269u,
  235u,
  277u,
  258u,
  299u,
  292u,
  266u,
  263u,
  257u,
  269u,
  270u,
  240u,
  271u
 };

static const UType JSum_8_17_11_5[]=
 {
  274u,
  257u,
  290u,
  272u,
  276u,
  264u,
  235u,
  273u,
  233u,
  257u,
  283u,
  285u,
  245u,
  262u,
  272u,
  274u,
  269u
 };

static const UType JSum_8_17_11_6[]=
 {
  274u,
  257u,
  258u,
  266u,
  270u,
  292u,
  269u,
  271u,
  263u,
  277u,
  245u,
  269u,
  299u,
  270u,
  240u,
  266u,
  235u
 };

static const UType JSum_8_17_11_7[]=
 {
  274u,
  264u,
  283u,
  274u,
  272u,
  233u,
  262u,
  257u,
  235u,
  285u,
  269u,
  276u,
  257u,
  272u,
  290u,
  273u,
  245u
 };

static const UType JSum_8_17_11_8[]=
 {
  265u,
  246u,
  262u,
  290u,
  270u,
  254u,
  284u,
  262u,
  298u,
  260u,
  268u,
  254u,
  240u,
  256u,
  264u,
  256u,
  292u
 };

static const UType JSum_8_17_11_9[]=
 {
  274u,
  264u,
  283u,
  274u,
  272u,
  233u,
  262u,
  257u,
  235u,
  285u,
  269u,
  276u,
  257u,
  272u,
  290u,
  273u,
  245u
 };

static const UType JSum_8_17_11_10[]=
 {
  274u,
  257u,
  258u,
  266u,
  270u,
  292u,
  269u,
  271u,
  263u,
  277u,
  245u,
  269u,
  299u,
  270u,
  240u,
  266u,
  235u
 };

static const UType JSum_8_17_11_11[]=
 {
  274u,
  257u,
  290u,
  272u,
  276u,
  264u,
  235u,
  273u,
  233u,
  257u,
  283u,
  285u,
  245u,
  262u,
  272u,
  274u,
  269u
 };

static const UType JSum_8_17_11_12[]=
 {
  274u,
  245u,
  266u,
  270u,
  269u,
  235u,
  277u,
  258u,
  299u,
  292u,
  266u,
  263u,
  257u,
  269u,
  270u,
  240u,
  271u
 };

static const UType JSum_8_17_11_13[]=
 {
  274u,
  269u,
  299u,
  257u,
  271u,
  270u,
  258u,
  263u,
  240u,
  266u,
  277u,
  266u,
  270u,
  245u,
  235u,
  292u,
  269u
 };

static const UType JSum_8_17_11_14[]=
 {
  274u,
  285u,
  264u,
  269u,
  283u,
  276u,
  274u,
  257u,
  272u,
  272u,
  233u,
  290u,
  262u,
  273u,
  257u,
  245u,
  235u
 };

static const UType JSum_8_17_11_15[]=
 {
  265u,
  298u,
  292u,
  262u,
  256u,
  284u,
  264u,
  254u,
  256u,
  270u,
  240u,
  290u,
  254u,
  262u,
  268u,
  246u,
  260u
 };

static const PtrLen<const UType> JTable_8_17_11[]=
 {
  Range(JSum_8_17_11_1),
  Range(JSum_8_17_11_2),
  Range(JSum_8_17_11_3),
  Range(JSum_8_17_11_4),
  Range(JSum_8_17_11_5),
  Range(JSum_8_17_11_6),
  Range(JSum_8_17_11_7),
  Range(JSum_8_17_11_8),
  Range(JSum_8_17_11_9),
  Range(JSum_8_17_11_10),
  Range(JSum_8_17_11_11),
  Range(JSum_8_17_11_12),
  Range(JSum_8_17_11_13),
  Range(JSum_8_17_11_14),
  Range(JSum_8_17_11_15)
 };

static const UType JSum_8_17_12_1[]=
 {
  552u,
  530u,
  548u,
  546u,
  570u,
  532u,
  518u,
  524u,
  538u,
  524u,
  536u,
  618u,
  532u,
  554u,
  544u,
  553u,
  562u
 };

static const UType JSum_8_17_12_2[]=
 {
  562u,
  540u,
  566u,
  539u,
  535u,
  551u,
  554u,
  505u,
  516u,
  531u,
  557u,
  566u,
  585u,
  526u,
  538u,
  589u,
  521u
 };

static const UType JSum_8_17_12_3[]=
 {
  510u,
  557u,
  529u,
  532u,
  583u,
  572u,
  547u,
  581u,
  519u,
  560u,
  546u,
  546u,
  503u,
  529u,
  566u,
  556u,
  545u
 };

static const UType JSum_8_17_12_4[]=
 {
  510u,
  529u,
  560u,
  572u,
  557u,
  566u,
  546u,
  547u,
  529u,
  556u,
  546u,
  581u,
  532u,
  545u,
  503u,
  519u,
  583u
 };

static const UType JSum_8_17_12_5[]=
 {
  562u,
  538u,
  566u,
  516u,
  551u,
  566u,
  521u,
  526u,
  557u,
  505u,
  535u,
  540u,
  589u,
  585u,
  531u,
  554u,
  539u
 };

static const UType JSum_8_17_12_6[]=
 {
  510u,
  532u,
  547u,
  560u,
  503u,
  556u,
  557u,
  583u,
  581u,
  546u,
  529u,
  545u,
  529u,
  572u,
  519u,
  546u,
  566u
 };

static const UType JSum_8_17_12_7[]=
 {
  562u,
  566u,
  535u,
  554u,
  516u,
  557u,
  585u,
  538u,
  521u,
  540u,
  539u,
  551u,
  505u,
  531u,
  566u,
  526u,
  589u
 };

static const UType JSum_8_17_12_8[]=
 {
  552u,
  553u,
  554u,
  618u,
  524u,
  524u,
  532u,
  546u,
  530u,
  562u,
  544u,
  532u,
  536u,
  538u,
  518u,
  570u,
  548u
 };

static const UType JSum_8_17_12_9[]=
 {
  562u,
  566u,
  535u,
  554u,
  516u,
  557u,
  585u,
  538u,
  521u,
  540u,
  539u,
  551u,
  505u,
  531u,
  566u,
  526u,
  589u
 };

static const UType JSum_8_17_12_10[]=
 {
  510u,
  532u,
  547u,
  560u,
  503u,
  556u,
  557u,
  583u,
  581u,
  546u,
  529u,
  545u,
  529u,
  572u,
  519u,
  546u,
  566u
 };

static const UType JSum_8_17_12_11[]=
 {
  562u,
  538u,
  566u,
  516u,
  551u,
  566u,
  521u,
  526u,
  557u,
  505u,
  535u,
  540u,
  589u,
  585u,
  531u,
  554u,
  539u
 };

static const UType JSum_8_17_12_12[]=
 {
  510u,
  529u,
  560u,
  572u,
  557u,
  566u,
  546u,
  547u,
  529u,
  556u,
  546u,
  581u,
  532u,
  545u,
  503u,
  519u,
  583u
 };

static const UType JSum_8_17_12_13[]=
 {
  510u,
  557u,
  529u,
  532u,
  583u,
  572u,
  547u,
  581u,
  519u,
  560u,
  546u,
  546u,
  503u,
  529u,
  566u,
  556u,
  545u
 };

static const UType JSum_8_17_12_14[]=
 {
  562u,
  540u,
  566u,
  539u,
  535u,
  551u,
  554u,
  505u,
  516u,
  531u,
  557u,
  566u,
  585u,
  526u,
  538u,
  589u,
  521u
 };

static const UType JSum_8_17_12_15[]=
 {
  552u,
  530u,
  548u,
  546u,
  570u,
  532u,
  518u,
  524u,
  538u,
  524u,
  536u,
  618u,
  532u,
  554u,
  544u,
  553u,
  562u
 };

static const PtrLen<const UType> JTable_8_17_12[]=
 {
  Range(JSum_8_17_12_1),
  Range(JSum_8_17_12_2),
  Range(JSum_8_17_12_3),
  Range(JSum_8_17_12_4),
  Range(JSum_8_17_12_5),
  Range(JSum_8_17_12_6),
  Range(JSum_8_17_12_7),
  Range(JSum_8_17_12_8),
  Range(JSum_8_17_12_9),
  Range(JSum_8_17_12_10),
  Range(JSum_8_17_12_11),
  Range(JSum_8_17_12_12),
  Range(JSum_8_17_12_13),
  Range(JSum_8_17_12_14),
  Range(JSum_8_17_12_15)
 };

static const UType JSum_8_17_13_1[]=
 {
  688u,
  650u,
  665u,
  748u,
  674u,
  676u,
  692u,
  722u,
  692u,
  694u,
  678u,
  700u,
  708u,
  722u,
  684u,
  694u,
  642u
 };

static const UType JSum_8_17_13_2[]=
 {
  642u,
  686u,
  651u,
  751u,
  699u,
  661u,
  680u,
  713u,
  695u,
  682u,
  722u,
  691u,
  707u,
  701u,
  688u,
  690u,
  670u
 };

static const UType JSum_8_17_13_3[]=
 {
  698u,
  673u,
  673u,
  661u,
  657u,
  716u,
  742u,
  692u,
  684u,
  722u,
  685u,
  717u,
  645u,
  712u,
  682u,
  667u,
  703u
 };

static const UType JSum_8_17_13_4[]=
 {
  698u,
  712u,
  722u,
  716u,
  673u,
  682u,
  685u,
  742u,
  673u,
  667u,
  717u,
  692u,
  661u,
  703u,
  645u,
  684u,
  657u
 };

static const UType JSum_8_17_13_5[]=
 {
  642u,
  688u,
  691u,
  695u,
  661u,
  651u,
  670u,
  701u,
  722u,
  713u,
  699u,
  686u,
  690u,
  707u,
  682u,
  680u,
  751u
 };

static const UType JSum_8_17_13_6[]=
 {
  698u,
  661u,
  742u,
  722u,
  645u,
  667u,
  673u,
  657u,
  692u,
  685u,
  712u,
  703u,
  673u,
  716u,
  684u,
  717u,
  682u
 };

static const UType JSum_8_17_13_7[]=
 {
  642u,
  651u,
  699u,
  680u,
  695u,
  722u,
  707u,
  688u,
  670u,
  686u,
  751u,
  661u,
  713u,
  682u,
  691u,
  701u,
  690u
 };

static const UType JSum_8_17_13_8[]=
 {
  688u,
  694u,
  722u,
  700u,
  694u,
  722u,
  676u,
  748u,
  650u,
  642u,
  684u,
  708u,
  678u,
  692u,
  692u,
  674u,
  665u
 };

static const UType JSum_8_17_13_9[]=
 {
  642u,
  651u,
  699u,
  680u,
  695u,
  722u,
  707u,
  688u,
  670u,
  686u,
  751u,
  661u,
  713u,
  682u,
  691u,
  701u,
  690u
 };

static const UType JSum_8_17_13_10[]=
 {
  698u,
  661u,
  742u,
  722u,
  645u,
  667u,
  673u,
  657u,
  692u,
  685u,
  712u,
  703u,
  673u,
  716u,
  684u,
  717u,
  682u
 };

static const UType JSum_8_17_13_11[]=
 {
  642u,
  688u,
  691u,
  695u,
  661u,
  651u,
  670u,
  701u,
  722u,
  713u,
  699u,
  686u,
  690u,
  707u,
  682u,
  680u,
  751u
 };

static const UType JSum_8_17_13_12[]=
 {
  698u,
  712u,
  722u,
  716u,
  673u,
  682u,
  685u,
  742u,
  673u,
  667u,
  717u,
  692u,
  661u,
  703u,
  645u,
  684u,
  657u
 };

static const UType JSum_8_17_13_13[]=
 {
  698u,
  673u,
  673u,
  661u,
  657u,
  716u,
  742u,
  692u,
  684u,
  722u,
  685u,
  717u,
  645u,
  712u,
  682u,
  667u,
  703u
 };

static const UType JSum_8_17_13_14[]=
 {
  642u,
  686u,
  651u,
  751u,
  699u,
  661u,
  680u,
  713u,
  695u,
  682u,
  722u,
  691u,
  707u,
  701u,
  688u,
  690u,
  670u
 };

static const UType JSum_8_17_13_15[]=
 {
  688u,
  650u,
  665u,
  748u,
  674u,
  676u,
  692u,
  722u,
  692u,
  694u,
  678u,
  700u,
  708u,
  722u,
  684u,
  694u,
  642u
 };

static const PtrLen<const UType> JTable_8_17_13[]=
 {
  Range(JSum_8_17_13_1),
  Range(JSum_8_17_13_2),
  Range(JSum_8_17_13_3),
  Range(JSum_8_17_13_4),
  Range(JSum_8_17_13_5),
  Range(JSum_8_17_13_6),
  Range(JSum_8_17_13_7),
  Range(JSum_8_17_13_8),
  Range(JSum_8_17_13_9),
  Range(JSum_8_17_13_10),
  Range(JSum_8_17_13_11),
  Range(JSum_8_17_13_12),
  Range(JSum_8_17_13_13),
  Range(JSum_8_17_13_14),
  Range(JSum_8_17_13_15)
 };

static const UType JSum_8_17_14_1[]=
 {
  786u,
  796u,
  832u,
  816u,
  780u,
  810u,
  802u,
  810u,
  808u,
  821u,
  750u,
  844u,
  808u,
  792u,
  754u,
  742u,
  814u
 };

static const UType JSum_8_17_14_2[]=
 {
  784u,
  843u,
  799u,
  823u,
  762u,
  791u,
  829u,
  813u,
  826u,
  771u,
  768u,
  759u,
  820u,
  760u,
  780u,
  832u,
  805u
 };

static const UType JSum_8_17_14_3[]=
 {
  776u,
  811u,
  786u,
  829u,
  755u,
  833u,
  806u,
  777u,
  809u,
  837u,
  818u,
  829u,
  782u,
  748u,
  768u,
  820u,
  781u
 };

static const UType JSum_8_17_14_4[]=
 {
  776u,
  748u,
  837u,
  833u,
  811u,
  768u,
  818u,
  806u,
  786u,
  820u,
  829u,
  777u,
  829u,
  781u,
  782u,
  809u,
  755u
 };

static const UType JSum_8_17_14_5[]=
 {
  784u,
  780u,
  759u,
  826u,
  791u,
  799u,
  805u,
  760u,
  768u,
  813u,
  762u,
  843u,
  832u,
  820u,
  771u,
  829u,
  823u
 };

static const UType JSum_8_17_14_6[]=
 {
  776u,
  829u,
  806u,
  837u,
  782u,
  820u,
  811u,
  755u,
  777u,
  818u,
  748u,
  781u,
  786u,
  833u,
  809u,
  829u,
  768u
 };

static const UType JSum_8_17_14_7[]=
 {
  784u,
  799u,
  762u,
  829u,
  826u,
  768u,
  820u,
  780u,
  805u,
  843u,
  823u,
  791u,
  813u,
  771u,
  759u,
  760u,
  832u
 };

static const UType JSum_8_17_14_8[]=
 {
  786u,
  742u,
  792u,
  844u,
  821u,
  810u,
  810u,
  816u,
  796u,
  814u,
  754u,
  808u,
  750u,
  808u,
  802u,
  780u,
  832u
 };

static const UType JSum_8_17_14_9[]=
 {
  784u,
  799u,
  762u,
  829u,
  826u,
  768u,
  820u,
  780u,
  805u,
  843u,
  823u,
  791u,
  813u,
  771u,
  759u,
  760u,
  832u
 };

static const UType JSum_8_17_14_10[]=
 {
  776u,
  829u,
  806u,
  837u,
  782u,
  820u,
  811u,
  755u,
  777u,
  818u,
  748u,
  781u,
  786u,
  833u,
  809u,
  829u,
  768u
 };

static const UType JSum_8_17_14_11[]=
 {
  784u,
  780u,
  759u,
  826u,
  791u,
  799u,
  805u,
  760u,
  768u,
  813u,
  762u,
  843u,
  832u,
  820u,
  771u,
  829u,
  823u
 };

static const UType JSum_8_17_14_12[]=
 {
  776u,
  748u,
  837u,
  833u,
  811u,
  768u,
  818u,
  806u,
  786u,
  820u,
  829u,
  777u,
  829u,
  781u,
  782u,
  809u,
  755u
 };

static const UType JSum_8_17_14_13[]=
 {
  776u,
  811u,
  786u,
  829u,
  755u,
  833u,
  806u,
  777u,
  809u,
  837u,
  818u,
  829u,
  782u,
  748u,
  768u,
  820u,
  781u
 };

static const UType JSum_8_17_14_14[]=
 {
  784u,
  843u,
  799u,
  823u,
  762u,
  791u,
  829u,
  813u,
  826u,
  771u,
  768u,
  759u,
  820u,
  760u,
  780u,
  832u,
  805u
 };

static const UType JSum_8_17_14_15[]=
 {
  786u,
  796u,
  832u,
  816u,
  780u,
  810u,
  802u,
  810u,
  808u,
  821u,
  750u,
  844u,
  808u,
  792u,
  754u,
  742u,
  814u
 };

static const PtrLen<const UType> JTable_8_17_14[]=
 {
  Range(JSum_8_17_14_1),
  Range(JSum_8_17_14_2),
  Range(JSum_8_17_14_3),
  Range(JSum_8_17_14_4),
  Range(JSum_8_17_14_5),
  Range(JSum_8_17_14_6),
  Range(JSum_8_17_14_7),
  Range(JSum_8_17_14_8),
  Range(JSum_8_17_14_9),
  Range(JSum_8_17_14_10),
  Range(JSum_8_17_14_11),
  Range(JSum_8_17_14_12),
  Range(JSum_8_17_14_13),
  Range(JSum_8_17_14_14),
  Range(JSum_8_17_14_15)
 };

static const UType JSum_8_17_15_1[]=
 {
  1204u,
  1254u,
  1276u,
  1274u,
  1272u,
  1270u,
  1252u,
  1244u,
  1158u,
  1240u,
  1277u,
  1254u,
  1232u,
  1262u,
  1282u,
  1244u,
  1322u
 };

static const UType JSum_8_17_15_2[]=
 {
  1273u,
  1217u,
  1214u,
  1207u,
  1298u,
  1214u,
  1269u,
  1307u,
  1213u,
  1254u,
  1232u,
  1273u,
  1288u,
  1317u,
  1244u,
  1240u,
  1257u
 };

static const UType JSum_8_17_15_3[]=
 {
  1261u,
  1330u,
  1207u,
  1272u,
  1246u,
  1239u,
  1185u,
  1261u,
  1248u,
  1238u,
  1259u,
  1256u,
  1299u,
  1305u,
  1249u,
  1248u,
  1214u
 };

static const UType JSum_8_17_15_4[]=
 {
  1261u,
  1305u,
  1238u,
  1239u,
  1330u,
  1249u,
  1259u,
  1185u,
  1207u,
  1248u,
  1256u,
  1261u,
  1272u,
  1214u,
  1299u,
  1248u,
  1246u
 };

static const UType JSum_8_17_15_5[]=
 {
  1273u,
  1244u,
  1273u,
  1213u,
  1214u,
  1214u,
  1257u,
  1317u,
  1232u,
  1307u,
  1298u,
  1217u,
  1240u,
  1288u,
  1254u,
  1269u,
  1207u
 };

static const UType JSum_8_17_15_6[]=
 {
  1261u,
  1272u,
  1185u,
  1238u,
  1299u,
  1248u,
  1330u,
  1246u,
  1261u,
  1259u,
  1305u,
  1214u,
  1207u,
  1239u,
  1248u,
  1256u,
  1249u
 };

static const UType JSum_8_17_15_7[]=
 {
  1273u,
  1214u,
  1298u,
  1269u,
  1213u,
  1232u,
  1288u,
  1244u,
  1257u,
  1217u,
  1207u,
  1214u,
  1307u,
  1254u,
  1273u,
  1317u,
  1240u
 };

static const UType JSum_8_17_15_8[]=
 {
  1204u,
  1244u,
  1262u,
  1254u,
  1240u,
  1244u,
  1270u,
  1274u,
  1254u,
  1322u,
  1282u,
  1232u,
  1277u,
  1158u,
  1252u,
  1272u,
  1276u
 };

static const UType JSum_8_17_15_9[]=
 {
  1273u,
  1214u,
  1298u,
  1269u,
  1213u,
  1232u,
  1288u,
  1244u,
  1257u,
  1217u,
  1207u,
  1214u,
  1307u,
  1254u,
  1273u,
  1317u,
  1240u
 };

static const UType JSum_8_17_15_10[]=
 {
  1261u,
  1272u,
  1185u,
  1238u,
  1299u,
  1248u,
  1330u,
  1246u,
  1261u,
  1259u,
  1305u,
  1214u,
  1207u,
  1239u,
  1248u,
  1256u,
  1249u
 };

static const UType JSum_8_17_15_11[]=
 {
  1273u,
  1244u,
  1273u,
  1213u,
  1214u,
  1214u,
  1257u,
  1317u,
  1232u,
  1307u,
  1298u,
  1217u,
  1240u,
  1288u,
  1254u,
  1269u,
  1207u
 };

static const UType JSum_8_17_15_12[]=
 {
  1261u,
  1305u,
  1238u,
  1239u,
  1330u,
  1249u,
  1259u,
  1185u,
  1207u,
  1248u,
  1256u,
  1261u,
  1272u,
  1214u,
  1299u,
  1248u,
  1246u
 };

static const UType JSum_8_17_15_13[]=
 {
  1261u,
  1330u,
  1207u,
  1272u,
  1246u,
  1239u,
  1185u,
  1261u,
  1248u,
  1238u,
  1259u,
  1256u,
  1299u,
  1305u,
  1249u,
  1248u,
  1214u
 };

static const UType JSum_8_17_15_14[]=
 {
  1273u,
  1217u,
  1214u,
  1207u,
  1298u,
  1214u,
  1269u,
  1307u,
  1213u,
  1254u,
  1232u,
  1273u,
  1288u,
  1317u,
  1244u,
  1240u,
  1257u
 };

static const UType JSum_8_17_15_15[]=
 {
  1204u,
  1254u,
  1276u,
  1274u,
  1272u,
  1270u,
  1252u,
  1244u,
  1158u,
  1240u,
  1277u,
  1254u,
  1232u,
  1262u,
  1282u,
  1244u,
  1322u
 };

static const PtrLen<const UType> JTable_8_17_15[]=
 {
  Range(JSum_8_17_15_1),
  Range(JSum_8_17_15_2),
  Range(JSum_8_17_15_3),
  Range(JSum_8_17_15_4),
  Range(JSum_8_17_15_5),
  Range(JSum_8_17_15_6),
  Range(JSum_8_17_15_7),
  Range(JSum_8_17_15_8),
  Range(JSum_8_17_15_9),
  Range(JSum_8_17_15_10),
  Range(JSum_8_17_15_11),
  Range(JSum_8_17_15_12),
  Range(JSum_8_17_15_13),
  Range(JSum_8_17_15_14),
  Range(JSum_8_17_15_15)
 };

static const UType JSum_8_17_16_1[]=
 {
  2090u,
  2144u,
  2190u,
  2092u,
  2010u,
  2116u,
  2054u,
  2132u,
  2010u,
  2078u,
  2106u,
  2070u,
  2105u,
  2084u,
  2052u,
  2072u,
  2124u
 };

static const UType JSum_8_17_16_2[]=
 {
  2062u,
  2119u,
  2034u,
  2100u,
  2071u,
  2082u,
  2032u,
  2107u,
  2213u,
  2130u,
  2069u,
  2124u,
  2041u,
  2095u,
  2115u,
  2035u,
  2100u
 };

static const UType JSum_8_17_16_3[]=
 {
  2076u,
  2057u,
  2058u,
  2080u,
  2075u,
  2055u,
  2139u,
  2043u,
  2170u,
  2077u,
  2016u,
  2095u,
  2171u,
  2150u,
  2082u,
  2129u,
  2056u
 };

static const UType JSum_8_17_16_4[]=
 {
  2076u,
  2150u,
  2077u,
  2055u,
  2057u,
  2082u,
  2016u,
  2139u,
  2058u,
  2129u,
  2095u,
  2043u,
  2080u,
  2056u,
  2171u,
  2170u,
  2075u
 };

static const UType JSum_8_17_16_5[]=
 {
  2062u,
  2115u,
  2124u,
  2213u,
  2082u,
  2034u,
  2100u,
  2095u,
  2069u,
  2107u,
  2071u,
  2119u,
  2035u,
  2041u,
  2130u,
  2032u,
  2100u
 };

static const UType JSum_8_17_16_6[]=
 {
  2076u,
  2080u,
  2139u,
  2077u,
  2171u,
  2129u,
  2057u,
  2075u,
  2043u,
  2016u,
  2150u,
  2056u,
  2058u,
  2055u,
  2170u,
  2095u,
  2082u
 };

static const UType JSum_8_17_16_7[]=
 {
  2062u,
  2034u,
  2071u,
  2032u,
  2213u,
  2069u,
  2041u,
  2115u,
  2100u,
  2119u,
  2100u,
  2082u,
  2107u,
  2130u,
  2124u,
  2095u,
  2035u
 };

static const UType JSum_8_17_16_8[]=
 {
  2090u,
  2072u,
  2084u,
  2070u,
  2078u,
  2132u,
  2116u,
  2092u,
  2144u,
  2124u,
  2052u,
  2105u,
  2106u,
  2010u,
  2054u,
  2010u,
  2190u
 };

static const UType JSum_8_17_16_9[]=
 {
  2062u,
  2034u,
  2071u,
  2032u,
  2213u,
  2069u,
  2041u,
  2115u,
  2100u,
  2119u,
  2100u,
  2082u,
  2107u,
  2130u,
  2124u,
  2095u,
  2035u
 };

static const UType JSum_8_17_16_10[]=
 {
  2076u,
  2080u,
  2139u,
  2077u,
  2171u,
  2129u,
  2057u,
  2075u,
  2043u,
  2016u,
  2150u,
  2056u,
  2058u,
  2055u,
  2170u,
  2095u,
  2082u
 };

static const UType JSum_8_17_16_11[]=
 {
  2062u,
  2115u,
  2124u,
  2213u,
  2082u,
  2034u,
  2100u,
  2095u,
  2069u,
  2107u,
  2071u,
  2119u,
  2035u,
  2041u,
  2130u,
  2032u,
  2100u
 };

static const UType JSum_8_17_16_12[]=
 {
  2076u,
  2150u,
  2077u,
  2055u,
  2057u,
  2082u,
  2016u,
  2139u,
  2058u,
  2129u,
  2095u,
  2043u,
  2080u,
  2056u,
  2171u,
  2170u,
  2075u
 };

static const UType JSum_8_17_16_13[]=
 {
  2076u,
  2057u,
  2058u,
  2080u,
  2075u,
  2055u,
  2139u,
  2043u,
  2170u,
  2077u,
  2016u,
  2095u,
  2171u,
  2150u,
  2082u,
  2129u,
  2056u
 };

static const UType JSum_8_17_16_14[]=
 {
  2062u,
  2119u,
  2034u,
  2100u,
  2071u,
  2082u,
  2032u,
  2107u,
  2213u,
  2130u,
  2069u,
  2124u,
  2041u,
  2095u,
  2115u,
  2035u,
  2100u
 };

static const UType JSum_8_17_16_15[]=
 {
  2090u,
  2144u,
  2190u,
  2092u,
  2010u,
  2116u,
  2054u,
  2132u,
  2010u,
  2078u,
  2106u,
  2070u,
  2105u,
  2084u,
  2052u,
  2072u,
  2124u
 };

static const PtrLen<const UType> JTable_8_17_16[]=
 {
  Range(JSum_8_17_16_1),
  Range(JSum_8_17_16_2),
  Range(JSum_8_17_16_3),
  Range(JSum_8_17_16_4),
  Range(JSum_8_17_16_5),
  Range(JSum_8_17_16_6),
  Range(JSum_8_17_16_7),
  Range(JSum_8_17_16_8),
  Range(JSum_8_17_16_9),
  Range(JSum_8_17_16_10),
  Range(JSum_8_17_16_11),
  Range(JSum_8_17_16_12),
  Range(JSum_8_17_16_13),
  Range(JSum_8_17_16_14),
  Range(JSum_8_17_16_15)
 };

static const UType JSum_8_17_17_1[]=
 {
  2698u,
  2704u,
  2638u,
  2748u,
  2720u,
  2704u,
  2806u,
  2718u,
  2790u,
  2760u,
  2774u,
  2692u,
  2774u,
  2678u,
  2641u,
  2764u,
  2800u
 };

static const UType JSum_8_17_17_2[]=
 {
  2746u,
  2708u,
  2738u,
  2752u,
  2786u,
  2748u,
  2742u,
  2688u,
  2770u,
  2734u,
  2681u,
  2580u,
  2764u,
  2746u,
  2704u,
  2818u,
  2704u
 };

static const UType JSum_8_17_17_3[]=
 {
  2672u,
  2778u,
  2724u,
  2810u,
  2698u,
  2702u,
  2776u,
  2766u,
  2700u,
  2804u,
  2752u,
  2682u,
  2624u,
  2714u,
  2676u,
  2777u,
  2754u
 };

static const UType JSum_8_17_17_4[]=
 {
  2672u,
  2714u,
  2804u,
  2702u,
  2778u,
  2676u,
  2752u,
  2776u,
  2724u,
  2777u,
  2682u,
  2766u,
  2810u,
  2754u,
  2624u,
  2700u,
  2698u
 };

static const UType JSum_8_17_17_5[]=
 {
  2746u,
  2704u,
  2580u,
  2770u,
  2748u,
  2738u,
  2704u,
  2746u,
  2681u,
  2688u,
  2786u,
  2708u,
  2818u,
  2764u,
  2734u,
  2742u,
  2752u
 };

static const UType JSum_8_17_17_6[]=
 {
  2672u,
  2810u,
  2776u,
  2804u,
  2624u,
  2777u,
  2778u,
  2698u,
  2766u,
  2752u,
  2714u,
  2754u,
  2724u,
  2702u,
  2700u,
  2682u,
  2676u
 };

static const UType JSum_8_17_17_7[]=
 {
  2746u,
  2738u,
  2786u,
  2742u,
  2770u,
  2681u,
  2764u,
  2704u,
  2704u,
  2708u,
  2752u,
  2748u,
  2688u,
  2734u,
  2580u,
  2746u,
  2818u
 };

static const UType JSum_8_17_17_8[]=
 {
  2698u,
  2764u,
  2678u,
  2692u,
  2760u,
  2718u,
  2704u,
  2748u,
  2704u,
  2800u,
  2641u,
  2774u,
  2774u,
  2790u,
  2806u,
  2720u,
  2638u
 };

static const UType JSum_8_17_17_9[]=
 {
  2746u,
  2738u,
  2786u,
  2742u,
  2770u,
  2681u,
  2764u,
  2704u,
  2704u,
  2708u,
  2752u,
  2748u,
  2688u,
  2734u,
  2580u,
  2746u,
  2818u
 };

static const UType JSum_8_17_17_10[]=
 {
  2672u,
  2810u,
  2776u,
  2804u,
  2624u,
  2777u,
  2778u,
  2698u,
  2766u,
  2752u,
  2714u,
  2754u,
  2724u,
  2702u,
  2700u,
  2682u,
  2676u
 };

static const UType JSum_8_17_17_11[]=
 {
  2746u,
  2704u,
  2580u,
  2770u,
  2748u,
  2738u,
  2704u,
  2746u,
  2681u,
  2688u,
  2786u,
  2708u,
  2818u,
  2764u,
  2734u,
  2742u,
  2752u
 };

static const UType JSum_8_17_17_12[]=
 {
  2672u,
  2714u,
  2804u,
  2702u,
  2778u,
  2676u,
  2752u,
  2776u,
  2724u,
  2777u,
  2682u,
  2766u,
  2810u,
  2754u,
  2624u,
  2700u,
  2698u
 };

static const UType JSum_8_17_17_13[]=
 {
  2672u,
  2778u,
  2724u,
  2810u,
  2698u,
  2702u,
  2776u,
  2766u,
  2700u,
  2804u,
  2752u,
  2682u,
  2624u,
  2714u,
  2676u,
  2777u,
  2754u
 };

static const UType JSum_8_17_17_14[]=
 {
  2746u,
  2708u,
  2738u,
  2752u,
  2786u,
  2748u,
  2742u,
  2688u,
  2770u,
  2734u,
  2681u,
  2580u,
  2764u,
  2746u,
  2704u,
  2818u,
  2704u
 };

static const UType JSum_8_17_17_15[]=
 {
  2698u,
  2704u,
  2638u,
  2748u,
  2720u,
  2704u,
  2806u,
  2718u,
  2790u,
  2760u,
  2774u,
  2692u,
  2774u,
  2678u,
  2641u,
  2764u,
  2800u
 };

static const PtrLen<const UType> JTable_8_17_17[]=
 {
  Range(JSum_8_17_17_1),
  Range(JSum_8_17_17_2),
  Range(JSum_8_17_17_3),
  Range(JSum_8_17_17_4),
  Range(JSum_8_17_17_5),
  Range(JSum_8_17_17_6),
  Range(JSum_8_17_17_7),
  Range(JSum_8_17_17_8),
  Range(JSum_8_17_17_9),
  Range(JSum_8_17_17_10),
  Range(JSum_8_17_17_11),
  Range(JSum_8_17_17_12),
  Range(JSum_8_17_17_13),
  Range(JSum_8_17_17_14),
  Range(JSum_8_17_17_15)
 };

static const UType JSum_8_17_18_1[]=
 {
  3510u,
  3466u,
  3462u,
  3490u,
  3544u,
  3406u,
  3496u,
  3466u,
  3492u,
  3450u,
  3420u,
  3472u,
  3520u,
  3416u,
  3488u,
  3297u,
  3390u
 };

static const UType JSum_8_17_18_2[]=
 {
  3429u,
  3404u,
  3509u,
  3518u,
  3518u,
  3392u,
  3486u,
  3335u,
  3489u,
  3453u,
  3339u,
  3451u,
  3505u,
  3479u,
  3488u,
  3498u,
  3492u
 };

static const UType JSum_8_17_18_3[]=
 {
  3497u,
  3319u,
  3363u,
  3491u,
  3401u,
  3496u,
  3440u,
  3450u,
  3480u,
  3489u,
  3482u,
  3415u,
  3518u,
  3436u,
  3518u,
  3445u,
  3545u
 };

static const UType JSum_8_17_18_4[]=
 {
  3497u,
  3436u,
  3489u,
  3496u,
  3319u,
  3518u,
  3482u,
  3440u,
  3363u,
  3445u,
  3415u,
  3450u,
  3491u,
  3545u,
  3518u,
  3480u,
  3401u
 };

static const UType JSum_8_17_18_5[]=
 {
  3429u,
  3488u,
  3451u,
  3489u,
  3392u,
  3509u,
  3492u,
  3479u,
  3339u,
  3335u,
  3518u,
  3404u,
  3498u,
  3505u,
  3453u,
  3486u,
  3518u
 };

static const UType JSum_8_17_18_6[]=
 {
  3497u,
  3491u,
  3440u,
  3489u,
  3518u,
  3445u,
  3319u,
  3401u,
  3450u,
  3482u,
  3436u,
  3545u,
  3363u,
  3496u,
  3480u,
  3415u,
  3518u
 };

static const UType JSum_8_17_18_7[]=
 {
  3429u,
  3509u,
  3518u,
  3486u,
  3489u,
  3339u,
  3505u,
  3488u,
  3492u,
  3404u,
  3518u,
  3392u,
  3335u,
  3453u,
  3451u,
  3479u,
  3498u
 };

static const UType JSum_8_17_18_8[]=
 {
  3510u,
  3297u,
  3416u,
  3472u,
  3450u,
  3466u,
  3406u,
  3490u,
  3466u,
  3390u,
  3488u,
  3520u,
  3420u,
  3492u,
  3496u,
  3544u,
  3462u
 };

static const UType JSum_8_17_18_9[]=
 {
  3429u,
  3509u,
  3518u,
  3486u,
  3489u,
  3339u,
  3505u,
  3488u,
  3492u,
  3404u,
  3518u,
  3392u,
  3335u,
  3453u,
  3451u,
  3479u,
  3498u
 };

static const UType JSum_8_17_18_10[]=
 {
  3497u,
  3491u,
  3440u,
  3489u,
  3518u,
  3445u,
  3319u,
  3401u,
  3450u,
  3482u,
  3436u,
  3545u,
  3363u,
  3496u,
  3480u,
  3415u,
  3518u
 };

static const UType JSum_8_17_18_11[]=
 {
  3429u,
  3488u,
  3451u,
  3489u,
  3392u,
  3509u,
  3492u,
  3479u,
  3339u,
  3335u,
  3518u,
  3404u,
  3498u,
  3505u,
  3453u,
  3486u,
  3518u
 };

static const UType JSum_8_17_18_12[]=
 {
  3497u,
  3436u,
  3489u,
  3496u,
  3319u,
  3518u,
  3482u,
  3440u,
  3363u,
  3445u,
  3415u,
  3450u,
  3491u,
  3545u,
  3518u,
  3480u,
  3401u
 };

static const UType JSum_8_17_18_13[]=
 {
  3497u,
  3319u,
  3363u,
  3491u,
  3401u,
  3496u,
  3440u,
  3450u,
  3480u,
  3489u,
  3482u,
  3415u,
  3518u,
  3436u,
  3518u,
  3445u,
  3545u
 };

static const UType JSum_8_17_18_14[]=
 {
  3429u,
  3404u,
  3509u,
  3518u,
  3518u,
  3392u,
  3486u,
  3335u,
  3489u,
  3453u,
  3339u,
  3451u,
  3505u,
  3479u,
  3488u,
  3498u,
  3492u
 };

static const UType JSum_8_17_18_15[]=
 {
  3510u,
  3466u,
  3462u,
  3490u,
  3544u,
  3406u,
  3496u,
  3466u,
  3492u,
  3450u,
  3420u,
  3472u,
  3520u,
  3416u,
  3488u,
  3297u,
  3390u
 };

static const PtrLen<const UType> JTable_8_17_18[]=
 {
  Range(JSum_8_17_18_1),
  Range(JSum_8_17_18_2),
  Range(JSum_8_17_18_3),
  Range(JSum_8_17_18_4),
  Range(JSum_8_17_18_5),
  Range(JSum_8_17_18_6),
  Range(JSum_8_17_18_7),
  Range(JSum_8_17_18_8),
  Range(JSum_8_17_18_9),
  Range(JSum_8_17_18_10),
  Range(JSum_8_17_18_11),
  Range(JSum_8_17_18_12),
  Range(JSum_8_17_18_13),
  Range(JSum_8_17_18_14),
  Range(JSum_8_17_18_15)
 };

static const UType JSum_8_17_19_1[]=
 {
  4196u,
  4346u,
  4344u,
  4268u,
  4218u,
  4282u,
  4230u,
  4380u,
  4276u,
  4428u,
  4314u,
  4286u,
  4328u,
  4214u,
  4288u,
  4329u,
  4202u
 };

static const UType JSum_8_17_19_2[]=
 {
  4296u,
  4192u,
  4302u,
  4350u,
  4363u,
  4155u,
  4271u,
  4284u,
  4166u,
  4325u,
  4283u,
  4368u,
  4303u,
  4301u,
  4349u,
  4355u,
  4266u
 };

static const UType JSum_8_17_19_3[]=
 {
  4336u,
  4329u,
  4387u,
  4132u,
  4246u,
  4277u,
  4263u,
  4215u,
  4304u,
  4310u,
  4318u,
  4272u,
  4362u,
  4315u,
  4299u,
  4197u,
  4367u
 };

static const UType JSum_8_17_19_4[]=
 {
  4336u,
  4315u,
  4310u,
  4277u,
  4329u,
  4299u,
  4318u,
  4263u,
  4387u,
  4197u,
  4272u,
  4215u,
  4132u,
  4367u,
  4362u,
  4304u,
  4246u
 };

static const UType JSum_8_17_19_5[]=
 {
  4296u,
  4349u,
  4368u,
  4166u,
  4155u,
  4302u,
  4266u,
  4301u,
  4283u,
  4284u,
  4363u,
  4192u,
  4355u,
  4303u,
  4325u,
  4271u,
  4350u
 };

static const UType JSum_8_17_19_6[]=
 {
  4336u,
  4132u,
  4263u,
  4310u,
  4362u,
  4197u,
  4329u,
  4246u,
  4215u,
  4318u,
  4315u,
  4367u,
  4387u,
  4277u,
  4304u,
  4272u,
  4299u
 };

static const UType JSum_8_17_19_7[]=
 {
  4296u,
  4302u,
  4363u,
  4271u,
  4166u,
  4283u,
  4303u,
  4349u,
  4266u,
  4192u,
  4350u,
  4155u,
  4284u,
  4325u,
  4368u,
  4301u,
  4355u
 };

static const UType JSum_8_17_19_8[]=
 {
  4196u,
  4329u,
  4214u,
  4286u,
  4428u,
  4380u,
  4282u,
  4268u,
  4346u,
  4202u,
  4288u,
  4328u,
  4314u,
  4276u,
  4230u,
  4218u,
  4344u
 };

static const UType JSum_8_17_19_9[]=
 {
  4296u,
  4302u,
  4363u,
  4271u,
  4166u,
  4283u,
  4303u,
  4349u,
  4266u,
  4192u,
  4350u,
  4155u,
  4284u,
  4325u,
  4368u,
  4301u,
  4355u
 };

static const UType JSum_8_17_19_10[]=
 {
  4336u,
  4132u,
  4263u,
  4310u,
  4362u,
  4197u,
  4329u,
  4246u,
  4215u,
  4318u,
  4315u,
  4367u,
  4387u,
  4277u,
  4304u,
  4272u,
  4299u
 };

static const UType JSum_8_17_19_11[]=
 {
  4296u,
  4349u,
  4368u,
  4166u,
  4155u,
  4302u,
  4266u,
  4301u,
  4283u,
  4284u,
  4363u,
  4192u,
  4355u,
  4303u,
  4325u,
  4271u,
  4350u
 };

static const UType JSum_8_17_19_12[]=
 {
  4336u,
  4315u,
  4310u,
  4277u,
  4329u,
  4299u,
  4318u,
  4263u,
  4387u,
  4197u,
  4272u,
  4215u,
  4132u,
  4367u,
  4362u,
  4304u,
  4246u
 };

static const UType JSum_8_17_19_13[]=
 {
  4336u,
  4329u,
  4387u,
  4132u,
  4246u,
  4277u,
  4263u,
  4215u,
  4304u,
  4310u,
  4318u,
  4272u,
  4362u,
  4315u,
  4299u,
  4197u,
  4367u
 };

static const UType JSum_8_17_19_14[]=
 {
  4296u,
  4192u,
  4302u,
  4350u,
  4363u,
  4155u,
  4271u,
  4284u,
  4166u,
  4325u,
  4283u,
  4368u,
  4303u,
  4301u,
  4349u,
  4355u,
  4266u
 };

static const UType JSum_8_17_19_15[]=
 {
  4196u,
  4346u,
  4344u,
  4268u,
  4218u,
  4282u,
  4230u,
  4380u,
  4276u,
  4428u,
  4314u,
  4286u,
  4328u,
  4214u,
  4288u,
  4329u,
  4202u
 };

static const PtrLen<const UType> JTable_8_17_19[]=
 {
  Range(JSum_8_17_19_1),
  Range(JSum_8_17_19_2),
  Range(JSum_8_17_19_3),
  Range(JSum_8_17_19_4),
  Range(JSum_8_17_19_5),
  Range(JSum_8_17_19_6),
  Range(JSum_8_17_19_7),
  Range(JSum_8_17_19_8),
  Range(JSum_8_17_19_9),
  Range(JSum_8_17_19_10),
  Range(JSum_8_17_19_11),
  Range(JSum_8_17_19_12),
  Range(JSum_8_17_19_13),
  Range(JSum_8_17_19_14),
  Range(JSum_8_17_19_15)
 };

static const UType JSum_8_17_20_1[]=
 {
  5926u,
  6228u,
  6013u,
  6042u,
  6032u,
  5976u,
  5962u,
  6072u,
  6022u,
  6032u,
  6038u,
  5972u,
  5854u,
  6008u,
  6010u,
  5948u,
  5966u
 };

static const UType JSum_8_17_20_2[]=
 {
  5889u,
  6061u,
  5889u,
  6013u,
  6086u,
  5936u,
  5959u,
  6020u,
  6004u,
  5939u,
  6122u,
  6152u,
  6067u,
  5973u,
  5956u,
  5967u,
  6068u
 };

static const UType JSum_8_17_20_3[]=
 {
  6035u,
  6040u,
  5980u,
  5893u,
  5941u,
  6003u,
  5997u,
  5884u,
  6095u,
  6066u,
  5987u,
  6079u,
  6098u,
  5976u,
  6007u,
  5878u,
  6142u
 };

static const UType JSum_8_17_20_4[]=
 {
  6035u,
  5976u,
  6066u,
  6003u,
  6040u,
  6007u,
  5987u,
  5997u,
  5980u,
  5878u,
  6079u,
  5884u,
  5893u,
  6142u,
  6098u,
  6095u,
  5941u
 };

static const UType JSum_8_17_20_5[]=
 {
  5889u,
  5956u,
  6152u,
  6004u,
  5936u,
  5889u,
  6068u,
  5973u,
  6122u,
  6020u,
  6086u,
  6061u,
  5967u,
  6067u,
  5939u,
  5959u,
  6013u
 };

static const UType JSum_8_17_20_6[]=
 {
  6035u,
  5893u,
  5997u,
  6066u,
  6098u,
  5878u,
  6040u,
  5941u,
  5884u,
  5987u,
  5976u,
  6142u,
  5980u,
  6003u,
  6095u,
  6079u,
  6007u
 };

static const UType JSum_8_17_20_7[]=
 {
  5889u,
  5889u,
  6086u,
  5959u,
  6004u,
  6122u,
  6067u,
  5956u,
  6068u,
  6061u,
  6013u,
  5936u,
  6020u,
  5939u,
  6152u,
  5973u,
  5967u
 };

static const UType JSum_8_17_20_8[]=
 {
  5926u,
  5948u,
  6008u,
  5972u,
  6032u,
  6072u,
  5976u,
  6042u,
  6228u,
  5966u,
  6010u,
  5854u,
  6038u,
  6022u,
  5962u,
  6032u,
  6013u
 };

static const UType JSum_8_17_20_9[]=
 {
  5889u,
  5889u,
  6086u,
  5959u,
  6004u,
  6122u,
  6067u,
  5956u,
  6068u,
  6061u,
  6013u,
  5936u,
  6020u,
  5939u,
  6152u,
  5973u,
  5967u
 };

static const UType JSum_8_17_20_10[]=
 {
  6035u,
  5893u,
  5997u,
  6066u,
  6098u,
  5878u,
  6040u,
  5941u,
  5884u,
  5987u,
  5976u,
  6142u,
  5980u,
  6003u,
  6095u,
  6079u,
  6007u
 };

static const UType JSum_8_17_20_11[]=
 {
  5889u,
  5956u,
  6152u,
  6004u,
  5936u,
  5889u,
  6068u,
  5973u,
  6122u,
  6020u,
  6086u,
  6061u,
  5967u,
  6067u,
  5939u,
  5959u,
  6013u
 };

static const UType JSum_8_17_20_12[]=
 {
  6035u,
  5976u,
  6066u,
  6003u,
  6040u,
  6007u,
  5987u,
  5997u,
  5980u,
  5878u,
  6079u,
  5884u,
  5893u,
  6142u,
  6098u,
  6095u,
  5941u
 };

static const UType JSum_8_17_20_13[]=
 {
  6035u,
  6040u,
  5980u,
  5893u,
  5941u,
  6003u,
  5997u,
  5884u,
  6095u,
  6066u,
  5987u,
  6079u,
  6098u,
  5976u,
  6007u,
  5878u,
  6142u
 };

static const UType JSum_8_17_20_14[]=
 {
  5889u,
  6061u,
  5889u,
  6013u,
  6086u,
  5936u,
  5959u,
  6020u,
  6004u,
  5939u,
  6122u,
  6152u,
  6067u,
  5973u,
  5956u,
  5967u,
  6068u
 };

static const UType JSum_8_17_20_15[]=
 {
  5926u,
  6228u,
  6013u,
  6042u,
  6032u,
  5976u,
  5962u,
  6072u,
  6022u,
  6032u,
  6038u,
  5972u,
  5854u,
  6008u,
  6010u,
  5948u,
  5966u
 };

static const PtrLen<const UType> JTable_8_17_20[]=
 {
  Range(JSum_8_17_20_1),
  Range(JSum_8_17_20_2),
  Range(JSum_8_17_20_3),
  Range(JSum_8_17_20_4),
  Range(JSum_8_17_20_5),
  Range(JSum_8_17_20_6),
  Range(JSum_8_17_20_7),
  Range(JSum_8_17_20_8),
  Range(JSum_8_17_20_9),
  Range(JSum_8_17_20_10),
  Range(JSum_8_17_20_11),
  Range(JSum_8_17_20_12),
  Range(JSum_8_17_20_13),
  Range(JSum_8_17_20_14),
  Range(JSum_8_17_20_15)
 };

static const UType JSum_8_17_21_1[]=
 {
  6174u,
  6246u,
  6162u,
  6301u,
  6424u,
  6316u,
  6380u,
  6154u,
  6348u,
  6318u,
  6202u,
  6202u,
  6328u,
  6216u,
  6232u,
  6286u,
  6300u
 };

static const UType JSum_8_17_21_2[]=
 {
  6283u,
  6225u,
  6334u,
  6394u,
  6232u,
  6444u,
  6207u,
  6226u,
  6191u,
  6328u,
  6376u,
  6238u,
  6165u,
  6273u,
  6243u,
  6189u,
  6241u
 };

static const UType JSum_8_17_21_3[]=
 {
  6286u,
  6283u,
  6380u,
  6171u,
  6218u,
  6196u,
  6260u,
  6264u,
  6265u,
  6287u,
  6239u,
  6477u,
  6271u,
  6271u,
  6353u,
  6228u,
  6140u
 };

static const UType JSum_8_17_21_4[]=
 {
  6286u,
  6271u,
  6287u,
  6196u,
  6283u,
  6353u,
  6239u,
  6260u,
  6380u,
  6228u,
  6477u,
  6264u,
  6171u,
  6140u,
  6271u,
  6265u,
  6218u
 };

static const UType JSum_8_17_21_5[]=
 {
  6283u,
  6243u,
  6238u,
  6191u,
  6444u,
  6334u,
  6241u,
  6273u,
  6376u,
  6226u,
  6232u,
  6225u,
  6189u,
  6165u,
  6328u,
  6207u,
  6394u
 };

static const UType JSum_8_17_21_6[]=
 {
  6286u,
  6171u,
  6260u,
  6287u,
  6271u,
  6228u,
  6283u,
  6218u,
  6264u,
  6239u,
  6271u,
  6140u,
  6380u,
  6196u,
  6265u,
  6477u,
  6353u
 };

static const UType JSum_8_17_21_7[]=
 {
  6283u,
  6334u,
  6232u,
  6207u,
  6191u,
  6376u,
  6165u,
  6243u,
  6241u,
  6225u,
  6394u,
  6444u,
  6226u,
  6328u,
  6238u,
  6273u,
  6189u
 };

static const UType JSum_8_17_21_8[]=
 {
  6174u,
  6286u,
  6216u,
  6202u,
  6318u,
  6154u,
  6316u,
  6301u,
  6246u,
  6300u,
  6232u,
  6328u,
  6202u,
  6348u,
  6380u,
  6424u,
  6162u
 };

static const UType JSum_8_17_21_9[]=
 {
  6283u,
  6334u,
  6232u,
  6207u,
  6191u,
  6376u,
  6165u,
  6243u,
  6241u,
  6225u,
  6394u,
  6444u,
  6226u,
  6328u,
  6238u,
  6273u,
  6189u
 };

static const UType JSum_8_17_21_10[]=
 {
  6286u,
  6171u,
  6260u,
  6287u,
  6271u,
  6228u,
  6283u,
  6218u,
  6264u,
  6239u,
  6271u,
  6140u,
  6380u,
  6196u,
  6265u,
  6477u,
  6353u
 };

static const UType JSum_8_17_21_11[]=
 {
  6283u,
  6243u,
  6238u,
  6191u,
  6444u,
  6334u,
  6241u,
  6273u,
  6376u,
  6226u,
  6232u,
  6225u,
  6189u,
  6165u,
  6328u,
  6207u,
  6394u
 };

static const UType JSum_8_17_21_12[]=
 {
  6286u,
  6271u,
  6287u,
  6196u,
  6283u,
  6353u,
  6239u,
  6260u,
  6380u,
  6228u,
  6477u,
  6264u,
  6171u,
  6140u,
  6271u,
  6265u,
  6218u
 };

static const UType JSum_8_17_21_13[]=
 {
  6286u,
  6283u,
  6380u,
  6171u,
  6218u,
  6196u,
  6260u,
  6264u,
  6265u,
  6287u,
  6239u,
  6477u,
  6271u,
  6271u,
  6353u,
  6228u,
  6140u
 };

static const UType JSum_8_17_21_14[]=
 {
  6283u,
  6225u,
  6334u,
  6394u,
  6232u,
  6444u,
  6207u,
  6226u,
  6191u,
  6328u,
  6376u,
  6238u,
  6165u,
  6273u,
  6243u,
  6189u,
  6241u
 };

static const UType JSum_8_17_21_15[]=
 {
  6174u,
  6246u,
  6162u,
  6301u,
  6424u,
  6316u,
  6380u,
  6154u,
  6348u,
  6318u,
  6202u,
  6202u,
  6328u,
  6216u,
  6232u,
  6286u,
  6300u
 };

static const PtrLen<const UType> JTable_8_17_21[]=
 {
  Range(JSum_8_17_21_1),
  Range(JSum_8_17_21_2),
  Range(JSum_8_17_21_3),
  Range(JSum_8_17_21_4),
  Range(JSum_8_17_21_5),
  Range(JSum_8_17_21_6),
  Range(JSum_8_17_21_7),
  Range(JSum_8_17_21_8),
  Range(JSum_8_17_21_9),
  Range(JSum_8_17_21_10),
  Range(JSum_8_17_21_11),
  Range(JSum_8_17_21_12),
  Range(JSum_8_17_21_13),
  Range(JSum_8_17_21_14),
  Range(JSum_8_17_21_15)
 };

static const UType JSum_8_17_22_1[]=
 {
  6542u,
  6600u,
  6786u,
  6442u,
  6570u,
  6500u,
  6500u,
  6494u,
  6618u,
  6608u,
  6600u,
  6596u,
  6506u,
  6540u,
  6658u,
  6641u,
  6624u
 };

static const UType JSum_8_17_22_2[]=
 {
  6576u,
  6553u,
  6666u,
  6676u,
  6356u,
  6528u,
  6490u,
  6580u,
  6576u,
  6598u,
  6660u,
  6622u,
  6490u,
  6676u,
  6582u,
  6614u,
  6582u
 };

static const UType JSum_8_17_22_3[]=
 {
  6624u,
  6508u,
  6610u,
  6682u,
  6736u,
  6566u,
  6522u,
  6584u,
  6516u,
  6478u,
  6713u,
  6484u,
  6630u,
  6526u,
  6488u,
  6536u,
  6622u
 };

static const UType JSum_8_17_22_4[]=
 {
  6624u,
  6526u,
  6478u,
  6566u,
  6508u,
  6488u,
  6713u,
  6522u,
  6610u,
  6536u,
  6484u,
  6584u,
  6682u,
  6622u,
  6630u,
  6516u,
  6736u
 };

static const UType JSum_8_17_22_5[]=
 {
  6576u,
  6582u,
  6622u,
  6576u,
  6528u,
  6666u,
  6582u,
  6676u,
  6660u,
  6580u,
  6356u,
  6553u,
  6614u,
  6490u,
  6598u,
  6490u,
  6676u
 };

static const UType JSum_8_17_22_6[]=
 {
  6624u,
  6682u,
  6522u,
  6478u,
  6630u,
  6536u,
  6508u,
  6736u,
  6584u,
  6713u,
  6526u,
  6622u,
  6610u,
  6566u,
  6516u,
  6484u,
  6488u
 };

static const UType JSum_8_17_22_7[]=
 {
  6576u,
  6666u,
  6356u,
  6490u,
  6576u,
  6660u,
  6490u,
  6582u,
  6582u,
  6553u,
  6676u,
  6528u,
  6580u,
  6598u,
  6622u,
  6676u,
  6614u
 };

static const UType JSum_8_17_22_8[]=
 {
  6542u,
  6641u,
  6540u,
  6596u,
  6608u,
  6494u,
  6500u,
  6442u,
  6600u,
  6624u,
  6658u,
  6506u,
  6600u,
  6618u,
  6500u,
  6570u,
  6786u
 };

static const UType JSum_8_17_22_9[]=
 {
  6576u,
  6666u,
  6356u,
  6490u,
  6576u,
  6660u,
  6490u,
  6582u,
  6582u,
  6553u,
  6676u,
  6528u,
  6580u,
  6598u,
  6622u,
  6676u,
  6614u
 };

static const UType JSum_8_17_22_10[]=
 {
  6624u,
  6682u,
  6522u,
  6478u,
  6630u,
  6536u,
  6508u,
  6736u,
  6584u,
  6713u,
  6526u,
  6622u,
  6610u,
  6566u,
  6516u,
  6484u,
  6488u
 };

static const UType JSum_8_17_22_11[]=
 {
  6576u,
  6582u,
  6622u,
  6576u,
  6528u,
  6666u,
  6582u,
  6676u,
  6660u,
  6580u,
  6356u,
  6553u,
  6614u,
  6490u,
  6598u,
  6490u,
  6676u
 };

static const UType JSum_8_17_22_12[]=
 {
  6624u,
  6526u,
  6478u,
  6566u,
  6508u,
  6488u,
  6713u,
  6522u,
  6610u,
  6536u,
  6484u,
  6584u,
  6682u,
  6622u,
  6630u,
  6516u,
  6736u
 };

static const UType JSum_8_17_22_13[]=
 {
  6624u,
  6508u,
  6610u,
  6682u,
  6736u,
  6566u,
  6522u,
  6584u,
  6516u,
  6478u,
  6713u,
  6484u,
  6630u,
  6526u,
  6488u,
  6536u,
  6622u
 };

static const UType JSum_8_17_22_14[]=
 {
  6576u,
  6553u,
  6666u,
  6676u,
  6356u,
  6528u,
  6490u,
  6580u,
  6576u,
  6598u,
  6660u,
  6622u,
  6490u,
  6676u,
  6582u,
  6614u,
  6582u
 };

static const UType JSum_8_17_22_15[]=
 {
  6542u,
  6600u,
  6786u,
  6442u,
  6570u,
  6500u,
  6500u,
  6494u,
  6618u,
  6608u,
  6600u,
  6596u,
  6506u,
  6540u,
  6658u,
  6641u,
  6624u
 };

static const PtrLen<const UType> JTable_8_17_22[]=
 {
  Range(JSum_8_17_22_1),
  Range(JSum_8_17_22_2),
  Range(JSum_8_17_22_3),
  Range(JSum_8_17_22_4),
  Range(JSum_8_17_22_5),
  Range(JSum_8_17_22_6),
  Range(JSum_8_17_22_7),
  Range(JSum_8_17_22_8),
  Range(JSum_8_17_22_9),
  Range(JSum_8_17_22_10),
  Range(JSum_8_17_22_11),
  Range(JSum_8_17_22_12),
  Range(JSum_8_17_22_13),
  Range(JSum_8_17_22_14),
  Range(JSum_8_17_22_15)
 };

static const UType JSum_8_17_23_1[]=
 {
  20960u,
  20904u,
  20984u,
  20966u,
  20956u,
  21034u,
  20928u,
  21030u,
  20792u,
  21002u,
  20936u,
  21326u,
  20806u,
  20654u,
  20934u,
  20785u,
  20812u
 };

static const UType JSum_8_17_23_2[]=
 {
  20994u,
  20905u,
  20816u,
  20930u,
  21132u,
  20650u,
  21080u,
  20956u,
  20962u,
  20932u,
  20926u,
  21084u,
  21162u,
  20930u,
  20900u,
  20650u,
  20800u
 };

static const UType JSum_8_17_23_3[]=
 {
  20916u,
  20900u,
  21006u,
  21014u,
  21182u,
  21102u,
  20688u,
  20762u,
  20976u,
  20792u,
  20873u,
  20950u,
  20886u,
  21040u,
  20670u,
  21116u,
  20936u
 };

static const UType JSum_8_17_23_4[]=
 {
  20916u,
  21040u,
  20792u,
  21102u,
  20900u,
  20670u,
  20873u,
  20688u,
  21006u,
  21116u,
  20950u,
  20762u,
  21014u,
  20936u,
  20886u,
  20976u,
  21182u
 };

static const UType JSum_8_17_23_5[]=
 {
  20994u,
  20900u,
  21084u,
  20962u,
  20650u,
  20816u,
  20800u,
  20930u,
  20926u,
  20956u,
  21132u,
  20905u,
  20650u,
  21162u,
  20932u,
  21080u,
  20930u
 };

static const UType JSum_8_17_23_6[]=
 {
  20916u,
  21014u,
  20688u,
  20792u,
  20886u,
  21116u,
  20900u,
  21182u,
  20762u,
  20873u,
  21040u,
  20936u,
  21006u,
  21102u,
  20976u,
  20950u,
  20670u
 };

static const UType JSum_8_17_23_7[]=
 {
  20994u,
  20816u,
  21132u,
  21080u,
  20962u,
  20926u,
  21162u,
  20900u,
  20800u,
  20905u,
  20930u,
  20650u,
  20956u,
  20932u,
  21084u,
  20930u,
  20650u
 };

static const UType JSum_8_17_23_8[]=
 {
  20960u,
  20785u,
  20654u,
  21326u,
  21002u,
  21030u,
  21034u,
  20966u,
  20904u,
  20812u,
  20934u,
  20806u,
  20936u,
  20792u,
  20928u,
  20956u,
  20984u
 };

static const UType JSum_8_17_23_9[]=
 {
  20994u,
  20816u,
  21132u,
  21080u,
  20962u,
  20926u,
  21162u,
  20900u,
  20800u,
  20905u,
  20930u,
  20650u,
  20956u,
  20932u,
  21084u,
  20930u,
  20650u
 };

static const UType JSum_8_17_23_10[]=
 {
  20916u,
  21014u,
  20688u,
  20792u,
  20886u,
  21116u,
  20900u,
  21182u,
  20762u,
  20873u,
  21040u,
  20936u,
  21006u,
  21102u,
  20976u,
  20950u,
  20670u
 };

static const UType JSum_8_17_23_11[]=
 {
  20994u,
  20900u,
  21084u,
  20962u,
  20650u,
  20816u,
  20800u,
  20930u,
  20926u,
  20956u,
  21132u,
  20905u,
  20650u,
  21162u,
  20932u,
  21080u,
  20930u
 };

static const UType JSum_8_17_23_12[]=
 {
  20916u,
  21040u,
  20792u,
  21102u,
  20900u,
  20670u,
  20873u,
  20688u,
  21006u,
  21116u,
  20950u,
  20762u,
  21014u,
  20936u,
  20886u,
  20976u,
  21182u
 };

static const UType JSum_8_17_23_13[]=
 {
  20916u,
  20900u,
  21006u,
  21014u,
  21182u,
  21102u,
  20688u,
  20762u,
  20976u,
  20792u,
  20873u,
  20950u,
  20886u,
  21040u,
  20670u,
  21116u,
  20936u
 };

static const UType JSum_8_17_23_14[]=
 {
  20994u,
  20905u,
  20816u,
  20930u,
  21132u,
  20650u,
  21080u,
  20956u,
  20962u,
  20932u,
  20926u,
  21084u,
  21162u,
  20930u,
  20900u,
  20650u,
  20800u
 };

static const UType JSum_8_17_23_15[]=
 {
  20960u,
  20904u,
  20984u,
  20966u,
  20956u,
  21034u,
  20928u,
  21030u,
  20792u,
  21002u,
  20936u,
  21326u,
  20806u,
  20654u,
  20934u,
  20785u,
  20812u
 };

static const PtrLen<const UType> JTable_8_17_23[]=
 {
  Range(JSum_8_17_23_1),
  Range(JSum_8_17_23_2),
  Range(JSum_8_17_23_3),
  Range(JSum_8_17_23_4),
  Range(JSum_8_17_23_5),
  Range(JSum_8_17_23_6),
  Range(JSum_8_17_23_7),
  Range(JSum_8_17_23_8),
  Range(JSum_8_17_23_9),
  Range(JSum_8_17_23_10),
  Range(JSum_8_17_23_11),
  Range(JSum_8_17_23_12),
  Range(JSum_8_17_23_13),
  Range(JSum_8_17_23_14),
  Range(JSum_8_17_23_15)
 };

static const UType JSum_8_17_24_1[]=
 {
  27274u,
  26844u,
  27158u,
  27268u,
  27426u,
  27378u,
  27080u,
  27148u,
  27472u,
  27034u,
  27049u,
  27120u,
  27106u,
  27086u,
  27206u,
  27272u,
  26968u
 };

static const UType JSum_8_17_24_2[]=
 {
  27140u,
  27287u,
  27331u,
  27066u,
  26964u,
  27365u,
  27103u,
  26988u,
  26951u,
  27260u,
  26929u,
  27328u,
  27334u,
  27308u,
  27375u,
  26975u,
  27185u
 };

static const UType JSum_8_17_24_3[]=
 {
  27142u,
  27198u,
  27604u,
  27253u,
  26930u,
  27103u,
  27022u,
  27317u,
  27097u,
  27248u,
  26958u,
  27199u,
  27065u,
  27138u,
  27123u,
  27089u,
  27403u
 };

static const UType JSum_8_17_24_4[]=
 {
  27142u,
  27138u,
  27248u,
  27103u,
  27198u,
  27123u,
  26958u,
  27022u,
  27604u,
  27089u,
  27199u,
  27317u,
  27253u,
  27403u,
  27065u,
  27097u,
  26930u
 };

static const UType JSum_8_17_24_5[]=
 {
  27140u,
  27375u,
  27328u,
  26951u,
  27365u,
  27331u,
  27185u,
  27308u,
  26929u,
  26988u,
  26964u,
  27287u,
  26975u,
  27334u,
  27260u,
  27103u,
  27066u
 };

static const UType JSum_8_17_24_6[]=
 {
  27142u,
  27253u,
  27022u,
  27248u,
  27065u,
  27089u,
  27198u,
  26930u,
  27317u,
  26958u,
  27138u,
  27403u,
  27604u,
  27103u,
  27097u,
  27199u,
  27123u
 };

static const UType JSum_8_17_24_7[]=
 {
  27140u,
  27331u,
  26964u,
  27103u,
  26951u,
  26929u,
  27334u,
  27375u,
  27185u,
  27287u,
  27066u,
  27365u,
  26988u,
  27260u,
  27328u,
  27308u,
  26975u
 };

static const UType JSum_8_17_24_8[]=
 {
  27274u,
  27272u,
  27086u,
  27120u,
  27034u,
  27148u,
  27378u,
  27268u,
  26844u,
  26968u,
  27206u,
  27106u,
  27049u,
  27472u,
  27080u,
  27426u,
  27158u
 };

static const UType JSum_8_17_24_9[]=
 {
  27140u,
  27331u,
  26964u,
  27103u,
  26951u,
  26929u,
  27334u,
  27375u,
  27185u,
  27287u,
  27066u,
  27365u,
  26988u,
  27260u,
  27328u,
  27308u,
  26975u
 };

static const UType JSum_8_17_24_10[]=
 {
  27142u,
  27253u,
  27022u,
  27248u,
  27065u,
  27089u,
  27198u,
  26930u,
  27317u,
  26958u,
  27138u,
  27403u,
  27604u,
  27103u,
  27097u,
  27199u,
  27123u
 };

static const UType JSum_8_17_24_11[]=
 {
  27140u,
  27375u,
  27328u,
  26951u,
  27365u,
  27331u,
  27185u,
  27308u,
  26929u,
  26988u,
  26964u,
  27287u,
  26975u,
  27334u,
  27260u,
  27103u,
  27066u
 };

static const UType JSum_8_17_24_12[]=
 {
  27142u,
  27138u,
  27248u,
  27103u,
  27198u,
  27123u,
  26958u,
  27022u,
  27604u,
  27089u,
  27199u,
  27317u,
  27253u,
  27403u,
  27065u,
  27097u,
  26930u
 };

static const UType JSum_8_17_24_13[]=
 {
  27142u,
  27198u,
  27604u,
  27253u,
  26930u,
  27103u,
  27022u,
  27317u,
  27097u,
  27248u,
  26958u,
  27199u,
  27065u,
  27138u,
  27123u,
  27089u,
  27403u
 };

static const UType JSum_8_17_24_14[]=
 {
  27140u,
  27287u,
  27331u,
  27066u,
  26964u,
  27365u,
  27103u,
  26988u,
  26951u,
  27260u,
  26929u,
  27328u,
  27334u,
  27308u,
  27375u,
  26975u,
  27185u
 };

static const UType JSum_8_17_24_15[]=
 {
  27274u,
  26844u,
  27158u,
  27268u,
  27426u,
  27378u,
  27080u,
  27148u,
  27472u,
  27034u,
  27049u,
  27120u,
  27106u,
  27086u,
  27206u,
  27272u,
  26968u
 };

static const PtrLen<const UType> JTable_8_17_24[]=
 {
  Range(JSum_8_17_24_1),
  Range(JSum_8_17_24_2),
  Range(JSum_8_17_24_3),
  Range(JSum_8_17_24_4),
  Range(JSum_8_17_24_5),
  Range(JSum_8_17_24_6),
  Range(JSum_8_17_24_7),
  Range(JSum_8_17_24_8),
  Range(JSum_8_17_24_9),
  Range(JSum_8_17_24_10),
  Range(JSum_8_17_24_11),
  Range(JSum_8_17_24_12),
  Range(JSum_8_17_24_13),
  Range(JSum_8_17_24_14),
  Range(JSum_8_17_24_15)
 };

static const UType JSum_8_17_25_1[]=
 {
  30320u,
  30766u,
  30744u,
  30678u,
  30645u,
  30800u,
  30534u,
  30324u,
  30466u,
  30408u,
  30562u,
  30858u,
  30484u,
  30394u,
  30664u,
  30556u,
  30826u
 };

static const UType JSum_8_17_25_2[]=
 {
  30455u,
  30419u,
  30704u,
  30737u,
  30716u,
  30453u,
  30560u,
  30606u,
  30692u,
  30618u,
  30747u,
  30736u,
  30711u,
  30201u,
  30843u,
  30524u,
  30307u
 };

static const UType JSum_8_17_25_3[]=
 {
  30573u,
  30602u,
  30745u,
  30492u,
  30582u,
  30604u,
  30826u,
  30505u,
  30160u,
  30425u,
  30660u,
  30401u,
  30927u,
  30513u,
  30674u,
  30677u,
  30663u
 };

static const UType JSum_8_17_25_4[]=
 {
  30573u,
  30513u,
  30425u,
  30604u,
  30602u,
  30674u,
  30660u,
  30826u,
  30745u,
  30677u,
  30401u,
  30505u,
  30492u,
  30663u,
  30927u,
  30160u,
  30582u
 };

static const UType JSum_8_17_25_5[]=
 {
  30455u,
  30843u,
  30736u,
  30692u,
  30453u,
  30704u,
  30307u,
  30201u,
  30747u,
  30606u,
  30716u,
  30419u,
  30524u,
  30711u,
  30618u,
  30560u,
  30737u
 };

static const UType JSum_8_17_25_6[]=
 {
  30573u,
  30492u,
  30826u,
  30425u,
  30927u,
  30677u,
  30602u,
  30582u,
  30505u,
  30660u,
  30513u,
  30663u,
  30745u,
  30604u,
  30160u,
  30401u,
  30674u
 };

static const UType JSum_8_17_25_7[]=
 {
  30455u,
  30704u,
  30716u,
  30560u,
  30692u,
  30747u,
  30711u,
  30843u,
  30307u,
  30419u,
  30737u,
  30453u,
  30606u,
  30618u,
  30736u,
  30201u,
  30524u
 };

static const UType JSum_8_17_25_8[]=
 {
  30320u,
  30556u,
  30394u,
  30858u,
  30408u,
  30324u,
  30800u,
  30678u,
  30766u,
  30826u,
  30664u,
  30484u,
  30562u,
  30466u,
  30534u,
  30645u,
  30744u
 };

static const UType JSum_8_17_25_9[]=
 {
  30455u,
  30704u,
  30716u,
  30560u,
  30692u,
  30747u,
  30711u,
  30843u,
  30307u,
  30419u,
  30737u,
  30453u,
  30606u,
  30618u,
  30736u,
  30201u,
  30524u
 };

static const UType JSum_8_17_25_10[]=
 {
  30573u,
  30492u,
  30826u,
  30425u,
  30927u,
  30677u,
  30602u,
  30582u,
  30505u,
  30660u,
  30513u,
  30663u,
  30745u,
  30604u,
  30160u,
  30401u,
  30674u
 };

static const UType JSum_8_17_25_11[]=
 {
  30455u,
  30843u,
  30736u,
  30692u,
  30453u,
  30704u,
  30307u,
  30201u,
  30747u,
  30606u,
  30716u,
  30419u,
  30524u,
  30711u,
  30618u,
  30560u,
  30737u
 };

static const UType JSum_8_17_25_12[]=
 {
  30573u,
  30513u,
  30425u,
  30604u,
  30602u,
  30674u,
  30660u,
  30826u,
  30745u,
  30677u,
  30401u,
  30505u,
  30492u,
  30663u,
  30927u,
  30160u,
  30582u
 };

static const UType JSum_8_17_25_13[]=
 {
  30573u,
  30602u,
  30745u,
  30492u,
  30582u,
  30604u,
  30826u,
  30505u,
  30160u,
  30425u,
  30660u,
  30401u,
  30927u,
  30513u,
  30674u,
  30677u,
  30663u
 };

static const UType JSum_8_17_25_14[]=
 {
  30455u,
  30419u,
  30704u,
  30737u,
  30716u,
  30453u,
  30560u,
  30606u,
  30692u,
  30618u,
  30747u,
  30736u,
  30711u,
  30201u,
  30843u,
  30524u,
  30307u
 };

static const UType JSum_8_17_25_15[]=
 {
  30320u,
  30766u,
  30744u,
  30678u,
  30645u,
  30800u,
  30534u,
  30324u,
  30466u,
  30408u,
  30562u,
  30858u,
  30484u,
  30394u,
  30664u,
  30556u,
  30826u
 };

static const PtrLen<const UType> JTable_8_17_25[]=
 {
  Range(JSum_8_17_25_1),
  Range(JSum_8_17_25_2),
  Range(JSum_8_17_25_3),
  Range(JSum_8_17_25_4),
  Range(JSum_8_17_25_5),
  Range(JSum_8_17_25_6),
  Range(JSum_8_17_25_7),
  Range(JSum_8_17_25_8),
  Range(JSum_8_17_25_9),
  Range(JSum_8_17_25_10),
  Range(JSum_8_17_25_11),
  Range(JSum_8_17_25_12),
  Range(JSum_8_17_25_13),
  Range(JSum_8_17_25_14),
  Range(JSum_8_17_25_15)
 };

static const UType JSum_8_17_26_1[]=
 {
  45820u,
  46008u,
  46138u,
  46048u,
  45944u,
  46349u,
  46002u,
  45986u,
  45920u,
  46298u,
  46102u,
  46508u,
  46106u,
  45564u,
  46122u,
  45884u,
  45982u
 };

static const UType JSum_8_17_26_2[]=
 {
  46249u,
  45811u,
  46029u,
  46270u,
  45934u,
  45995u,
  46622u,
  46239u,
  46046u,
  45758u,
  45955u,
  45939u,
  46059u,
  46048u,
  45862u,
  46157u,
  45808u
 };

static const UType JSum_8_17_26_3[]=
 {
  46017u,
  45888u,
  46244u,
  45791u,
  46215u,
  45921u,
  46138u,
  46134u,
  45923u,
  46578u,
  46371u,
  45828u,
  45778u,
  46023u,
  45903u,
  46025u,
  46004u
 };

static const UType JSum_8_17_26_4[]=
 {
  46017u,
  46023u,
  46578u,
  45921u,
  45888u,
  45903u,
  46371u,
  46138u,
  46244u,
  46025u,
  45828u,
  46134u,
  45791u,
  46004u,
  45778u,
  45923u,
  46215u
 };

static const UType JSum_8_17_26_5[]=
 {
  46249u,
  45862u,
  45939u,
  46046u,
  45995u,
  46029u,
  45808u,
  46048u,
  45955u,
  46239u,
  45934u,
  45811u,
  46157u,
  46059u,
  45758u,
  46622u,
  46270u
 };

static const UType JSum_8_17_26_6[]=
 {
  46017u,
  45791u,
  46138u,
  46578u,
  45778u,
  46025u,
  45888u,
  46215u,
  46134u,
  46371u,
  46023u,
  46004u,
  46244u,
  45921u,
  45923u,
  45828u,
  45903u
 };

static const UType JSum_8_17_26_7[]=
 {
  46249u,
  46029u,
  45934u,
  46622u,
  46046u,
  45955u,
  46059u,
  45862u,
  45808u,
  45811u,
  46270u,
  45995u,
  46239u,
  45758u,
  45939u,
  46048u,
  46157u
 };

static const UType JSum_8_17_26_8[]=
 {
  45820u,
  45884u,
  45564u,
  46508u,
  46298u,
  45986u,
  46349u,
  46048u,
  46008u,
  45982u,
  46122u,
  46106u,
  46102u,
  45920u,
  46002u,
  45944u,
  46138u
 };

static const UType JSum_8_17_26_9[]=
 {
  46249u,
  46029u,
  45934u,
  46622u,
  46046u,
  45955u,
  46059u,
  45862u,
  45808u,
  45811u,
  46270u,
  45995u,
  46239u,
  45758u,
  45939u,
  46048u,
  46157u
 };

static const UType JSum_8_17_26_10[]=
 {
  46017u,
  45791u,
  46138u,
  46578u,
  45778u,
  46025u,
  45888u,
  46215u,
  46134u,
  46371u,
  46023u,
  46004u,
  46244u,
  45921u,
  45923u,
  45828u,
  45903u
 };

static const UType JSum_8_17_26_11[]=
 {
  46249u,
  45862u,
  45939u,
  46046u,
  45995u,
  46029u,
  45808u,
  46048u,
  45955u,
  46239u,
  45934u,
  45811u,
  46157u,
  46059u,
  45758u,
  46622u,
  46270u
 };

static const UType JSum_8_17_26_12[]=
 {
  46017u,
  46023u,
  46578u,
  45921u,
  45888u,
  45903u,
  46371u,
  46138u,
  46244u,
  46025u,
  45828u,
  46134u,
  45791u,
  46004u,
  45778u,
  45923u,
  46215u
 };

static const UType JSum_8_17_26_13[]=
 {
  46017u,
  45888u,
  46244u,
  45791u,
  46215u,
  45921u,
  46138u,
  46134u,
  45923u,
  46578u,
  46371u,
  45828u,
  45778u,
  46023u,
  45903u,
  46025u,
  46004u
 };

static const UType JSum_8_17_26_14[]=
 {
  46249u,
  45811u,
  46029u,
  46270u,
  45934u,
  45995u,
  46622u,
  46239u,
  46046u,
  45758u,
  45955u,
  45939u,
  46059u,
  46048u,
  45862u,
  46157u,
  45808u
 };

static const UType JSum_8_17_26_15[]=
 {
  45820u,
  46008u,
  46138u,
  46048u,
  45944u,
  46349u,
  46002u,
  45986u,
  45920u,
  46298u,
  46102u,
  46508u,
  46106u,
  45564u,
  46122u,
  45884u,
  45982u
 };

static const PtrLen<const UType> JTable_8_17_26[]=
 {
  Range(JSum_8_17_26_1),
  Range(JSum_8_17_26_2),
  Range(JSum_8_17_26_3),
  Range(JSum_8_17_26_4),
  Range(JSum_8_17_26_5),
  Range(JSum_8_17_26_6),
  Range(JSum_8_17_26_7),
  Range(JSum_8_17_26_8),
  Range(JSum_8_17_26_9),
  Range(JSum_8_17_26_10),
  Range(JSum_8_17_26_11),
  Range(JSum_8_17_26_12),
  Range(JSum_8_17_26_13),
  Range(JSum_8_17_26_14),
  Range(JSum_8_17_26_15)
 };

static const UType JSum_8_17_27_1[]=
 {
  53290u,
  52926u,
  53246u,
  52834u,
  53164u,
  52934u,
  53332u,
  53278u,
  53476u,
  53366u,
  53108u,
  53024u,
  52780u,
  53396u,
  53260u,
  52705u,
  53090u
 };

static const UType JSum_8_17_27_2[]=
 {
  53041u,
  53500u,
  52979u,
  52888u,
  53026u,
  53087u,
  53265u,
  52837u,
  53138u,
  53239u,
  53206u,
  53558u,
  53377u,
  52901u,
  53387u,
  52814u,
  52966u
 };

static const UType JSum_8_17_27_3[]=
 {
  53436u,
  52696u,
  53071u,
  52808u,
  53127u,
  52855u,
  53303u,
  53316u,
  53202u,
  52855u,
  53024u,
  53353u,
  53220u,
  53246u,
  53343u,
  52945u,
  53409u
 };

static const UType JSum_8_17_27_4[]=
 {
  53436u,
  53246u,
  52855u,
  52855u,
  52696u,
  53343u,
  53024u,
  53303u,
  53071u,
  52945u,
  53353u,
  53316u,
  52808u,
  53409u,
  53220u,
  53202u,
  53127u
 };

static const UType JSum_8_17_27_5[]=
 {
  53041u,
  53387u,
  53558u,
  53138u,
  53087u,
  52979u,
  52966u,
  52901u,
  53206u,
  52837u,
  53026u,
  53500u,
  52814u,
  53377u,
  53239u,
  53265u,
  52888u
 };

static const UType JSum_8_17_27_6[]=
 {
  53436u,
  52808u,
  53303u,
  52855u,
  53220u,
  52945u,
  52696u,
  53127u,
  53316u,
  53024u,
  53246u,
  53409u,
  53071u,
  52855u,
  53202u,
  53353u,
  53343u
 };

static const UType JSum_8_17_27_7[]=
 {
  53041u,
  52979u,
  53026u,
  53265u,
  53138u,
  53206u,
  53377u,
  53387u,
  52966u,
  53500u,
  52888u,
  53087u,
  52837u,
  53239u,
  53558u,
  52901u,
  52814u
 };

static const UType JSum_8_17_27_8[]=
 {
  53290u,
  52705u,
  53396u,
  53024u,
  53366u,
  53278u,
  52934u,
  52834u,
  52926u,
  53090u,
  53260u,
  52780u,
  53108u,
  53476u,
  53332u,
  53164u,
  53246u
 };

static const UType JSum_8_17_27_9[]=
 {
  53041u,
  52979u,
  53026u,
  53265u,
  53138u,
  53206u,
  53377u,
  53387u,
  52966u,
  53500u,
  52888u,
  53087u,
  52837u,
  53239u,
  53558u,
  52901u,
  52814u
 };

static const UType JSum_8_17_27_10[]=
 {
  53436u,
  52808u,
  53303u,
  52855u,
  53220u,
  52945u,
  52696u,
  53127u,
  53316u,
  53024u,
  53246u,
  53409u,
  53071u,
  52855u,
  53202u,
  53353u,
  53343u
 };

static const UType JSum_8_17_27_11[]=
 {
  53041u,
  53387u,
  53558u,
  53138u,
  53087u,
  52979u,
  52966u,
  52901u,
  53206u,
  52837u,
  53026u,
  53500u,
  52814u,
  53377u,
  53239u,
  53265u,
  52888u
 };

static const UType JSum_8_17_27_12[]=
 {
  53436u,
  53246u,
  52855u,
  52855u,
  52696u,
  53343u,
  53024u,
  53303u,
  53071u,
  52945u,
  53353u,
  53316u,
  52808u,
  53409u,
  53220u,
  53202u,
  53127u
 };

static const UType JSum_8_17_27_13[]=
 {
  53436u,
  52696u,
  53071u,
  52808u,
  53127u,
  52855u,
  53303u,
  53316u,
  53202u,
  52855u,
  53024u,
  53353u,
  53220u,
  53246u,
  53343u,
  52945u,
  53409u
 };

static const UType JSum_8_17_27_14[]=
 {
  53041u,
  53500u,
  52979u,
  52888u,
  53026u,
  53087u,
  53265u,
  52837u,
  53138u,
  53239u,
  53206u,
  53558u,
  53377u,
  52901u,
  53387u,
  52814u,
  52966u
 };

static const UType JSum_8_17_27_15[]=
 {
  53290u,
  52926u,
  53246u,
  52834u,
  53164u,
  52934u,
  53332u,
  53278u,
  53476u,
  53366u,
  53108u,
  53024u,
  52780u,
  53396u,
  53260u,
  52705u,
  53090u
 };

static const PtrLen<const UType> JTable_8_17_27[]=
 {
  Range(JSum_8_17_27_1),
  Range(JSum_8_17_27_2),
  Range(JSum_8_17_27_3),
  Range(JSum_8_17_27_4),
  Range(JSum_8_17_27_5),
  Range(JSum_8_17_27_6),
  Range(JSum_8_17_27_7),
  Range(JSum_8_17_27_8),
  Range(JSum_8_17_27_9),
  Range(JSum_8_17_27_10),
  Range(JSum_8_17_27_11),
  Range(JSum_8_17_27_12),
  Range(JSum_8_17_27_13),
  Range(JSum_8_17_27_14),
  Range(JSum_8_17_27_15)
 };

static const UType JSum_8_17_28_1[]=
 {
  113842u,
  114356u,
  114554u,
  114650u,
  114254u,
  113944u,
  113832u,
  114218u,
  114190u,
  114228u,
  113792u,
  113996u,
  114558u,
  113284u,
  114244u,
  114057u,
  113938u
 };

static const UType JSum_8_17_28_2[]=
 {
  113942u,
  113966u,
  113865u,
  114451u,
  113852u,
  113910u,
  113923u,
  114476u,
  113711u,
  114425u,
  115019u,
  114109u,
  114298u,
  113685u,
  113974u,
  114166u,
  114165u
 };

static const UType JSum_8_17_28_3[]=
 {
  114007u,
  113909u,
  113961u,
  113837u,
  114218u,
  113773u,
  114496u,
  113866u,
  114015u,
  113827u,
  114136u,
  114034u,
  114219u,
  114328u,
  113676u,
  114809u,
  114826u
 };

static const UType JSum_8_17_28_4[]=
 {
  114007u,
  114328u,
  113827u,
  113773u,
  113909u,
  113676u,
  114136u,
  114496u,
  113961u,
  114809u,
  114034u,
  113866u,
  113837u,
  114826u,
  114219u,
  114015u,
  114218u
 };

static const UType JSum_8_17_28_5[]=
 {
  113942u,
  113974u,
  114109u,
  113711u,
  113910u,
  113865u,
  114165u,
  113685u,
  115019u,
  114476u,
  113852u,
  113966u,
  114166u,
  114298u,
  114425u,
  113923u,
  114451u
 };

static const UType JSum_8_17_28_6[]=
 {
  114007u,
  113837u,
  114496u,
  113827u,
  114219u,
  114809u,
  113909u,
  114218u,
  113866u,
  114136u,
  114328u,
  114826u,
  113961u,
  113773u,
  114015u,
  114034u,
  113676u
 };

static const UType JSum_8_17_28_7[]=
 {
  113942u,
  113865u,
  113852u,
  113923u,
  113711u,
  115019u,
  114298u,
  113974u,
  114165u,
  113966u,
  114451u,
  113910u,
  114476u,
  114425u,
  114109u,
  113685u,
  114166u
 };

static const UType JSum_8_17_28_8[]=
 {
  113842u,
  114057u,
  113284u,
  113996u,
  114228u,
  114218u,
  113944u,
  114650u,
  114356u,
  113938u,
  114244u,
  114558u,
  113792u,
  114190u,
  113832u,
  114254u,
  114554u
 };

static const UType JSum_8_17_28_9[]=
 {
  113942u,
  113865u,
  113852u,
  113923u,
  113711u,
  115019u,
  114298u,
  113974u,
  114165u,
  113966u,
  114451u,
  113910u,
  114476u,
  114425u,
  114109u,
  113685u,
  114166u
 };

static const UType JSum_8_17_28_10[]=
 {
  114007u,
  113837u,
  114496u,
  113827u,
  114219u,
  114809u,
  113909u,
  114218u,
  113866u,
  114136u,
  114328u,
  114826u,
  113961u,
  113773u,
  114015u,
  114034u,
  113676u
 };

static const UType JSum_8_17_28_11[]=
 {
  113942u,
  113974u,
  114109u,
  113711u,
  113910u,
  113865u,
  114165u,
  113685u,
  115019u,
  114476u,
  113852u,
  113966u,
  114166u,
  114298u,
  114425u,
  113923u,
  114451u
 };

static const UType JSum_8_17_28_12[]=
 {
  114007u,
  114328u,
  113827u,
  113773u,
  113909u,
  113676u,
  114136u,
  114496u,
  113961u,
  114809u,
  114034u,
  113866u,
  113837u,
  114826u,
  114219u,
  114015u,
  114218u
 };

static const UType JSum_8_17_28_13[]=
 {
  114007u,
  113909u,
  113961u,
  113837u,
  114218u,
  113773u,
  114496u,
  113866u,
  114015u,
  113827u,
  114136u,
  114034u,
  114219u,
  114328u,
  113676u,
  114809u,
  114826u
 };

static const UType JSum_8_17_28_14[]=
 {
  113942u,
  113966u,
  113865u,
  114451u,
  113852u,
  113910u,
  113923u,
  114476u,
  113711u,
  114425u,
  115019u,
  114109u,
  114298u,
  113685u,
  113974u,
  114166u,
  114165u
 };

static const UType JSum_8_17_28_15[]=
 {
  113842u,
  114356u,
  114554u,
  114650u,
  114254u,
  113944u,
  113832u,
  114218u,
  114190u,
  114228u,
  113792u,
  113996u,
  114558u,
  113284u,
  114244u,
  114057u,
  113938u
 };

static const PtrLen<const UType> JTable_8_17_28[]=
 {
  Range(JSum_8_17_28_1),
  Range(JSum_8_17_28_2),
  Range(JSum_8_17_28_3),
  Range(JSum_8_17_28_4),
  Range(JSum_8_17_28_5),
  Range(JSum_8_17_28_6),
  Range(JSum_8_17_28_7),
  Range(JSum_8_17_28_8),
  Range(JSum_8_17_28_9),
  Range(JSum_8_17_28_10),
  Range(JSum_8_17_28_11),
  Range(JSum_8_17_28_12),
  Range(JSum_8_17_28_13),
  Range(JSum_8_17_28_14),
  Range(JSum_8_17_28_15)
 };

static const UType JSum_8_17_29_1[]=
 {
  138472u,
  138236u,
  137736u,
  138764u,
  138364u,
  137990u,
  138116u,
  138054u,
  138562u,
  137514u,
  137734u,
  137554u,
  138356u,
  138164u,
  138633u,
  138238u,
  137858u
 };

static const UType JSum_8_17_29_2[]=
 {
  138309u,
  138725u,
  138359u,
  138193u,
  137536u,
  138081u,
  138844u,
  138102u,
  137957u,
  138305u,
  137590u,
  138122u,
  137811u,
  138086u,
  137650u,
  138593u,
  138082u
 };

static const UType JSum_8_17_29_3[]=
 {
  137495u,
  138400u,
  137766u,
  137955u,
  137896u,
  138623u,
  138115u,
  138021u,
  138737u,
  138114u,
  137793u,
  138352u,
  138094u,
  138613u,
  138696u,
  137790u,
  137885u
 };

static const UType JSum_8_17_29_4[]=
 {
  137495u,
  138613u,
  138114u,
  138623u,
  138400u,
  138696u,
  137793u,
  138115u,
  137766u,
  137790u,
  138352u,
  138021u,
  137955u,
  137885u,
  138094u,
  138737u,
  137896u
 };

static const UType JSum_8_17_29_5[]=
 {
  138309u,
  137650u,
  138122u,
  137957u,
  138081u,
  138359u,
  138082u,
  138086u,
  137590u,
  138102u,
  137536u,
  138725u,
  138593u,
  137811u,
  138305u,
  138844u,
  138193u
 };

static const UType JSum_8_17_29_6[]=
 {
  137495u,
  137955u,
  138115u,
  138114u,
  138094u,
  137790u,
  138400u,
  137896u,
  138021u,
  137793u,
  138613u,
  137885u,
  137766u,
  138623u,
  138737u,
  138352u,
  138696u
 };

static const UType JSum_8_17_29_7[]=
 {
  138309u,
  138359u,
  137536u,
  138844u,
  137957u,
  137590u,
  137811u,
  137650u,
  138082u,
  138725u,
  138193u,
  138081u,
  138102u,
  138305u,
  138122u,
  138086u,
  138593u
 };

static const UType JSum_8_17_29_8[]=
 {
  138472u,
  138238u,
  138164u,
  137554u,
  137514u,
  138054u,
  137990u,
  138764u,
  138236u,
  137858u,
  138633u,
  138356u,
  137734u,
  138562u,
  138116u,
  138364u,
  137736u
 };

static const UType JSum_8_17_29_9[]=
 {
  138309u,
  138359u,
  137536u,
  138844u,
  137957u,
  137590u,
  137811u,
  137650u,
  138082u,
  138725u,
  138193u,
  138081u,
  138102u,
  138305u,
  138122u,
  138086u,
  138593u
 };

static const UType JSum_8_17_29_10[]=
 {
  137495u,
  137955u,
  138115u,
  138114u,
  138094u,
  137790u,
  138400u,
  137896u,
  138021u,
  137793u,
  138613u,
  137885u,
  137766u,
  138623u,
  138737u,
  138352u,
  138696u
 };

static const UType JSum_8_17_29_11[]=
 {
  138309u,
  137650u,
  138122u,
  137957u,
  138081u,
  138359u,
  138082u,
  138086u,
  137590u,
  138102u,
  137536u,
  138725u,
  138593u,
  137811u,
  138305u,
  138844u,
  138193u
 };

static const UType JSum_8_17_29_12[]=
 {
  137495u,
  138613u,
  138114u,
  138623u,
  138400u,
  138696u,
  137793u,
  138115u,
  137766u,
  137790u,
  138352u,
  138021u,
  137955u,
  137885u,
  138094u,
  138737u,
  137896u
 };

static const UType JSum_8_17_29_13[]=
 {
  137495u,
  138400u,
  137766u,
  137955u,
  137896u,
  138623u,
  138115u,
  138021u,
  138737u,
  138114u,
  137793u,
  138352u,
  138094u,
  138613u,
  138696u,
  137790u,
  137885u
 };

static const UType JSum_8_17_29_14[]=
 {
  138309u,
  138725u,
  138359u,
  138193u,
  137536u,
  138081u,
  138844u,
  138102u,
  137957u,
  138305u,
  137590u,
  138122u,
  137811u,
  138086u,
  137650u,
  138593u,
  138082u
 };

static const UType JSum_8_17_29_15[]=
 {
  138472u,
  138236u,
  137736u,
  138764u,
  138364u,
  137990u,
  138116u,
  138054u,
  138562u,
  137514u,
  137734u,
  137554u,
  138356u,
  138164u,
  138633u,
  138238u,
  137858u
 };

static const PtrLen<const UType> JTable_8_17_29[]=
 {
  Range(JSum_8_17_29_1),
  Range(JSum_8_17_29_2),
  Range(JSum_8_17_29_3),
  Range(JSum_8_17_29_4),
  Range(JSum_8_17_29_5),
  Range(JSum_8_17_29_6),
  Range(JSum_8_17_29_7),
  Range(JSum_8_17_29_8),
  Range(JSum_8_17_29_9),
  Range(JSum_8_17_29_10),
  Range(JSum_8_17_29_11),
  Range(JSum_8_17_29_12),
  Range(JSum_8_17_29_13),
  Range(JSum_8_17_29_14),
  Range(JSum_8_17_29_15)
 };

static const UType JSum_8_17_30_1[]=
 {
  170778u,
  170484u,
  170414u,
  170182u,
  170226u,
  170620u,
  169916u,
  170486u,
  169853u,
  170768u,
  170826u,
  170186u,
  169740u,
  170400u,
  171000u,
  170182u,
  171248u
 };

static const UType JSum_8_17_30_2[]=
 {
  170879u,
  170175u,
  170364u,
  170012u,
  170923u,
  169911u,
  170424u,
  170973u,
  169931u,
  169653u,
  170255u,
  170444u,
  171080u,
  170558u,
  170578u,
  170784u,
  170365u
 };

static const UType JSum_8_17_30_3[]=
 {
  170461u,
  170806u,
  169983u,
  171015u,
  170702u,
  170228u,
  170101u,
  170711u,
  170395u,
  169646u,
  170348u,
  169646u,
  170824u,
  170976u,
  170651u,
  170415u,
  170401u
 };

static const UType JSum_8_17_30_4[]=
 {
  170461u,
  170976u,
  169646u,
  170228u,
  170806u,
  170651u,
  170348u,
  170101u,
  169983u,
  170415u,
  169646u,
  170711u,
  171015u,
  170401u,
  170824u,
  170395u,
  170702u
 };

static const UType JSum_8_17_30_5[]=
 {
  170879u,
  170578u,
  170444u,
  169931u,
  169911u,
  170364u,
  170365u,
  170558u,
  170255u,
  170973u,
  170923u,
  170175u,
  170784u,
  171080u,
  169653u,
  170424u,
  170012u
 };

static const UType JSum_8_17_30_6[]=
 {
  170461u,
  171015u,
  170101u,
  169646u,
  170824u,
  170415u,
  170806u,
  170702u,
  170711u,
  170348u,
  170976u,
  170401u,
  169983u,
  170228u,
  170395u,
  169646u,
  170651u
 };

static const UType JSum_8_17_30_7[]=
 {
  170879u,
  170364u,
  170923u,
  170424u,
  169931u,
  170255u,
  171080u,
  170578u,
  170365u,
  170175u,
  170012u,
  169911u,
  170973u,
  169653u,
  170444u,
  170558u,
  170784u
 };

static const UType JSum_8_17_30_8[]=
 {
  170778u,
  170182u,
  170400u,
  170186u,
  170768u,
  170486u,
  170620u,
  170182u,
  170484u,
  171248u,
  171000u,
  169740u,
  170826u,
  169853u,
  169916u,
  170226u,
  170414u
 };

static const UType JSum_8_17_30_9[]=
 {
  170879u,
  170364u,
  170923u,
  170424u,
  169931u,
  170255u,
  171080u,
  170578u,
  170365u,
  170175u,
  170012u,
  169911u,
  170973u,
  169653u,
  170444u,
  170558u,
  170784u
 };

static const UType JSum_8_17_30_10[]=
 {
  170461u,
  171015u,
  170101u,
  169646u,
  170824u,
  170415u,
  170806u,
  170702u,
  170711u,
  170348u,
  170976u,
  170401u,
  169983u,
  170228u,
  170395u,
  169646u,
  170651u
 };

static const UType JSum_8_17_30_11[]=
 {
  170879u,
  170578u,
  170444u,
  169931u,
  169911u,
  170364u,
  170365u,
  170558u,
  170255u,
  170973u,
  170923u,
  170175u,
  170784u,
  171080u,
  169653u,
  170424u,
  170012u
 };

static const UType JSum_8_17_30_12[]=
 {
  170461u,
  170976u,
  169646u,
  170228u,
  170806u,
  170651u,
  170348u,
  170101u,
  169983u,
  170415u,
  169646u,
  170711u,
  171015u,
  170401u,
  170824u,
  170395u,
  170702u
 };

static const UType JSum_8_17_30_13[]=
 {
  170461u,
  170806u,
  169983u,
  171015u,
  170702u,
  170228u,
  170101u,
  170711u,
  170395u,
  169646u,
  170348u,
  169646u,
  170824u,
  170976u,
  170651u,
  170415u,
  170401u
 };

static const UType JSum_8_17_30_14[]=
 {
  170879u,
  170175u,
  170364u,
  170012u,
  170923u,
  169911u,
  170424u,
  170973u,
  169931u,
  169653u,
  170255u,
  170444u,
  171080u,
  170558u,
  170578u,
  170784u,
  170365u
 };

static const UType JSum_8_17_30_15[]=
 {
  170778u,
  170484u,
  170414u,
  170182u,
  170226u,
  170620u,
  169916u,
  170486u,
  169853u,
  170768u,
  170826u,
  170186u,
  169740u,
  170400u,
  171000u,
  170182u,
  171248u
 };

static const PtrLen<const UType> JTable_8_17_30[]=
 {
  Range(JSum_8_17_30_1),
  Range(JSum_8_17_30_2),
  Range(JSum_8_17_30_3),
  Range(JSum_8_17_30_4),
  Range(JSum_8_17_30_5),
  Range(JSum_8_17_30_6),
  Range(JSum_8_17_30_7),
  Range(JSum_8_17_30_8),
  Range(JSum_8_17_30_9),
  Range(JSum_8_17_30_10),
  Range(JSum_8_17_30_11),
  Range(JSum_8_17_30_12),
  Range(JSum_8_17_30_13),
  Range(JSum_8_17_30_14),
  Range(JSum_8_17_30_15)
 };

static const UType JSum_8_17_31_1[]=
 {
  190162u,
  190814u,
  189854u,
  189564u,
  190149u,
  190570u,
  190600u,
  190648u,
  190384u,
  190658u,
  189754u,
  189756u,
  190586u,
  189500u,
  190534u,
  189804u,
  189892u
 };

static const UType JSum_8_17_31_2[]=
 {
  190520u,
  190070u,
  190112u,
  189596u,
  190815u,
  190251u,
  189421u,
  190231u,
  190487u,
  189791u,
  190245u,
  189722u,
  190288u,
  189688u,
  190497u,
  190496u,
  190999u
 };

static const UType JSum_8_17_31_3[]=
 {
  189966u,
  190534u,
  190105u,
  190683u,
  190857u,
  190045u,
  189537u,
  190477u,
  190279u,
  190802u,
  189900u,
  190148u,
  190386u,
  189139u,
  190072u,
  190047u,
  190252u
 };

static const UType JSum_8_17_31_4[]=
 {
  189966u,
  189139u,
  190802u,
  190045u,
  190534u,
  190072u,
  189900u,
  189537u,
  190105u,
  190047u,
  190148u,
  190477u,
  190683u,
  190252u,
  190386u,
  190279u,
  190857u
 };

static const UType JSum_8_17_31_5[]=
 {
  190520u,
  190497u,
  189722u,
  190487u,
  190251u,
  190112u,
  190999u,
  189688u,
  190245u,
  190231u,
  190815u,
  190070u,
  190496u,
  190288u,
  189791u,
  189421u,
  189596u
 };

static const UType JSum_8_17_31_6[]=
 {
  189966u,
  190683u,
  189537u,
  190802u,
  190386u,
  190047u,
  190534u,
  190857u,
  190477u,
  189900u,
  189139u,
  190252u,
  190105u,
  190045u,
  190279u,
  190148u,
  190072u
 };

static const UType JSum_8_17_31_7[]=
 {
  190520u,
  190112u,
  190815u,
  189421u,
  190487u,
  190245u,
  190288u,
  190497u,
  190999u,
  190070u,
  189596u,
  190251u,
  190231u,
  189791u,
  189722u,
  189688u,
  190496u
 };

static const UType JSum_8_17_31_8[]=
 {
  190162u,
  189804u,
  189500u,
  189756u,
  190658u,
  190648u,
  190570u,
  189564u,
  190814u,
  189892u,
  190534u,
  190586u,
  189754u,
  190384u,
  190600u,
  190149u,
  189854u
 };

static const UType JSum_8_17_31_9[]=
 {
  190520u,
  190112u,
  190815u,
  189421u,
  190487u,
  190245u,
  190288u,
  190497u,
  190999u,
  190070u,
  189596u,
  190251u,
  190231u,
  189791u,
  189722u,
  189688u,
  190496u
 };

static const UType JSum_8_17_31_10[]=
 {
  189966u,
  190683u,
  189537u,
  190802u,
  190386u,
  190047u,
  190534u,
  190857u,
  190477u,
  189900u,
  189139u,
  190252u,
  190105u,
  190045u,
  190279u,
  190148u,
  190072u
 };

static const UType JSum_8_17_31_11[]=
 {
  190520u,
  190497u,
  189722u,
  190487u,
  190251u,
  190112u,
  190999u,
  189688u,
  190245u,
  190231u,
  190815u,
  190070u,
  190496u,
  190288u,
  189791u,
  189421u,
  189596u
 };

static const UType JSum_8_17_31_12[]=
 {
  189966u,
  189139u,
  190802u,
  190045u,
  190534u,
  190072u,
  189900u,
  189537u,
  190105u,
  190047u,
  190148u,
  190477u,
  190683u,
  190252u,
  190386u,
  190279u,
  190857u
 };

static const UType JSum_8_17_31_13[]=
 {
  189966u,
  190534u,
  190105u,
  190683u,
  190857u,
  190045u,
  189537u,
  190477u,
  190279u,
  190802u,
  189900u,
  190148u,
  190386u,
  189139u,
  190072u,
  190047u,
  190252u
 };

static const UType JSum_8_17_31_14[]=
 {
  190520u,
  190070u,
  190112u,
  189596u,
  190815u,
  190251u,
  189421u,
  190231u,
  190487u,
  189791u,
  190245u,
  189722u,
  190288u,
  189688u,
  190497u,
  190496u,
  190999u
 };

static const UType JSum_8_17_31_15[]=
 {
  190162u,
  190814u,
  189854u,
  189564u,
  190149u,
  190570u,
  190600u,
  190648u,
  190384u,
  190658u,
  189754u,
  189756u,
  190586u,
  189500u,
  190534u,
  189804u,
  189892u
 };

static const PtrLen<const UType> JTable_8_17_31[]=
 {
  Range(JSum_8_17_31_1),
  Range(JSum_8_17_31_2),
  Range(JSum_8_17_31_3),
  Range(JSum_8_17_31_4),
  Range(JSum_8_17_31_5),
  Range(JSum_8_17_31_6),
  Range(JSum_8_17_31_7),
  Range(JSum_8_17_31_8),
  Range(JSum_8_17_31_9),
  Range(JSum_8_17_31_10),
  Range(JSum_8_17_31_11),
  Range(JSum_8_17_31_12),
  Range(JSum_8_17_31_13),
  Range(JSum_8_17_31_14),
  Range(JSum_8_17_31_15)
 };

static const UType JSum_8_17_32_1[]=
 {
  1010586u,
  1009722u,
  1009904u,
  1009250u,
  1008186u,
  1008320u,
  1009892u,
  1009485u,
  1010406u,
  1008722u,
  1008036u,
  1008956u,
  1010586u,
  1009304u,
  1008640u,
  1011844u,
  1009150u
 };

static const UType JSum_8_17_32_2[]=
 {
  1009865u,
  1009581u,
  1010045u,
  1008792u,
  1009704u,
  1010690u,
  1009184u,
  1008912u,
  1011047u,
  1008899u,
  1010631u,
  1008891u,
  1010614u,
  1009057u,
  1007029u,
  1008344u,
  1009704u
 };

static const UType JSum_8_17_32_3[]=
 {
  1008680u,
  1007844u,
  1010101u,
  1011535u,
  1009201u,
  1009074u,
  1009536u,
  1010625u,
  1008779u,
  1010992u,
  1008403u,
  1009871u,
  1010361u,
  1009393u,
  1009514u,
  1008420u,
  1008660u
 };

static const UType JSum_8_17_32_4[]=
 {
  1008680u,
  1009393u,
  1010992u,
  1009074u,
  1007844u,
  1009514u,
  1008403u,
  1009536u,
  1010101u,
  1008420u,
  1009871u,
  1010625u,
  1011535u,
  1008660u,
  1010361u,
  1008779u,
  1009201u
 };

static const UType JSum_8_17_32_5[]=
 {
  1009865u,
  1007029u,
  1008891u,
  1011047u,
  1010690u,
  1010045u,
  1009704u,
  1009057u,
  1010631u,
  1008912u,
  1009704u,
  1009581u,
  1008344u,
  1010614u,
  1008899u,
  1009184u,
  1008792u
 };

static const UType JSum_8_17_32_6[]=
 {
  1008680u,
  1011535u,
  1009536u,
  1010992u,
  1010361u,
  1008420u,
  1007844u,
  1009201u,
  1010625u,
  1008403u,
  1009393u,
  1008660u,
  1010101u,
  1009074u,
  1008779u,
  1009871u,
  1009514u
 };

static const UType JSum_8_17_32_7[]=
 {
  1009865u,
  1010045u,
  1009704u,
  1009184u,
  1011047u,
  1010631u,
  1010614u,
  1007029u,
  1009704u,
  1009581u,
  1008792u,
  1010690u,
  1008912u,
  1008899u,
  1008891u,
  1009057u,
  1008344u
 };

static const UType JSum_8_17_32_8[]=
 {
  1010586u,
  1011844u,
  1009304u,
  1008956u,
  1008722u,
  1009485u,
  1008320u,
  1009250u,
  1009722u,
  1009150u,
  1008640u,
  1010586u,
  1008036u,
  1010406u,
  1009892u,
  1008186u,
  1009904u
 };

static const UType JSum_8_17_32_9[]=
 {
  1009865u,
  1010045u,
  1009704u,
  1009184u,
  1011047u,
  1010631u,
  1010614u,
  1007029u,
  1009704u,
  1009581u,
  1008792u,
  1010690u,
  1008912u,
  1008899u,
  1008891u,
  1009057u,
  1008344u
 };

static const UType JSum_8_17_32_10[]=
 {
  1008680u,
  1011535u,
  1009536u,
  1010992u,
  1010361u,
  1008420u,
  1007844u,
  1009201u,
  1010625u,
  1008403u,
  1009393u,
  1008660u,
  1010101u,
  1009074u,
  1008779u,
  1009871u,
  1009514u
 };

static const UType JSum_8_17_32_11[]=
 {
  1009865u,
  1007029u,
  1008891u,
  1011047u,
  1010690u,
  1010045u,
  1009704u,
  1009057u,
  1010631u,
  1008912u,
  1009704u,
  1009581u,
  1008344u,
  1010614u,
  1008899u,
  1009184u,
  1008792u
 };

static const UType JSum_8_17_32_12[]=
 {
  1008680u,
  1009393u,
  1010992u,
  1009074u,
  1007844u,
  1009514u,
  1008403u,
  1009536u,
  1010101u,
  1008420u,
  1009871u,
  1010625u,
  1011535u,
  1008660u,
  1010361u,
  1008779u,
  1009201u
 };

static const UType JSum_8_17_32_13[]=
 {
  1008680u,
  1007844u,
  1010101u,
  1011535u,
  1009201u,
  1009074u,
  1009536u,
  1010625u,
  1008779u,
  1010992u,
  1008403u,
  1009871u,
  1010361u,
  1009393u,
  1009514u,
  1008420u,
  1008660u
 };

static const UType JSum_8_17_32_14[]=
 {
  1009865u,
  1009581u,
  1010045u,
  1008792u,
  1009704u,
  1010690u,
  1009184u,
  1008912u,
  1011047u,
  1008899u,
  1010631u,
  1008891u,
  1010614u,
  1009057u,
  1007029u,
  1008344u,
  1009704u
 };

static const UType JSum_8_17_32_15[]=
 {
  1010586u,
  1009722u,
  1009904u,
  1009250u,
  1008186u,
  1008320u,
  1009892u,
  1009485u,
  1010406u,
  1008722u,
  1008036u,
  1008956u,
  1010586u,
  1009304u,
  1008640u,
  1011844u,
  1009150u
 };

static const PtrLen<const UType> JTable_8_17_32[]=
 {
  Range(JSum_8_17_32_1),
  Range(JSum_8_17_32_2),
  Range(JSum_8_17_32_3),
  Range(JSum_8_17_32_4),
  Range(JSum_8_17_32_5),
  Range(JSum_8_17_32_6),
  Range(JSum_8_17_32_7),
  Range(JSum_8_17_32_8),
  Range(JSum_8_17_32_9),
  Range(JSum_8_17_32_10),
  Range(JSum_8_17_32_11),
  Range(JSum_8_17_32_12),
  Range(JSum_8_17_32_13),
  Range(JSum_8_17_32_14),
  Range(JSum_8_17_32_15)
 };

static const TestSet::JTable JSet_8_17[]=
 {
  { 103u , Range(JTable_8_17_1) },
  { 239u , Range(JTable_8_17_2) },
  { 443u , Range(JTable_8_17_3) },
  { 647u , Range(JTable_8_17_4) },
  { 1123u , Range(JTable_8_17_5) },
  { 1327u , Range(JTable_8_17_6) },
  { 1871u , Range(JTable_8_17_7) },
  { 2347u , Range(JTable_8_17_8) },
  { 3571u , Range(JTable_8_17_9) },
  { 3911u , Range(JTable_8_17_10) },
  { 4523u , Range(JTable_8_17_11) },
  { 9283u , Range(JTable_8_17_12) },
  { 11731u , Range(JTable_8_17_13) },
  { 13567u , Range(JTable_8_17_14) },
  { 21319u , Range(JTable_8_17_15) },
  { 35531u , Range(JTable_8_17_16) },
  { 46411u , Range(JTable_8_17_17) },
  { 58787u , Range(JTable_8_17_18) },
  { 72931u , Range(JTable_8_17_19) },
  { 102103u , Range(JTable_8_17_20) },
  { 106591u , Range(JTable_8_17_21) },
  { 111827u , Range(JTable_8_17_22) },
  { 355811u , Range(JTable_8_17_23) },
  { 461891u , Range(JTable_8_17_24) },
  { 520031u , Range(JTable_8_17_25) },
  { 782783u , Range(JTable_8_17_26) },
  { 903211u , Range(JTable_8_17_27) },
  { 1939939u , Range(JTable_8_17_28) },
  { 2348347u , Range(JTable_8_17_29) },
  { 2897311u , Range(JTable_8_17_30) },
  { 3233231u , Range(JTable_8_17_31) },
  { 17160991u , Range(JTable_8_17_32) }
 };

static const UType JSum_8_19_1_1[]=
 {
  8u,
  12u,
  16u,
  12u,
  10u,
  10u,
  8u,
  11u,
  14u,
  8u,
  8u,
  14u,
  10u,
  6u,
  10u,
  8u,
  12u,
  2u,
  10u
 };

static const UType JSum_8_19_1_2[]=
 {
  6u,
  8u,
  10u,
  7u,
  7u,
  13u,
  16u,
  13u,
  11u,
  8u,
  9u,
  14u,
  9u,
  7u,
  14u,
  4u,
  12u,
  10u,
  11u
 };

static const UType JSum_8_19_1_3[]=
 {
  14u,
  10u,
  10u,
  9u,
  12u,
  6u,
  10u,
  12u,
  13u,
  5u,
  10u,
  9u,
  6u,
  11u,
  11u,
  4u,
  11u,
  9u,
  17u
 };

static const UType JSum_8_19_1_4[]=
 {
  14u,
  4u,
  9u,
  12u,
  9u,
  17u,
  11u,
  10u,
  10u,
  10u,
  9u,
  11u,
  5u,
  6u,
  10u,
  11u,
  6u,
  13u,
  12u
 };

static const UType JSum_8_19_1_5[]=
 {
  14u,
  9u,
  10u,
  5u,
  6u,
  4u,
  17u,
  10u,
  6u,
  13u,
  9u,
  11u,
  9u,
  10u,
  12u,
  12u,
  10u,
  11u,
  11u
 };

static const UType JSum_8_19_1_6[]=
 {
  6u,
  12u,
  7u,
  9u,
  13u,
  7u,
  8u,
  10u,
  14u,
  14u,
  11u,
  13u,
  10u,
  11u,
  4u,
  9u,
  8u,
  16u,
  7u
 };

static const UType JSum_8_19_1_7[]=
 {
  9u,
  14u,
  7u,
  7u,
  5u,
  10u,
  5u,
  14u,
  13u,
  5u,
  11u,
  14u,
  13u,
  11u,
  7u,
  11u,
  10u,
  10u,
  13u
 };

static const UType JSum_8_19_1_8[]=
 {
  6u,
  10u,
  7u,
  16u,
  11u,
  9u,
  9u,
  14u,
  12u,
  11u,
  8u,
  7u,
  13u,
  13u,
  8u,
  14u,
  7u,
  4u,
  10u
 };

static const UType JSum_8_19_1_9[]=
 {
  8u,
  2u,
  8u,
  6u,
  14u,
  8u,
  11u,
  10u,
  12u,
  12u,
  10u,
  12u,
  10u,
  10u,
  8u,
  14u,
  8u,
  10u,
  16u
 };

static const UType JSum_8_19_1_10[]=
 {
  6u,
  10u,
  7u,
  16u,
  11u,
  9u,
  9u,
  14u,
  12u,
  11u,
  8u,
  7u,
  13u,
  13u,
  8u,
  14u,
  7u,
  4u,
  10u
 };

static const UType JSum_8_19_1_11[]=
 {
  9u,
  14u,
  7u,
  7u,
  5u,
  10u,
  5u,
  14u,
  13u,
  5u,
  11u,
  14u,
  13u,
  11u,
  7u,
  11u,
  10u,
  10u,
  13u
 };

static const UType JSum_8_19_1_12[]=
 {
  6u,
  12u,
  7u,
  9u,
  13u,
  7u,
  8u,
  10u,
  14u,
  14u,
  11u,
  13u,
  10u,
  11u,
  4u,
  9u,
  8u,
  16u,
  7u
 };

static const UType JSum_8_19_1_13[]=
 {
  14u,
  9u,
  10u,
  5u,
  6u,
  4u,
  17u,
  10u,
  6u,
  13u,
  9u,
  11u,
  9u,
  10u,
  12u,
  12u,
  10u,
  11u,
  11u
 };

static const UType JSum_8_19_1_14[]=
 {
  14u,
  4u,
  9u,
  12u,
  9u,
  17u,
  11u,
  10u,
  10u,
  10u,
  9u,
  11u,
  5u,
  6u,
  10u,
  11u,
  6u,
  13u,
  12u
 };

static const UType JSum_8_19_1_15[]=
 {
  14u,
  10u,
  10u,
  9u,
  12u,
  6u,
  10u,
  12u,
  13u,
  5u,
  10u,
  9u,
  6u,
  11u,
  11u,
  4u,
  11u,
  9u,
  17u
 };

static const UType JSum_8_19_1_16[]=
 {
  6u,
  8u,
  10u,
  7u,
  7u,
  13u,
  16u,
  13u,
  11u,
  8u,
  9u,
  14u,
  9u,
  7u,
  14u,
  4u,
  12u,
  10u,
  11u
 };

static const UType JSum_8_19_1_17[]=
 {
  8u,
  12u,
  16u,
  12u,
  10u,
  10u,
  8u,
  11u,
  14u,
  8u,
  8u,
  14u,
  10u,
  6u,
  10u,
  8u,
  12u,
  2u,
  10u
 };

static const PtrLen<const UType> JTable_8_19_1[]=
 {
  Range(JSum_8_19_1_1),
  Range(JSum_8_19_1_2),
  Range(JSum_8_19_1_3),
  Range(JSum_8_19_1_4),
  Range(JSum_8_19_1_5),
  Range(JSum_8_19_1_6),
  Range(JSum_8_19_1_7),
  Range(JSum_8_19_1_8),
  Range(JSum_8_19_1_9),
  Range(JSum_8_19_1_10),
  Range(JSum_8_19_1_11),
  Range(JSum_8_19_1_12),
  Range(JSum_8_19_1_13),
  Range(JSum_8_19_1_14),
  Range(JSum_8_19_1_15),
  Range(JSum_8_19_1_16),
  Range(JSum_8_19_1_17)
 };

static const UType JSum_8_19_2_1[]=
 {
  24u,
  24u,
  18u,
  24u,
  22u,
  26u,
  24u,
  22u,
  20u,
  30u,
  20u,
  16u,
  26u,
  28u,
  22u,
  26u,
  14u,
  19u,
  12u
 };

static const UType JSum_8_19_2_2[]=
 {
  23u,
  27u,
  21u,
  21u,
  21u,
  12u,
  14u,
  31u,
  19u,
  23u,
  17u,
  25u,
  23u,
  22u,
  27u,
  19u,
  20u,
  24u,
  28u
 };

static const UType JSum_8_19_2_3[]=
 {
  20u,
  31u,
  23u,
  23u,
  21u,
  27u,
  15u,
  26u,
  18u,
  13u,
  19u,
  19u,
  27u,
  29u,
  18u,
  20u,
  22u,
  25u,
  21u
 };

static const UType JSum_8_19_2_4[]=
 {
  20u,
  20u,
  19u,
  26u,
  23u,
  21u,
  18u,
  19u,
  15u,
  23u,
  25u,
  29u,
  13u,
  27u,
  31u,
  22u,
  27u,
  18u,
  21u
 };

static const UType JSum_8_19_2_5[]=
 {
  20u,
  23u,
  15u,
  13u,
  27u,
  20u,
  21u,
  23u,
  27u,
  18u,
  19u,
  18u,
  25u,
  31u,
  21u,
  26u,
  19u,
  29u,
  22u
 };

static const UType JSum_8_19_2_6[]=
 {
  23u,
  20u,
  22u,
  17u,
  31u,
  21u,
  27u,
  24u,
  27u,
  25u,
  19u,
  12u,
  21u,
  28u,
  19u,
  23u,
  23u,
  14u,
  21u
 };

static const UType JSum_8_19_2_7[]=
 {
  12u,
  29u,
  24u,
  24u,
  23u,
  17u,
  23u,
  29u,
  18u,
  23u,
  24u,
  29u,
  18u,
  24u,
  24u,
  24u,
  17u,
  17u,
  18u
 };

static const UType JSum_8_19_2_8[]=
 {
  23u,
  21u,
  21u,
  14u,
  19u,
  17u,
  23u,
  27u,
  20u,
  28u,
  27u,
  21u,
  12u,
  31u,
  23u,
  25u,
  22u,
  19u,
  24u
 };

static const UType JSum_8_19_2_9[]=
 {
  24u,
  19u,
  26u,
  28u,
  16u,
  30u,
  22u,
  26u,
  24u,
  24u,
  12u,
  14u,
  22u,
  26u,
  20u,
  20u,
  24u,
  22u,
  18u
 };

static const UType JSum_8_19_2_10[]=
 {
  23u,
  21u,
  21u,
  14u,
  19u,
  17u,
  23u,
  27u,
  20u,
  28u,
  27u,
  21u,
  12u,
  31u,
  23u,
  25u,
  22u,
  19u,
  24u
 };

static const UType JSum_8_19_2_11[]=
 {
  12u,
  29u,
  24u,
  24u,
  23u,
  17u,
  23u,
  29u,
  18u,
  23u,
  24u,
  29u,
  18u,
  24u,
  24u,
  24u,
  17u,
  17u,
  18u
 };

static const UType JSum_8_19_2_12[]=
 {
  23u,
  20u,
  22u,
  17u,
  31u,
  21u,
  27u,
  24u,
  27u,
  25u,
  19u,
  12u,
  21u,
  28u,
  19u,
  23u,
  23u,
  14u,
  21u
 };

static const UType JSum_8_19_2_13[]=
 {
  20u,
  23u,
  15u,
  13u,
  27u,
  20u,
  21u,
  23u,
  27u,
  18u,
  19u,
  18u,
  25u,
  31u,
  21u,
  26u,
  19u,
  29u,
  22u
 };

static const UType JSum_8_19_2_14[]=
 {
  20u,
  20u,
  19u,
  26u,
  23u,
  21u,
  18u,
  19u,
  15u,
  23u,
  25u,
  29u,
  13u,
  27u,
  31u,
  22u,
  27u,
  18u,
  21u
 };

static const UType JSum_8_19_2_15[]=
 {
  20u,
  31u,
  23u,
  23u,
  21u,
  27u,
  15u,
  26u,
  18u,
  13u,
  19u,
  19u,
  27u,
  29u,
  18u,
  20u,
  22u,
  25u,
  21u
 };

static const UType JSum_8_19_2_16[]=
 {
  23u,
  27u,
  21u,
  21u,
  21u,
  12u,
  14u,
  31u,
  19u,
  23u,
  17u,
  25u,
  23u,
  22u,
  27u,
  19u,
  20u,
  24u,
  28u
 };

static const UType JSum_8_19_2_17[]=
 {
  24u,
  24u,
  18u,
  24u,
  22u,
  26u,
  24u,
  22u,
  20u,
  30u,
  20u,
  16u,
  26u,
  28u,
  22u,
  26u,
  14u,
  19u,
  12u
 };

static const PtrLen<const UType> JTable_8_19_2[]=
 {
  Range(JSum_8_19_2_1),
  Range(JSum_8_19_2_2),
  Range(JSum_8_19_2_3),
  Range(JSum_8_19_2_4),
  Range(JSum_8_19_2_5),
  Range(JSum_8_19_2_6),
  Range(JSum_8_19_2_7),
  Range(JSum_8_19_2_8),
  Range(JSum_8_19_2_9),
  Range(JSum_8_19_2_10),
  Range(JSum_8_19_2_11),
  Range(JSum_8_19_2_12),
  Range(JSum_8_19_2_13),
  Range(JSum_8_19_2_14),
  Range(JSum_8_19_2_15),
  Range(JSum_8_19_2_16),
  Range(JSum_8_19_2_17)
 };

static const UType JSum_8_19_3_1[]=
 {
  28u,
  30u,
  32u,
  34u,
  28u,
  18u,
  30u,
  24u,
  36u,
  28u,
  34u,
  32u,
  27u,
  42u,
  36u,
  26u,
  26u,
  34u,
  24u
 };

static const UType JSum_8_19_3_2[]=
 {
  35u,
  26u,
  36u,
  21u,
  33u,
  32u,
  34u,
  34u,
  36u,
  27u,
  30u,
  27u,
  22u,
  25u,
  35u,
  27u,
  25u,
  24u,
  40u
 };

static const UType JSum_8_19_3_3[]=
 {
  26u,
  33u,
  29u,
  31u,
  23u,
  30u,
  21u,
  26u,
  33u,
  30u,
  38u,
  38u,
  28u,
  27u,
  29u,
  40u,
  30u,
  21u,
  36u
 };

static const UType JSum_8_19_3_4[]=
 {
  26u,
  40u,
  38u,
  26u,
  31u,
  36u,
  29u,
  38u,
  21u,
  29u,
  21u,
  27u,
  30u,
  30u,
  33u,
  30u,
  28u,
  33u,
  23u
 };

static const UType JSum_8_19_3_5[]=
 {
  26u,
  31u,
  21u,
  30u,
  28u,
  40u,
  36u,
  29u,
  30u,
  33u,
  38u,
  29u,
  21u,
  33u,
  23u,
  26u,
  38u,
  27u,
  30u
 };

static const UType JSum_8_19_3_6[]=
 {
  35u,
  25u,
  25u,
  30u,
  34u,
  33u,
  26u,
  24u,
  35u,
  27u,
  36u,
  32u,
  36u,
  40u,
  27u,
  22u,
  27u,
  34u,
  21u
 };

static const UType JSum_8_19_3_7[]=
 {
  35u,
  40u,
  32u,
  32u,
  30u,
  26u,
  30u,
  40u,
  26u,
  30u,
  24u,
  40u,
  26u,
  24u,
  32u,
  24u,
  26u,
  26u,
  26u
 };

static const UType JSum_8_19_3_8[]=
 {
  35u,
  36u,
  33u,
  34u,
  36u,
  30u,
  22u,
  35u,
  25u,
  40u,
  26u,
  21u,
  32u,
  34u,
  27u,
  27u,
  25u,
  27u,
  24u
 };

static const UType JSum_8_19_3_9[]=
 {
  28u,
  34u,
  26u,
  42u,
  32u,
  28u,
  24u,
  18u,
  34u,
  30u,
  24u,
  26u,
  36u,
  27u,
  34u,
  36u,
  30u,
  28u,
  32u
 };

static const UType JSum_8_19_3_10[]=
 {
  35u,
  36u,
  33u,
  34u,
  36u,
  30u,
  22u,
  35u,
  25u,
  40u,
  26u,
  21u,
  32u,
  34u,
  27u,
  27u,
  25u,
  27u,
  24u
 };

static const UType JSum_8_19_3_11[]=
 {
  35u,
  40u,
  32u,
  32u,
  30u,
  26u,
  30u,
  40u,
  26u,
  30u,
  24u,
  40u,
  26u,
  24u,
  32u,
  24u,
  26u,
  26u,
  26u
 };

static const UType JSum_8_19_3_12[]=
 {
  35u,
  25u,
  25u,
  30u,
  34u,
  33u,
  26u,
  24u,
  35u,
  27u,
  36u,
  32u,
  36u,
  40u,
  27u,
  22u,
  27u,
  34u,
  21u
 };

static const UType JSum_8_19_3_13[]=
 {
  26u,
  31u,
  21u,
  30u,
  28u,
  40u,
  36u,
  29u,
  30u,
  33u,
  38u,
  29u,
  21u,
  33u,
  23u,
  26u,
  38u,
  27u,
  30u
 };

static const UType JSum_8_19_3_14[]=
 {
  26u,
  40u,
  38u,
  26u,
  31u,
  36u,
  29u,
  38u,
  21u,
  29u,
  21u,
  27u,
  30u,
  30u,
  33u,
  30u,
  28u,
  33u,
  23u
 };

static const UType JSum_8_19_3_15[]=
 {
  26u,
  33u,
  29u,
  31u,
  23u,
  30u,
  21u,
  26u,
  33u,
  30u,
  38u,
  38u,
  28u,
  27u,
  29u,
  40u,
  30u,
  21u,
  36u
 };

static const UType JSum_8_19_3_16[]=
 {
  35u,
  26u,
  36u,
  21u,
  33u,
  32u,
  34u,
  34u,
  36u,
  27u,
  30u,
  27u,
  22u,
  25u,
  35u,
  27u,
  25u,
  24u,
  40u
 };

static const UType JSum_8_19_3_17[]=
 {
  28u,
  30u,
  32u,
  34u,
  28u,
  18u,
  30u,
  24u,
  36u,
  28u,
  34u,
  32u,
  27u,
  42u,
  36u,
  26u,
  26u,
  34u,
  24u
 };

static const PtrLen<const UType> JTable_8_19_3[]=
 {
  Range(JSum_8_19_3_1),
  Range(JSum_8_19_3_2),
  Range(JSum_8_19_3_3),
  Range(JSum_8_19_3_4),
  Range(JSum_8_19_3_5),
  Range(JSum_8_19_3_6),
  Range(JSum_8_19_3_7),
  Range(JSum_8_19_3_8),
  Range(JSum_8_19_3_9),
  Range(JSum_8_19_3_10),
  Range(JSum_8_19_3_11),
  Range(JSum_8_19_3_12),
  Range(JSum_8_19_3_13),
  Range(JSum_8_19_3_14),
  Range(JSum_8_19_3_15),
  Range(JSum_8_19_3_16),
  Range(JSum_8_19_3_17)
 };

static const UType JSum_8_19_4_1[]=
 {
  30u,
  30u,
  40u,
  38u,
  28u,
  40u,
  30u,
  35u,
  44u,
  42u,
  34u,
  28u,
  30u,
  36u,
  20u,
  36u,
  32u,
  38u,
  34u
 };

static const UType JSum_8_19_4_2[]=
 {
  29u,
  28u,
  38u,
  27u,
  45u,
  38u,
  25u,
  34u,
  30u,
  40u,
  39u,
  36u,
  38u,
  41u,
  33u,
  28u,
  28u,
  39u,
  29u
 };

static const UType JSum_8_19_4_3[]=
 {
  36u,
  24u,
  43u,
  31u,
  33u,
  34u,
  28u,
  27u,
  33u,
  32u,
  44u,
  41u,
  36u,
  28u,
  42u,
  39u,
  34u,
  27u,
  33u
 };

static const UType JSum_8_19_4_4[]=
 {
  36u,
  39u,
  41u,
  27u,
  31u,
  33u,
  42u,
  44u,
  28u,
  43u,
  27u,
  28u,
  32u,
  34u,
  24u,
  34u,
  36u,
  33u,
  33u
 };

static const UType JSum_8_19_4_5[]=
 {
  36u,
  31u,
  28u,
  32u,
  36u,
  39u,
  33u,
  43u,
  34u,
  33u,
  41u,
  42u,
  27u,
  24u,
  33u,
  27u,
  44u,
  28u,
  34u
 };

static const UType JSum_8_19_4_6[]=
 {
  29u,
  28u,
  41u,
  39u,
  34u,
  45u,
  28u,
  39u,
  33u,
  36u,
  30u,
  38u,
  38u,
  29u,
  28u,
  38u,
  40u,
  25u,
  27u
 };

static const UType JSum_8_19_4_7[]=
 {
  33u,
  35u,
  35u,
  35u,
  40u,
  40u,
  40u,
  35u,
  23u,
  40u,
  31u,
  35u,
  23u,
  31u,
  35u,
  31u,
  40u,
  40u,
  23u
 };

static const UType JSum_8_19_4_8[]=
 {
  29u,
  38u,
  45u,
  25u,
  30u,
  39u,
  38u,
  33u,
  28u,
  29u,
  28u,
  27u,
  38u,
  34u,
  40u,
  36u,
  41u,
  28u,
  39u
 };

static const UType JSum_8_19_4_9[]=
 {
  30u,
  38u,
  36u,
  36u,
  28u,
  42u,
  35u,
  40u,
  38u,
  30u,
  34u,
  32u,
  20u,
  30u,
  34u,
  44u,
  30u,
  28u,
  40u
 };

static const UType JSum_8_19_4_10[]=
 {
  29u,
  38u,
  45u,
  25u,
  30u,
  39u,
  38u,
  33u,
  28u,
  29u,
  28u,
  27u,
  38u,
  34u,
  40u,
  36u,
  41u,
  28u,
  39u
 };

static const UType JSum_8_19_4_11[]=
 {
  33u,
  35u,
  35u,
  35u,
  40u,
  40u,
  40u,
  35u,
  23u,
  40u,
  31u,
  35u,
  23u,
  31u,
  35u,
  31u,
  40u,
  40u,
  23u
 };

static const UType JSum_8_19_4_12[]=
 {
  29u,
  28u,
  41u,
  39u,
  34u,
  45u,
  28u,
  39u,
  33u,
  36u,
  30u,
  38u,
  38u,
  29u,
  28u,
  38u,
  40u,
  25u,
  27u
 };

static const UType JSum_8_19_4_13[]=
 {
  36u,
  31u,
  28u,
  32u,
  36u,
  39u,
  33u,
  43u,
  34u,
  33u,
  41u,
  42u,
  27u,
  24u,
  33u,
  27u,
  44u,
  28u,
  34u
 };

static const UType JSum_8_19_4_14[]=
 {
  36u,
  39u,
  41u,
  27u,
  31u,
  33u,
  42u,
  44u,
  28u,
  43u,
  27u,
  28u,
  32u,
  34u,
  24u,
  34u,
  36u,
  33u,
  33u
 };

static const UType JSum_8_19_4_15[]=
 {
  36u,
  24u,
  43u,
  31u,
  33u,
  34u,
  28u,
  27u,
  33u,
  32u,
  44u,
  41u,
  36u,
  28u,
  42u,
  39u,
  34u,
  27u,
  33u
 };

static const UType JSum_8_19_4_16[]=
 {
  29u,
  28u,
  38u,
  27u,
  45u,
  38u,
  25u,
  34u,
  30u,
  40u,
  39u,
  36u,
  38u,
  41u,
  33u,
  28u,
  28u,
  39u,
  29u
 };

static const UType JSum_8_19_4_17[]=
 {
  30u,
  30u,
  40u,
  38u,
  28u,
  40u,
  30u,
  35u,
  44u,
  42u,
  34u,
  28u,
  30u,
  36u,
  20u,
  36u,
  32u,
  38u,
  34u
 };

static const PtrLen<const UType> JTable_8_19_4[]=
 {
  Range(JSum_8_19_4_1),
  Range(JSum_8_19_4_2),
  Range(JSum_8_19_4_3),
  Range(JSum_8_19_4_4),
  Range(JSum_8_19_4_5),
  Range(JSum_8_19_4_6),
  Range(JSum_8_19_4_7),
  Range(JSum_8_19_4_8),
  Range(JSum_8_19_4_9),
  Range(JSum_8_19_4_10),
  Range(JSum_8_19_4_11),
  Range(JSum_8_19_4_12),
  Range(JSum_8_19_4_13),
  Range(JSum_8_19_4_14),
  Range(JSum_8_19_4_15),
  Range(JSum_8_19_4_16),
  Range(JSum_8_19_4_17)
 };

static const UType JSum_8_19_5_1[]=
 {
  80u,
  70u,
  88u,
  84u,
  90u,
  80u,
  92u,
  68u,
  66u,
  70u,
  90u,
  80u,
  66u,
  82u,
  68u,
  82u,
  78u,
  67u,
  80u
 };

static const UType JSum_8_19_5_2[]=
 {
  87u,
  83u,
  80u,
  83u,
  78u,
  87u,
  94u,
  76u,
  65u,
  68u,
  76u,
  75u,
  79u,
  83u,
  73u,
  72u,
  74u,
  90u,
  58u
 };

static const UType JSum_8_19_5_3[]=
 {
  79u,
  77u,
  83u,
  74u,
  80u,
  77u,
  86u,
  74u,
  79u,
  80u,
  89u,
  86u,
  83u,
  77u,
  66u,
  54u,
  94u,
  72u,
  71u
 };

static const UType JSum_8_19_5_4[]=
 {
  79u,
  54u,
  86u,
  74u,
  74u,
  71u,
  66u,
  89u,
  86u,
  83u,
  72u,
  77u,
  80u,
  77u,
  77u,
  94u,
  83u,
  79u,
  80u
 };

static const UType JSum_8_19_5_5[]=
 {
  79u,
  74u,
  86u,
  80u,
  83u,
  54u,
  71u,
  83u,
  77u,
  79u,
  86u,
  66u,
  72u,
  77u,
  80u,
  74u,
  89u,
  77u,
  94u
 };

static const UType JSum_8_19_5_6[]=
 {
  87u,
  74u,
  83u,
  76u,
  76u,
  78u,
  83u,
  90u,
  73u,
  75u,
  65u,
  87u,
  80u,
  58u,
  72u,
  79u,
  68u,
  94u,
  83u
 };

static const UType JSum_8_19_5_7[]=
 {
  83u,
  88u,
  75u,
  75u,
  76u,
  85u,
  76u,
  88u,
  81u,
  76u,
  61u,
  88u,
  81u,
  61u,
  75u,
  61u,
  85u,
  85u,
  81u
 };

static const UType JSum_8_19_5_8[]=
 {
  87u,
  80u,
  78u,
  94u,
  65u,
  76u,
  79u,
  73u,
  74u,
  58u,
  83u,
  83u,
  87u,
  76u,
  68u,
  75u,
  83u,
  72u,
  90u
 };

static const UType JSum_8_19_5_9[]=
 {
  80u,
  67u,
  82u,
  82u,
  80u,
  70u,
  68u,
  80u,
  84u,
  70u,
  80u,
  78u,
  68u,
  66u,
  90u,
  66u,
  92u,
  90u,
  88u
 };

static const UType JSum_8_19_5_10[]=
 {
  87u,
  80u,
  78u,
  94u,
  65u,
  76u,
  79u,
  73u,
  74u,
  58u,
  83u,
  83u,
  87u,
  76u,
  68u,
  75u,
  83u,
  72u,
  90u
 };

static const UType JSum_8_19_5_11[]=
 {
  83u,
  88u,
  75u,
  75u,
  76u,
  85u,
  76u,
  88u,
  81u,
  76u,
  61u,
  88u,
  81u,
  61u,
  75u,
  61u,
  85u,
  85u,
  81u
 };

static const UType JSum_8_19_5_12[]=
 {
  87u,
  74u,
  83u,
  76u,
  76u,
  78u,
  83u,
  90u,
  73u,
  75u,
  65u,
  87u,
  80u,
  58u,
  72u,
  79u,
  68u,
  94u,
  83u
 };

static const UType JSum_8_19_5_13[]=
 {
  79u,
  74u,
  86u,
  80u,
  83u,
  54u,
  71u,
  83u,
  77u,
  79u,
  86u,
  66u,
  72u,
  77u,
  80u,
  74u,
  89u,
  77u,
  94u
 };

static const UType JSum_8_19_5_14[]=
 {
  79u,
  54u,
  86u,
  74u,
  74u,
  71u,
  66u,
  89u,
  86u,
  83u,
  72u,
  77u,
  80u,
  77u,
  77u,
  94u,
  83u,
  79u,
  80u
 };

static const UType JSum_8_19_5_15[]=
 {
  79u,
  77u,
  83u,
  74u,
  80u,
  77u,
  86u,
  74u,
  79u,
  80u,
  89u,
  86u,
  83u,
  77u,
  66u,
  54u,
  94u,
  72u,
  71u
 };

static const UType JSum_8_19_5_16[]=
 {
  87u,
  83u,
  80u,
  83u,
  78u,
  87u,
  94u,
  76u,
  65u,
  68u,
  76u,
  75u,
  79u,
  83u,
  73u,
  72u,
  74u,
  90u,
  58u
 };

static const UType JSum_8_19_5_17[]=
 {
  80u,
  70u,
  88u,
  84u,
  90u,
  80u,
  92u,
  68u,
  66u,
  70u,
  90u,
  80u,
  66u,
  82u,
  68u,
  82u,
  78u,
  67u,
  80u
 };

static const PtrLen<const UType> JTable_8_19_5[]=
 {
  Range(JSum_8_19_5_1),
  Range(JSum_8_19_5_2),
  Range(JSum_8_19_5_3),
  Range(JSum_8_19_5_4),
  Range(JSum_8_19_5_5),
  Range(JSum_8_19_5_6),
  Range(JSum_8_19_5_7),
  Range(JSum_8_19_5_8),
  Range(JSum_8_19_5_9),
  Range(JSum_8_19_5_10),
  Range(JSum_8_19_5_11),
  Range(JSum_8_19_5_12),
  Range(JSum_8_19_5_13),
  Range(JSum_8_19_5_14),
  Range(JSum_8_19_5_15),
  Range(JSum_8_19_5_16),
  Range(JSum_8_19_5_17)
 };

static const UType JSum_8_19_6_1[]=
 {
  146u,
  150u,
  142u,
  168u,
  178u,
  140u,
  164u,
  144u,
  162u,
  146u,
  166u,
  170u,
  154u,
  155u,
  160u,
  132u,
  136u,
  156u,
  156u
 };

static const UType JSum_8_19_6_2[]=
 {
  166u,
  131u,
  163u,
  159u,
  144u,
  148u,
  142u,
  173u,
  147u,
  161u,
  156u,
  157u,
  168u,
  174u,
  152u,
  153u,
  134u,
  139u,
  158u
 };

static const UType JSum_8_19_6_3[]=
 {
  165u,
  158u,
  158u,
  139u,
  160u,
  159u,
  146u,
  180u,
  150u,
  149u,
  134u,
  149u,
  147u,
  165u,
  134u,
  140u,
  170u,
  163u,
  159u
 };

static const UType JSum_8_19_6_4[]=
 {
  165u,
  140u,
  149u,
  180u,
  139u,
  159u,
  134u,
  134u,
  146u,
  158u,
  163u,
  165u,
  149u,
  159u,
  158u,
  170u,
  147u,
  150u,
  160u
 };

static const UType JSum_8_19_6_5[]=
 {
  165u,
  139u,
  146u,
  149u,
  147u,
  140u,
  159u,
  158u,
  159u,
  150u,
  149u,
  134u,
  163u,
  158u,
  160u,
  180u,
  134u,
  165u,
  170u
 };

static const UType JSum_8_19_6_6[]=
 {
  166u,
  134u,
  174u,
  156u,
  173u,
  144u,
  131u,
  139u,
  152u,
  157u,
  147u,
  148u,
  163u,
  158u,
  153u,
  168u,
  161u,
  142u,
  159u
 };

static const UType JSum_8_19_6_7[]=
 {
  135u,
  139u,
  166u,
  166u,
  173u,
  151u,
  173u,
  139u,
  155u,
  173u,
  146u,
  139u,
  155u,
  146u,
  166u,
  146u,
  151u,
  151u,
  155u
 };

static const UType JSum_8_19_6_8[]=
 {
  166u,
  163u,
  144u,
  142u,
  147u,
  156u,
  168u,
  152u,
  134u,
  158u,
  131u,
  159u,
  148u,
  173u,
  161u,
  157u,
  174u,
  153u,
  139u
 };

static const UType JSum_8_19_6_9[]=
 {
  146u,
  156u,
  132u,
  155u,
  170u,
  146u,
  144u,
  140u,
  168u,
  150u,
  156u,
  136u,
  160u,
  154u,
  166u,
  162u,
  164u,
  178u,
  142u
 };

static const UType JSum_8_19_6_10[]=
 {
  166u,
  163u,
  144u,
  142u,
  147u,
  156u,
  168u,
  152u,
  134u,
  158u,
  131u,
  159u,
  148u,
  173u,
  161u,
  157u,
  174u,
  153u,
  139u
 };

static const UType JSum_8_19_6_11[]=
 {
  135u,
  139u,
  166u,
  166u,
  173u,
  151u,
  173u,
  139u,
  155u,
  173u,
  146u,
  139u,
  155u,
  146u,
  166u,
  146u,
  151u,
  151u,
  155u
 };

static const UType JSum_8_19_6_12[]=
 {
  166u,
  134u,
  174u,
  156u,
  173u,
  144u,
  131u,
  139u,
  152u,
  157u,
  147u,
  148u,
  163u,
  158u,
  153u,
  168u,
  161u,
  142u,
  159u
 };

static const UType JSum_8_19_6_13[]=
 {
  165u,
  139u,
  146u,
  149u,
  147u,
  140u,
  159u,
  158u,
  159u,
  150u,
  149u,
  134u,
  163u,
  158u,
  160u,
  180u,
  134u,
  165u,
  170u
 };

static const UType JSum_8_19_6_14[]=
 {
  165u,
  140u,
  149u,
  180u,
  139u,
  159u,
  134u,
  134u,
  146u,
  158u,
  163u,
  165u,
  149u,
  159u,
  158u,
  170u,
  147u,
  150u,
  160u
 };

static const UType JSum_8_19_6_15[]=
 {
  165u,
  158u,
  158u,
  139u,
  160u,
  159u,
  146u,
  180u,
  150u,
  149u,
  134u,
  149u,
  147u,
  165u,
  134u,
  140u,
  170u,
  163u,
  159u
 };

static const UType JSum_8_19_6_16[]=
 {
  166u,
  131u,
  163u,
  159u,
  144u,
  148u,
  142u,
  173u,
  147u,
  161u,
  156u,
  157u,
  168u,
  174u,
  152u,
  153u,
  134u,
  139u,
  158u
 };

static const UType JSum_8_19_6_17[]=
 {
  146u,
  150u,
  142u,
  168u,
  178u,
  140u,
  164u,
  144u,
  162u,
  146u,
  166u,
  170u,
  154u,
  155u,
  160u,
  132u,
  136u,
  156u,
  156u
 };

static const PtrLen<const UType> JTable_8_19_6[]=
 {
  Range(JSum_8_19_6_1),
  Range(JSum_8_19_6_2),
  Range(JSum_8_19_6_3),
  Range(JSum_8_19_6_4),
  Range(JSum_8_19_6_5),
  Range(JSum_8_19_6_6),
  Range(JSum_8_19_6_7),
  Range(JSum_8_19_6_8),
  Range(JSum_8_19_6_9),
  Range(JSum_8_19_6_10),
  Range(JSum_8_19_6_11),
  Range(JSum_8_19_6_12),
  Range(JSum_8_19_6_13),
  Range(JSum_8_19_6_14),
  Range(JSum_8_19_6_15),
  Range(JSum_8_19_6_16),
  Range(JSum_8_19_6_17)
 };

static const UType JSum_8_19_7_1[]=
 {
  204u,
  264u,
  238u,
  244u,
  218u,
  240u,
  238u,
  236u,
  246u,
  246u,
  226u,
  240u,
  270u,
  246u,
  235u,
  252u,
  228u,
  226u,
  224u
 };

static const UType JSum_8_19_7_2[]=
 {
  237u,
  217u,
  248u,
  239u,
  237u,
  240u,
  244u,
  248u,
  234u,
  228u,
  236u,
  261u,
  249u,
  252u,
  254u,
  210u,
  213u,
  259u,
  215u
 };

static const UType JSum_8_19_7_3[]=
 {
  259u,
  233u,
  234u,
  237u,
  233u,
  261u,
  267u,
  227u,
  244u,
  226u,
  240u,
  231u,
  259u,
  242u,
  232u,
  236u,
  236u,
  222u,
  202u
 };

static const UType JSum_8_19_7_4[]=
 {
  259u,
  236u,
  231u,
  227u,
  237u,
  202u,
  232u,
  240u,
  267u,
  234u,
  222u,
  242u,
  226u,
  261u,
  233u,
  236u,
  259u,
  244u,
  233u
 };

static const UType JSum_8_19_7_5[]=
 {
  259u,
  237u,
  267u,
  226u,
  259u,
  236u,
  202u,
  234u,
  261u,
  244u,
  231u,
  232u,
  222u,
  233u,
  233u,
  227u,
  240u,
  242u,
  236u
 };

static const UType JSum_8_19_7_6[]=
 {
  237u,
  213u,
  252u,
  236u,
  248u,
  237u,
  217u,
  259u,
  254u,
  261u,
  234u,
  240u,
  248u,
  215u,
  210u,
  249u,
  228u,
  244u,
  239u
 };

static const UType JSum_8_19_7_7[]=
 {
  225u,
  219u,
  223u,
  223u,
  251u,
  243u,
  251u,
  219u,
  234u,
  251u,
  262u,
  219u,
  234u,
  262u,
  223u,
  262u,
  243u,
  243u,
  234u
 };

static const UType JSum_8_19_7_8[]=
 {
  237u,
  248u,
  237u,
  244u,
  234u,
  236u,
  249u,
  254u,
  213u,
  215u,
  217u,
  239u,
  240u,
  248u,
  228u,
  261u,
  252u,
  210u,
  259u
 };

static const UType JSum_8_19_7_9[]=
 {
  204u,
  226u,
  252u,
  246u,
  240u,
  246u,
  236u,
  240u,
  244u,
  264u,
  224u,
  228u,
  235u,
  270u,
  226u,
  246u,
  238u,
  218u,
  238u
 };

static const UType JSum_8_19_7_10[]=
 {
  237u,
  248u,
  237u,
  244u,
  234u,
  236u,
  249u,
  254u,
  213u,
  215u,
  217u,
  239u,
  240u,
  248u,
  228u,
  261u,
  252u,
  210u,
  259u
 };

static const UType JSum_8_19_7_11[]=
 {
  225u,
  219u,
  223u,
  223u,
  251u,
  243u,
  251u,
  219u,
  234u,
  251u,
  262u,
  219u,
  234u,
  262u,
  223u,
  262u,
  243u,
  243u,
  234u
 };

static const UType JSum_8_19_7_12[]=
 {
  237u,
  213u,
  252u,
  236u,
  248u,
  237u,
  217u,
  259u,
  254u,
  261u,
  234u,
  240u,
  248u,
  215u,
  210u,
  249u,
  228u,
  244u,
  239u
 };

static const UType JSum_8_19_7_13[]=
 {
  259u,
  237u,
  267u,
  226u,
  259u,
  236u,
  202u,
  234u,
  261u,
  244u,
  231u,
  232u,
  222u,
  233u,
  233u,
  227u,
  240u,
  242u,
  236u
 };

static const UType JSum_8_19_7_14[]=
 {
  259u,
  236u,
  231u,
  227u,
  237u,
  202u,
  232u,
  240u,
  267u,
  234u,
  222u,
  242u,
  226u,
  261u,
  233u,
  236u,
  259u,
  244u,
  233u
 };

static const UType JSum_8_19_7_15[]=
 {
  259u,
  233u,
  234u,
  237u,
  233u,
  261u,
  267u,
  227u,
  244u,
  226u,
  240u,
  231u,
  259u,
  242u,
  232u,
  236u,
  236u,
  222u,
  202u
 };

static const UType JSum_8_19_7_16[]=
 {
  237u,
  217u,
  248u,
  239u,
  237u,
  240u,
  244u,
  248u,
  234u,
  228u,
  236u,
  261u,
  249u,
  252u,
  254u,
  210u,
  213u,
  259u,
  215u
 };

static const UType JSum_8_19_7_17[]=
 {
  204u,
  264u,
  238u,
  244u,
  218u,
  240u,
  238u,
  236u,
  246u,
  246u,
  226u,
  240u,
  270u,
  246u,
  235u,
  252u,
  228u,
  226u,
  224u
 };

static const PtrLen<const UType> JTable_8_19_7[]=
 {
  Range(JSum_8_19_7_1),
  Range(JSum_8_19_7_2),
  Range(JSum_8_19_7_3),
  Range(JSum_8_19_7_4),
  Range(JSum_8_19_7_5),
  Range(JSum_8_19_7_6),
  Range(JSum_8_19_7_7),
  Range(JSum_8_19_7_8),
  Range(JSum_8_19_7_9),
  Range(JSum_8_19_7_10),
  Range(JSum_8_19_7_11),
  Range(JSum_8_19_7_12),
  Range(JSum_8_19_7_13),
  Range(JSum_8_19_7_14),
  Range(JSum_8_19_7_15),
  Range(JSum_8_19_7_16),
  Range(JSum_8_19_7_17)
 };

static const UType JSum_8_19_8_1[]=
 {
  326u,
  302u,
  342u,
  324u,
  358u,
  346u,
  340u,
  306u,
  366u,
  347u,
  316u,
  316u,
  314u,
  332u,
  324u,
  338u,
  344u,
  304u,
  324u
 };

static const UType JSum_8_19_8_2[]=
 {
  295u,
  310u,
  320u,
  321u,
  348u,
  316u,
  346u,
  328u,
  333u,
  354u,
  323u,
  317u,
  363u,
  322u,
  320u,
  329u,
  366u,
  329u,
  329u
 };

static const UType JSum_8_19_8_3[]=
 {
  343u,
  324u,
  296u,
  332u,
  362u,
  315u,
  356u,
  312u,
  351u,
  355u,
  341u,
  326u,
  319u,
  310u,
  308u,
  337u,
  333u,
  325u,
  324u
 };

static const UType JSum_8_19_8_4[]=
 {
  343u,
  337u,
  326u,
  312u,
  332u,
  324u,
  308u,
  341u,
  356u,
  296u,
  325u,
  310u,
  355u,
  315u,
  324u,
  333u,
  319u,
  351u,
  362u
 };

static const UType JSum_8_19_8_5[]=
 {
  343u,
  332u,
  356u,
  355u,
  319u,
  337u,
  324u,
  296u,
  315u,
  351u,
  326u,
  308u,
  325u,
  324u,
  362u,
  312u,
  341u,
  310u,
  333u
 };

static const UType JSum_8_19_8_6[]=
 {
  295u,
  366u,
  322u,
  323u,
  328u,
  348u,
  310u,
  329u,
  320u,
  317u,
  333u,
  316u,
  320u,
  329u,
  329u,
  363u,
  354u,
  346u,
  321u
 };

static const UType JSum_8_19_8_7[]=
 {
  371u,
  349u,
  313u,
  313u,
  349u,
  319u,
  349u,
  349u,
  318u,
  349u,
  318u,
  349u,
  318u,
  318u,
  313u,
  318u,
  319u,
  319u,
  318u
 };

static const UType JSum_8_19_8_8[]=
 {
  295u,
  320u,
  348u,
  346u,
  333u,
  323u,
  363u,
  320u,
  366u,
  329u,
  310u,
  321u,
  316u,
  328u,
  354u,
  317u,
  322u,
  329u,
  329u
 };

static const UType JSum_8_19_8_9[]=
 {
  326u,
  304u,
  338u,
  332u,
  316u,
  347u,
  306u,
  346u,
  324u,
  302u,
  324u,
  344u,
  324u,
  314u,
  316u,
  366u,
  340u,
  358u,
  342u
 };

static const UType JSum_8_19_8_10[]=
 {
  295u,
  320u,
  348u,
  346u,
  333u,
  323u,
  363u,
  320u,
  366u,
  329u,
  310u,
  321u,
  316u,
  328u,
  354u,
  317u,
  322u,
  329u,
  329u
 };

static const UType JSum_8_19_8_11[]=
 {
  371u,
  349u,
  313u,
  313u,
  349u,
  319u,
  349u,
  349u,
  318u,
  349u,
  318u,
  349u,
  318u,
  318u,
  313u,
  318u,
  319u,
  319u,
  318u
 };

static const UType JSum_8_19_8_12[]=
 {
  295u,
  366u,
  322u,
  323u,
  328u,
  348u,
  310u,
  329u,
  320u,
  317u,
  333u,
  316u,
  320u,
  329u,
  329u,
  363u,
  354u,
  346u,
  321u
 };

static const UType JSum_8_19_8_13[]=
 {
  343u,
  332u,
  356u,
  355u,
  319u,
  337u,
  324u,
  296u,
  315u,
  351u,
  326u,
  308u,
  325u,
  324u,
  362u,
  312u,
  341u,
  310u,
  333u
 };

static const UType JSum_8_19_8_14[]=
 {
  343u,
  337u,
  326u,
  312u,
  332u,
  324u,
  308u,
  341u,
  356u,
  296u,
  325u,
  310u,
  355u,
  315u,
  324u,
  333u,
  319u,
  351u,
  362u
 };

static const UType JSum_8_19_8_15[]=
 {
  343u,
  324u,
  296u,
  332u,
  362u,
  315u,
  356u,
  312u,
  351u,
  355u,
  341u,
  326u,
  319u,
  310u,
  308u,
  337u,
  333u,
  325u,
  324u
 };

static const UType JSum_8_19_8_16[]=
 {
  295u,
  310u,
  320u,
  321u,
  348u,
  316u,
  346u,
  328u,
  333u,
  354u,
  323u,
  317u,
  363u,
  322u,
  320u,
  329u,
  366u,
  329u,
  329u
 };

static const UType JSum_8_19_8_17[]=
 {
  326u,
  302u,
  342u,
  324u,
  358u,
  346u,
  340u,
  306u,
  366u,
  347u,
  316u,
  316u,
  314u,
  332u,
  324u,
  338u,
  344u,
  304u,
  324u
 };

static const PtrLen<const UType> JTable_8_19_8[]=
 {
  Range(JSum_8_19_8_1),
  Range(JSum_8_19_8_2),
  Range(JSum_8_19_8_3),
  Range(JSum_8_19_8_4),
  Range(JSum_8_19_8_5),
  Range(JSum_8_19_8_6),
  Range(JSum_8_19_8_7),
  Range(JSum_8_19_8_8),
  Range(JSum_8_19_8_9),
  Range(JSum_8_19_8_10),
  Range(JSum_8_19_8_11),
  Range(JSum_8_19_8_12),
  Range(JSum_8_19_8_13),
  Range(JSum_8_19_8_14),
  Range(JSum_8_19_8_15),
  Range(JSum_8_19_8_16),
  Range(JSum_8_19_8_17)
 };

static const UType JSum_8_19_9_1[]=
 {
  392u,
  420u,
  382u,
  400u,
  400u,
  410u,
  404u,
  394u,
  368u,
  378u,
  376u,
  394u,
  402u,
  392u,
  362u,
  410u,
  378u,
  339u,
  408u
 };

static const UType JSum_8_19_9_2[]=
 {
  419u,
  395u,
  359u,
  387u,
  382u,
  355u,
  405u,
  380u,
  385u,
  368u,
  410u,
  427u,
  388u,
  385u,
  372u,
  401u,
  393u,
  417u,
  381u
 };

static const UType JSum_8_19_9_3[]=
 {
  389u,
  394u,
  371u,
  396u,
  368u,
  377u,
  402u,
  427u,
  349u,
  368u,
  387u,
  389u,
  401u,
  409u,
  403u,
  417u,
  379u,
  411u,
  372u
 };

static const UType JSum_8_19_9_4[]=
 {
  389u,
  417u,
  389u,
  427u,
  396u,
  372u,
  403u,
  387u,
  402u,
  371u,
  411u,
  409u,
  368u,
  377u,
  394u,
  379u,
  401u,
  349u,
  368u
 };

static const UType JSum_8_19_9_5[]=
 {
  389u,
  396u,
  402u,
  368u,
  401u,
  417u,
  372u,
  371u,
  377u,
  349u,
  389u,
  403u,
  411u,
  394u,
  368u,
  427u,
  387u,
  409u,
  379u
 };

static const UType JSum_8_19_9_6[]=
 {
  419u,
  393u,
  385u,
  410u,
  380u,
  382u,
  395u,
  417u,
  372u,
  427u,
  385u,
  355u,
  359u,
  381u,
  401u,
  388u,
  368u,
  405u,
  387u
 };

static const UType JSum_8_19_9_7[]=
 {
  356u,
  414u,
  359u,
  359u,
  382u,
  398u,
  382u,
  414u,
  407u,
  382u,
  391u,
  414u,
  407u,
  391u,
  359u,
  391u,
  398u,
  398u,
  407u
 };

static const UType JSum_8_19_9_8[]=
 {
  419u,
  359u,
  382u,
  405u,
  385u,
  410u,
  388u,
  372u,
  393u,
  381u,
  395u,
  387u,
  355u,
  380u,
  368u,
  427u,
  385u,
  401u,
  417u
 };

static const UType JSum_8_19_9_9[]=
 {
  392u,
  339u,
  410u,
  392u,
  394u,
  378u,
  394u,
  410u,
  400u,
  420u,
  408u,
  378u,
  362u,
  402u,
  376u,
  368u,
  404u,
  400u,
  382u
 };

static const UType JSum_8_19_9_10[]=
 {
  419u,
  359u,
  382u,
  405u,
  385u,
  410u,
  388u,
  372u,
  393u,
  381u,
  395u,
  387u,
  355u,
  380u,
  368u,
  427u,
  385u,
  401u,
  417u
 };

static const UType JSum_8_19_9_11[]=
 {
  356u,
  414u,
  359u,
  359u,
  382u,
  398u,
  382u,
  414u,
  407u,
  382u,
  391u,
  414u,
  407u,
  391u,
  359u,
  391u,
  398u,
  398u,
  407u
 };

static const UType JSum_8_19_9_12[]=
 {
  419u,
  393u,
  385u,
  410u,
  380u,
  382u,
  395u,
  417u,
  372u,
  427u,
  385u,
  355u,
  359u,
  381u,
  401u,
  388u,
  368u,
  405u,
  387u
 };

static const UType JSum_8_19_9_13[]=
 {
  389u,
  396u,
  402u,
  368u,
  401u,
  417u,
  372u,
  371u,
  377u,
  349u,
  389u,
  403u,
  411u,
  394u,
  368u,
  427u,
  387u,
  409u,
  379u
 };

static const UType JSum_8_19_9_14[]=
 {
  389u,
  417u,
  389u,
  427u,
  396u,
  372u,
  403u,
  387u,
  402u,
  371u,
  411u,
  409u,
  368u,
  377u,
  394u,
  379u,
  401u,
  349u,
  368u
 };

static const UType JSum_8_19_9_15[]=
 {
  389u,
  394u,
  371u,
  396u,
  368u,
  377u,
  402u,
  427u,
  349u,
  368u,
  387u,
  389u,
  401u,
  409u,
  403u,
  417u,
  379u,
  411u,
  372u
 };

static const UType JSum_8_19_9_16[]=
 {
  419u,
  395u,
  359u,
  387u,
  382u,
  355u,
  405u,
  380u,
  385u,
  368u,
  410u,
  427u,
  388u,
  385u,
  372u,
  401u,
  393u,
  417u,
  381u
 };

static const UType JSum_8_19_9_17[]=
 {
  392u,
  420u,
  382u,
  400u,
  400u,
  410u,
  404u,
  394u,
  368u,
  378u,
  376u,
  394u,
  402u,
  392u,
  362u,
  410u,
  378u,
  339u,
  408u
 };

static const PtrLen<const UType> JTable_8_19_9[]=
 {
  Range(JSum_8_19_9_1),
  Range(JSum_8_19_9_2),
  Range(JSum_8_19_9_3),
  Range(JSum_8_19_9_4),
  Range(JSum_8_19_9_5),
  Range(JSum_8_19_9_6),
  Range(JSum_8_19_9_7),
  Range(JSum_8_19_9_8),
  Range(JSum_8_19_9_9),
  Range(JSum_8_19_9_10),
  Range(JSum_8_19_9_11),
  Range(JSum_8_19_9_12),
  Range(JSum_8_19_9_13),
  Range(JSum_8_19_9_14),
  Range(JSum_8_19_9_15),
  Range(JSum_8_19_9_16),
  Range(JSum_8_19_9_17)
 };

static const UType JSum_8_19_10_1[]=
 {
  456u,
  488u,
  464u,
  476u,
  448u,
  450u,
  483u,
  456u,
  462u,
  454u,
  482u,
  458u,
  402u,
  444u,
  472u,
  446u,
  504u,
  462u,
  470u
 };

static const UType JSum_8_19_10_2[]=
 {
  453u,
  495u,
  471u,
  492u,
  451u,
  458u,
  437u,
  497u,
  477u,
  464u,
  447u,
  483u,
  476u,
  430u,
  459u,
  465u,
  425u,
  461u,
  436u
 };

static const UType JSum_8_19_10_3[]=
 {
  480u,
  447u,
  465u,
  457u,
  421u,
  460u,
  448u,
  473u,
  483u,
  496u,
  447u,
  491u,
  469u,
  432u,
  455u,
  488u,
  475u,
  463u,
  427u
 };

static const UType JSum_8_19_10_4[]=
 {
  480u,
  488u,
  491u,
  473u,
  457u,
  427u,
  455u,
  447u,
  448u,
  465u,
  463u,
  432u,
  496u,
  460u,
  447u,
  475u,
  469u,
  483u,
  421u
 };

static const UType JSum_8_19_10_5[]=
 {
  480u,
  457u,
  448u,
  496u,
  469u,
  488u,
  427u,
  465u,
  460u,
  483u,
  491u,
  455u,
  463u,
  447u,
  421u,
  473u,
  447u,
  432u,
  475u
 };

static const UType JSum_8_19_10_6[]=
 {
  453u,
  425u,
  430u,
  447u,
  497u,
  451u,
  495u,
  461u,
  459u,
  483u,
  477u,
  458u,
  471u,
  436u,
  465u,
  476u,
  464u,
  437u,
  492u
 };

static const UType JSum_8_19_10_7[]=
 {
  404u,
  479u,
  462u,
  462u,
  475u,
  459u,
  475u,
  479u,
  434u,
  475u,
  482u,
  479u,
  434u,
  482u,
  462u,
  482u,
  459u,
  459u,
  434u
 };

static const UType JSum_8_19_10_8[]=
 {
  453u,
  471u,
  451u,
  437u,
  477u,
  447u,
  476u,
  459u,
  425u,
  436u,
  495u,
  492u,
  458u,
  497u,
  464u,
  483u,
  430u,
  465u,
  461u
 };

static const UType JSum_8_19_10_9[]=
 {
  456u,
  462u,
  446u,
  444u,
  458u,
  454u,
  456u,
  450u,
  476u,
  488u,
  470u,
  504u,
  472u,
  402u,
  482u,
  462u,
  483u,
  448u,
  464u
 };

static const UType JSum_8_19_10_10[]=
 {
  453u,
  471u,
  451u,
  437u,
  477u,
  447u,
  476u,
  459u,
  425u,
  436u,
  495u,
  492u,
  458u,
  497u,
  464u,
  483u,
  430u,
  465u,
  461u
 };

static const UType JSum_8_19_10_11[]=
 {
  404u,
  479u,
  462u,
  462u,
  475u,
  459u,
  475u,
  479u,
  434u,
  475u,
  482u,
  479u,
  434u,
  482u,
  462u,
  482u,
  459u,
  459u,
  434u
 };

static const UType JSum_8_19_10_12[]=
 {
  453u,
  425u,
  430u,
  447u,
  497u,
  451u,
  495u,
  461u,
  459u,
  483u,
  477u,
  458u,
  471u,
  436u,
  465u,
  476u,
  464u,
  437u,
  492u
 };

static const UType JSum_8_19_10_13[]=
 {
  480u,
  457u,
  448u,
  496u,
  469u,
  488u,
  427u,
  465u,
  460u,
  483u,
  491u,
  455u,
  463u,
  447u,
  421u,
  473u,
  447u,
  432u,
  475u
 };

static const UType JSum_8_19_10_14[]=
 {
  480u,
  488u,
  491u,
  473u,
  457u,
  427u,
  455u,
  447u,
  448u,
  465u,
  463u,
  432u,
  496u,
  460u,
  447u,
  475u,
  469u,
  483u,
  421u
 };

static const UType JSum_8_19_10_15[]=
 {
  480u,
  447u,
  465u,
  457u,
  421u,
  460u,
  448u,
  473u,
  483u,
  496u,
  447u,
  491u,
  469u,
  432u,
  455u,
  488u,
  475u,
  463u,
  427u
 };

static const UType JSum_8_19_10_16[]=
 {
  453u,
  495u,
  471u,
  492u,
  451u,
  458u,
  437u,
  497u,
  477u,
  464u,
  447u,
  483u,
  476u,
  430u,
  459u,
  465u,
  425u,
  461u,
  436u
 };

static const UType JSum_8_19_10_17[]=
 {
  456u,
  488u,
  464u,
  476u,
  448u,
  450u,
  483u,
  456u,
  462u,
  454u,
  482u,
  458u,
  402u,
  444u,
  472u,
  446u,
  504u,
  462u,
  470u
 };

static const PtrLen<const UType> JTable_8_19_10[]=
 {
  Range(JSum_8_19_10_1),
  Range(JSum_8_19_10_2),
  Range(JSum_8_19_10_3),
  Range(JSum_8_19_10_4),
  Range(JSum_8_19_10_5),
  Range(JSum_8_19_10_6),
  Range(JSum_8_19_10_7),
  Range(JSum_8_19_10_8),
  Range(JSum_8_19_10_9),
  Range(JSum_8_19_10_10),
  Range(JSum_8_19_10_11),
  Range(JSum_8_19_10_12),
  Range(JSum_8_19_10_13),
  Range(JSum_8_19_10_14),
  Range(JSum_8_19_10_15),
  Range(JSum_8_19_10_16),
  Range(JSum_8_19_10_17)
 };

static const UType JSum_8_19_11_1[]=
 {
  654u,
  744u,
  670u,
  710u,
  708u,
  722u,
  760u,
  744u,
  726u,
  708u,
  708u,
  714u,
  718u,
  722u,
  707u,
  672u,
  712u,
  748u,
  718u
 };

static const UType JSum_8_19_11_2[]=
 {
  715u,
  702u,
  716u,
  722u,
  745u,
  696u,
  681u,
  714u,
  750u,
  675u,
  751u,
  683u,
  678u,
  692u,
  706u,
  729u,
  705u,
  751u,
  754u
 };

static const UType JSum_8_19_11_3[]=
 {
  717u,
  744u,
  700u,
  748u,
  719u,
  770u,
  709u,
  671u,
  693u,
  704u,
  682u,
  742u,
  719u,
  683u,
  695u,
  748u,
  704u,
  725u,
  692u
 };

static const UType JSum_8_19_11_4[]=
 {
  717u,
  748u,
  742u,
  671u,
  748u,
  692u,
  695u,
  682u,
  709u,
  700u,
  725u,
  683u,
  704u,
  770u,
  744u,
  704u,
  719u,
  693u,
  719u
 };

static const UType JSum_8_19_11_5[]=
 {
  717u,
  748u,
  709u,
  704u,
  719u,
  748u,
  692u,
  700u,
  770u,
  693u,
  742u,
  695u,
  725u,
  744u,
  719u,
  671u,
  682u,
  683u,
  704u
 };

static const UType JSum_8_19_11_6[]=
 {
  715u,
  705u,
  692u,
  751u,
  714u,
  745u,
  702u,
  751u,
  706u,
  683u,
  750u,
  696u,
  716u,
  754u,
  729u,
  678u,
  675u,
  681u,
  722u
 };

static const UType JSum_8_19_11_7[]=
 {
  683u,
  687u,
  706u,
  706u,
  765u,
  709u,
  765u,
  687u,
  697u,
  765u,
  730u,
  687u,
  697u,
  730u,
  706u,
  730u,
  709u,
  709u,
  697u
 };

static const UType JSum_8_19_11_8[]=
 {
  715u,
  716u,
  745u,
  681u,
  750u,
  751u,
  678u,
  706u,
  705u,
  754u,
  702u,
  722u,
  696u,
  714u,
  675u,
  683u,
  692u,
  729u,
  751u
 };

static const UType JSum_8_19_11_9[]=
 {
  654u,
  748u,
  672u,
  722u,
  714u,
  708u,
  744u,
  722u,
  710u,
  744u,
  718u,
  712u,
  707u,
  718u,
  708u,
  726u,
  760u,
  708u,
  670u
 };

static const UType JSum_8_19_11_10[]=
 {
  715u,
  716u,
  745u,
  681u,
  750u,
  751u,
  678u,
  706u,
  705u,
  754u,
  702u,
  722u,
  696u,
  714u,
  675u,
  683u,
  692u,
  729u,
  751u
 };

static const UType JSum_8_19_11_11[]=
 {
  683u,
  687u,
  706u,
  706u,
  765u,
  709u,
  765u,
  687u,
  697u,
  765u,
  730u,
  687u,
  697u,
  730u,
  706u,
  730u,
  709u,
  709u,
  697u
 };

static const UType JSum_8_19_11_12[]=
 {
  715u,
  705u,
  692u,
  751u,
  714u,
  745u,
  702u,
  751u,
  706u,
  683u,
  750u,
  696u,
  716u,
  754u,
  729u,
  678u,
  675u,
  681u,
  722u
 };

static const UType JSum_8_19_11_13[]=
 {
  717u,
  748u,
  709u,
  704u,
  719u,
  748u,
  692u,
  700u,
  770u,
  693u,
  742u,
  695u,
  725u,
  744u,
  719u,
  671u,
  682u,
  683u,
  704u
 };

static const UType JSum_8_19_11_14[]=
 {
  717u,
  748u,
  742u,
  671u,
  748u,
  692u,
  695u,
  682u,
  709u,
  700u,
  725u,
  683u,
  704u,
  770u,
  744u,
  704u,
  719u,
  693u,
  719u
 };

static const UType JSum_8_19_11_15[]=
 {
  717u,
  744u,
  700u,
  748u,
  719u,
  770u,
  709u,
  671u,
  693u,
  704u,
  682u,
  742u,
  719u,
  683u,
  695u,
  748u,
  704u,
  725u,
  692u
 };

static const UType JSum_8_19_11_16[]=
 {
  715u,
  702u,
  716u,
  722u,
  745u,
  696u,
  681u,
  714u,
  750u,
  675u,
  751u,
  683u,
  678u,
  692u,
  706u,
  729u,
  705u,
  751u,
  754u
 };

static const UType JSum_8_19_11_17[]=
 {
  654u,
  744u,
  670u,
  710u,
  708u,
  722u,
  760u,
  744u,
  726u,
  708u,
  708u,
  714u,
  718u,
  722u,
  707u,
  672u,
  712u,
  748u,
  718u
 };

static const PtrLen<const UType> JTable_8_19_11[]=
 {
  Range(JSum_8_19_11_1),
  Range(JSum_8_19_11_2),
  Range(JSum_8_19_11_3),
  Range(JSum_8_19_11_4),
  Range(JSum_8_19_11_5),
  Range(JSum_8_19_11_6),
  Range(JSum_8_19_11_7),
  Range(JSum_8_19_11_8),
  Range(JSum_8_19_11_9),
  Range(JSum_8_19_11_10),
  Range(JSum_8_19_11_11),
  Range(JSum_8_19_11_12),
  Range(JSum_8_19_11_13),
  Range(JSum_8_19_11_14),
  Range(JSum_8_19_11_15),
  Range(JSum_8_19_11_16),
  Range(JSum_8_19_11_17)
 };

static const UType JSum_8_19_12_1[]=
 {
  924u,
  852u,
  890u,
  908u,
  936u,
  902u,
  982u,
  923u,
  900u,
  940u,
  906u,
  874u,
  920u,
  902u,
  930u,
  856u,
  898u,
  928u,
  918u
 };

static const UType JSum_8_19_12_2[]=
 {
  947u,
  930u,
  910u,
  913u,
  947u,
  912u,
  902u,
  909u,
  880u,
  962u,
  850u,
  909u,
  940u,
  919u,
  867u,
  888u,
  876u,
  887u,
  941u
 };

static const UType JSum_8_19_12_3[]=
 {
  934u,
  906u,
  881u,
  961u,
  885u,
  912u,
  920u,
  877u,
  853u,
  914u,
  891u,
  900u,
  928u,
  958u,
  923u,
  920u,
  858u,
  939u,
  929u
 };

static const UType JSum_8_19_12_4[]=
 {
  934u,
  920u,
  900u,
  877u,
  961u,
  929u,
  923u,
  891u,
  920u,
  881u,
  939u,
  958u,
  914u,
  912u,
  906u,
  858u,
  928u,
  853u,
  885u
 };

static const UType JSum_8_19_12_5[]=
 {
  934u,
  961u,
  920u,
  914u,
  928u,
  920u,
  929u,
  881u,
  912u,
  853u,
  900u,
  923u,
  939u,
  906u,
  885u,
  877u,
  891u,
  958u,
  858u
 };

static const UType JSum_8_19_12_6[]=
 {
  947u,
  876u,
  919u,
  850u,
  909u,
  947u,
  930u,
  887u,
  867u,
  909u,
  880u,
  912u,
  910u,
  941u,
  888u,
  940u,
  962u,
  902u,
  913u
 };

static const UType JSum_8_19_12_7[]=
 {
  993u,
  879u,
  884u,
  884u,
  891u,
  913u,
  891u,
  879u,
  941u,
  891u,
  924u,
  879u,
  941u,
  924u,
  884u,
  924u,
  913u,
  913u,
  941u
 };

static const UType JSum_8_19_12_8[]=
 {
  947u,
  910u,
  947u,
  902u,
  880u,
  850u,
  940u,
  867u,
  876u,
  941u,
  930u,
  913u,
  912u,
  909u,
  962u,
  909u,
  919u,
  888u,
  887u
 };

static const UType JSum_8_19_12_9[]=
 {
  924u,
  928u,
  856u,
  902u,
  874u,
  940u,
  923u,
  902u,
  908u,
  852u,
  918u,
  898u,
  930u,
  920u,
  906u,
  900u,
  982u,
  936u,
  890u
 };

static const UType JSum_8_19_12_10[]=
 {
  947u,
  910u,
  947u,
  902u,
  880u,
  850u,
  940u,
  867u,
  876u,
  941u,
  930u,
  913u,
  912u,
  909u,
  962u,
  909u,
  919u,
  888u,
  887u
 };

static const UType JSum_8_19_12_11[]=
 {
  993u,
  879u,
  884u,
  884u,
  891u,
  913u,
  891u,
  879u,
  941u,
  891u,
  924u,
  879u,
  941u,
  924u,
  884u,
  924u,
  913u,
  913u,
  941u
 };

static const UType JSum_8_19_12_12[]=
 {
  947u,
  876u,
  919u,
  850u,
  909u,
  947u,
  930u,
  887u,
  867u,
  909u,
  880u,
  912u,
  910u,
  941u,
  888u,
  940u,
  962u,
  902u,
  913u
 };

static const UType JSum_8_19_12_13[]=
 {
  934u,
  961u,
  920u,
  914u,
  928u,
  920u,
  929u,
  881u,
  912u,
  853u,
  900u,
  923u,
  939u,
  906u,
  885u,
  877u,
  891u,
  958u,
  858u
 };

static const UType JSum_8_19_12_14[]=
 {
  934u,
  920u,
  900u,
  877u,
  961u,
  929u,
  923u,
  891u,
  920u,
  881u,
  939u,
  958u,
  914u,
  912u,
  906u,
  858u,
  928u,
  853u,
  885u
 };

static const UType JSum_8_19_12_15[]=
 {
  934u,
  906u,
  881u,
  961u,
  885u,
  912u,
  920u,
  877u,
  853u,
  914u,
  891u,
  900u,
  928u,
  958u,
  923u,
  920u,
  858u,
  939u,
  929u
 };

static const UType JSum_8_19_12_16[]=
 {
  947u,
  930u,
  910u,
  913u,
  947u,
  912u,
  902u,
  909u,
  880u,
  962u,
  850u,
  909u,
  940u,
  919u,
  867u,
  888u,
  876u,
  887u,
  941u
 };

static const UType JSum_8_19_12_17[]=
 {
  924u,
  852u,
  890u,
  908u,
  936u,
  902u,
  982u,
  923u,
  900u,
  940u,
  906u,
  874u,
  920u,
  902u,
  930u,
  856u,
  898u,
  928u,
  918u
 };

static const PtrLen<const UType> JTable_8_19_12[]=
 {
  Range(JSum_8_19_12_1),
  Range(JSum_8_19_12_2),
  Range(JSum_8_19_12_3),
  Range(JSum_8_19_12_4),
  Range(JSum_8_19_12_5),
  Range(JSum_8_19_12_6),
  Range(JSum_8_19_12_7),
  Range(JSum_8_19_12_8),
  Range(JSum_8_19_12_9),
  Range(JSum_8_19_12_10),
  Range(JSum_8_19_12_11),
  Range(JSum_8_19_12_12),
  Range(JSum_8_19_12_13),
  Range(JSum_8_19_12_14),
  Range(JSum_8_19_12_15),
  Range(JSum_8_19_12_16),
  Range(JSum_8_19_12_17)
 };

static const UType JSum_8_19_13_1[]=
 {
  1114u,
  1136u,
  1118u,
  1060u,
  1080u,
  1134u,
  1108u,
  1136u,
  1098u,
  1088u,
  1208u,
  1131u,
  1150u,
  1094u,
  1148u,
  1110u,
  1102u,
  1144u,
  1158u
 };

static const UType JSum_8_19_13_2[]=
 {
  1137u,
  1076u,
  1096u,
  1086u,
  1146u,
  1105u,
  1130u,
  1172u,
  1063u,
  1113u,
  1099u,
  1138u,
  1179u,
  1130u,
  1094u,
  1165u,
  1155u,
  1139u,
  1094u
 };

static const UType JSum_8_19_13_3[]=
 {
  1128u,
  1098u,
  1109u,
  1146u,
  1171u,
  1101u,
  1123u,
  1084u,
  1136u,
  1109u,
  1118u,
  1060u,
  1116u,
  1100u,
  1115u,
  1216u,
  1113u,
  1123u,
  1151u
 };

static const UType JSum_8_19_13_4[]=
 {
  1128u,
  1216u,
  1060u,
  1084u,
  1146u,
  1151u,
  1115u,
  1118u,
  1123u,
  1109u,
  1123u,
  1100u,
  1109u,
  1101u,
  1098u,
  1113u,
  1116u,
  1136u,
  1171u
 };

static const UType JSum_8_19_13_5[]=
 {
  1128u,
  1146u,
  1123u,
  1109u,
  1116u,
  1216u,
  1151u,
  1109u,
  1101u,
  1136u,
  1060u,
  1115u,
  1123u,
  1098u,
  1171u,
  1084u,
  1118u,
  1100u,
  1113u
 };

static const UType JSum_8_19_13_6[]=
 {
  1137u,
  1155u,
  1130u,
  1099u,
  1172u,
  1146u,
  1076u,
  1139u,
  1094u,
  1138u,
  1063u,
  1105u,
  1096u,
  1094u,
  1165u,
  1179u,
  1113u,
  1130u,
  1086u
 };

static const UType JSum_8_19_13_7[]=
 {
  1043u,
  1146u,
  1171u,
  1171u,
  1134u,
  1107u,
  1134u,
  1146u,
  1113u,
  1134u,
  1087u,
  1146u,
  1113u,
  1087u,
  1171u,
  1087u,
  1107u,
  1107u,
  1113u
 };

static const UType JSum_8_19_13_8[]=
 {
  1137u,
  1096u,
  1146u,
  1130u,
  1063u,
  1099u,
  1179u,
  1094u,
  1155u,
  1094u,
  1076u,
  1086u,
  1105u,
  1172u,
  1113u,
  1138u,
  1130u,
  1165u,
  1139u
 };

static const UType JSum_8_19_13_9[]=
 {
  1114u,
  1144u,
  1110u,
  1094u,
  1131u,
  1088u,
  1136u,
  1134u,
  1060u,
  1136u,
  1158u,
  1102u,
  1148u,
  1150u,
  1208u,
  1098u,
  1108u,
  1080u,
  1118u
 };

static const UType JSum_8_19_13_10[]=
 {
  1137u,
  1096u,
  1146u,
  1130u,
  1063u,
  1099u,
  1179u,
  1094u,
  1155u,
  1094u,
  1076u,
  1086u,
  1105u,
  1172u,
  1113u,
  1138u,
  1130u,
  1165u,
  1139u
 };

static const UType JSum_8_19_13_11[]=
 {
  1043u,
  1146u,
  1171u,
  1171u,
  1134u,
  1107u,
  1134u,
  1146u,
  1113u,
  1134u,
  1087u,
  1146u,
  1113u,
  1087u,
  1171u,
  1087u,
  1107u,
  1107u,
  1113u
 };

static const UType JSum_8_19_13_12[]=
 {
  1137u,
  1155u,
  1130u,
  1099u,
  1172u,
  1146u,
  1076u,
  1139u,
  1094u,
  1138u,
  1063u,
  1105u,
  1096u,
  1094u,
  1165u,
  1179u,
  1113u,
  1130u,
  1086u
 };

static const UType JSum_8_19_13_13[]=
 {
  1128u,
  1146u,
  1123u,
  1109u,
  1116u,
  1216u,
  1151u,
  1109u,
  1101u,
  1136u,
  1060u,
  1115u,
  1123u,
  1098u,
  1171u,
  1084u,
  1118u,
  1100u,
  1113u
 };

static const UType JSum_8_19_13_14[]=
 {
  1128u,
  1216u,
  1060u,
  1084u,
  1146u,
  1151u,
  1115u,
  1118u,
  1123u,
  1109u,
  1123u,
  1100u,
  1109u,
  1101u,
  1098u,
  1113u,
  1116u,
  1136u,
  1171u
 };

static const UType JSum_8_19_13_15[]=
 {
  1128u,
  1098u,
  1109u,
  1146u,
  1171u,
  1101u,
  1123u,
  1084u,
  1136u,
  1109u,
  1118u,
  1060u,
  1116u,
  1100u,
  1115u,
  1216u,
  1113u,
  1123u,
  1151u
 };

static const UType JSum_8_19_13_16[]=
 {
  1137u,
  1076u,
  1096u,
  1086u,
  1146u,
  1105u,
  1130u,
  1172u,
  1063u,
  1113u,
  1099u,
  1138u,
  1179u,
  1130u,
  1094u,
  1165u,
  1155u,
  1139u,
  1094u
 };

static const UType JSum_8_19_13_17[]=
 {
  1114u,
  1136u,
  1118u,
  1060u,
  1080u,
  1134u,
  1108u,
  1136u,
  1098u,
  1088u,
  1208u,
  1131u,
  1150u,
  1094u,
  1148u,
  1110u,
  1102u,
  1144u,
  1158u
 };

static const PtrLen<const UType> JTable_8_19_13[]=
 {
  Range(JSum_8_19_13_1),
  Range(JSum_8_19_13_2),
  Range(JSum_8_19_13_3),
  Range(JSum_8_19_13_4),
  Range(JSum_8_19_13_5),
  Range(JSum_8_19_13_6),
  Range(JSum_8_19_13_7),
  Range(JSum_8_19_13_8),
  Range(JSum_8_19_13_9),
  Range(JSum_8_19_13_10),
  Range(JSum_8_19_13_11),
  Range(JSum_8_19_13_12),
  Range(JSum_8_19_13_13),
  Range(JSum_8_19_13_14),
  Range(JSum_8_19_13_15),
  Range(JSum_8_19_13_16),
  Range(JSum_8_19_13_17)
 };

static const UType JSum_8_19_14_1[]=
 {
  1508u,
  1522u,
  1520u,
  1502u,
  1524u,
  1538u,
  1502u,
  1496u,
  1618u,
  1480u,
  1528u,
  1530u,
  1584u,
  1538u,
  1468u,
  1478u,
  1474u,
  1475u,
  1556u
 };

static const UType JSum_8_19_14_2[]=
 {
  1497u,
  1445u,
  1523u,
  1477u,
  1463u,
  1532u,
  1556u,
  1516u,
  1511u,
  1495u,
  1538u,
  1572u,
  1524u,
  1468u,
  1552u,
  1510u,
  1583u,
  1505u,
  1574u
 };

static const UType JSum_8_19_14_3[]=
 {
  1534u,
  1502u,
  1516u,
  1508u,
  1541u,
  1461u,
  1494u,
  1504u,
  1492u,
  1483u,
  1571u,
  1519u,
  1507u,
  1557u,
  1524u,
  1447u,
  1545u,
  1518u,
  1618u
 };

static const UType JSum_8_19_14_4[]=
 {
  1534u,
  1447u,
  1519u,
  1504u,
  1508u,
  1618u,
  1524u,
  1571u,
  1494u,
  1516u,
  1518u,
  1557u,
  1483u,
  1461u,
  1502u,
  1545u,
  1507u,
  1492u,
  1541u
 };

static const UType JSum_8_19_14_5[]=
 {
  1534u,
  1508u,
  1494u,
  1483u,
  1507u,
  1447u,
  1618u,
  1516u,
  1461u,
  1492u,
  1519u,
  1524u,
  1518u,
  1502u,
  1541u,
  1504u,
  1571u,
  1557u,
  1545u
 };

static const UType JSum_8_19_14_6[]=
 {
  1497u,
  1583u,
  1468u,
  1538u,
  1516u,
  1463u,
  1445u,
  1505u,
  1552u,
  1572u,
  1511u,
  1532u,
  1523u,
  1574u,
  1510u,
  1524u,
  1495u,
  1556u,
  1477u
 };

static const UType JSum_8_19_14_7[]=
 {
  1493u,
  1494u,
  1491u,
  1491u,
  1474u,
  1567u,
  1474u,
  1494u,
  1575u,
  1474u,
  1515u,
  1494u,
  1575u,
  1515u,
  1491u,
  1515u,
  1567u,
  1567u,
  1575u
 };

static const UType JSum_8_19_14_8[]=
 {
  1497u,
  1523u,
  1463u,
  1556u,
  1511u,
  1538u,
  1524u,
  1552u,
  1583u,
  1574u,
  1445u,
  1477u,
  1532u,
  1516u,
  1495u,
  1572u,
  1468u,
  1510u,
  1505u
 };

static const UType JSum_8_19_14_9[]=
 {
  1508u,
  1475u,
  1478u,
  1538u,
  1530u,
  1480u,
  1496u,
  1538u,
  1502u,
  1522u,
  1556u,
  1474u,
  1468u,
  1584u,
  1528u,
  1618u,
  1502u,
  1524u,
  1520u
 };

static const UType JSum_8_19_14_10[]=
 {
  1497u,
  1523u,
  1463u,
  1556u,
  1511u,
  1538u,
  1524u,
  1552u,
  1583u,
  1574u,
  1445u,
  1477u,
  1532u,
  1516u,
  1495u,
  1572u,
  1468u,
  1510u,
  1505u
 };

static const UType JSum_8_19_14_11[]=
 {
  1493u,
  1494u,
  1491u,
  1491u,
  1474u,
  1567u,
  1474u,
  1494u,
  1575u,
  1474u,
  1515u,
  1494u,
  1575u,
  1515u,
  1491u,
  1515u,
  1567u,
  1567u,
  1575u
 };

static const UType JSum_8_19_14_12[]=
 {
  1497u,
  1583u,
  1468u,
  1538u,
  1516u,
  1463u,
  1445u,
  1505u,
  1552u,
  1572u,
  1511u,
  1532u,
  1523u,
  1574u,
  1510u,
  1524u,
  1495u,
  1556u,
  1477u
 };

static const UType JSum_8_19_14_13[]=
 {
  1534u,
  1508u,
  1494u,
  1483u,
  1507u,
  1447u,
  1618u,
  1516u,
  1461u,
  1492u,
  1519u,
  1524u,
  1518u,
  1502u,
  1541u,
  1504u,
  1571u,
  1557u,
  1545u
 };

static const UType JSum_8_19_14_14[]=
 {
  1534u,
  1447u,
  1519u,
  1504u,
  1508u,
  1618u,
  1524u,
  1571u,
  1494u,
  1516u,
  1518u,
  1557u,
  1483u,
  1461u,
  1502u,
  1545u,
  1507u,
  1492u,
  1541u
 };

static const UType JSum_8_19_14_15[]=
 {
  1534u,
  1502u,
  1516u,
  1508u,
  1541u,
  1461u,
  1494u,
  1504u,
  1492u,
  1483u,
  1571u,
  1519u,
  1507u,
  1557u,
  1524u,
  1447u,
  1545u,
  1518u,
  1618u
 };

static const UType JSum_8_19_14_16[]=
 {
  1497u,
  1445u,
  1523u,
  1477u,
  1463u,
  1532u,
  1556u,
  1516u,
  1511u,
  1495u,
  1538u,
  1572u,
  1524u,
  1468u,
  1552u,
  1510u,
  1583u,
  1505u,
  1574u
 };

static const UType JSum_8_19_14_17[]=
 {
  1508u,
  1522u,
  1520u,
  1502u,
  1524u,
  1538u,
  1502u,
  1496u,
  1618u,
  1480u,
  1528u,
  1530u,
  1584u,
  1538u,
  1468u,
  1478u,
  1474u,
  1475u,
  1556u
 };

static const PtrLen<const UType> JTable_8_19_14[]=
 {
  Range(JSum_8_19_14_1),
  Range(JSum_8_19_14_2),
  Range(JSum_8_19_14_3),
  Range(JSum_8_19_14_4),
  Range(JSum_8_19_14_5),
  Range(JSum_8_19_14_6),
  Range(JSum_8_19_14_7),
  Range(JSum_8_19_14_8),
  Range(JSum_8_19_14_9),
  Range(JSum_8_19_14_10),
  Range(JSum_8_19_14_11),
  Range(JSum_8_19_14_12),
  Range(JSum_8_19_14_13),
  Range(JSum_8_19_14_14),
  Range(JSum_8_19_14_15),
  Range(JSum_8_19_14_16),
  Range(JSum_8_19_14_17)
 };

static const UType JSum_8_19_15_1[]=
 {
  1874u,
  1980u,
  1878u,
  1886u,
  1844u,
  1864u,
  1822u,
  1876u,
  1822u,
  1898u,
  1914u,
  1828u,
  1840u,
  1867u,
  1790u,
  1910u,
  1896u,
  1900u,
  1840u
 };

static const UType JSum_8_19_15_2[]=
 {
  1949u,
  1868u,
  1933u,
  1861u,
  1857u,
  1851u,
  1888u,
  1832u,
  1847u,
  1842u,
  1762u,
  1927u,
  1919u,
  1886u,
  1850u,
  1872u,
  1894u,
  1847u,
  1844u
 };

static const UType JSum_8_19_15_3[]=
 {
  1954u,
  1873u,
  1862u,
  1941u,
  1838u,
  1886u,
  1846u,
  1852u,
  1835u,
  1921u,
  1868u,
  1894u,
  1837u,
  1768u,
  1842u,
  1917u,
  1853u,
  1879u,
  1863u
 };

static const UType JSum_8_19_15_4[]=
 {
  1954u,
  1917u,
  1894u,
  1852u,
  1941u,
  1863u,
  1842u,
  1868u,
  1846u,
  1862u,
  1879u,
  1768u,
  1921u,
  1886u,
  1873u,
  1853u,
  1837u,
  1835u,
  1838u
 };

static const UType JSum_8_19_15_5[]=
 {
  1954u,
  1941u,
  1846u,
  1921u,
  1837u,
  1917u,
  1863u,
  1862u,
  1886u,
  1835u,
  1894u,
  1842u,
  1879u,
  1873u,
  1838u,
  1852u,
  1868u,
  1768u,
  1853u
 };

static const UType JSum_8_19_15_6[]=
 {
  1949u,
  1894u,
  1886u,
  1762u,
  1832u,
  1857u,
  1868u,
  1847u,
  1850u,
  1927u,
  1847u,
  1851u,
  1933u,
  1844u,
  1872u,
  1919u,
  1842u,
  1888u,
  1861u
 };

static const UType JSum_8_19_15_7[]=
 {
  1923u,
  1934u,
  1894u,
  1894u,
  1886u,
  1828u,
  1886u,
  1934u,
  1816u,
  1886u,
  1844u,
  1934u,
  1816u,
  1844u,
  1894u,
  1844u,
  1828u,
  1828u,
  1816u
 };

static const UType JSum_8_19_15_8[]=
 {
  1949u,
  1933u,
  1857u,
  1888u,
  1847u,
  1762u,
  1919u,
  1850u,
  1894u,
  1844u,
  1868u,
  1861u,
  1851u,
  1832u,
  1842u,
  1927u,
  1886u,
  1872u,
  1847u
 };

static const UType JSum_8_19_15_9[]=
 {
  1874u,
  1900u,
  1910u,
  1867u,
  1828u,
  1898u,
  1876u,
  1864u,
  1886u,
  1980u,
  1840u,
  1896u,
  1790u,
  1840u,
  1914u,
  1822u,
  1822u,
  1844u,
  1878u
 };

static const UType JSum_8_19_15_10[]=
 {
  1949u,
  1933u,
  1857u,
  1888u,
  1847u,
  1762u,
  1919u,
  1850u,
  1894u,
  1844u,
  1868u,
  1861u,
  1851u,
  1832u,
  1842u,
  1927u,
  1886u,
  1872u,
  1847u
 };

static const UType JSum_8_19_15_11[]=
 {
  1923u,
  1934u,
  1894u,
  1894u,
  1886u,
  1828u,
  1886u,
  1934u,
  1816u,
  1886u,
  1844u,
  1934u,
  1816u,
  1844u,
  1894u,
  1844u,
  1828u,
  1828u,
  1816u
 };

static const UType JSum_8_19_15_12[]=
 {
  1949u,
  1894u,
  1886u,
  1762u,
  1832u,
  1857u,
  1868u,
  1847u,
  1850u,
  1927u,
  1847u,
  1851u,
  1933u,
  1844u,
  1872u,
  1919u,
  1842u,
  1888u,
  1861u
 };

static const UType JSum_8_19_15_13[]=
 {
  1954u,
  1941u,
  1846u,
  1921u,
  1837u,
  1917u,
  1863u,
  1862u,
  1886u,
  1835u,
  1894u,
  1842u,
  1879u,
  1873u,
  1838u,
  1852u,
  1868u,
  1768u,
  1853u
 };

static const UType JSum_8_19_15_14[]=
 {
  1954u,
  1917u,
  1894u,
  1852u,
  1941u,
  1863u,
  1842u,
  1868u,
  1846u,
  1862u,
  1879u,
  1768u,
  1921u,
  1886u,
  1873u,
  1853u,
  1837u,
  1835u,
  1838u
 };

static const UType JSum_8_19_15_15[]=
 {
  1954u,
  1873u,
  1862u,
  1941u,
  1838u,
  1886u,
  1846u,
  1852u,
  1835u,
  1921u,
  1868u,
  1894u,
  1837u,
  1768u,
  1842u,
  1917u,
  1853u,
  1879u,
  1863u
 };

static const UType JSum_8_19_15_16[]=
 {
  1949u,
  1868u,
  1933u,
  1861u,
  1857u,
  1851u,
  1888u,
  1832u,
  1847u,
  1842u,
  1762u,
  1927u,
  1919u,
  1886u,
  1850u,
  1872u,
  1894u,
  1847u,
  1844u
 };

static const UType JSum_8_19_15_17[]=
 {
  1874u,
  1980u,
  1878u,
  1886u,
  1844u,
  1864u,
  1822u,
  1876u,
  1822u,
  1898u,
  1914u,
  1828u,
  1840u,
  1867u,
  1790u,
  1910u,
  1896u,
  1900u,
  1840u
 };

static const PtrLen<const UType> JTable_8_19_15[]=
 {
  Range(JSum_8_19_15_1),
  Range(JSum_8_19_15_2),
  Range(JSum_8_19_15_3),
  Range(JSum_8_19_15_4),
  Range(JSum_8_19_15_5),
  Range(JSum_8_19_15_6),
  Range(JSum_8_19_15_7),
  Range(JSum_8_19_15_8),
  Range(JSum_8_19_15_9),
  Range(JSum_8_19_15_10),
  Range(JSum_8_19_15_11),
  Range(JSum_8_19_15_12),
  Range(JSum_8_19_15_13),
  Range(JSum_8_19_15_14),
  Range(JSum_8_19_15_15),
  Range(JSum_8_19_15_16),
  Range(JSum_8_19_15_17)
 };

static const UType JSum_8_19_16_1[]=
 {
  2074u,
  1976u,
  1990u,
  2086u,
  1924u,
  2018u,
  1984u,
  1960u,
  1948u,
  1998u,
  1978u,
  2006u,
  2020u,
  2062u,
  2020u,
  1984u,
  1938u,
  2028u,
  2043u
 };

static const UType JSum_8_19_16_2[]=
 {
  2117u,
  2000u,
  2000u,
  1967u,
  2092u,
  2003u,
  1962u,
  2018u,
  1940u,
  2027u,
  2020u,
  1985u,
  2009u,
  1985u,
  1930u,
  1988u,
  1980u,
  1995u,
  2019u
 };

static const UType JSum_8_19_16_3[]=
 {
  2062u,
  2060u,
  1992u,
  1981u,
  1917u,
  2081u,
  1986u,
  1951u,
  2014u,
  2014u,
  1980u,
  1975u,
  1972u,
  2039u,
  1948u,
  2014u,
  1989u,
  1989u,
  2073u
 };

static const UType JSum_8_19_16_4[]=
 {
  2062u,
  2014u,
  1975u,
  1951u,
  1981u,
  2073u,
  1948u,
  1980u,
  1986u,
  1992u,
  1989u,
  2039u,
  2014u,
  2081u,
  2060u,
  1989u,
  1972u,
  2014u,
  1917u
 };

static const UType JSum_8_19_16_5[]=
 {
  2062u,
  1981u,
  1986u,
  2014u,
  1972u,
  2014u,
  2073u,
  1992u,
  2081u,
  2014u,
  1975u,
  1948u,
  1989u,
  2060u,
  1917u,
  1951u,
  1980u,
  2039u,
  1989u
 };

static const UType JSum_8_19_16_6[]=
 {
  2117u,
  1980u,
  1985u,
  2020u,
  2018u,
  2092u,
  2000u,
  1995u,
  1930u,
  1985u,
  1940u,
  2003u,
  2000u,
  2019u,
  1988u,
  2009u,
  2027u,
  1962u,
  1967u
 };

static const UType JSum_8_19_16_7[]=
 {
  2079u,
  1979u,
  1935u,
  1935u,
  1986u,
  2046u,
  1986u,
  1979u,
  1987u,
  1986u,
  2053u,
  1979u,
  1987u,
  2053u,
  1935u,
  2053u,
  2046u,
  2046u,
  1987u
 };

static const UType JSum_8_19_16_8[]=
 {
  2117u,
  2000u,
  2092u,
  1962u,
  1940u,
  2020u,
  2009u,
  1930u,
  1980u,
  2019u,
  2000u,
  1967u,
  2003u,
  2018u,
  2027u,
  1985u,
  1985u,
  1988u,
  1995u
 };

static const UType JSum_8_19_16_9[]=
 {
  2074u,
  2028u,
  1984u,
  2062u,
  2006u,
  1998u,
  1960u,
  2018u,
  2086u,
  1976u,
  2043u,
  1938u,
  2020u,
  2020u,
  1978u,
  1948u,
  1984u,
  1924u,
  1990u
 };

static const UType JSum_8_19_16_10[]=
 {
  2117u,
  2000u,
  2092u,
  1962u,
  1940u,
  2020u,
  2009u,
  1930u,
  1980u,
  2019u,
  2000u,
  1967u,
  2003u,
  2018u,
  2027u,
  1985u,
  1985u,
  1988u,
  1995u
 };

static const UType JSum_8_19_16_11[]=
 {
  2079u,
  1979u,
  1935u,
  1935u,
  1986u,
  2046u,
  1986u,
  1979u,
  1987u,
  1986u,
  2053u,
  1979u,
  1987u,
  2053u,
  1935u,
  2053u,
  2046u,
  2046u,
  1987u
 };

static const UType JSum_8_19_16_12[]=
 {
  2117u,
  1980u,
  1985u,
  2020u,
  2018u,
  2092u,
  2000u,
  1995u,
  1930u,
  1985u,
  1940u,
  2003u,
  2000u,
  2019u,
  1988u,
  2009u,
  2027u,
  1962u,
  1967u
 };

static const UType JSum_8_19_16_13[]=
 {
  2062u,
  1981u,
  1986u,
  2014u,
  1972u,
  2014u,
  2073u,
  1992u,
  2081u,
  2014u,
  1975u,
  1948u,
  1989u,
  2060u,
  1917u,
  1951u,
  1980u,
  2039u,
  1989u
 };

static const UType JSum_8_19_16_14[]=
 {
  2062u,
  2014u,
  1975u,
  1951u,
  1981u,
  2073u,
  1948u,
  1980u,
  1986u,
  1992u,
  1989u,
  2039u,
  2014u,
  2081u,
  2060u,
  1989u,
  1972u,
  2014u,
  1917u
 };

static const UType JSum_8_19_16_15[]=
 {
  2062u,
  2060u,
  1992u,
  1981u,
  1917u,
  2081u,
  1986u,
  1951u,
  2014u,
  2014u,
  1980u,
  1975u,
  1972u,
  2039u,
  1948u,
  2014u,
  1989u,
  1989u,
  2073u
 };

static const UType JSum_8_19_16_16[]=
 {
  2117u,
  2000u,
  2000u,
  1967u,
  2092u,
  2003u,
  1962u,
  2018u,
  1940u,
  2027u,
  2020u,
  1985u,
  2009u,
  1985u,
  1930u,
  1988u,
  1980u,
  1995u,
  2019u
 };

static const UType JSum_8_19_16_17[]=
 {
  2074u,
  1976u,
  1990u,
  2086u,
  1924u,
  2018u,
  1984u,
  1960u,
  1948u,
  1998u,
  1978u,
  2006u,
  2020u,
  2062u,
  2020u,
  1984u,
  1938u,
  2028u,
  2043u
 };

static const PtrLen<const UType> JTable_8_19_16[]=
 {
  Range(JSum_8_19_16_1),
  Range(JSum_8_19_16_2),
  Range(JSum_8_19_16_3),
  Range(JSum_8_19_16_4),
  Range(JSum_8_19_16_5),
  Range(JSum_8_19_16_6),
  Range(JSum_8_19_16_7),
  Range(JSum_8_19_16_8),
  Range(JSum_8_19_16_9),
  Range(JSum_8_19_16_10),
  Range(JSum_8_19_16_11),
  Range(JSum_8_19_16_12),
  Range(JSum_8_19_16_13),
  Range(JSum_8_19_16_14),
  Range(JSum_8_19_16_15),
  Range(JSum_8_19_16_16),
  Range(JSum_8_19_16_17)
 };

static const UType JSum_8_19_17_1[]=
 {
  2242u,
  2380u,
  2344u,
  2408u,
  2288u,
  2320u,
  2302u,
  2278u,
  2318u,
  2370u,
  2282u,
  2256u,
  2310u,
  2320u,
  2316u,
  2307u,
  2206u,
  2298u,
  2344u
 };

static const UType JSum_8_19_17_2[]=
 {
  2320u,
  2391u,
  2319u,
  2374u,
  2346u,
  2253u,
  2315u,
  2337u,
  2228u,
  2368u,
  2323u,
  2305u,
  2240u,
  2303u,
  2314u,
  2326u,
  2272u,
  2221u,
  2334u
 };

static const UType JSum_8_19_17_3[]=
 {
  2283u,
  2367u,
  2265u,
  2244u,
  2398u,
  2325u,
  2377u,
  2274u,
  2328u,
  2331u,
  2378u,
  2274u,
  2256u,
  2273u,
  2256u,
  2295u,
  2299u,
  2366u,
  2300u
 };

static const UType JSum_8_19_17_4[]=
 {
  2283u,
  2295u,
  2274u,
  2274u,
  2244u,
  2300u,
  2256u,
  2378u,
  2377u,
  2265u,
  2366u,
  2273u,
  2331u,
  2325u,
  2367u,
  2299u,
  2256u,
  2328u,
  2398u
 };

static const UType JSum_8_19_17_5[]=
 {
  2283u,
  2244u,
  2377u,
  2331u,
  2256u,
  2295u,
  2300u,
  2265u,
  2325u,
  2328u,
  2274u,
  2256u,
  2366u,
  2367u,
  2398u,
  2274u,
  2378u,
  2273u,
  2299u
 };

static const UType JSum_8_19_17_6[]=
 {
  2320u,
  2272u,
  2303u,
  2323u,
  2337u,
  2346u,
  2391u,
  2221u,
  2314u,
  2305u,
  2228u,
  2253u,
  2319u,
  2334u,
  2326u,
  2240u,
  2368u,
  2315u,
  2374u
 };

static const UType JSum_8_19_17_7[]=
 {
  2297u,
  2317u,
  2305u,
  2305u,
  2262u,
  2406u,
  2262u,
  2317u,
  2311u,
  2262u,
  2263u,
  2317u,
  2311u,
  2263u,
  2305u,
  2263u,
  2406u,
  2406u,
  2311u
 };

static const UType JSum_8_19_17_8[]=
 {
  2320u,
  2319u,
  2346u,
  2315u,
  2228u,
  2323u,
  2240u,
  2314u,
  2272u,
  2334u,
  2391u,
  2374u,
  2253u,
  2337u,
  2368u,
  2305u,
  2303u,
  2326u,
  2221u
 };

static const UType JSum_8_19_17_9[]=
 {
  2242u,
  2298u,
  2307u,
  2320u,
  2256u,
  2370u,
  2278u,
  2320u,
  2408u,
  2380u,
  2344u,
  2206u,
  2316u,
  2310u,
  2282u,
  2318u,
  2302u,
  2288u,
  2344u
 };

static const UType JSum_8_19_17_10[]=
 {
  2320u,
  2319u,
  2346u,
  2315u,
  2228u,
  2323u,
  2240u,
  2314u,
  2272u,
  2334u,
  2391u,
  2374u,
  2253u,
  2337u,
  2368u,
  2305u,
  2303u,
  2326u,
  2221u
 };

static const UType JSum_8_19_17_11[]=
 {
  2297u,
  2317u,
  2305u,
  2305u,
  2262u,
  2406u,
  2262u,
  2317u,
  2311u,
  2262u,
  2263u,
  2317u,
  2311u,
  2263u,
  2305u,
  2263u,
  2406u,
  2406u,
  2311u
 };

static const UType JSum_8_19_17_12[]=
 {
  2320u,
  2272u,
  2303u,
  2323u,
  2337u,
  2346u,
  2391u,
  2221u,
  2314u,
  2305u,
  2228u,
  2253u,
  2319u,
  2334u,
  2326u,
  2240u,
  2368u,
  2315u,
  2374u
 };

static const UType JSum_8_19_17_13[]=
 {
  2283u,
  2244u,
  2377u,
  2331u,
  2256u,
  2295u,
  2300u,
  2265u,
  2325u,
  2328u,
  2274u,
  2256u,
  2366u,
  2367u,
  2398u,
  2274u,
  2378u,
  2273u,
  2299u
 };

static const UType JSum_8_19_17_14[]=
 {
  2283u,
  2295u,
  2274u,
  2274u,
  2244u,
  2300u,
  2256u,
  2378u,
  2377u,
  2265u,
  2366u,
  2273u,
  2331u,
  2325u,
  2367u,
  2299u,
  2256u,
  2328u,
  2398u
 };

static const UType JSum_8_19_17_15[]=
 {
  2283u,
  2367u,
  2265u,
  2244u,
  2398u,
  2325u,
  2377u,
  2274u,
  2328u,
  2331u,
  2378u,
  2274u,
  2256u,
  2273u,
  2256u,
  2295u,
  2299u,
  2366u,
  2300u
 };

static const UType JSum_8_19_17_16[]=
 {
  2320u,
  2391u,
  2319u,
  2374u,
  2346u,
  2253u,
  2315u,
  2337u,
  2228u,
  2368u,
  2323u,
  2305u,
  2240u,
  2303u,
  2314u,
  2326u,
  2272u,
  2221u,
  2334u
 };

static const UType JSum_8_19_17_17[]=
 {
  2242u,
  2380u,
  2344u,
  2408u,
  2288u,
  2320u,
  2302u,
  2278u,
  2318u,
  2370u,
  2282u,
  2256u,
  2310u,
  2320u,
  2316u,
  2307u,
  2206u,
  2298u,
  2344u
 };

static const PtrLen<const UType> JTable_8_19_17[]=
 {
  Range(JSum_8_19_17_1),
  Range(JSum_8_19_17_2),
  Range(JSum_8_19_17_3),
  Range(JSum_8_19_17_4),
  Range(JSum_8_19_17_5),
  Range(JSum_8_19_17_6),
  Range(JSum_8_19_17_7),
  Range(JSum_8_19_17_8),
  Range(JSum_8_19_17_9),
  Range(JSum_8_19_17_10),
  Range(JSum_8_19_17_11),
  Range(JSum_8_19_17_12),
  Range(JSum_8_19_17_13),
  Range(JSum_8_19_17_14),
  Range(JSum_8_19_17_15),
  Range(JSum_8_19_17_16),
  Range(JSum_8_19_17_17)
 };

static const UType JSum_8_19_18_1[]=
 {
  2738u,
  2638u,
  2750u,
  2790u,
  2688u,
  2660u,
  2740u,
  2748u,
  2738u,
  2652u,
  2774u,
  2702u,
  2726u,
  2746u,
  2800u,
  2760u,
  2800u,
  2776u,
  2643u
 };

static const UType JSum_8_19_18_2[]=
 {
  2649u,
  2666u,
  2757u,
  2659u,
  2750u,
  2763u,
  2751u,
  2693u,
  2626u,
  2768u,
  2736u,
  2785u,
  2698u,
  2754u,
  2752u,
  2830u,
  2723u,
  2735u,
  2774u
 };

static const UType JSum_8_19_18_3[]=
 {
  2685u,
  2664u,
  2768u,
  2626u,
  2744u,
  2805u,
  2714u,
  2758u,
  2746u,
  2659u,
  2733u,
  2745u,
  2822u,
  2771u,
  2711u,
  2732u,
  2733u,
  2788u,
  2665u
 };

static const UType JSum_8_19_18_4[]=
 {
  2685u,
  2732u,
  2745u,
  2758u,
  2626u,
  2665u,
  2711u,
  2733u,
  2714u,
  2768u,
  2788u,
  2771u,
  2659u,
  2805u,
  2664u,
  2733u,
  2822u,
  2746u,
  2744u
 };

static const UType JSum_8_19_18_5[]=
 {
  2685u,
  2626u,
  2714u,
  2659u,
  2822u,
  2732u,
  2665u,
  2768u,
  2805u,
  2746u,
  2745u,
  2711u,
  2788u,
  2664u,
  2744u,
  2758u,
  2733u,
  2771u,
  2733u
 };

static const UType JSum_8_19_18_6[]=
 {
  2649u,
  2723u,
  2754u,
  2736u,
  2693u,
  2750u,
  2666u,
  2735u,
  2752u,
  2785u,
  2626u,
  2763u,
  2757u,
  2774u,
  2830u,
  2698u,
  2768u,
  2751u,
  2659u
 };

static const UType JSum_8_19_18_7[]=
 {
  2663u,
  2653u,
  2704u,
  2704u,
  2775u,
  2733u,
  2775u,
  2653u,
  2728u,
  2775u,
  2809u,
  2653u,
  2728u,
  2809u,
  2704u,
  2809u,
  2733u,
  2733u,
  2728u
 };

static const UType JSum_8_19_18_8[]=
 {
  2649u,
  2757u,
  2750u,
  2751u,
  2626u,
  2736u,
  2698u,
  2752u,
  2723u,
  2774u,
  2666u,
  2659u,
  2763u,
  2693u,
  2768u,
  2785u,
  2754u,
  2830u,
  2735u
 };

static const UType JSum_8_19_18_9[]=
 {
  2738u,
  2776u,
  2760u,
  2746u,
  2702u,
  2652u,
  2748u,
  2660u,
  2790u,
  2638u,
  2643u,
  2800u,
  2800u,
  2726u,
  2774u,
  2738u,
  2740u,
  2688u,
  2750u
 };

static const UType JSum_8_19_18_10[]=
 {
  2649u,
  2757u,
  2750u,
  2751u,
  2626u,
  2736u,
  2698u,
  2752u,
  2723u,
  2774u,
  2666u,
  2659u,
  2763u,
  2693u,
  2768u,
  2785u,
  2754u,
  2830u,
  2735u
 };

static const UType JSum_8_19_18_11[]=
 {
  2663u,
  2653u,
  2704u,
  2704u,
  2775u,
  2733u,
  2775u,
  2653u,
  2728u,
  2775u,
  2809u,
  2653u,
  2728u,
  2809u,
  2704u,
  2809u,
  2733u,
  2733u,
  2728u
 };

static const UType JSum_8_19_18_12[]=
 {
  2649u,
  2723u,
  2754u,
  2736u,
  2693u,
  2750u,
  2666u,
  2735u,
  2752u,
  2785u,
  2626u,
  2763u,
  2757u,
  2774u,
  2830u,
  2698u,
  2768u,
  2751u,
  2659u
 };

static const UType JSum_8_19_18_13[]=
 {
  2685u,
  2626u,
  2714u,
  2659u,
  2822u,
  2732u,
  2665u,
  2768u,
  2805u,
  2746u,
  2745u,
  2711u,
  2788u,
  2664u,
  2744u,
  2758u,
  2733u,
  2771u,
  2733u
 };

static const UType JSum_8_19_18_14[]=
 {
  2685u,
  2732u,
  2745u,
  2758u,
  2626u,
  2665u,
  2711u,
  2733u,
  2714u,
  2768u,
  2788u,
  2771u,
  2659u,
  2805u,
  2664u,
  2733u,
  2822u,
  2746u,
  2744u
 };

static const UType JSum_8_19_18_15[]=
 {
  2685u,
  2664u,
  2768u,
  2626u,
  2744u,
  2805u,
  2714u,
  2758u,
  2746u,
  2659u,
  2733u,
  2745u,
  2822u,
  2771u,
  2711u,
  2732u,
  2733u,
  2788u,
  2665u
 };

static const UType JSum_8_19_18_16[]=
 {
  2649u,
  2666u,
  2757u,
  2659u,
  2750u,
  2763u,
  2751u,
  2693u,
  2626u,
  2768u,
  2736u,
  2785u,
  2698u,
  2754u,
  2752u,
  2830u,
  2723u,
  2735u,
  2774u
 };

static const UType JSum_8_19_18_17[]=
 {
  2738u,
  2638u,
  2750u,
  2790u,
  2688u,
  2660u,
  2740u,
  2748u,
  2738u,
  2652u,
  2774u,
  2702u,
  2726u,
  2746u,
  2800u,
  2760u,
  2800u,
  2776u,
  2643u
 };

static const PtrLen<const UType> JTable_8_19_18[]=
 {
  Range(JSum_8_19_18_1),
  Range(JSum_8_19_18_2),
  Range(JSum_8_19_18_3),
  Range(JSum_8_19_18_4),
  Range(JSum_8_19_18_5),
  Range(JSum_8_19_18_6),
  Range(JSum_8_19_18_7),
  Range(JSum_8_19_18_8),
  Range(JSum_8_19_18_9),
  Range(JSum_8_19_18_10),
  Range(JSum_8_19_18_11),
  Range(JSum_8_19_18_12),
  Range(JSum_8_19_18_13),
  Range(JSum_8_19_18_14),
  Range(JSum_8_19_18_15),
  Range(JSum_8_19_18_16),
  Range(JSum_8_19_18_17)
 };

static const UType JSum_8_19_19_1[]=
 {
  2994u,
  3118u,
  3030u,
  3166u,
  3118u,
  3060u,
  3042u,
  3010u,
  3108u,
  3168u,
  3086u,
  3060u,
  3196u,
  3140u,
  3080u,
  3144u,
  3112u,
  3051u,
  3102u
 };

static const UType JSum_8_19_19_2[]=
 {
  3200u,
  3035u,
  3066u,
  3167u,
  3057u,
  2991u,
  3048u,
  3026u,
  3132u,
  3103u,
  3193u,
  3065u,
  3078u,
  3088u,
  3147u,
  3108u,
  3089u,
  3114u,
  3078u
 };

static const UType JSum_8_19_19_3[]=
 {
  3184u,
  3122u,
  3131u,
  3047u,
  3129u,
  3068u,
  3142u,
  3134u,
  3087u,
  3061u,
  3049u,
  3224u,
  3061u,
  3000u,
  3078u,
  3034u,
  3041u,
  3116u,
  3077u
 };

static const UType JSum_8_19_19_4[]=
 {
  3184u,
  3034u,
  3224u,
  3134u,
  3047u,
  3077u,
  3078u,
  3049u,
  3142u,
  3131u,
  3116u,
  3000u,
  3061u,
  3068u,
  3122u,
  3041u,
  3061u,
  3087u,
  3129u
 };

static const UType JSum_8_19_19_5[]=
 {
  3184u,
  3047u,
  3142u,
  3061u,
  3061u,
  3034u,
  3077u,
  3131u,
  3068u,
  3087u,
  3224u,
  3078u,
  3116u,
  3122u,
  3129u,
  3134u,
  3049u,
  3000u,
  3041u
 };

static const UType JSum_8_19_19_6[]=
 {
  3200u,
  3089u,
  3088u,
  3193u,
  3026u,
  3057u,
  3035u,
  3114u,
  3147u,
  3065u,
  3132u,
  2991u,
  3066u,
  3078u,
  3108u,
  3078u,
  3103u,
  3048u,
  3167u
 };

static const UType JSum_8_19_19_7[]=
 {
  2991u,
  3017u,
  3057u,
  3057u,
  3096u,
  3132u,
  3096u,
  3017u,
  3163u,
  3096u,
  3133u,
  3017u,
  3163u,
  3133u,
  3057u,
  3133u,
  3132u,
  3132u,
  3163u
 };

static const UType JSum_8_19_19_8[]=
 {
  3200u,
  3066u,
  3057u,
  3048u,
  3132u,
  3193u,
  3078u,
  3147u,
  3089u,
  3078u,
  3035u,
  3167u,
  2991u,
  3026u,
  3103u,
  3065u,
  3088u,
  3108u,
  3114u
 };

static const UType JSum_8_19_19_9[]=
 {
  2994u,
  3051u,
  3144u,
  3140u,
  3060u,
  3168u,
  3010u,
  3060u,
  3166u,
  3118u,
  3102u,
  3112u,
  3080u,
  3196u,
  3086u,
  3108u,
  3042u,
  3118u,
  3030u
 };

static const UType JSum_8_19_19_10[]=
 {
  3200u,
  3066u,
  3057u,
  3048u,
  3132u,
  3193u,
  3078u,
  3147u,
  3089u,
  3078u,
  3035u,
  3167u,
  2991u,
  3026u,
  3103u,
  3065u,
  3088u,
  3108u,
  3114u
 };

static const UType JSum_8_19_19_11[]=
 {
  2991u,
  3017u,
  3057u,
  3057u,
  3096u,
  3132u,
  3096u,
  3017u,
  3163u,
  3096u,
  3133u,
  3017u,
  3163u,
  3133u,
  3057u,
  3133u,
  3132u,
  3132u,
  3163u
 };

static const UType JSum_8_19_19_12[]=
 {
  3200u,
  3089u,
  3088u,
  3193u,
  3026u,
  3057u,
  3035u,
  3114u,
  3147u,
  3065u,
  3132u,
  2991u,
  3066u,
  3078u,
  3108u,
  3078u,
  3103u,
  3048u,
  3167u
 };

static const UType JSum_8_19_19_13[]=
 {
  3184u,
  3047u,
  3142u,
  3061u,
  3061u,
  3034u,
  3077u,
  3131u,
  3068u,
  3087u,
  3224u,
  3078u,
  3116u,
  3122u,
  3129u,
  3134u,
  3049u,
  3000u,
  3041u
 };

static const UType JSum_8_19_19_14[]=
 {
  3184u,
  3034u,
  3224u,
  3134u,
  3047u,
  3077u,
  3078u,
  3049u,
  3142u,
  3131u,
  3116u,
  3000u,
  3061u,
  3068u,
  3122u,
  3041u,
  3061u,
  3087u,
  3129u
 };

static const UType JSum_8_19_19_15[]=
 {
  3184u,
  3122u,
  3131u,
  3047u,
  3129u,
  3068u,
  3142u,
  3134u,
  3087u,
  3061u,
  3049u,
  3224u,
  3061u,
  3000u,
  3078u,
  3034u,
  3041u,
  3116u,
  3077u
 };

static const UType JSum_8_19_19_16[]=
 {
  3200u,
  3035u,
  3066u,
  3167u,
  3057u,
  2991u,
  3048u,
  3026u,
  3132u,
  3103u,
  3193u,
  3065u,
  3078u,
  3088u,
  3147u,
  3108u,
  3089u,
  3114u,
  3078u
 };

static const UType JSum_8_19_19_17[]=
 {
  2994u,
  3118u,
  3030u,
  3166u,
  3118u,
  3060u,
  3042u,
  3010u,
  3108u,
  3168u,
  3086u,
  3060u,
  3196u,
  3140u,
  3080u,
  3144u,
  3112u,
  3051u,
  3102u
 };

static const PtrLen<const UType> JTable_8_19_19[]=
 {
  Range(JSum_8_19_19_1),
  Range(JSum_8_19_19_2),
  Range(JSum_8_19_19_3),
  Range(JSum_8_19_19_4),
  Range(JSum_8_19_19_5),
  Range(JSum_8_19_19_6),
  Range(JSum_8_19_19_7),
  Range(JSum_8_19_19_8),
  Range(JSum_8_19_19_9),
  Range(JSum_8_19_19_10),
  Range(JSum_8_19_19_11),
  Range(JSum_8_19_19_12),
  Range(JSum_8_19_19_13),
  Range(JSum_8_19_19_14),
  Range(JSum_8_19_19_15),
  Range(JSum_8_19_19_16),
  Range(JSum_8_19_19_17)
 };

static const UType JSum_8_19_20_1[]=
 {
  4886u,
  4854u,
  4732u,
  4946u,
  4822u,
  4736u,
  4810u,
  4864u,
  4882u,
  4876u,
  4906u,
  4772u,
  4920u,
  4810u,
  4904u,
  4796u,
  4728u,
  4739u,
  4786u
 };

static const UType JSum_8_19_20_2[]=
 {
  4737u,
  4994u,
  4819u,
  4787u,
  4818u,
  4796u,
  4721u,
  4762u,
  4836u,
  4796u,
  4951u,
  4837u,
  4903u,
  4783u,
  4810u,
  4877u,
  4882u,
  4868u,
  4792u
 };

static const UType JSum_8_19_20_3[]=
 {
  4847u,
  4813u,
  4751u,
  4789u,
  4864u,
  4820u,
  4716u,
  4815u,
  4902u,
  4774u,
  4785u,
  4905u,
  4802u,
  4815u,
  4842u,
  4740u,
  4950u,
  4855u,
  4984u
 };

static const UType JSum_8_19_20_4[]=
 {
  4847u,
  4740u,
  4905u,
  4815u,
  4789u,
  4984u,
  4842u,
  4785u,
  4716u,
  4751u,
  4855u,
  4815u,
  4774u,
  4820u,
  4813u,
  4950u,
  4802u,
  4902u,
  4864u
 };

static const UType JSum_8_19_20_5[]=
 {
  4847u,
  4789u,
  4716u,
  4774u,
  4802u,
  4740u,
  4984u,
  4751u,
  4820u,
  4902u,
  4905u,
  4842u,
  4855u,
  4813u,
  4864u,
  4815u,
  4785u,
  4815u,
  4950u
 };

static const UType JSum_8_19_20_6[]=
 {
  4737u,
  4882u,
  4783u,
  4951u,
  4762u,
  4818u,
  4994u,
  4868u,
  4810u,
  4837u,
  4836u,
  4796u,
  4819u,
  4792u,
  4877u,
  4903u,
  4796u,
  4721u,
  4787u
 };

static const UType JSum_8_19_20_7[]=
 {
  4859u,
  4859u,
  4922u,
  4922u,
  4765u,
  4865u,
  4765u,
  4859u,
  4713u,
  4765u,
  4846u,
  4859u,
  4713u,
  4846u,
  4922u,
  4846u,
  4865u,
  4865u,
  4713u
 };

static const UType JSum_8_19_20_8[]=
 {
  4737u,
  4819u,
  4818u,
  4721u,
  4836u,
  4951u,
  4903u,
  4810u,
  4882u,
  4792u,
  4994u,
  4787u,
  4796u,
  4762u,
  4796u,
  4837u,
  4783u,
  4877u,
  4868u
 };

static const UType JSum_8_19_20_9[]=
 {
  4886u,
  4739u,
  4796u,
  4810u,
  4772u,
  4876u,
  4864u,
  4736u,
  4946u,
  4854u,
  4786u,
  4728u,
  4904u,
  4920u,
  4906u,
  4882u,
  4810u,
  4822u,
  4732u
 };

static const UType JSum_8_19_20_10[]=
 {
  4737u,
  4819u,
  4818u,
  4721u,
  4836u,
  4951u,
  4903u,
  4810u,
  4882u,
  4792u,
  4994u,
  4787u,
  4796u,
  4762u,
  4796u,
  4837u,
  4783u,
  4877u,
  4868u
 };

static const UType JSum_8_19_20_11[]=
 {
  4859u,
  4859u,
  4922u,
  4922u,
  4765u,
  4865u,
  4765u,
  4859u,
  4713u,
  4765u,
  4846u,
  4859u,
  4713u,
  4846u,
  4922u,
  4846u,
  4865u,
  4865u,
  4713u
 };

static const UType JSum_8_19_20_12[]=
 {
  4737u,
  4882u,
  4783u,
  4951u,
  4762u,
  4818u,
  4994u,
  4868u,
  4810u,
  4837u,
  4836u,
  4796u,
  4819u,
  4792u,
  4877u,
  4903u,
  4796u,
  4721u,
  4787u
 };

static const UType JSum_8_19_20_13[]=
 {
  4847u,
  4789u,
  4716u,
  4774u,
  4802u,
  4740u,
  4984u,
  4751u,
  4820u,
  4902u,
  4905u,
  4842u,
  4855u,
  4813u,
  4864u,
  4815u,
  4785u,
  4815u,
  4950u
 };

static const UType JSum_8_19_20_14[]=
 {
  4847u,
  4740u,
  4905u,
  4815u,
  4789u,
  4984u,
  4842u,
  4785u,
  4716u,
  4751u,
  4855u,
  4815u,
  4774u,
  4820u,
  4813u,
  4950u,
  4802u,
  4902u,
  4864u
 };

static const UType JSum_8_19_20_15[]=
 {
  4847u,
  4813u,
  4751u,
  4789u,
  4864u,
  4820u,
  4716u,
  4815u,
  4902u,
  4774u,
  4785u,
  4905u,
  4802u,
  4815u,
  4842u,
  4740u,
  4950u,
  4855u,
  4984u
 };

static const UType JSum_8_19_20_16[]=
 {
  4737u,
  4994u,
  4819u,
  4787u,
  4818u,
  4796u,
  4721u,
  4762u,
  4836u,
  4796u,
  4951u,
  4837u,
  4903u,
  4783u,
  4810u,
  4877u,
  4882u,
  4868u,
  4792u
 };

static const UType JSum_8_19_20_17[]=
 {
  4886u,
  4854u,
  4732u,
  4946u,
  4822u,
  4736u,
  4810u,
  4864u,
  4882u,
  4876u,
  4906u,
  4772u,
  4920u,
  4810u,
  4904u,
  4796u,
  4728u,
  4739u,
  4786u
 };

static const PtrLen<const UType> JTable_8_19_20[]=
 {
  Range(JSum_8_19_20_1),
  Range(JSum_8_19_20_2),
  Range(JSum_8_19_20_3),
  Range(JSum_8_19_20_4),
  Range(JSum_8_19_20_5),
  Range(JSum_8_19_20_6),
  Range(JSum_8_19_20_7),
  Range(JSum_8_19_20_8),
  Range(JSum_8_19_20_9),
  Range(JSum_8_19_20_10),
  Range(JSum_8_19_20_11),
  Range(JSum_8_19_20_12),
  Range(JSum_8_19_20_13),
  Range(JSum_8_19_20_14),
  Range(JSum_8_19_20_15),
  Range(JSum_8_19_20_16),
  Range(JSum_8_19_20_17)
 };

static const UType JSum_8_19_21_1[]=
 {
  5635u,
  5714u,
  5574u,
  5592u,
  5668u,
  5636u,
  5782u,
  5554u,
  5558u,
  5582u,
  5672u,
  5556u,
  5688u,
  5660u,
  5546u,
  5590u,
  5518u,
  5592u,
  5472u
 };

static const UType JSum_8_19_21_2[]=
 {
  5473u,
  5671u,
  5663u,
  5750u,
  5562u,
  5646u,
  5645u,
  5567u,
  5711u,
  5524u,
  5530u,
  5537u,
  5536u,
  5613u,
  5706u,
  5564u,
  5614u,
  5667u,
  5610u
 };

static const UType JSum_8_19_21_3[]=
 {
  5761u,
  5470u,
  5531u,
  5566u,
  5664u,
  5608u,
  5513u,
  5630u,
  5663u,
  5620u,
  5740u,
  5703u,
  5579u,
  5599u,
  5606u,
  5548u,
  5578u,
  5645u,
  5565u
 };

static const UType JSum_8_19_21_4[]=
 {
  5761u,
  5548u,
  5703u,
  5630u,
  5566u,
  5565u,
  5606u,
  5740u,
  5513u,
  5531u,
  5645u,
  5599u,
  5620u,
  5608u,
  5470u,
  5578u,
  5579u,
  5663u,
  5664u
 };

static const UType JSum_8_19_21_5[]=
 {
  5761u,
  5566u,
  5513u,
  5620u,
  5579u,
  5548u,
  5565u,
  5531u,
  5608u,
  5663u,
  5703u,
  5606u,
  5645u,
  5470u,
  5664u,
  5630u,
  5740u,
  5599u,
  5578u
 };

static const UType JSum_8_19_21_6[]=
 {
  5473u,
  5614u,
  5613u,
  5530u,
  5567u,
  5562u,
  5671u,
  5667u,
  5706u,
  5537u,
  5711u,
  5646u,
  5663u,
  5610u,
  5564u,
  5536u,
  5524u,
  5645u,
  5750u
 };

static const UType JSum_8_19_21_7[]=
 {
  5567u,
  5555u,
  5719u,
  5719u,
  5502u,
  5578u,
  5502u,
  5555u,
  5675u,
  5502u,
  5645u,
  5555u,
  5675u,
  5645u,
  5719u,
  5645u,
  5578u,
  5578u,
  5675u
 };

static const UType JSum_8_19_21_8[]=
 {
  5473u,
  5663u,
  5562u,
  5645u,
  5711u,
  5530u,
  5536u,
  5706u,
  5614u,
  5610u,
  5671u,
  5750u,
  5646u,
  5567u,
  5524u,
  5537u,
  5613u,
  5564u,
  5667u
 };

static const UType JSum_8_19_21_9[]=
 {
  5635u,
  5592u,
  5590u,
  5660u,
  5556u,
  5582u,
  5554u,
  5636u,
  5592u,
  5714u,
  5472u,
  5518u,
  5546u,
  5688u,
  5672u,
  5558u,
  5782u,
  5668u,
  5574u
 };

static const UType JSum_8_19_21_10[]=
 {
  5473u,
  5663u,
  5562u,
  5645u,
  5711u,
  5530u,
  5536u,
  5706u,
  5614u,
  5610u,
  5671u,
  5750u,
  5646u,
  5567u,
  5524u,
  5537u,
  5613u,
  5564u,
  5667u
 };

static const UType JSum_8_19_21_11[]=
 {
  5567u,
  5555u,
  5719u,
  5719u,
  5502u,
  5578u,
  5502u,
  5555u,
  5675u,
  5502u,
  5645u,
  5555u,
  5675u,
  5645u,
  5719u,
  5645u,
  5578u,
  5578u,
  5675u
 };

static const UType JSum_8_19_21_12[]=
 {
  5473u,
  5614u,
  5613u,
  5530u,
  5567u,
  5562u,
  5671u,
  5667u,
  5706u,
  5537u,
  5711u,
  5646u,
  5663u,
  5610u,
  5564u,
  5536u,
  5524u,
  5645u,
  5750u
 };

static const UType JSum_8_19_21_13[]=
 {
  5761u,
  5566u,
  5513u,
  5620u,
  5579u,
  5548u,
  5565u,
  5531u,
  5608u,
  5663u,
  5703u,
  5606u,
  5645u,
  5470u,
  5664u,
  5630u,
  5740u,
  5599u,
  5578u
 };

static const UType JSum_8_19_21_14[]=
 {
  5761u,
  5548u,
  5703u,
  5630u,
  5566u,
  5565u,
  5606u,
  5740u,
  5513u,
  5531u,
  5645u,
  5599u,
  5620u,
  5608u,
  5470u,
  5578u,
  5579u,
  5663u,
  5664u
 };

static const UType JSum_8_19_21_15[]=
 {
  5761u,
  5470u,
  5531u,
  5566u,
  5664u,
  5608u,
  5513u,
  5630u,
  5663u,
  5620u,
  5740u,
  5703u,
  5579u,
  5599u,
  5606u,
  5548u,
  5578u,
  5645u,
  5565u
 };

static const UType JSum_8_19_21_16[]=
 {
  5473u,
  5671u,
  5663u,
  5750u,
  5562u,
  5646u,
  5645u,
  5567u,
  5711u,
  5524u,
  5530u,
  5537u,
  5536u,
  5613u,
  5706u,
  5564u,
  5614u,
  5667u,
  5610u
 };

static const UType JSum_8_19_21_17[]=
 {
  5635u,
  5714u,
  5574u,
  5592u,
  5668u,
  5636u,
  5782u,
  5554u,
  5558u,
  5582u,
  5672u,
  5556u,
  5688u,
  5660u,
  5546u,
  5590u,
  5518u,
  5592u,
  5472u
 };

static const PtrLen<const UType> JTable_8_19_21[]=
 {
  Range(JSum_8_19_21_1),
  Range(JSum_8_19_21_2),
  Range(JSum_8_19_21_3),
  Range(JSum_8_19_21_4),
  Range(JSum_8_19_21_5),
  Range(JSum_8_19_21_6),
  Range(JSum_8_19_21_7),
  Range(JSum_8_19_21_8),
  Range(JSum_8_19_21_9),
  Range(JSum_8_19_21_10),
  Range(JSum_8_19_21_11),
  Range(JSum_8_19_21_12),
  Range(JSum_8_19_21_13),
  Range(JSum_8_19_21_14),
  Range(JSum_8_19_21_15),
  Range(JSum_8_19_21_16),
  Range(JSum_8_19_21_17)
 };

static const UType JSum_8_19_22_1[]=
 {
  17636u,
  17780u,
  17804u,
  17748u,
  17640u,
  17656u,
  17582u,
  17658u,
  17530u,
  17678u,
  17794u,
  17946u,
  17426u,
  17872u,
  17904u,
  17755u,
  17826u,
  17602u,
  17652u
 };

static const UType JSum_8_19_22_2[]=
 {
  17646u,
  17593u,
  17786u,
  17823u,
  17793u,
  17554u,
  17761u,
  17647u,
  18081u,
  17717u,
  17679u,
  17837u,
  17565u,
  17495u,
  17686u,
  17607u,
  17696u,
  17707u,
  17816u
 };

static const UType JSum_8_19_22_3[]=
 {
  17663u,
  17727u,
  17766u,
  17605u,
  17583u,
  17600u,
  17997u,
  17530u,
  17618u,
  17785u,
  17610u,
  17605u,
  17728u,
  17711u,
  17993u,
  17805u,
  17869u,
  17621u,
  17673u
 };

static const UType JSum_8_19_22_4[]=
 {
  17663u,
  17805u,
  17605u,
  17530u,
  17605u,
  17673u,
  17993u,
  17610u,
  17997u,
  17766u,
  17621u,
  17711u,
  17785u,
  17600u,
  17727u,
  17869u,
  17728u,
  17618u,
  17583u
 };

static const UType JSum_8_19_22_5[]=
 {
  17663u,
  17605u,
  17997u,
  17785u,
  17728u,
  17805u,
  17673u,
  17766u,
  17600u,
  17618u,
  17605u,
  17993u,
  17621u,
  17727u,
  17583u,
  17530u,
  17610u,
  17711u,
  17869u
 };

static const UType JSum_8_19_22_6[]=
 {
  17646u,
  17696u,
  17495u,
  17679u,
  17647u,
  17793u,
  17593u,
  17707u,
  17686u,
  17837u,
  18081u,
  17554u,
  17786u,
  17816u,
  17607u,
  17565u,
  17717u,
  17761u,
  17823u
 };

static const UType JSum_8_19_22_7[]=
 {
  17736u,
  17513u,
  17724u,
  17724u,
  17693u,
  17783u,
  17693u,
  17513u,
  17604u,
  17693u,
  17934u,
  17513u,
  17604u,
  17934u,
  17724u,
  17934u,
  17783u,
  17783u,
  17604u
 };

static const UType JSum_8_19_22_8[]=
 {
  17646u,
  17786u,
  17793u,
  17761u,
  18081u,
  17679u,
  17565u,
  17686u,
  17696u,
  17816u,
  17593u,
  17823u,
  17554u,
  17647u,
  17717u,
  17837u,
  17495u,
  17607u,
  17707u
 };

static const UType JSum_8_19_22_9[]=
 {
  17636u,
  17602u,
  17755u,
  17872u,
  17946u,
  17678u,
  17658u,
  17656u,
  17748u,
  17780u,
  17652u,
  17826u,
  17904u,
  17426u,
  17794u,
  17530u,
  17582u,
  17640u,
  17804u
 };

static const UType JSum_8_19_22_10[]=
 {
  17646u,
  17786u,
  17793u,
  17761u,
  18081u,
  17679u,
  17565u,
  17686u,
  17696u,
  17816u,
  17593u,
  17823u,
  17554u,
  17647u,
  17717u,
  17837u,
  17495u,
  17607u,
  17707u
 };

static const UType JSum_8_19_22_11[]=
 {
  17736u,
  17513u,
  17724u,
  17724u,
  17693u,
  17783u,
  17693u,
  17513u,
  17604u,
  17693u,
  17934u,
  17513u,
  17604u,
  17934u,
  17724u,
  17934u,
  17783u,
  17783u,
  17604u
 };

static const UType JSum_8_19_22_12[]=
 {
  17646u,
  17696u,
  17495u,
  17679u,
  17647u,
  17793u,
  17593u,
  17707u,
  17686u,
  17837u,
  18081u,
  17554u,
  17786u,
  17816u,
  17607u,
  17565u,
  17717u,
  17761u,
  17823u
 };

static const UType JSum_8_19_22_13[]=
 {
  17663u,
  17605u,
  17997u,
  17785u,
  17728u,
  17805u,
  17673u,
  17766u,
  17600u,
  17618u,
  17605u,
  17993u,
  17621u,
  17727u,
  17583u,
  17530u,
  17610u,
  17711u,
  17869u
 };

static const UType JSum_8_19_22_14[]=
 {
  17663u,
  17805u,
  17605u,
  17530u,
  17605u,
  17673u,
  17993u,
  17610u,
  17997u,
  17766u,
  17621u,
  17711u,
  17785u,
  17600u,
  17727u,
  17869u,
  17728u,
  17618u,
  17583u
 };

static const UType JSum_8_19_22_15[]=
 {
  17663u,
  17727u,
  17766u,
  17605u,
  17583u,
  17600u,
  17997u,
  17530u,
  17618u,
  17785u,
  17610u,
  17605u,
  17728u,
  17711u,
  17993u,
  17805u,
  17869u,
  17621u,
  17673u
 };

static const UType JSum_8_19_22_16[]=
 {
  17646u,
  17593u,
  17786u,
  17823u,
  17793u,
  17554u,
  17761u,
  17647u,
  18081u,
  17717u,
  17679u,
  17837u,
  17565u,
  17495u,
  17686u,
  17607u,
  17696u,
  17707u,
  17816u
 };

static const UType JSum_8_19_22_17[]=
 {
  17636u,
  17780u,
  17804u,
  17748u,
  17640u,
  17656u,
  17582u,
  17658u,
  17530u,
  17678u,
  17794u,
  17946u,
  17426u,
  17872u,
  17904u,
  17755u,
  17826u,
  17602u,
  17652u
 };

static const PtrLen<const UType> JTable_8_19_22[]=
 {
  Range(JSum_8_19_22_1),
  Range(JSum_8_19_22_2),
  Range(JSum_8_19_22_3),
  Range(JSum_8_19_22_4),
  Range(JSum_8_19_22_5),
  Range(JSum_8_19_22_6),
  Range(JSum_8_19_22_7),
  Range(JSum_8_19_22_8),
  Range(JSum_8_19_22_9),
  Range(JSum_8_19_22_10),
  Range(JSum_8_19_22_11),
  Range(JSum_8_19_22_12),
  Range(JSum_8_19_22_13),
  Range(JSum_8_19_22_14),
  Range(JSum_8_19_22_15),
  Range(JSum_8_19_22_16),
  Range(JSum_8_19_22_17)
 };

static const UType JSum_8_19_23_1[]=
 {
  24376u,
  24546u,
  24392u,
  24294u,
  24382u,
  24334u,
  24368u,
  24004u,
  24346u,
  24259u,
  24120u,
  24250u,
  24282u,
  24504u,
  24404u,
  24280u,
  23938u,
  24504u,
  24306u
 };

static const UType JSum_8_19_23_2[]=
 {
  24349u,
  24521u,
  24434u,
  24525u,
  24202u,
  23952u,
  24524u,
  24378u,
  24351u,
  24218u,
  24428u,
  24121u,
  24357u,
  24123u,
  24170u,
  24381u,
  24206u,
  24266u,
  24383u
 };

static const UType JSum_8_19_23_3[]=
 {
  24349u,
  24456u,
  24464u,
  24450u,
  24396u,
  24245u,
  24054u,
  24513u,
  24173u,
  24501u,
  24352u,
  24196u,
  24127u,
  24260u,
  24433u,
  24209u,
  23981u,
  24426u,
  24304u
 };

static const UType JSum_8_19_23_4[]=
 {
  24349u,
  24209u,
  24196u,
  24513u,
  24450u,
  24304u,
  24433u,
  24352u,
  24054u,
  24464u,
  24426u,
  24260u,
  24501u,
  24245u,
  24456u,
  23981u,
  24127u,
  24173u,
  24396u
 };

static const UType JSum_8_19_23_5[]=
 {
  24349u,
  24450u,
  24054u,
  24501u,
  24127u,
  24209u,
  24304u,
  24464u,
  24245u,
  24173u,
  24196u,
  24433u,
  24426u,
  24456u,
  24396u,
  24513u,
  24352u,
  24260u,
  23981u
 };

static const UType JSum_8_19_23_6[]=
 {
  24349u,
  24206u,
  24123u,
  24428u,
  24378u,
  24202u,
  24521u,
  24266u,
  24170u,
  24121u,
  24351u,
  23952u,
  24434u,
  24383u,
  24381u,
  24357u,
  24218u,
  24524u,
  24525u
 };

static const UType JSum_8_19_23_7[]=
 {
  24363u,
  24250u,
  24407u,
  24407u,
  24514u,
  24371u,
  24514u,
  24250u,
  24017u,
  24514u,
  24283u,
  24250u,
  24017u,
  24283u,
  24407u,
  24283u,
  24371u,
  24371u,
  24017u
 };

static const UType JSum_8_19_23_8[]=
 {
  24349u,
  24434u,
  24202u,
  24524u,
  24351u,
  24428u,
  24357u,
  24170u,
  24206u,
  24383u,
  24521u,
  24525u,
  23952u,
  24378u,
  24218u,
  24121u,
  24123u,
  24381u,
  24266u
 };

static const UType JSum_8_19_23_9[]=
 {
  24376u,
  24504u,
  24280u,
  24504u,
  24250u,
  24259u,
  24004u,
  24334u,
  24294u,
  24546u,
  24306u,
  23938u,
  24404u,
  24282u,
  24120u,
  24346u,
  24368u,
  24382u,
  24392u
 };

static const UType JSum_8_19_23_10[]=
 {
  24349u,
  24434u,
  24202u,
  24524u,
  24351u,
  24428u,
  24357u,
  24170u,
  24206u,
  24383u,
  24521u,
  24525u,
  23952u,
  24378u,
  24218u,
  24121u,
  24123u,
  24381u,
  24266u
 };

static const UType JSum_8_19_23_11[]=
 {
  24363u,
  24250u,
  24407u,
  24407u,
  24514u,
  24371u,
  24514u,
  24250u,
  24017u,
  24514u,
  24283u,
  24250u,
  24017u,
  24283u,
  24407u,
  24283u,
  24371u,
  24371u,
  24017u
 };

static const UType JSum_8_19_23_12[]=
 {
  24349u,
  24206u,
  24123u,
  24428u,
  24378u,
  24202u,
  24521u,
  24266u,
  24170u,
  24121u,
  24351u,
  23952u,
  24434u,
  24383u,
  24381u,
  24357u,
  24218u,
  24524u,
  24525u
 };

static const UType JSum_8_19_23_13[]=
 {
  24349u,
  24450u,
  24054u,
  24501u,
  24127u,
  24209u,
  24304u,
  24464u,
  24245u,
  24173u,
  24196u,
  24433u,
  24426u,
  24456u,
  24396u,
  24513u,
  24352u,
  24260u,
  23981u
 };

static const UType JSum_8_19_23_14[]=
 {
  24349u,
  24209u,
  24196u,
  24513u,
  24450u,
  24304u,
  24433u,
  24352u,
  24054u,
  24464u,
  24426u,
  24260u,
  24501u,
  24245u,
  24456u,
  23981u,
  24127u,
  24173u,
  24396u
 };

static const UType JSum_8_19_23_15[]=
 {
  24349u,
  24456u,
  24464u,
  24450u,
  24396u,
  24245u,
  24054u,
  24513u,
  24173u,
  24501u,
  24352u,
  24196u,
  24127u,
  24260u,
  24433u,
  24209u,
  23981u,
  24426u,
  24304u
 };

static const UType JSum_8_19_23_16[]=
 {
  24349u,
  24521u,
  24434u,
  24525u,
  24202u,
  23952u,
  24524u,
  24378u,
  24351u,
  24218u,
  24428u,
  24121u,
  24357u,
  24123u,
  24170u,
  24381u,
  24206u,
  24266u,
  24383u
 };

static const UType JSum_8_19_23_17[]=
 {
  24376u,
  24546u,
  24392u,
  24294u,
  24382u,
  24334u,
  24368u,
  24004u,
  24346u,
  24259u,
  24120u,
  24250u,
  24282u,
  24504u,
  24404u,
  24280u,
  23938u,
  24504u,
  24306u
 };

static const PtrLen<const UType> JTable_8_19_23[]=
 {
  Range(JSum_8_19_23_1),
  Range(JSum_8_19_23_2),
  Range(JSum_8_19_23_3),
  Range(JSum_8_19_23_4),
  Range(JSum_8_19_23_5),
  Range(JSum_8_19_23_6),
  Range(JSum_8_19_23_7),
  Range(JSum_8_19_23_8),
  Range(JSum_8_19_23_9),
  Range(JSum_8_19_23_10),
  Range(JSum_8_19_23_11),
  Range(JSum_8_19_23_12),
  Range(JSum_8_19_23_13),
  Range(JSum_8_19_23_14),
  Range(JSum_8_19_23_15),
  Range(JSum_8_19_23_16),
  Range(JSum_8_19_23_17)
 };

static const UType JSum_8_19_24_1[]=
 {
  27650u,
  27100u,
  27294u,
  27068u,
  27438u,
  27184u,
  27275u,
  27610u,
  27532u,
  27470u,
  27352u,
  27198u,
  27504u,
  27558u,
  27314u,
  27378u,
  27448u,
  27272u,
  27384u
 };

static const UType JSum_8_19_24_2[]=
 {
  27150u,
  27757u,
  27225u,
  27447u,
  27405u,
  27473u,
  27403u,
  27500u,
  27476u,
  27271u,
  27377u,
  27315u,
  27511u,
  27273u,
  27476u,
  27412u,
  27330u,
  27253u,
  26975u
 };

static const UType JSum_8_19_24_3[]=
 {
  27565u,
  27589u,
  27334u,
  27456u,
  27542u,
  27049u,
  27629u,
  27263u,
  27219u,
  27153u,
  27330u,
  27496u,
  27543u,
  27241u,
  27179u,
  27303u,
  27407u,
  27293u,
  27438u
 };

static const UType JSum_8_19_24_4[]=
 {
  27565u,
  27303u,
  27496u,
  27263u,
  27456u,
  27438u,
  27179u,
  27330u,
  27629u,
  27334u,
  27293u,
  27241u,
  27153u,
  27049u,
  27589u,
  27407u,
  27543u,
  27219u,
  27542u
 };

static const UType JSum_8_19_24_5[]=
 {
  27565u,
  27456u,
  27629u,
  27153u,
  27543u,
  27303u,
  27438u,
  27334u,
  27049u,
  27219u,
  27496u,
  27179u,
  27293u,
  27589u,
  27542u,
  27263u,
  27330u,
  27241u,
  27407u
 };

static const UType JSum_8_19_24_6[]=
 {
  27150u,
  27330u,
  27273u,
  27377u,
  27500u,
  27405u,
  27757u,
  27253u,
  27476u,
  27315u,
  27476u,
  27473u,
  27225u,
  26975u,
  27412u,
  27511u,
  27271u,
  27403u,
  27447u
 };

static const UType JSum_8_19_24_7[]=
 {
  27078u,
  27396u,
  27333u,
  27333u,
  27574u,
  27334u,
  27574u,
  27396u,
  27129u,
  27574u,
  27551u,
  27396u,
  27129u,
  27551u,
  27333u,
  27551u,
  27334u,
  27334u,
  27129u
 };

static const UType JSum_8_19_24_8[]=
 {
  27150u,
  27225u,
  27405u,
  27403u,
  27476u,
  27377u,
  27511u,
  27476u,
  27330u,
  26975u,
  27757u,
  27447u,
  27473u,
  27500u,
  27271u,
  27315u,
  27273u,
  27412u,
  27253u
 };

static const UType JSum_8_19_24_9[]=
 {
  27650u,
  27272u,
  27378u,
  27558u,
  27198u,
  27470u,
  27610u,
  27184u,
  27068u,
  27100u,
  27384u,
  27448u,
  27314u,
  27504u,
  27352u,
  27532u,
  27275u,
  27438u,
  27294u
 };

static const UType JSum_8_19_24_10[]=
 {
  27150u,
  27225u,
  27405u,
  27403u,
  27476u,
  27377u,
  27511u,
  27476u,
  27330u,
  26975u,
  27757u,
  27447u,
  27473u,
  27500u,
  27271u,
  27315u,
  27273u,
  27412u,
  27253u
 };

static const UType JSum_8_19_24_11[]=
 {
  27078u,
  27396u,
  27333u,
  27333u,
  27574u,
  27334u,
  27574u,
  27396u,
  27129u,
  27574u,
  27551u,
  27396u,
  27129u,
  27551u,
  27333u,
  27551u,
  27334u,
  27334u,
  27129u
 };

static const UType JSum_8_19_24_12[]=
 {
  27150u,
  27330u,
  27273u,
  27377u,
  27500u,
  27405u,
  27757u,
  27253u,
  27476u,
  27315u,
  27476u,
  27473u,
  27225u,
  26975u,
  27412u,
  27511u,
  27271u,
  27403u,
  27447u
 };

static const UType JSum_8_19_24_13[]=
 {
  27565u,
  27456u,
  27629u,
  27153u,
  27543u,
  27303u,
  27438u,
  27334u,
  27049u,
  27219u,
  27496u,
  27179u,
  27293u,
  27589u,
  27542u,
  27263u,
  27330u,
  27241u,
  27407u
 };

static const UType JSum_8_19_24_14[]=
 {
  27565u,
  27303u,
  27496u,
  27263u,
  27456u,
  27438u,
  27179u,
  27330u,
  27629u,
  27334u,
  27293u,
  27241u,
  27153u,
  27049u,
  27589u,
  27407u,
  27543u,
  27219u,
  27542u
 };

static const UType JSum_8_19_24_15[]=
 {
  27565u,
  27589u,
  27334u,
  27456u,
  27542u,
  27049u,
  27629u,
  27263u,
  27219u,
  27153u,
  27330u,
  27496u,
  27543u,
  27241u,
  27179u,
  27303u,
  27407u,
  27293u,
  27438u
 };

static const UType JSum_8_19_24_16[]=
 {
  27150u,
  27757u,
  27225u,
  27447u,
  27405u,
  27473u,
  27403u,
  27500u,
  27476u,
  27271u,
  27377u,
  27315u,
  27511u,
  27273u,
  27476u,
  27412u,
  27330u,
  27253u,
  26975u
 };

static const UType JSum_8_19_24_17[]=
 {
  27650u,
  27100u,
  27294u,
  27068u,
  27438u,
  27184u,
  27275u,
  27610u,
  27532u,
  27470u,
  27352u,
  27198u,
  27504u,
  27558u,
  27314u,
  27378u,
  27448u,
  27272u,
  27384u
 };

static const PtrLen<const UType> JTable_8_19_24[]=
 {
  Range(JSum_8_19_24_1),
  Range(JSum_8_19_24_2),
  Range(JSum_8_19_24_3),
  Range(JSum_8_19_24_4),
  Range(JSum_8_19_24_5),
  Range(JSum_8_19_24_6),
  Range(JSum_8_19_24_7),
  Range(JSum_8_19_24_8),
  Range(JSum_8_19_24_9),
  Range(JSum_8_19_24_10),
  Range(JSum_8_19_24_11),
  Range(JSum_8_19_24_12),
  Range(JSum_8_19_24_13),
  Range(JSum_8_19_24_14),
  Range(JSum_8_19_24_15),
  Range(JSum_8_19_24_16),
  Range(JSum_8_19_24_17)
 };

static const UType JSum_8_19_25_1[]=
 {
  62852u,
  63378u,
  62812u,
  62660u,
  62694u,
  62766u,
  62746u,
  63104u,
  62838u,
  62916u,
  62392u,
  62748u,
  62606u,
  62390u,
  62924u,
  62538u,
  63176u,
  62883u,
  62586u
 };

static const UType JSum_8_19_25_2[]=
 {
  62904u,
  63069u,
  62924u,
  62743u,
  62112u,
  63189u,
  62657u,
  62494u,
  62670u,
  62618u,
  62760u,
  63039u,
  62915u,
  62907u,
  62483u,
  62768u,
  62822u,
  62973u,
  62962u
 };

static const UType JSum_8_19_25_3[]=
 {
  62961u,
  62967u,
  62831u,
  62868u,
  62926u,
  62954u,
  62646u,
  62149u,
  62943u,
  62826u,
  62781u,
  62908u,
  62539u,
  62862u,
  62622u,
  62581u,
  62480u,
  63346u,
  62819u
 };

static const UType JSum_8_19_25_4[]=
 {
  62961u,
  62581u,
  62908u,
  62149u,
  62868u,
  62819u,
  62622u,
  62781u,
  62646u,
  62831u,
  63346u,
  62862u,
  62826u,
  62954u,
  62967u,
  62480u,
  62539u,
  62943u,
  62926u
 };

static const UType JSum_8_19_25_5[]=
 {
  62961u,
  62868u,
  62646u,
  62826u,
  62539u,
  62581u,
  62819u,
  62831u,
  62954u,
  62943u,
  62908u,
  62622u,
  63346u,
  62967u,
  62926u,
  62149u,
  62781u,
  62862u,
  62480u
 };

static const UType JSum_8_19_25_6[]=
 {
  62904u,
  62822u,
  62907u,
  62760u,
  62494u,
  62112u,
  63069u,
  62973u,
  62483u,
  63039u,
  62670u,
  63189u,
  62924u,
  62962u,
  62768u,
  62915u,
  62618u,
  62657u,
  62743u
 };

static const UType JSum_8_19_25_7[]=
 {
  62045u,
  62959u,
  62615u,
  62615u,
  62891u,
  62955u,
  62891u,
  62959u,
  62566u,
  62891u,
  63002u,
  62959u,
  62566u,
  63002u,
  62615u,
  63002u,
  62955u,
  62955u,
  62566u
 };

static const UType JSum_8_19_25_8[]=
 {
  62904u,
  62924u,
  62112u,
  62657u,
  62670u,
  62760u,
  62915u,
  62483u,
  62822u,
  62962u,
  63069u,
  62743u,
  63189u,
  62494u,
  62618u,
  63039u,
  62907u,
  62768u,
  62973u
 };

static const UType JSum_8_19_25_9[]=
 {
  62852u,
  62883u,
  62538u,
  62390u,
  62748u,
  62916u,
  63104u,
  62766u,
  62660u,
  63378u,
  62586u,
  63176u,
  62924u,
  62606u,
  62392u,
  62838u,
  62746u,
  62694u,
  62812u
 };

static const UType JSum_8_19_25_10[]=
 {
  62904u,
  62924u,
  62112u,
  62657u,
  62670u,
  62760u,
  62915u,
  62483u,
  62822u,
  62962u,
  63069u,
  62743u,
  63189u,
  62494u,
  62618u,
  63039u,
  62907u,
  62768u,
  62973u
 };

static const UType JSum_8_19_25_11[]=
 {
  62045u,
  62959u,
  62615u,
  62615u,
  62891u,
  62955u,
  62891u,
  62959u,
  62566u,
  62891u,
  63002u,
  62959u,
  62566u,
  63002u,
  62615u,
  63002u,
  62955u,
  62955u,
  62566u
 };

static const UType JSum_8_19_25_12[]=
 {
  62904u,
  62822u,
  62907u,
  62760u,
  62494u,
  62112u,
  63069u,
  62973u,
  62483u,
  63039u,
  62670u,
  63189u,
  62924u,
  62962u,
  62768u,
  62915u,
  62618u,
  62657u,
  62743u
 };

static const UType JSum_8_19_25_13[]=
 {
  62961u,
  62868u,
  62646u,
  62826u,
  62539u,
  62581u,
  62819u,
  62831u,
  62954u,
  62943u,
  62908u,
  62622u,
  63346u,
  62967u,
  62926u,
  62149u,
  62781u,
  62862u,
  62480u
 };

static const UType JSum_8_19_25_14[]=
 {
  62961u,
  62581u,
  62908u,
  62149u,
  62868u,
  62819u,
  62622u,
  62781u,
  62646u,
  62831u,
  63346u,
  62862u,
  62826u,
  62954u,
  62967u,
  62480u,
  62539u,
  62943u,
  62926u
 };

static const UType JSum_8_19_25_15[]=
 {
  62961u,
  62967u,
  62831u,
  62868u,
  62926u,
  62954u,
  62646u,
  62149u,
  62943u,
  62826u,
  62781u,
  62908u,
  62539u,
  62862u,
  62622u,
  62581u,
  62480u,
  63346u,
  62819u
 };

static const UType JSum_8_19_25_16[]=
 {
  62904u,
  63069u,
  62924u,
  62743u,
  62112u,
  63189u,
  62657u,
  62494u,
  62670u,
  62618u,
  62760u,
  63039u,
  62915u,
  62907u,
  62483u,
  62768u,
  62822u,
  62973u,
  62962u
 };

static const UType JSum_8_19_25_17[]=
 {
  62852u,
  63378u,
  62812u,
  62660u,
  62694u,
  62766u,
  62746u,
  63104u,
  62838u,
  62916u,
  62392u,
  62748u,
  62606u,
  62390u,
  62924u,
  62538u,
  63176u,
  62883u,
  62586u
 };

static const PtrLen<const UType> JTable_8_19_25[]=
 {
  Range(JSum_8_19_25_1),
  Range(JSum_8_19_25_2),
  Range(JSum_8_19_25_3),
  Range(JSum_8_19_25_4),
  Range(JSum_8_19_25_5),
  Range(JSum_8_19_25_6),
  Range(JSum_8_19_25_7),
  Range(JSum_8_19_25_8),
  Range(JSum_8_19_25_9),
  Range(JSum_8_19_25_10),
  Range(JSum_8_19_25_11),
  Range(JSum_8_19_25_12),
  Range(JSum_8_19_25_13),
  Range(JSum_8_19_25_14),
  Range(JSum_8_19_25_15),
  Range(JSum_8_19_25_16),
  Range(JSum_8_19_25_17)
 };

static const UType JSum_8_19_26_1[]=
 {
  102028u,
  101322u,
  102558u,
  101880u,
  102002u,
  101882u,
  101866u,
  102232u,
  102222u,
  101808u,
  102196u,
  102120u,
  102234u,
  101640u,
  102148u,
  102498u,
  102496u,
  102395u,
  102410u
 };

static const UType JSum_8_19_26_2[]=
 {
  101758u,
  102498u,
  102556u,
  102345u,
  102258u,
  102336u,
  101692u,
  101661u,
  102255u,
  102175u,
  102148u,
  102017u,
  101531u,
  102312u,
  102357u,
  101664u,
  102133u,
  101813u,
  102428u
 };

static const UType JSum_8_19_26_3[]=
 {
  101776u,
  101993u,
  102221u,
  101998u,
  101815u,
  102257u,
  102185u,
  102158u,
  102300u,
  102306u,
  102109u,
  102592u,
  102278u,
  101896u,
  102230u,
  101063u,
  102141u,
  102296u,
  102323u
 };

static const UType JSum_8_19_26_4[]=
 {
  101776u,
  101063u,
  102592u,
  102158u,
  101998u,
  102323u,
  102230u,
  102109u,
  102185u,
  102221u,
  102296u,
  101896u,
  102306u,
  102257u,
  101993u,
  102141u,
  102278u,
  102300u,
  101815u
 };

static const UType JSum_8_19_26_5[]=
 {
  101776u,
  101998u,
  102185u,
  102306u,
  102278u,
  101063u,
  102323u,
  102221u,
  102257u,
  102300u,
  102592u,
  102230u,
  102296u,
  101993u,
  101815u,
  102158u,
  102109u,
  101896u,
  102141u
 };

static const UType JSum_8_19_26_6[]=
 {
  101758u,
  102133u,
  102312u,
  102148u,
  101661u,
  102258u,
  102498u,
  101813u,
  102357u,
  102017u,
  102255u,
  102336u,
  102556u,
  102428u,
  101664u,
  101531u,
  102175u,
  101692u,
  102345u
 };

static const UType JSum_8_19_26_7[]=
 {
  102269u,
  102054u,
  102199u,
  102199u,
  102447u,
  101482u,
  102447u,
  102054u,
  102379u,
  102447u,
  101995u,
  102054u,
  102379u,
  101995u,
  102199u,
  101995u,
  101482u,
  101482u,
  102379u
 };

static const UType JSum_8_19_26_8[]=
 {
  101758u,
  102556u,
  102258u,
  101692u,
  102255u,
  102148u,
  101531u,
  102357u,
  102133u,
  102428u,
  102498u,
  102345u,
  102336u,
  101661u,
  102175u,
  102017u,
  102312u,
  101664u,
  101813u
 };

static const UType JSum_8_19_26_9[]=
 {
  102028u,
  102395u,
  102498u,
  101640u,
  102120u,
  101808u,
  102232u,
  101882u,
  101880u,
  101322u,
  102410u,
  102496u,
  102148u,
  102234u,
  102196u,
  102222u,
  101866u,
  102002u,
  102558u
 };

static const UType JSum_8_19_26_10[]=
 {
  101758u,
  102556u,
  102258u,
  101692u,
  102255u,
  102148u,
  101531u,
  102357u,
  102133u,
  102428u,
  102498u,
  102345u,
  102336u,
  101661u,
  102175u,
  102017u,
  102312u,
  101664u,
  101813u
 };

static const UType JSum_8_19_26_11[]=
 {
  102269u,
  102054u,
  102199u,
  102199u,
  102447u,
  101482u,
  102447u,
  102054u,
  102379u,
  102447u,
  101995u,
  102054u,
  102379u,
  101995u,
  102199u,
  101995u,
  101482u,
  101482u,
  102379u
 };

static const UType JSum_8_19_26_12[]=
 {
  101758u,
  102133u,
  102312u,
  102148u,
  101661u,
  102258u,
  102498u,
  101813u,
  102357u,
  102017u,
  102255u,
  102336u,
  102556u,
  102428u,
  101664u,
  101531u,
  102175u,
  101692u,
  102345u
 };

static const UType JSum_8_19_26_13[]=
 {
  101776u,
  101998u,
  102185u,
  102306u,
  102278u,
  101063u,
  102323u,
  102221u,
  102257u,
  102300u,
  102592u,
  102230u,
  102296u,
  101993u,
  101815u,
  102158u,
  102109u,
  101896u,
  102141u
 };

static const UType JSum_8_19_26_14[]=
 {
  101776u,
  101063u,
  102592u,
  102158u,
  101998u,
  102323u,
  102230u,
  102109u,
  102185u,
  102221u,
  102296u,
  101896u,
  102306u,
  102257u,
  101993u,
  102141u,
  102278u,
  102300u,
  101815u
 };

static const UType JSum_8_19_26_15[]=
 {
  101776u,
  101993u,
  102221u,
  101998u,
  101815u,
  102257u,
  102185u,
  102158u,
  102300u,
  102306u,
  102109u,
  102592u,
  102278u,
  101896u,
  102230u,
  101063u,
  102141u,
  102296u,
  102323u
 };

static const UType JSum_8_19_26_16[]=
 {
  101758u,
  102498u,
  102556u,
  102345u,
  102258u,
  102336u,
  101692u,
  101661u,
  102255u,
  102175u,
  102148u,
  102017u,
  101531u,
  102312u,
  102357u,
  101664u,
  102133u,
  101813u,
  102428u
 };

static const UType JSum_8_19_26_17[]=
 {
  102028u,
  101322u,
  102558u,
  101880u,
  102002u,
  101882u,
  101866u,
  102232u,
  102222u,
  101808u,
  102196u,
  102120u,
  102234u,
  101640u,
  102148u,
  102498u,
  102496u,
  102395u,
  102410u
 };

static const PtrLen<const UType> JTable_8_19_26[]=
 {
  Range(JSum_8_19_26_1),
  Range(JSum_8_19_26_2),
  Range(JSum_8_19_26_3),
  Range(JSum_8_19_26_4),
  Range(JSum_8_19_26_5),
  Range(JSum_8_19_26_6),
  Range(JSum_8_19_26_7),
  Range(JSum_8_19_26_8),
  Range(JSum_8_19_26_9),
  Range(JSum_8_19_26_10),
  Range(JSum_8_19_26_11),
  Range(JSum_8_19_26_12),
  Range(JSum_8_19_26_13),
  Range(JSum_8_19_26_14),
  Range(JSum_8_19_26_15),
  Range(JSum_8_19_26_16),
  Range(JSum_8_19_26_17)
 };

static const UType JSum_8_19_27_1[]=
 {
  138442u,
  138480u,
  138328u,
  137734u,
  138732u,
  138310u,
  138667u,
  138212u,
  137790u,
  138236u,
  137950u,
  137634u,
  138036u,
  138194u,
  138636u,
  137828u,
  137874u,
  138150u,
  137388u
 };

static const UType JSum_8_19_27_2[]=
 {
  138250u,
  137412u,
  138792u,
  138345u,
  138248u,
  138075u,
  137867u,
  138333u,
  138714u,
  138082u,
  138347u,
  138138u,
  138221u,
  137323u,
  137839u,
  137874u,
  138220u,
  138049u,
  138492u
 };

static const UType JSum_8_19_27_3[]=
 {
  137994u,
  137609u,
  138194u,
  137888u,
  138377u,
  138203u,
  138951u,
  138440u,
  137863u,
  137908u,
  138264u,
  138529u,
  138013u,
  138005u,
  138424u,
  137585u,
  138272u,
  138578u,
  137524u
 };

static const UType JSum_8_19_27_4[]=
 {
  137994u,
  137585u,
  138529u,
  138440u,
  137888u,
  137524u,
  138424u,
  138264u,
  138951u,
  138194u,
  138578u,
  138005u,
  137908u,
  138203u,
  137609u,
  138272u,
  138013u,
  137863u,
  138377u
 };

static const UType JSum_8_19_27_5[]=
 {
  137994u,
  137888u,
  138951u,
  137908u,
  138013u,
  137585u,
  137524u,
  138194u,
  138203u,
  137863u,
  138529u,
  138424u,
  138578u,
  137609u,
  138377u,
  138440u,
  138264u,
  138005u,
  138272u
 };

static const UType JSum_8_19_27_6[]=
 {
  138250u,
  138220u,
  137323u,
  138347u,
  138333u,
  138248u,
  137412u,
  138049u,
  137839u,
  138138u,
  138714u,
  138075u,
  138792u,
  138492u,
  137874u,
  138221u,
  138082u,
  137867u,
  138345u
 };

static const UType JSum_8_19_27_7[]=
 {
  138611u,
  137797u,
  138163u,
  138163u,
  138567u,
  138531u,
  138567u,
  137797u,
  137608u,
  138567u,
  138004u,
  137797u,
  137608u,
  138004u,
  138163u,
  138004u,
  138531u,
  138531u,
  137608u
 };

static const UType JSum_8_19_27_8[]=
 {
  138250u,
  138792u,
  138248u,
  137867u,
  138714u,
  138347u,
  138221u,
  137839u,
  138220u,
  138492u,
  137412u,
  138345u,
  138075u,
  138333u,
  138082u,
  138138u,
  137323u,
  137874u,
  138049u
 };

static const UType JSum_8_19_27_9[]=
 {
  138442u,
  138150u,
  137828u,
  138194u,
  137634u,
  138236u,
  138212u,
  138310u,
  137734u,
  138480u,
  137388u,
  137874u,
  138636u,
  138036u,
  137950u,
  137790u,
  138667u,
  138732u,
  138328u
 };

static const UType JSum_8_19_27_10[]=
 {
  138250u,
  138792u,
  138248u,
  137867u,
  138714u,
  138347u,
  138221u,
  137839u,
  138220u,
  138492u,
  137412u,
  138345u,
  138075u,
  138333u,
  138082u,
  138138u,
  137323u,
  137874u,
  138049u
 };

static const UType JSum_8_19_27_11[]=
 {
  138611u,
  137797u,
  138163u,
  138163u,
  138567u,
  138531u,
  138567u,
  137797u,
  137608u,
  138567u,
  138004u,
  137797u,
  137608u,
  138004u,
  138163u,
  138004u,
  138531u,
  138531u,
  137608u
 };

static const UType JSum_8_19_27_12[]=
 {
  138250u,
  138220u,
  137323u,
  138347u,
  138333u,
  138248u,
  137412u,
  138049u,
  137839u,
  138138u,
  138714u,
  138075u,
  138792u,
  138492u,
  137874u,
  138221u,
  138082u,
  137867u,
  138345u
 };

static const UType JSum_8_19_27_13[]=
 {
  137994u,
  137888u,
  138951u,
  137908u,
  138013u,
  137585u,
  137524u,
  138194u,
  138203u,
  137863u,
  138529u,
  138424u,
  138578u,
  137609u,
  138377u,
  138440u,
  138264u,
  138005u,
  138272u
 };

static const UType JSum_8_19_27_14[]=
 {
  137994u,
  137585u,
  138529u,
  138440u,
  137888u,
  137524u,
  138424u,
  138264u,
  138951u,
  138194u,
  138578u,
  138005u,
  137908u,
  138203u,
  137609u,
  138272u,
  138013u,
  137863u,
  138377u
 };

static const UType JSum_8_19_27_15[]=
 {
  137994u,
  137609u,
  138194u,
  137888u,
  138377u,
  138203u,
  138951u,
  138440u,
  137863u,
  137908u,
  138264u,
  138529u,
  138013u,
  138005u,
  138424u,
  137585u,
  138272u,
  138578u,
  137524u
 };

static const UType JSum_8_19_27_16[]=
 {
  138250u,
  137412u,
  138792u,
  138345u,
  138248u,
  138075u,
  137867u,
  138333u,
  138714u,
  138082u,
  138347u,
  138138u,
  138221u,
  137323u,
  137839u,
  137874u,
  138220u,
  138049u,
  138492u
 };

static const UType JSum_8_19_27_17[]=
 {
  138442u,
  138480u,
  138328u,
  137734u,
  138732u,
  138310u,
  138667u,
  138212u,
  137790u,
  138236u,
  137950u,
  137634u,
  138036u,
  138194u,
  138636u,
  137828u,
  137874u,
  138150u,
  137388u
 };

static const PtrLen<const UType> JTable_8_19_27[]=
 {
  Range(JSum_8_19_27_1),
  Range(JSum_8_19_27_2),
  Range(JSum_8_19_27_3),
  Range(JSum_8_19_27_4),
  Range(JSum_8_19_27_5),
  Range(JSum_8_19_27_6),
  Range(JSum_8_19_27_7),
  Range(JSum_8_19_27_8),
  Range(JSum_8_19_27_9),
  Range(JSum_8_19_27_10),
  Range(JSum_8_19_27_11),
  Range(JSum_8_19_27_12),
  Range(JSum_8_19_27_13),
  Range(JSum_8_19_27_14),
  Range(JSum_8_19_27_15),
  Range(JSum_8_19_27_16),
  Range(JSum_8_19_27_17)
 };

static const UType JSum_8_19_28_1[]=
 {
  152048u,
  152428u,
  153003u,
  152914u,
  151902u,
  152460u,
  152482u,
  152740u,
  152012u,
  152280u,
  152294u,
  152064u,
  152434u,
  152672u,
  152378u,
  153530u,
  152406u,
  152740u,
  152522u
 };

static const UType JSum_8_19_28_2[]=
 {
  152966u,
  153424u,
  152656u,
  152604u,
  152166u,
  153028u,
  152064u,
  152338u,
  152666u,
  152552u,
  152182u,
  152526u,
  152546u,
  151856u,
  152876u,
  152230u,
  152307u,
  152204u,
  152118u
 };

static const UType JSum_8_19_28_3[]=
 {
  152688u,
  151942u,
  152982u,
  151886u,
  152436u,
  152902u,
  152856u,
  152732u,
  153066u,
  152435u,
  152148u,
  152294u,
  152942u,
  152236u,
  151946u,
  151964u,
  152780u,
  152456u,
  152618u
 };

static const UType JSum_8_19_28_4[]=
 {
  152688u,
  151964u,
  152294u,
  152732u,
  151886u,
  152618u,
  151946u,
  152148u,
  152856u,
  152982u,
  152456u,
  152236u,
  152435u,
  152902u,
  151942u,
  152780u,
  152942u,
  153066u,
  152436u
 };

static const UType JSum_8_19_28_5[]=
 {
  152688u,
  151886u,
  152856u,
  152435u,
  152942u,
  151964u,
  152618u,
  152982u,
  152902u,
  153066u,
  152294u,
  151946u,
  152456u,
  151942u,
  152436u,
  152732u,
  152148u,
  152236u,
  152780u
 };

static const UType JSum_8_19_28_6[]=
 {
  152966u,
  152307u,
  151856u,
  152182u,
  152338u,
  152166u,
  153424u,
  152204u,
  152876u,
  152526u,
  152666u,
  153028u,
  152656u,
  152118u,
  152230u,
  152546u,
  152552u,
  152064u,
  152604u
 };

static const UType JSum_8_19_28_7[]=
 {
  153395u,
  152810u,
  152672u,
  152672u,
  152754u,
  152042u,
  152754u,
  152810u,
  152032u,
  152754u,
  152328u,
  152810u,
  152032u,
  152328u,
  152672u,
  152328u,
  152042u,
  152042u,
  152032u
 };

static const UType JSum_8_19_28_8[]=
 {
  152966u,
  152656u,
  152166u,
  152064u,
  152666u,
  152182u,
  152546u,
  152876u,
  152307u,
  152118u,
  153424u,
  152604u,
  153028u,
  152338u,
  152552u,
  152526u,
  151856u,
  152230u,
  152204u
 };

static const UType JSum_8_19_28_9[]=
 {
  152048u,
  152740u,
  153530u,
  152672u,
  152064u,
  152280u,
  152740u,
  152460u,
  152914u,
  152428u,
  152522u,
  152406u,
  152378u,
  152434u,
  152294u,
  152012u,
  152482u,
  151902u,
  153003u
 };

static const UType JSum_8_19_28_10[]=
 {
  152966u,
  152656u,
  152166u,
  152064u,
  152666u,
  152182u,
  152546u,
  152876u,
  152307u,
  152118u,
  153424u,
  152604u,
  153028u,
  152338u,
  152552u,
  152526u,
  151856u,
  152230u,
  152204u
 };

static const UType JSum_8_19_28_11[]=
 {
  153395u,
  152810u,
  152672u,
  152672u,
  152754u,
  152042u,
  152754u,
  152810u,
  152032u,
  152754u,
  152328u,
  152810u,
  152032u,
  152328u,
  152672u,
  152328u,
  152042u,
  152042u,
  152032u
 };

static const UType JSum_8_19_28_12[]=
 {
  152966u,
  152307u,
  151856u,
  152182u,
  152338u,
  152166u,
  153424u,
  152204u,
  152876u,
  152526u,
  152666u,
  153028u,
  152656u,
  152118u,
  152230u,
  152546u,
  152552u,
  152064u,
  152604u
 };

static const UType JSum_8_19_28_13[]=
 {
  152688u,
  151886u,
  152856u,
  152435u,
  152942u,
  151964u,
  152618u,
  152982u,
  152902u,
  153066u,
  152294u,
  151946u,
  152456u,
  151942u,
  152436u,
  152732u,
  152148u,
  152236u,
  152780u
 };

static const UType JSum_8_19_28_14[]=
 {
  152688u,
  151964u,
  152294u,
  152732u,
  151886u,
  152618u,
  151946u,
  152148u,
  152856u,
  152982u,
  152456u,
  152236u,
  152435u,
  152902u,
  151942u,
  152780u,
  152942u,
  153066u,
  152436u
 };

static const UType JSum_8_19_28_15[]=
 {
  152688u,
  151942u,
  152982u,
  151886u,
  152436u,
  152902u,
  152856u,
  152732u,
  153066u,
  152435u,
  152148u,
  152294u,
  152942u,
  152236u,
  151946u,
  151964u,
  152780u,
  152456u,
  152618u
 };

static const UType JSum_8_19_28_16[]=
 {
  152966u,
  153424u,
  152656u,
  152604u,
  152166u,
  153028u,
  152064u,
  152338u,
  152666u,
  152552u,
  152182u,
  152526u,
  152546u,
  151856u,
  152876u,
  152230u,
  152307u,
  152204u,
  152118u
 };

static const UType JSum_8_19_28_17[]=
 {
  152048u,
  152428u,
  153003u,
  152914u,
  151902u,
  152460u,
  152482u,
  152740u,
  152012u,
  152280u,
  152294u,
  152064u,
  152434u,
  152672u,
  152378u,
  153530u,
  152406u,
  152740u,
  152522u
 };

static const PtrLen<const UType> JTable_8_19_28[]=
 {
  Range(JSum_8_19_28_1),
  Range(JSum_8_19_28_2),
  Range(JSum_8_19_28_3),
  Range(JSum_8_19_28_4),
  Range(JSum_8_19_28_5),
  Range(JSum_8_19_28_6),
  Range(JSum_8_19_28_7),
  Range(JSum_8_19_28_8),
  Range(JSum_8_19_28_9),
  Range(JSum_8_19_28_10),
  Range(JSum_8_19_28_11),
  Range(JSum_8_19_28_12),
  Range(JSum_8_19_28_13),
  Range(JSum_8_19_28_14),
  Range(JSum_8_19_28_15),
  Range(JSum_8_19_28_16),
  Range(JSum_8_19_28_17)
 };

static const UType JSum_8_19_29_1[]=
 {
  170790u,
  171006u,
  169868u,
  170242u,
  170350u,
  170010u,
  169694u,
  170339u,
  170040u,
  170004u,
  170160u,
  170060u,
  169762u,
  170616u,
  169860u,
  170142u,
  170174u,
  169340u,
  170772u
 };

static const UType JSum_8_19_29_2[]=
 {
  170014u,
  169761u,
  169710u,
  170502u,
  170164u,
  170026u,
  170031u,
  170286u,
  170649u,
  170561u,
  170704u,
  170625u,
  169041u,
  170550u,
  170011u,
  169936u,
  169971u,
  170450u,
  170237u
 };

static const UType JSum_8_19_29_3[]=
 {
  170500u,
  169481u,
  170060u,
  170337u,
  170442u,
  169949u,
  169102u,
  170593u,
  169824u,
  170071u,
  170581u,
  170698u,
  170463u,
  170627u,
  169890u,
  170033u,
  170154u,
  170322u,
  170102u
 };

static const UType JSum_8_19_29_4[]=
 {
  170500u,
  170033u,
  170698u,
  170593u,
  170337u,
  170102u,
  169890u,
  170581u,
  169102u,
  170060u,
  170322u,
  170627u,
  170071u,
  169949u,
  169481u,
  170154u,
  170463u,
  169824u,
  170442u
 };

static const UType JSum_8_19_29_5[]=
 {
  170500u,
  170337u,
  169102u,
  170071u,
  170463u,
  170033u,
  170102u,
  170060u,
  169949u,
  169824u,
  170698u,
  169890u,
  170322u,
  169481u,
  170442u,
  170593u,
  170581u,
  170627u,
  170154u
 };

static const UType JSum_8_19_29_6[]=
 {
  170014u,
  169971u,
  170550u,
  170704u,
  170286u,
  170164u,
  169761u,
  170450u,
  170011u,
  170625u,
  170649u,
  170026u,
  169710u,
  170237u,
  169936u,
  169041u,
  170561u,
  170031u,
  170502u
 };

static const UType JSum_8_19_29_7[]=
 {
  170559u,
  170295u,
  169946u,
  169946u,
  169899u,
  170965u,
  169899u,
  170295u,
  169742u,
  169899u,
  170043u,
  170295u,
  169742u,
  170043u,
  169946u,
  170043u,
  170965u,
  170965u,
  169742u
 };

static const UType JSum_8_19_29_8[]=
 {
  170014u,
  169710u,
  170164u,
  170031u,
  170649u,
  170704u,
  169041u,
  170011u,
  169971u,
  170237u,
  169761u,
  170502u,
  170026u,
  170286u,
  170561u,
  170625u,
  170550u,
  169936u,
  170450u
 };

static const UType JSum_8_19_29_9[]=
 {
  170790u,
  169340u,
  170142u,
  170616u,
  170060u,
  170004u,
  170339u,
  170010u,
  170242u,
  171006u,
  170772u,
  170174u,
  169860u,
  169762u,
  170160u,
  170040u,
  169694u,
  170350u,
  169868u
 };

static const UType JSum_8_19_29_10[]=
 {
  170014u,
  169710u,
  170164u,
  170031u,
  170649u,
  170704u,
  169041u,
  170011u,
  169971u,
  170237u,
  169761u,
  170502u,
  170026u,
  170286u,
  170561u,
  170625u,
  170550u,
  169936u,
  170450u
 };

static const UType JSum_8_19_29_11[]=
 {
  170559u,
  170295u,
  169946u,
  169946u,
  169899u,
  170965u,
  169899u,
  170295u,
  169742u,
  169899u,
  170043u,
  170295u,
  169742u,
  170043u,
  169946u,
  170043u,
  170965u,
  170965u,
  169742u
 };

static const UType JSum_8_19_29_12[]=
 {
  170014u,
  169971u,
  170550u,
  170704u,
  170286u,
  170164u,
  169761u,
  170450u,
  170011u,
  170625u,
  170649u,
  170026u,
  169710u,
  170237u,
  169936u,
  169041u,
  170561u,
  170031u,
  170502u
 };

static const UType JSum_8_19_29_13[]=
 {
  170500u,
  170337u,
  169102u,
  170071u,
  170463u,
  170033u,
  170102u,
  170060u,
  169949u,
  169824u,
  170698u,
  169890u,
  170322u,
  169481u,
  170442u,
  170593u,
  170581u,
  170627u,
  170154u
 };

static const UType JSum_8_19_29_14[]=
 {
  170500u,
  170033u,
  170698u,
  170593u,
  170337u,
  170102u,
  169890u,
  170581u,
  169102u,
  170060u,
  170322u,
  170627u,
  170071u,
  169949u,
  169481u,
  170154u,
  170463u,
  169824u,
  170442u
 };

static const UType JSum_8_19_29_15[]=
 {
  170500u,
  169481u,
  170060u,
  170337u,
  170442u,
  169949u,
  169102u,
  170593u,
  169824u,
  170071u,
  170581u,
  170698u,
  170463u,
  170627u,
  169890u,
  170033u,
  170154u,
  170322u,
  170102u
 };

static const UType JSum_8_19_29_16[]=
 {
  170014u,
  169761u,
  169710u,
  170502u,
  170164u,
  170026u,
  170031u,
  170286u,
  170649u,
  170561u,
  170704u,
  170625u,
  169041u,
  170550u,
  170011u,
  169936u,
  169971u,
  170450u,
  170237u
 };

static const UType JSum_8_19_29_17[]=
 {
  170790u,
  171006u,
  169868u,
  170242u,
  170350u,
  170010u,
  169694u,
  170339u,
  170040u,
  170004u,
  170160u,
  170060u,
  169762u,
  170616u,
  169860u,
  170142u,
  170174u,
  169340u,
  170772u
 };

static const PtrLen<const UType> JTable_8_19_29[]=
 {
  Range(JSum_8_19_29_1),
  Range(JSum_8_19_29_2),
  Range(JSum_8_19_29_3),
  Range(JSum_8_19_29_4),
  Range(JSum_8_19_29_5),
  Range(JSum_8_19_29_6),
  Range(JSum_8_19_29_7),
  Range(JSum_8_19_29_8),
  Range(JSum_8_19_29_9),
  Range(JSum_8_19_29_10),
  Range(JSum_8_19_29_11),
  Range(JSum_8_19_29_12),
  Range(JSum_8_19_29_13),
  Range(JSum_8_19_29_14),
  Range(JSum_8_19_29_15),
  Range(JSum_8_19_29_16),
  Range(JSum_8_19_29_17)
 };

static const UType JSum_8_19_30_1[]=
 {
  691246u,
  691120u,
  690836u,
  690235u,
  691266u,
  691646u,
  690284u,
  692744u,
  689186u,
  689092u,
  690010u,
  690840u,
  690452u,
  690370u,
  690718u,
  691396u,
  690434u,
  690768u,
  690466u
 };

static const UType JSum_8_19_30_2[]=
 {
  689864u,
  691606u,
  691033u,
  690742u,
  689898u,
  691397u,
  690883u,
  691396u,
  691573u,
  690320u,
  691338u,
  690382u,
  688813u,
  689744u,
  690755u,
  691487u,
  690299u,
  689679u,
  691900u
 };

static const UType JSum_8_19_30_3[]=
 {
  691898u,
  691321u,
  689790u,
  690073u,
  690909u,
  690242u,
  691650u,
  691069u,
  691558u,
  690126u,
  691528u,
  691705u,
  690055u,
  690325u,
  690713u,
  689364u,
  690969u,
  688994u,
  690820u
 };

static const UType JSum_8_19_30_4[]=
 {
  691898u,
  689364u,
  691705u,
  691069u,
  690073u,
  690820u,
  690713u,
  691528u,
  691650u,
  689790u,
  688994u,
  690325u,
  690126u,
  690242u,
  691321u,
  690969u,
  690055u,
  691558u,
  690909u
 };

static const UType JSum_8_19_30_5[]=
 {
  691898u,
  690073u,
  691650u,
  690126u,
  690055u,
  689364u,
  690820u,
  689790u,
  690242u,
  691558u,
  691705u,
  690713u,
  688994u,
  691321u,
  690909u,
  691069u,
  691528u,
  690325u,
  690969u
 };

static const UType JSum_8_19_30_6[]=
 {
  689864u,
  690299u,
  689744u,
  691338u,
  691396u,
  689898u,
  691606u,
  689679u,
  690755u,
  690382u,
  691573u,
  691397u,
  691033u,
  691900u,
  691487u,
  688813u,
  690320u,
  690883u,
  690742u
 };

static const UType JSum_8_19_30_7[]=
 {
  689489u,
  691101u,
  690757u,
  690757u,
  691148u,
  689960u,
  691148u,
  691101u,
  689619u,
  691148u,
  691955u,
  691101u,
  689619u,
  691955u,
  690757u,
  691955u,
  689960u,
  689960u,
  689619u
 };

static const UType JSum_8_19_30_8[]=
 {
  689864u,
  691033u,
  689898u,
  690883u,
  691573u,
  691338u,
  688813u,
  690755u,
  690299u,
  691900u,
  691606u,
  690742u,
  691397u,
  691396u,
  690320u,
  690382u,
  689744u,
  691487u,
  689679u
 };

static const UType JSum_8_19_30_9[]=
 {
  691246u,
  690768u,
  691396u,
  690370u,
  690840u,
  689092u,
  692744u,
  691646u,
  690235u,
  691120u,
  690466u,
  690434u,
  690718u,
  690452u,
  690010u,
  689186u,
  690284u,
  691266u,
  690836u
 };

static const UType JSum_8_19_30_10[]=
 {
  689864u,
  691033u,
  689898u,
  690883u,
  691573u,
  691338u,
  688813u,
  690755u,
  690299u,
  691900u,
  691606u,
  690742u,
  691397u,
  691396u,
  690320u,
  690382u,
  689744u,
  691487u,
  689679u
 };

static const UType JSum_8_19_30_11[]=
 {
  689489u,
  691101u,
  690757u,
  690757u,
  691148u,
  689960u,
  691148u,
  691101u,
  689619u,
  691148u,
  691955u,
  691101u,
  689619u,
  691955u,
  690757u,
  691955u,
  689960u,
  689960u,
  689619u
 };

static const UType JSum_8_19_30_12[]=
 {
  689864u,
  690299u,
  689744u,
  691338u,
  691396u,
  689898u,
  691606u,
  689679u,
  690755u,
  690382u,
  691573u,
  691397u,
  691033u,
  691900u,
  691487u,
  688813u,
  690320u,
  690883u,
  690742u
 };

static const UType JSum_8_19_30_13[]=
 {
  691898u,
  690073u,
  691650u,
  690126u,
  690055u,
  689364u,
  690820u,
  689790u,
  690242u,
  691558u,
  691705u,
  690713u,
  688994u,
  691321u,
  690909u,
  691069u,
  691528u,
  690325u,
  690969u
 };

static const UType JSum_8_19_30_14[]=
 {
  691898u,
  689364u,
  691705u,
  691069u,
  690073u,
  690820u,
  690713u,
  691528u,
  691650u,
  689790u,
  688994u,
  690325u,
  690126u,
  690242u,
  691321u,
  690969u,
  690055u,
  691558u,
  690909u
 };

static const UType JSum_8_19_30_15[]=
 {
  691898u,
  691321u,
  689790u,
  690073u,
  690909u,
  690242u,
  691650u,
  691069u,
  691558u,
  690126u,
  691528u,
  691705u,
  690055u,
  690325u,
  690713u,
  689364u,
  690969u,
  688994u,
  690820u
 };

static const UType JSum_8_19_30_16[]=
 {
  689864u,
  691606u,
  691033u,
  690742u,
  689898u,
  691397u,
  690883u,
  691396u,
  691573u,
  690320u,
  691338u,
  690382u,
  688813u,
  689744u,
  690755u,
  691487u,
  690299u,
  689679u,
  691900u
 };

static const UType JSum_8_19_30_17[]=
 {
  691246u,
  691120u,
  690836u,
  690235u,
  691266u,
  691646u,
  690284u,
  692744u,
  689186u,
  689092u,
  690010u,
  690840u,
  690452u,
  690370u,
  690718u,
  691396u,
  690434u,
  690768u,
  690466u
 };

static const PtrLen<const UType> JTable_8_19_30[]=
 {
  Range(JSum_8_19_30_1),
  Range(JSum_8_19_30_2),
  Range(JSum_8_19_30_3),
  Range(JSum_8_19_30_4),
  Range(JSum_8_19_30_5),
  Range(JSum_8_19_30_6),
  Range(JSum_8_19_30_7),
  Range(JSum_8_19_30_8),
  Range(JSum_8_19_30_9),
  Range(JSum_8_19_30_10),
  Range(JSum_8_19_30_11),
  Range(JSum_8_19_30_12),
  Range(JSum_8_19_30_13),
  Range(JSum_8_19_30_14),
  Range(JSum_8_19_30_15),
  Range(JSum_8_19_30_16),
  Range(JSum_8_19_30_17)
 };

static const UType JSum_8_19_31_1[]=
 {
  903038u,
  903754u,
  903324u,
  901628u,
  905134u,
  903164u,
  902850u,
  903866u,
  904352u,
  904280u,
  903942u,
  901514u,
  902192u,
  902592u,
  903315u,
  902554u,
  904070u,
  902400u,
  903020u
 };

static const UType JSum_8_19_31_2[]=
 {
  903230u,
  903396u,
  902753u,
  904255u,
  903960u,
  903450u,
  904319u,
  903488u,
  902064u,
  903140u,
  900269u,
  903980u,
  904017u,
  903029u,
  902098u,
  903296u,
  903819u,
  902953u,
  903473u
 };

static const UType JSum_8_19_31_3[]=
 {
  904034u,
  903363u,
  904371u,
  903294u,
  902884u,
  903865u,
  904137u,
  901355u,
  900936u,
  903948u,
  902095u,
  904505u,
  903170u,
  903311u,
  902710u,
  902870u,
  903646u,
  903529u,
  902966u
 };

static const UType JSum_8_19_31_4[]=
 {
  904034u,
  902870u,
  904505u,
  901355u,
  903294u,
  902966u,
  902710u,
  902095u,
  904137u,
  904371u,
  903529u,
  903311u,
  903948u,
  903865u,
  903363u,
  903646u,
  903170u,
  900936u,
  902884u
 };

static const UType JSum_8_19_31_5[]=
 {
  904034u,
  903294u,
  904137u,
  903948u,
  903170u,
  902870u,
  902966u,
  904371u,
  903865u,
  900936u,
  904505u,
  902710u,
  903529u,
  903363u,
  902884u,
  901355u,
  902095u,
  903311u,
  903646u
 };

static const UType JSum_8_19_31_6[]=
 {
  903230u,
  903819u,
  903029u,
  900269u,
  903488u,
  903960u,
  903396u,
  902953u,
  902098u,
  903980u,
  902064u,
  903450u,
  902753u,
  903473u,
  903296u,
  904017u,
  903140u,
  904319u,
  904255u
 };

static const UType JSum_8_19_31_7[]=
 {
  901703u,
  902975u,
  904172u,
  904172u,
  901989u,
  902441u,
  901989u,
  902975u,
  904237u,
  901989u,
  903948u,
  902975u,
  904237u,
  903948u,
  904172u,
  903948u,
  902441u,
  902441u,
  904237u
 };

static const UType JSum_8_19_31_8[]=
 {
  903230u,
  902753u,
  903960u,
  904319u,
  902064u,
  900269u,
  904017u,
  902098u,
  903819u,
  903473u,
  903396u,
  904255u,
  903450u,
  903488u,
  903140u,
  903980u,
  903029u,
  903296u,
  902953u
 };

static const UType JSum_8_19_31_9[]=
 {
  903038u,
  902400u,
  902554u,
  902592u,
  901514u,
  904280u,
  903866u,
  903164u,
  901628u,
  903754u,
  903020u,
  904070u,
  903315u,
  902192u,
  903942u,
  904352u,
  902850u,
  905134u,
  903324u
 };

static const UType JSum_8_19_31_10[]=
 {
  903230u,
  902753u,
  903960u,
  904319u,
  902064u,
  900269u,
  904017u,
  902098u,
  903819u,
  903473u,
  903396u,
  904255u,
  903450u,
  903488u,
  903140u,
  903980u,
  903029u,
  903296u,
  902953u
 };

static const UType JSum_8_19_31_11[]=
 {
  901703u,
  902975u,
  904172u,
  904172u,
  901989u,
  902441u,
  901989u,
  902975u,
  904237u,
  901989u,
  903948u,
  902975u,
  904237u,
  903948u,
  904172u,
  903948u,
  902441u,
  902441u,
  904237u
 };

static const UType JSum_8_19_31_12[]=
 {
  903230u,
  903819u,
  903029u,
  900269u,
  903488u,
  903960u,
  903396u,
  902953u,
  902098u,
  903980u,
  902064u,
  903450u,
  902753u,
  903473u,
  903296u,
  904017u,
  903140u,
  904319u,
  904255u
 };

static const UType JSum_8_19_31_13[]=
 {
  904034u,
  903294u,
  904137u,
  903948u,
  903170u,
  902870u,
  902966u,
  904371u,
  903865u,
  900936u,
  904505u,
  902710u,
  903529u,
  903363u,
  902884u,
  901355u,
  902095u,
  903311u,
  903646u
 };

static const UType JSum_8_19_31_14[]=
 {
  904034u,
  902870u,
  904505u,
  901355u,
  903294u,
  902966u,
  902710u,
  902095u,
  904137u,
  904371u,
  903529u,
  903311u,
  903948u,
  903865u,
  903363u,
  903646u,
  903170u,
  900936u,
  902884u
 };

static const UType JSum_8_19_31_15[]=
 {
  904034u,
  903363u,
  904371u,
  903294u,
  902884u,
  903865u,
  904137u,
  901355u,
  900936u,
  903948u,
  902095u,
  904505u,
  903170u,
  903311u,
  902710u,
  902870u,
  903646u,
  903529u,
  902966u
 };

static const UType JSum_8_19_31_16[]=
 {
  903230u,
  903396u,
  902753u,
  904255u,
  903960u,
  903450u,
  904319u,
  903488u,
  902064u,
  903140u,
  900269u,
  903980u,
  904017u,
  903029u,
  902098u,
  903296u,
  903819u,
  902953u,
  903473u
 };

static const UType JSum_8_19_31_17[]=
 {
  903038u,
  903754u,
  903324u,
  901628u,
  905134u,
  903164u,
  902850u,
  903866u,
  904352u,
  904280u,
  903942u,
  901514u,
  902192u,
  902592u,
  903315u,
  902554u,
  904070u,
  902400u,
  903020u
 };

static const PtrLen<const UType> JTable_8_19_31[]=
 {
  Range(JSum_8_19_31_1),
  Range(JSum_8_19_31_2),
  Range(JSum_8_19_31_3),
  Range(JSum_8_19_31_4),
  Range(JSum_8_19_31_5),
  Range(JSum_8_19_31_6),
  Range(JSum_8_19_31_7),
  Range(JSum_8_19_31_8),
  Range(JSum_8_19_31_9),
  Range(JSum_8_19_31_10),
  Range(JSum_8_19_31_11),
  Range(JSum_8_19_31_12),
  Range(JSum_8_19_31_13),
  Range(JSum_8_19_31_14),
  Range(JSum_8_19_31_15),
  Range(JSum_8_19_31_16),
  Range(JSum_8_19_31_17)
 };

static const TestSet::JTable JSet_8_19[]=
 {
  { 191u , Range(JTable_8_19_1) },
  { 419u , Range(JTable_8_19_2) },
  { 571u , Range(JTable_8_19_3) },
  { 647u , Range(JTable_8_19_4) },
  { 1483u , Range(JTable_8_19_5) },
  { 2927u , Range(JTable_8_19_6) },
  { 4523u , Range(JTable_8_19_7) },
  { 6271u , Range(JTable_8_19_8) },
  { 7411u , Range(JTable_8_19_9) },
  { 8779u , Range(JTable_8_19_10) },
  { 13567u , Range(JTable_8_19_11) },
  { 17291u , Range(JTable_8_19_12) },
  { 21319u , Range(JTable_8_19_13) },
  { 28843u , Range(JTable_8_19_14) },
  { 35531u , Range(JTable_8_19_15) },
  { 38039u , Range(JTable_8_19_16) },
  { 43891u , Range(JTable_8_19_17) },
  { 51871u , Range(JTable_8_19_18) },
  { 58787u , Range(JTable_8_19_19) },
  { 91771u , Range(JTable_8_19_20) },
  { 106591u , Range(JTable_8_19_21) },
  { 336491u , Range(JTable_8_19_22) },
  { 461891u , Range(JTable_8_19_23) },
  { 520031u , Range(JTable_8_19_24) },
  { 1193011u , Range(JTable_8_19_25) },
  { 1939939u , Range(JTable_8_19_26) },
  { 2624623u , Range(JTable_8_19_27) },
  { 2897311u , Range(JTable_8_19_28) },
  { 3233231u , Range(JTable_8_19_29) },
  { 13123111u , Range(JTable_8_19_30) },
  { 17160991u , Range(JTable_8_19_31) }
 };

static const UType JSum_8_23_1_1[]=
 {
  0u,
  4u,
  4u,
  2u,
  0u,
  2u,
  0u,
  2u,
  2u,
  0u,
  3u,
  2u,
  0u,
  4u,
  2u,
  4u,
  2u,
  4u,
  2u,
  2u,
  2u,
  2u,
  0u
 };

static const UType JSum_8_23_1_2[]=
 {
  3u,
  1u,
  1u,
  3u,
  4u,
  0u,
  1u,
  2u,
  2u,
  3u,
  6u,
  1u,
  4u,
  1u,
  1u,
  2u,
  1u,
  2u,
  1u,
  2u,
  0u,
  1u,
  3u
 };

static const UType JSum_8_23_1_3[]=
 {
  2u,
  1u,
  2u,
  0u,
  1u,
  3u,
  1u,
  1u,
  3u,
  3u,
  2u,
  2u,
  3u,
  2u,
  3u,
  0u,
  1u,
  3u,
  6u,
  1u,
  4u,
  1u,
  0u
 };

static const UType JSum_8_23_1_4[]=
 {
  2u,
  5u,
  2u,
  4u,
  1u,
  3u,
  1u,
  3u,
  2u,
  1u,
  2u,
  0u,
  0u,
  1u,
  3u,
  3u,
  1u,
  1u,
  5u,
  2u,
  0u,
  2u,
  1u
 };

static const UType JSum_8_23_1_5[]=
 {
  2u,
  1u,
  0u,
  2u,
  1u,
  0u,
  0u,
  6u,
  3u,
  2u,
  1u,
  2u,
  1u,
  3u,
  2u,
  3u,
  3u,
  1u,
  4u,
  1u,
  3u,
  3u,
  1u
 };

static const UType JSum_8_23_1_6[]=
 {
  2u,
  1u,
  2u,
  0u,
  1u,
  0u,
  5u,
  3u,
  1u,
  1u,
  1u,
  2u,
  2u,
  1u,
  2u,
  3u,
  5u,
  1u,
  4u,
  3u,
  0u,
  3u,
  2u
 };

static const UType JSum_8_23_1_7[]=
 {
  3u,
  0u,
  2u,
  1u,
  1u,
  2u,
  0u,
  1u,
  3u,
  2u,
  1u,
  1u,
  6u,
  2u,
  4u,
  1u,
  1u,
  1u,
  2u,
  4u,
  3u,
  1u,
  3u
 };

static const UType JSum_8_23_1_8[]=
 {
  2u,
  0u,
  1u,
  3u,
  3u,
  0u,
  6u,
  1u,
  1u,
  1u,
  1u,
  2u,
  2u,
  1u,
  1u,
  0u,
  2u,
  3u,
  3u,
  2u,
  3u,
  3u,
  4u
 };

static const UType JSum_8_23_1_9[]=
 {
  2u,
  5u,
  1u,
  2u,
  4u,
  2u,
  1u,
  0u,
  1u,
  5u,
  2u,
  3u,
  1u,
  1u,
  1u,
  1u,
  0u,
  3u,
  2u,
  0u,
  3u,
  2u,
  3u
 };

static const UType JSum_8_23_1_10[]=
 {
  3u,
  1u,
  4u,
  1u,
  2u,
  6u,
  4u,
  1u,
  1u,
  1u,
  0u,
  3u,
  1u,
  3u,
  0u,
  2u,
  3u,
  1u,
  1u,
  2u,
  2u,
  2u,
  1u
 };

static const UType JSum_8_23_1_11[]=
 {
  0u,
  2u,
  2u,
  4u,
  4u,
  4u,
  2u,
  0u,
  2u,
  2u,
  2u,
  4u,
  0u,
  2u,
  2u,
  2u,
  2u,
  0u,
  3u,
  2u,
  0u,
  0u,
  4u
 };

static const UType JSum_8_23_1_12[]=
 {
  3u,
  1u,
  4u,
  1u,
  2u,
  6u,
  4u,
  1u,
  1u,
  1u,
  0u,
  3u,
  1u,
  3u,
  0u,
  2u,
  3u,
  1u,
  1u,
  2u,
  2u,
  2u,
  1u
 };

static const UType JSum_8_23_1_13[]=
 {
  2u,
  5u,
  1u,
  2u,
  4u,
  2u,
  1u,
  0u,
  1u,
  5u,
  2u,
  3u,
  1u,
  1u,
  1u,
  1u,
  0u,
  3u,
  2u,
  0u,
  3u,
  2u,
  3u
 };

static const UType JSum_8_23_1_14[]=
 {
  2u,
  0u,
  1u,
  3u,
  3u,
  0u,
  6u,
  1u,
  1u,
  1u,
  1u,
  2u,
  2u,
  1u,
  1u,
  0u,
  2u,
  3u,
  3u,
  2u,
  3u,
  3u,
  4u
 };

static const UType JSum_8_23_1_15[]=
 {
  3u,
  0u,
  2u,
  1u,
  1u,
  2u,
  0u,
  1u,
  3u,
  2u,
  1u,
  1u,
  6u,
  2u,
  4u,
  1u,
  1u,
  1u,
  2u,
  4u,
  3u,
  1u,
  3u
 };

static const UType JSum_8_23_1_16[]=
 {
  2u,
  1u,
  2u,
  0u,
  1u,
  0u,
  5u,
  3u,
  1u,
  1u,
  1u,
  2u,
  2u,
  1u,
  2u,
  3u,
  5u,
  1u,
  4u,
  3u,
  0u,
  3u,
  2u
 };

static const UType JSum_8_23_1_17[]=
 {
  2u,
  1u,
  0u,
  2u,
  1u,
  0u,
  0u,
  6u,
  3u,
  2u,
  1u,
  2u,
  1u,
  3u,
  2u,
  3u,
  3u,
  1u,
  4u,
  1u,
  3u,
  3u,
  1u
 };

static const UType JSum_8_23_1_18[]=
 {
  2u,
  5u,
  2u,
  4u,
  1u,
  3u,
  1u,
  3u,
  2u,
  1u,
  2u,
  0u,
  0u,
  1u,
  3u,
  3u,
  1u,
  1u,
  5u,
  2u,
  0u,
  2u,
  1u
 };

static const UType JSum_8_23_1_19[]=
 {
  2u,
  1u,
  2u,
  0u,
  1u,
  3u,
  1u,
  1u,
  3u,
  3u,
  2u,
  2u,
  3u,
  2u,
  3u,
  0u,
  1u,
  3u,
  6u,
  1u,
  4u,
  1u,
  0u
 };

static const UType JSum_8_23_1_20[]=
 {
  3u,
  1u,
  1u,
  3u,
  4u,
  0u,
  1u,
  2u,
  2u,
  3u,
  6u,
  1u,
  4u,
  1u,
  1u,
  2u,
  1u,
  2u,
  1u,
  2u,
  0u,
  1u,
  3u
 };

static const UType JSum_8_23_1_21[]=
 {
  0u,
  4u,
  4u,
  2u,
  0u,
  2u,
  0u,
  2u,
  2u,
  0u,
  3u,
  2u,
  0u,
  4u,
  2u,
  4u,
  2u,
  4u,
  2u,
  2u,
  2u,
  2u,
  0u
 };

static const PtrLen<const UType> JTable_8_23_1[]=
 {
  Range(JSum_8_23_1_1),
  Range(JSum_8_23_1_2),
  Range(JSum_8_23_1_3),
  Range(JSum_8_23_1_4),
  Range(JSum_8_23_1_5),
  Range(JSum_8_23_1_6),
  Range(JSum_8_23_1_7),
  Range(JSum_8_23_1_8),
  Range(JSum_8_23_1_9),
  Range(JSum_8_23_1_10),
  Range(JSum_8_23_1_11),
  Range(JSum_8_23_1_12),
  Range(JSum_8_23_1_13),
  Range(JSum_8_23_1_14),
  Range(JSum_8_23_1_15),
  Range(JSum_8_23_1_16),
  Range(JSum_8_23_1_17),
  Range(JSum_8_23_1_18),
  Range(JSum_8_23_1_19),
  Range(JSum_8_23_1_20),
  Range(JSum_8_23_1_21)
 };

static const UType JSum_8_23_2_1[]=
 {
  10u,
  4u,
  6u,
  2u,
  6u,
  6u,
  8u,
  12u,
  6u,
  6u,
  8u,
  4u,
  6u,
  6u,
  4u,
  8u,
  8u,
  4u,
  6u,
  8u,
  4u,
  3u,
  2u
 };

static const UType JSum_8_23_2_2[]=
 {
  8u,
  4u,
  3u,
  6u,
  7u,
  5u,
  6u,
  6u,
  0u,
  8u,
  6u,
  9u,
  5u,
  3u,
  4u,
  7u,
  5u,
  6u,
  7u,
  8u,
  12u,
  4u,
  8u
 };

static const UType JSum_8_23_2_3[]=
 {
  10u,
  7u,
  3u,
  8u,
  9u,
  9u,
  1u,
  6u,
  4u,
  6u,
  10u,
  6u,
  5u,
  7u,
  2u,
  5u,
  4u,
  4u,
  4u,
  8u,
  6u,
  8u,
  5u
 };

static const UType JSum_8_23_2_4[]=
 {
  5u,
  12u,
  7u,
  5u,
  5u,
  8u,
  8u,
  4u,
  9u,
  5u,
  7u,
  2u,
  6u,
  9u,
  7u,
  7u,
  4u,
  1u,
  7u,
  3u,
  4u,
  6u,
  6u
 };

static const UType JSum_8_23_2_5[]=
 {
  10u,
  8u,
  5u,
  6u,
  6u,
  8u,
  5u,
  4u,
  2u,
  10u,
  1u,
  3u,
  8u,
  4u,
  7u,
  6u,
  9u,
  7u,
  6u,
  4u,
  5u,
  4u,
  9u
 };

static const UType JSum_8_23_2_6[]=
 {
  5u,
  5u,
  9u,
  6u,
  4u,
  4u,
  12u,
  8u,
  5u,
  9u,
  1u,
  6u,
  7u,
  8u,
  7u,
  7u,
  7u,
  6u,
  5u,
  4u,
  2u,
  7u,
  3u
 };

static const UType JSum_8_23_2_7[]=
 {
  8u,
  12u,
  6u,
  4u,
  9u,
  0u,
  5u,
  3u,
  8u,
  8u,
  5u,
  3u,
  6u,
  6u,
  7u,
  4u,
  4u,
  7u,
  7u,
  5u,
  8u,
  6u,
  6u
 };

static const UType JSum_8_23_2_8[]=
 {
  10u,
  8u,
  1u,
  6u,
  5u,
  5u,
  4u,
  8u,
  7u,
  9u,
  6u,
  10u,
  7u,
  4u,
  8u,
  5u,
  3u,
  9u,
  4u,
  6u,
  2u,
  4u,
  6u
 };

static const UType JSum_8_23_2_9[]=
 {
  5u,
  7u,
  9u,
  9u,
  5u,
  6u,
  4u,
  2u,
  8u,
  12u,
  3u,
  7u,
  5u,
  5u,
  6u,
  1u,
  6u,
  4u,
  7u,
  4u,
  7u,
  7u,
  8u
 };

static const UType JSum_8_23_2_10[]=
 {
  8u,
  3u,
  7u,
  6u,
  0u,
  6u,
  5u,
  4u,
  5u,
  7u,
  12u,
  8u,
  4u,
  6u,
  5u,
  6u,
  8u,
  9u,
  3u,
  7u,
  6u,
  8u,
  4u
 };

static const UType JSum_8_23_2_11[]=
 {
  10u,
  3u,
  8u,
  4u,
  8u,
  6u,
  4u,
  6u,
  12u,
  6u,
  2u,
  4u,
  2u,
  4u,
  6u,
  8u,
  4u,
  6u,
  8u,
  6u,
  8u,
  6u,
  6u
 };

static const UType JSum_8_23_2_12[]=
 {
  8u,
  3u,
  7u,
  6u,
  0u,
  6u,
  5u,
  4u,
  5u,
  7u,
  12u,
  8u,
  4u,
  6u,
  5u,
  6u,
  8u,
  9u,
  3u,
  7u,
  6u,
  8u,
  4u
 };

static const UType JSum_8_23_2_13[]=
 {
  5u,
  7u,
  9u,
  9u,
  5u,
  6u,
  4u,
  2u,
  8u,
  12u,
  3u,
  7u,
  5u,
  5u,
  6u,
  1u,
  6u,
  4u,
  7u,
  4u,
  7u,
  7u,
  8u
 };

static const UType JSum_8_23_2_14[]=
 {
  10u,
  8u,
  1u,
  6u,
  5u,
  5u,
  4u,
  8u,
  7u,
  9u,
  6u,
  10u,
  7u,
  4u,
  8u,
  5u,
  3u,
  9u,
  4u,
  6u,
  2u,
  4u,
  6u
 };

static const UType JSum_8_23_2_15[]=
 {
  8u,
  12u,
  6u,
  4u,
  9u,
  0u,
  5u,
  3u,
  8u,
  8u,
  5u,
  3u,
  6u,
  6u,
  7u,
  4u,
  4u,
  7u,
  7u,
  5u,
  8u,
  6u,
  6u
 };

static const UType JSum_8_23_2_16[]=
 {
  5u,
  5u,
  9u,
  6u,
  4u,
  4u,
  12u,
  8u,
  5u,
  9u,
  1u,
  6u,
  7u,
  8u,
  7u,
  7u,
  7u,
  6u,
  5u,
  4u,
  2u,
  7u,
  3u
 };

static const UType JSum_8_23_2_17[]=
 {
  10u,
  8u,
  5u,
  6u,
  6u,
  8u,
  5u,
  4u,
  2u,
  10u,
  1u,
  3u,
  8u,
  4u,
  7u,
  6u,
  9u,
  7u,
  6u,
  4u,
  5u,
  4u,
  9u
 };

static const UType JSum_8_23_2_18[]=
 {
  5u,
  12u,
  7u,
  5u,
  5u,
  8u,
  8u,
  4u,
  9u,
  5u,
  7u,
  2u,
  6u,
  9u,
  7u,
  7u,
  4u,
  1u,
  7u,
  3u,
  4u,
  6u,
  6u
 };

static const UType JSum_8_23_2_19[]=
 {
  10u,
  7u,
  3u,
  8u,
  9u,
  9u,
  1u,
  6u,
  4u,
  6u,
  10u,
  6u,
  5u,
  7u,
  2u,
  5u,
  4u,
  4u,
  4u,
  8u,
  6u,
  8u,
  5u
 };

static const UType JSum_8_23_2_20[]=
 {
  8u,
  4u,
  3u,
  6u,
  7u,
  5u,
  6u,
  6u,
  0u,
  8u,
  6u,
  9u,
  5u,
  3u,
  4u,
  7u,
  5u,
  6u,
  7u,
  8u,
  12u,
  4u,
  8u
 };

static const UType JSum_8_23_2_21[]=
 {
  10u,
  4u,
  6u,
  2u,
  6u,
  6u,
  8u,
  12u,
  6u,
  6u,
  8u,
  4u,
  6u,
  6u,
  4u,
  8u,
  8u,
  4u,
  6u,
  8u,
  4u,
  3u,
  2u
 };

static const PtrLen<const UType> JTable_8_23_2[]=
 {
  Range(JSum_8_23_2_1),
  Range(JSum_8_23_2_2),
  Range(JSum_8_23_2_3),
  Range(JSum_8_23_2_4),
  Range(JSum_8_23_2_5),
  Range(JSum_8_23_2_6),
  Range(JSum_8_23_2_7),
  Range(JSum_8_23_2_8),
  Range(JSum_8_23_2_9),
  Range(JSum_8_23_2_10),
  Range(JSum_8_23_2_11),
  Range(JSum_8_23_2_12),
  Range(JSum_8_23_2_13),
  Range(JSum_8_23_2_14),
  Range(JSum_8_23_2_15),
  Range(JSum_8_23_2_16),
  Range(JSum_8_23_2_17),
  Range(JSum_8_23_2_18),
  Range(JSum_8_23_2_19),
  Range(JSum_8_23_2_20),
  Range(JSum_8_23_2_21)
 };

static const UType JSum_8_23_3_1[]=
 {
  18u,
  28u,
  28u,
  32u,
  28u,
  27u,
  26u,
  38u,
  18u,
  26u,
  32u,
  22u,
  22u,
  20u,
  28u,
  20u,
  24u,
  22u,
  26u,
  34u,
  30u,
  24u,
  24u
 };

static const UType JSum_8_23_3_2[]=
 {
  28u,
  26u,
  29u,
  19u,
  22u,
  27u,
  31u,
  25u,
  27u,
  32u,
  19u,
  20u,
  23u,
  24u,
  27u,
  15u,
  30u,
  29u,
  31u,
  26u,
  27u,
  22u,
  38u
 };

static const UType JSum_8_23_3_3[]=
 {
  25u,
  17u,
  36u,
  25u,
  26u,
  23u,
  22u,
  25u,
  23u,
  21u,
  27u,
  26u,
  27u,
  21u,
  26u,
  30u,
  38u,
  28u,
  31u,
  22u,
  23u,
  21u,
  34u
 };

static const UType JSum_8_23_3_4[]=
 {
  25u,
  29u,
  17u,
  29u,
  20u,
  26u,
  23u,
  17u,
  26u,
  36u,
  24u,
  31u,
  36u,
  27u,
  21u,
  23u,
  26u,
  33u,
  25u,
  28u,
  22u,
  24u,
  29u
 };

static const UType JSum_8_23_3_5[]=
 {
  25u,
  22u,
  30u,
  26u,
  25u,
  25u,
  34u,
  31u,
  26u,
  27u,
  22u,
  36u,
  21u,
  28u,
  21u,
  21u,
  23u,
  17u,
  23u,
  38u,
  27u,
  23u,
  26u
 };

static const UType JSum_8_23_3_6[]=
 {
  25u,
  20u,
  26u,
  36u,
  26u,
  22u,
  29u,
  26u,
  36u,
  27u,
  33u,
  24u,
  17u,
  23u,
  24u,
  21u,
  25u,
  29u,
  29u,
  17u,
  31u,
  23u,
  28u
 };

static const UType JSum_8_23_3_7[]=
 {
  28u,
  27u,
  29u,
  27u,
  20u,
  27u,
  27u,
  29u,
  38u,
  26u,
  30u,
  24u,
  19u,
  25u,
  22u,
  26u,
  22u,
  31u,
  15u,
  23u,
  32u,
  31u,
  19u
 };

static const UType JSum_8_23_3_8[]=
 {
  25u,
  25u,
  22u,
  21u,
  27u,
  30u,
  31u,
  21u,
  17u,
  26u,
  25u,
  27u,
  21u,
  38u,
  22u,
  34u,
  36u,
  23u,
  23u,
  26u,
  26u,
  28u,
  23u
 };

static const UType JSum_8_23_3_9[]=
 {
  25u,
  25u,
  27u,
  26u,
  29u,
  24u,
  26u,
  31u,
  23u,
  29u,
  28u,
  21u,
  36u,
  20u,
  29u,
  33u,
  36u,
  17u,
  17u,
  22u,
  23u,
  24u,
  26u
 };

static const UType JSum_8_23_3_10[]=
 {
  28u,
  29u,
  22u,
  31u,
  27u,
  19u,
  23u,
  27u,
  30u,
  31u,
  27u,
  38u,
  26u,
  19u,
  27u,
  25u,
  32u,
  20u,
  24u,
  15u,
  29u,
  26u,
  22u
 };

static const UType JSum_8_23_3_11[]=
 {
  18u,
  24u,
  34u,
  22u,
  20u,
  20u,
  22u,
  26u,
  38u,
  27u,
  32u,
  28u,
  24u,
  30u,
  26u,
  24u,
  28u,
  22u,
  32u,
  18u,
  26u,
  28u,
  28u
 };

static const UType JSum_8_23_3_12[]=
 {
  28u,
  29u,
  22u,
  31u,
  27u,
  19u,
  23u,
  27u,
  30u,
  31u,
  27u,
  38u,
  26u,
  19u,
  27u,
  25u,
  32u,
  20u,
  24u,
  15u,
  29u,
  26u,
  22u
 };

static const UType JSum_8_23_3_13[]=
 {
  25u,
  25u,
  27u,
  26u,
  29u,
  24u,
  26u,
  31u,
  23u,
  29u,
  28u,
  21u,
  36u,
  20u,
  29u,
  33u,
  36u,
  17u,
  17u,
  22u,
  23u,
  24u,
  26u
 };

static const UType JSum_8_23_3_14[]=
 {
  25u,
  25u,
  22u,
  21u,
  27u,
  30u,
  31u,
  21u,
  17u,
  26u,
  25u,
  27u,
  21u,
  38u,
  22u,
  34u,
  36u,
  23u,
  23u,
  26u,
  26u,
  28u,
  23u
 };

static const UType JSum_8_23_3_15[]=
 {
  28u,
  27u,
  29u,
  27u,
  20u,
  27u,
  27u,
  29u,
  38u,
  26u,
  30u,
  24u,
  19u,
  25u,
  22u,
  26u,
  22u,
  31u,
  15u,
  23u,
  32u,
  31u,
  19u
 };

static const UType JSum_8_23_3_16[]=
 {
  25u,
  20u,
  26u,
  36u,
  26u,
  22u,
  29u,
  26u,
  36u,
  27u,
  33u,
  24u,
  17u,
  23u,
  24u,
  21u,
  25u,
  29u,
  29u,
  17u,
  31u,
  23u,
  28u
 };

static const UType JSum_8_23_3_17[]=
 {
  25u,
  22u,
  30u,
  26u,
  25u,
  25u,
  34u,
  31u,
  26u,
  27u,
  22u,
  36u,
  21u,
  28u,
  21u,
  21u,
  23u,
  17u,
  23u,
  38u,
  27u,
  23u,
  26u
 };

static const UType JSum_8_23_3_18[]=
 {
  25u,
  29u,
  17u,
  29u,
  20u,
  26u,
  23u,
  17u,
  26u,
  36u,
  24u,
  31u,
  36u,
  27u,
  21u,
  23u,
  26u,
  33u,
  25u,
  28u,
  22u,
  24u,
  29u
 };

static const UType JSum_8_23_3_19[]=
 {
  25u,
  17u,
  36u,
  25u,
  26u,
  23u,
  22u,
  25u,
  23u,
  21u,
  27u,
  26u,
  27u,
  21u,
  26u,
  30u,
  38u,
  28u,
  31u,
  22u,
  23u,
  21u,
  34u
 };

static const UType JSum_8_23_3_20[]=
 {
  28u,
  26u,
  29u,
  19u,
  22u,
  27u,
  31u,
  25u,
  27u,
  32u,
  19u,
  20u,
  23u,
  24u,
  27u,
  15u,
  30u,
  29u,
  31u,
  26u,
  27u,
  22u,
  38u
 };

static const UType JSum_8_23_3_21[]=
 {
  18u,
  28u,
  28u,
  32u,
  28u,
  27u,
  26u,
  38u,
  18u,
  26u,
  32u,
  22u,
  22u,
  20u,
  28u,
  20u,
  24u,
  22u,
  26u,
  34u,
  30u,
  24u,
  24u
 };

static const PtrLen<const UType> JTable_8_23_3[]=
 {
  Range(JSum_8_23_3_1),
  Range(JSum_8_23_3_2),
  Range(JSum_8_23_3_3),
  Range(JSum_8_23_3_4),
  Range(JSum_8_23_3_5),
  Range(JSum_8_23_3_6),
  Range(JSum_8_23_3_7),
  Range(JSum_8_23_3_8),
  Range(JSum_8_23_3_9),
  Range(JSum_8_23_3_10),
  Range(JSum_8_23_3_11),
  Range(JSum_8_23_3_12),
  Range(JSum_8_23_3_13),
  Range(JSum_8_23_3_14),
  Range(JSum_8_23_3_15),
  Range(JSum_8_23_3_16),
  Range(JSum_8_23_3_17),
  Range(JSum_8_23_3_18),
  Range(JSum_8_23_3_19),
  Range(JSum_8_23_3_20),
  Range(JSum_8_23_3_21)
 };

static const UType JSum_8_23_4_1[]=
 {
  32u,
  30u,
  40u,
  38u,
  28u,
  30u,
  36u,
  22u,
  30u,
  28u,
  34u,
  28u,
  14u,
  32u,
  27u,
  34u,
  32u,
  34u,
  24u,
  30u,
  32u,
  28u,
  26u
 };

static const UType JSum_8_23_4_2[]=
 {
  29u,
  24u,
  27u,
  25u,
  32u,
  25u,
  27u,
  29u,
  32u,
  31u,
  37u,
  25u,
  36u,
  34u,
  36u,
  36u,
  25u,
  23u,
  22u,
  42u,
  26u,
  29u,
  37u
 };

static const UType JSum_8_23_4_3[]=
 {
  42u,
  30u,
  25u,
  27u,
  28u,
  24u,
  28u,
  30u,
  23u,
  31u,
  33u,
  28u,
  25u,
  37u,
  31u,
  26u,
  33u,
  33u,
  32u,
  27u,
  21u,
  43u,
  32u
 };

static const UType JSum_8_23_4_4[]=
 {
  21u,
  31u,
  25u,
  28u,
  26u,
  25u,
  33u,
  26u,
  34u,
  37u,
  30u,
  39u,
  32u,
  25u,
  30u,
  25u,
  29u,
  40u,
  38u,
  21u,
  29u,
  29u,
  36u
 };

static const UType JSum_8_23_4_5[]=
 {
  42u,
  27u,
  26u,
  28u,
  30u,
  27u,
  32u,
  32u,
  31u,
  33u,
  28u,
  25u,
  43u,
  33u,
  37u,
  31u,
  24u,
  30u,
  21u,
  33u,
  25u,
  23u,
  28u
 };

static const UType JSum_8_23_4_6[]=
 {
  21u,
  26u,
  34u,
  32u,
  29u,
  29u,
  31u,
  25u,
  37u,
  25u,
  40u,
  29u,
  25u,
  33u,
  30u,
  30u,
  38u,
  36u,
  28u,
  26u,
  39u,
  25u,
  21u
 };

static const UType JSum_8_23_4_7[]=
 {
  29u,
  26u,
  23u,
  36u,
  25u,
  32u,
  25u,
  27u,
  37u,
  42u,
  25u,
  34u,
  37u,
  29u,
  32u,
  24u,
  29u,
  22u,
  36u,
  36u,
  31u,
  27u,
  25u
 };

static const UType JSum_8_23_4_8[]=
 {
  42u,
  27u,
  28u,
  31u,
  25u,
  26u,
  32u,
  43u,
  30u,
  28u,
  30u,
  33u,
  37u,
  33u,
  27u,
  32u,
  25u,
  24u,
  23u,
  28u,
  31u,
  33u,
  21u
 };

static const UType JSum_8_23_4_9[]=
 {
  21u,
  38u,
  25u,
  34u,
  28u,
  29u,
  29u,
  39u,
  33u,
  31u,
  21u,
  30u,
  37u,
  26u,
  36u,
  40u,
  32u,
  26u,
  25u,
  29u,
  25u,
  30u,
  25u
 };

static const UType JSum_8_23_4_10[]=
 {
  29u,
  27u,
  32u,
  27u,
  32u,
  37u,
  36u,
  36u,
  25u,
  22u,
  26u,
  37u,
  24u,
  25u,
  25u,
  29u,
  31u,
  25u,
  34u,
  36u,
  23u,
  42u,
  29u
 };

static const UType JSum_8_23_4_11[]=
 {
  32u,
  28u,
  30u,
  34u,
  34u,
  32u,
  28u,
  28u,
  22u,
  30u,
  38u,
  30u,
  26u,
  32u,
  24u,
  32u,
  27u,
  14u,
  34u,
  30u,
  36u,
  28u,
  40u
 };

static const UType JSum_8_23_4_12[]=
 {
  29u,
  27u,
  32u,
  27u,
  32u,
  37u,
  36u,
  36u,
  25u,
  22u,
  26u,
  37u,
  24u,
  25u,
  25u,
  29u,
  31u,
  25u,
  34u,
  36u,
  23u,
  42u,
  29u
 };

static const UType JSum_8_23_4_13[]=
 {
  21u,
  38u,
  25u,
  34u,
  28u,
  29u,
  29u,
  39u,
  33u,
  31u,
  21u,
  30u,
  37u,
  26u,
  36u,
  40u,
  32u,
  26u,
  25u,
  29u,
  25u,
  30u,
  25u
 };

static const UType JSum_8_23_4_14[]=
 {
  42u,
  27u,
  28u,
  31u,
  25u,
  26u,
  32u,
  43u,
  30u,
  28u,
  30u,
  33u,
  37u,
  33u,
  27u,
  32u,
  25u,
  24u,
  23u,
  28u,
  31u,
  33u,
  21u
 };

static const UType JSum_8_23_4_15[]=
 {
  29u,
  26u,
  23u,
  36u,
  25u,
  32u,
  25u,
  27u,
  37u,
  42u,
  25u,
  34u,
  37u,
  29u,
  32u,
  24u,
  29u,
  22u,
  36u,
  36u,
  31u,
  27u,
  25u
 };

static const UType JSum_8_23_4_16[]=
 {
  21u,
  26u,
  34u,
  32u,
  29u,
  29u,
  31u,
  25u,
  37u,
  25u,
  40u,
  29u,
  25u,
  33u,
  30u,
  30u,
  38u,
  36u,
  28u,
  26u,
  39u,
  25u,
  21u
 };

static const UType JSum_8_23_4_17[]=
 {
  42u,
  27u,
  26u,
  28u,
  30u,
  27u,
  32u,
  32u,
  31u,
  33u,
  28u,
  25u,
  43u,
  33u,
  37u,
  31u,
  24u,
  30u,
  21u,
  33u,
  25u,
  23u,
  28u
 };

static const UType JSum_8_23_4_18[]=
 {
  21u,
  31u,
  25u,
  28u,
  26u,
  25u,
  33u,
  26u,
  34u,
  37u,
  30u,
  39u,
  32u,
  25u,
  30u,
  25u,
  29u,
  40u,
  38u,
  21u,
  29u,
  29u,
  36u
 };

static const UType JSum_8_23_4_19[]=
 {
  42u,
  30u,
  25u,
  27u,
  28u,
  24u,
  28u,
  30u,
  23u,
  31u,
  33u,
  28u,
  25u,
  37u,
  31u,
  26u,
  33u,
  33u,
  32u,
  27u,
  21u,
  43u,
  32u
 };

static const UType JSum_8_23_4_20[]=
 {
  29u,
  24u,
  27u,
  25u,
  32u,
  25u,
  27u,
  29u,
  32u,
  31u,
  37u,
  25u,
  36u,
  34u,
  36u,
  36u,
  25u,
  23u,
  22u,
  42u,
  26u,
  29u,
  37u
 };

static const UType JSum_8_23_4_21[]=
 {
  32u,
  30u,
  40u,
  38u,
  28u,
  30u,
  36u,
  22u,
  30u,
  28u,
  34u,
  28u,
  14u,
  32u,
  27u,
  34u,
  32u,
  34u,
  24u,
  30u,
  32u,
  28u,
  26u
 };

static const PtrLen<const UType> JTable_8_23_4[]=
 {
  Range(JSum_8_23_4_1),
  Range(JSum_8_23_4_2),
  Range(JSum_8_23_4_3),
  Range(JSum_8_23_4_4),
  Range(JSum_8_23_4_5),
  Range(JSum_8_23_4_6),
  Range(JSum_8_23_4_7),
  Range(JSum_8_23_4_8),
  Range(JSum_8_23_4_9),
  Range(JSum_8_23_4_10),
  Range(JSum_8_23_4_11),
  Range(JSum_8_23_4_12),
  Range(JSum_8_23_4_13),
  Range(JSum_8_23_4_14),
  Range(JSum_8_23_4_15),
  Range(JSum_8_23_4_16),
  Range(JSum_8_23_4_17),
  Range(JSum_8_23_4_18),
  Range(JSum_8_23_4_19),
  Range(JSum_8_23_4_20),
  Range(JSum_8_23_4_21)
 };

static const UType JSum_8_23_5_1[]=
 {
  40u,
  46u,
  52u,
  38u,
  40u,
  32u,
  42u,
  38u,
  34u,
  48u,
  44u,
  43u,
  30u,
  54u,
  48u,
  44u,
  52u,
  42u,
  38u,
  48u,
  38u,
  40u,
  34u
 };

static const UType JSum_8_23_5_2[]=
 {
  46u,
  52u,
  37u,
  43u,
  52u,
  41u,
  33u,
  50u,
  33u,
  40u,
  26u,
  39u,
  45u,
  51u,
  46u,
  35u,
  42u,
  40u,
  41u,
  45u,
  41u,
  46u,
  41u
 };

static const UType JSum_8_23_5_3[]=
 {
  42u,
  48u,
  43u,
  30u,
  51u,
  45u,
  46u,
  39u,
  37u,
  44u,
  34u,
  37u,
  36u,
  35u,
  37u,
  59u,
  42u,
  48u,
  39u,
  38u,
  47u,
  47u,
  41u
 };

static const UType JSum_8_23_5_4[]=
 {
  40u,
  38u,
  52u,
  50u,
  39u,
  49u,
  43u,
  40u,
  42u,
  44u,
  39u,
  34u,
  36u,
  42u,
  35u,
  48u,
  42u,
  55u,
  31u,
  35u,
  38u,
  40u,
  53u
 };

static const UType JSum_8_23_5_5[]=
 {
  42u,
  38u,
  59u,
  37u,
  39u,
  30u,
  41u,
  39u,
  37u,
  34u,
  46u,
  43u,
  47u,
  48u,
  35u,
  44u,
  45u,
  48u,
  47u,
  42u,
  36u,
  37u,
  51u
 };

static const UType JSum_8_23_5_6[]=
 {
  40u,
  39u,
  42u,
  36u,
  42u,
  38u,
  38u,
  49u,
  44u,
  42u,
  55u,
  40u,
  52u,
  43u,
  39u,
  35u,
  31u,
  53u,
  50u,
  40u,
  34u,
  48u,
  35u
 };

static const UType JSum_8_23_5_7[]=
 {
  46u,
  41u,
  40u,
  46u,
  39u,
  33u,
  41u,
  37u,
  41u,
  45u,
  42u,
  51u,
  26u,
  50u,
  52u,
  52u,
  46u,
  41u,
  35u,
  45u,
  40u,
  33u,
  43u
 };

static const UType JSum_8_23_5_8[]=
 {
  42u,
  30u,
  46u,
  44u,
  36u,
  59u,
  39u,
  47u,
  48u,
  51u,
  39u,
  34u,
  35u,
  42u,
  38u,
  41u,
  43u,
  45u,
  37u,
  37u,
  37u,
  48u,
  47u
 };

static const UType JSum_8_23_5_9[]=
 {
  40u,
  31u,
  42u,
  42u,
  50u,
  40u,
  42u,
  34u,
  43u,
  38u,
  35u,
  35u,
  44u,
  39u,
  53u,
  55u,
  36u,
  40u,
  52u,
  38u,
  48u,
  39u,
  49u
 };

static const UType JSum_8_23_5_10[]=
 {
  46u,
  37u,
  52u,
  33u,
  33u,
  26u,
  45u,
  46u,
  42u,
  41u,
  41u,
  41u,
  52u,
  43u,
  41u,
  50u,
  40u,
  39u,
  51u,
  35u,
  40u,
  45u,
  46u
 };

static const UType JSum_8_23_5_11[]=
 {
  40u,
  40u,
  48u,
  42u,
  44u,
  54u,
  43u,
  48u,
  38u,
  32u,
  38u,
  46u,
  34u,
  38u,
  38u,
  52u,
  48u,
  30u,
  44u,
  34u,
  42u,
  40u,
  52u
 };

static const UType JSum_8_23_5_12[]=
 {
  46u,
  37u,
  52u,
  33u,
  33u,
  26u,
  45u,
  46u,
  42u,
  41u,
  41u,
  41u,
  52u,
  43u,
  41u,
  50u,
  40u,
  39u,
  51u,
  35u,
  40u,
  45u,
  46u
 };

static const UType JSum_8_23_5_13[]=
 {
  40u,
  31u,
  42u,
  42u,
  50u,
  40u,
  42u,
  34u,
  43u,
  38u,
  35u,
  35u,
  44u,
  39u,
  53u,
  55u,
  36u,
  40u,
  52u,
  38u,
  48u,
  39u,
  49u
 };

static const UType JSum_8_23_5_14[]=
 {
  42u,
  30u,
  46u,
  44u,
  36u,
  59u,
  39u,
  47u,
  48u,
  51u,
  39u,
  34u,
  35u,
  42u,
  38u,
  41u,
  43u,
  45u,
  37u,
  37u,
  37u,
  48u,
  47u
 };

static const UType JSum_8_23_5_15[]=
 {
  46u,
  41u,
  40u,
  46u,
  39u,
  33u,
  41u,
  37u,
  41u,
  45u,
  42u,
  51u,
  26u,
  50u,
  52u,
  52u,
  46u,
  41u,
  35u,
  45u,
  40u,
  33u,
  43u
 };

static const UType JSum_8_23_5_16[]=
 {
  40u,
  39u,
  42u,
  36u,
  42u,
  38u,
  38u,
  49u,
  44u,
  42u,
  55u,
  40u,
  52u,
  43u,
  39u,
  35u,
  31u,
  53u,
  50u,
  40u,
  34u,
  48u,
  35u
 };

static const UType JSum_8_23_5_17[]=
 {
  42u,
  38u,
  59u,
  37u,
  39u,
  30u,
  41u,
  39u,
  37u,
  34u,
  46u,
  43u,
  47u,
  48u,
  35u,
  44u,
  45u,
  48u,
  47u,
  42u,
  36u,
  37u,
  51u
 };

static const UType JSum_8_23_5_18[]=
 {
  40u,
  38u,
  52u,
  50u,
  39u,
  49u,
  43u,
  40u,
  42u,
  44u,
  39u,
  34u,
  36u,
  42u,
  35u,
  48u,
  42u,
  55u,
  31u,
  35u,
  38u,
  40u,
  53u
 };

static const UType JSum_8_23_5_19[]=
 {
  42u,
  48u,
  43u,
  30u,
  51u,
  45u,
  46u,
  39u,
  37u,
  44u,
  34u,
  37u,
  36u,
  35u,
  37u,
  59u,
  42u,
  48u,
  39u,
  38u,
  47u,
  47u,
  41u
 };

static const UType JSum_8_23_5_20[]=
 {
  46u,
  52u,
  37u,
  43u,
  52u,
  41u,
  33u,
  50u,
  33u,
  40u,
  26u,
  39u,
  45u,
  51u,
  46u,
  35u,
  42u,
  40u,
  41u,
  45u,
  41u,
  46u,
  41u
 };

static const UType JSum_8_23_5_21[]=
 {
  40u,
  46u,
  52u,
  38u,
  40u,
  32u,
  42u,
  38u,
  34u,
  48u,
  44u,
  43u,
  30u,
  54u,
  48u,
  44u,
  52u,
  42u,
  38u,
  48u,
  38u,
  40u,
  34u
 };

static const PtrLen<const UType> JTable_8_23_5[]=
 {
  Range(JSum_8_23_5_1),
  Range(JSum_8_23_5_2),
  Range(JSum_8_23_5_3),
  Range(JSum_8_23_5_4),
  Range(JSum_8_23_5_5),
  Range(JSum_8_23_5_6),
  Range(JSum_8_23_5_7),
  Range(JSum_8_23_5_8),
  Range(JSum_8_23_5_9),
  Range(JSum_8_23_5_10),
  Range(JSum_8_23_5_11),
  Range(JSum_8_23_5_12),
  Range(JSum_8_23_5_13),
  Range(JSum_8_23_5_14),
  Range(JSum_8_23_5_15),
  Range(JSum_8_23_5_16),
  Range(JSum_8_23_5_17),
  Range(JSum_8_23_5_18),
  Range(JSum_8_23_5_19),
  Range(JSum_8_23_5_20),
  Range(JSum_8_23_5_21)
 };

static const UType JSum_8_23_6_1[]=
 {
  104u,
  102u,
  86u,
  112u,
  118u,
  100u,
  106u,
  108u,
  92u,
  106u,
  86u,
  98u,
  84u,
  92u,
  122u,
  102u,
  99u,
  92u,
  112u,
  102u,
  114u,
  104u,
  104u
 };

static const UType JSum_8_23_6_2[]=
 {
  129u,
  99u,
  109u,
  110u,
  90u,
  87u,
  113u,
  104u,
  96u,
  83u,
  95u,
  106u,
  101u,
  99u,
  112u,
  94u,
  112u,
  103u,
  101u,
  93u,
  98u,
  110u,
  101u
 };

static const UType JSum_8_23_6_3[]=
 {
  93u,
  87u,
  99u,
  113u,
  80u,
  102u,
  111u,
  91u,
  99u,
  108u,
  112u,
  110u,
  113u,
  97u,
  116u,
  97u,
  107u,
  86u,
  98u,
  101u,
  109u,
  116u,
  100u
 };

static const UType JSum_8_23_6_4[]=
 {
  120u,
  91u,
  105u,
  88u,
  96u,
  85u,
  96u,
  99u,
  116u,
  97u,
  99u,
  114u,
  107u,
  99u,
  99u,
  110u,
  91u,
  115u,
  118u,
  91u,
  99u,
  100u,
  110u
 };

static const UType JSum_8_23_6_5[]=
 {
  93u,
  101u,
  97u,
  110u,
  91u,
  113u,
  100u,
  98u,
  116u,
  112u,
  111u,
  99u,
  116u,
  86u,
  97u,
  108u,
  102u,
  87u,
  109u,
  107u,
  113u,
  99u,
  80u
 };

static const UType JSum_8_23_6_6[]=
 {
  120u,
  96u,
  116u,
  107u,
  91u,
  99u,
  91u,
  85u,
  97u,
  99u,
  115u,
  100u,
  105u,
  96u,
  99u,
  99u,
  118u,
  110u,
  88u,
  99u,
  114u,
  110u,
  91u
 };

static const UType JSum_8_23_6_7[]=
 {
  129u,
  98u,
  103u,
  112u,
  106u,
  96u,
  87u,
  109u,
  101u,
  93u,
  112u,
  99u,
  95u,
  104u,
  90u,
  99u,
  110u,
  101u,
  94u,
  101u,
  83u,
  113u,
  110u
 };

static const UType JSum_8_23_6_8[]=
 {
  93u,
  113u,
  111u,
  108u,
  113u,
  97u,
  98u,
  116u,
  87u,
  80u,
  91u,
  112u,
  97u,
  107u,
  101u,
  100u,
  99u,
  102u,
  99u,
  110u,
  116u,
  86u,
  109u
 };

static const UType JSum_8_23_6_9[]=
 {
  120u,
  118u,
  99u,
  116u,
  88u,
  100u,
  91u,
  114u,
  96u,
  91u,
  91u,
  99u,
  97u,
  96u,
  110u,
  115u,
  107u,
  99u,
  105u,
  99u,
  110u,
  99u,
  85u
 };

static const UType JSum_8_23_6_10[]=
 {
  129u,
  109u,
  90u,
  113u,
  96u,
  95u,
  101u,
  112u,
  112u,
  101u,
  98u,
  101u,
  99u,
  110u,
  87u,
  104u,
  83u,
  106u,
  99u,
  94u,
  103u,
  93u,
  110u
 };

static const UType JSum_8_23_6_11[]=
 {
  104u,
  104u,
  102u,
  92u,
  102u,
  92u,
  98u,
  106u,
  108u,
  100u,
  112u,
  102u,
  104u,
  114u,
  112u,
  99u,
  122u,
  84u,
  86u,
  92u,
  106u,
  118u,
  86u
 };

static const UType JSum_8_23_6_12[]=
 {
  129u,
  109u,
  90u,
  113u,
  96u,
  95u,
  101u,
  112u,
  112u,
  101u,
  98u,
  101u,
  99u,
  110u,
  87u,
  104u,
  83u,
  106u,
  99u,
  94u,
  103u,
  93u,
  110u
 };

static const UType JSum_8_23_6_13[]=
 {
  120u,
  118u,
  99u,
  116u,
  88u,
  100u,
  91u,
  114u,
  96u,
  91u,
  91u,
  99u,
  97u,
  96u,
  110u,
  115u,
  107u,
  99u,
  105u,
  99u,
  110u,
  99u,
  85u
 };

static const UType JSum_8_23_6_14[]=
 {
  93u,
  113u,
  111u,
  108u,
  113u,
  97u,
  98u,
  116u,
  87u,
  80u,
  91u,
  112u,
  97u,
  107u,
  101u,
  100u,
  99u,
  102u,
  99u,
  110u,
  116u,
  86u,
  109u
 };

static const UType JSum_8_23_6_15[]=
 {
  129u,
  98u,
  103u,
  112u,
  106u,
  96u,
  87u,
  109u,
  101u,
  93u,
  112u,
  99u,
  95u,
  104u,
  90u,
  99u,
  110u,
  101u,
  94u,
  101u,
  83u,
  113u,
  110u
 };

static const UType JSum_8_23_6_16[]=
 {
  120u,
  96u,
  116u,
  107u,
  91u,
  99u,
  91u,
  85u,
  97u,
  99u,
  115u,
  100u,
  105u,
  96u,
  99u,
  99u,
  118u,
  110u,
  88u,
  99u,
  114u,
  110u,
  91u
 };

static const UType JSum_8_23_6_17[]=
 {
  93u,
  101u,
  97u,
  110u,
  91u,
  113u,
  100u,
  98u,
  116u,
  112u,
  111u,
  99u,
  116u,
  86u,
  97u,
  108u,
  102u,
  87u,
  109u,
  107u,
  113u,
  99u,
  80u
 };

static const UType JSum_8_23_6_18[]=
 {
  120u,
  91u,
  105u,
  88u,
  96u,
  85u,
  96u,
  99u,
  116u,
  97u,
  99u,
  114u,
  107u,
  99u,
  99u,
  110u,
  91u,
  115u,
  118u,
  91u,
  99u,
  100u,
  110u
 };

static const UType JSum_8_23_6_19[]=
 {
  93u,
  87u,
  99u,
  113u,
  80u,
  102u,
  111u,
  91u,
  99u,
  108u,
  112u,
  110u,
  113u,
  97u,
  116u,
  97u,
  107u,
  86u,
  98u,
  101u,
  109u,
  116u,
  100u
 };

static const UType JSum_8_23_6_20[]=
 {
  129u,
  99u,
  109u,
  110u,
  90u,
  87u,
  113u,
  104u,
  96u,
  83u,
  95u,
  106u,
  101u,
  99u,
  112u,
  94u,
  112u,
  103u,
  101u,
  93u,
  98u,
  110u,
  101u
 };

static const UType JSum_8_23_6_21[]=
 {
  104u,
  102u,
  86u,
  112u,
  118u,
  100u,
  106u,
  108u,
  92u,
  106u,
  86u,
  98u,
  84u,
  92u,
  122u,
  102u,
  99u,
  92u,
  112u,
  102u,
  114u,
  104u,
  104u
 };

static const PtrLen<const UType> JTable_8_23_6[]=
 {
  Range(JSum_8_23_6_1),
  Range(JSum_8_23_6_2),
  Range(JSum_8_23_6_3),
  Range(JSum_8_23_6_4),
  Range(JSum_8_23_6_5),
  Range(JSum_8_23_6_6),
  Range(JSum_8_23_6_7),
  Range(JSum_8_23_6_8),
  Range(JSum_8_23_6_9),
  Range(JSum_8_23_6_10),
  Range(JSum_8_23_6_11),
  Range(JSum_8_23_6_12),
  Range(JSum_8_23_6_13),
  Range(JSum_8_23_6_14),
  Range(JSum_8_23_6_15),
  Range(JSum_8_23_6_16),
  Range(JSum_8_23_6_17),
  Range(JSum_8_23_6_18),
  Range(JSum_8_23_6_19),
  Range(JSum_8_23_6_20),
  Range(JSum_8_23_6_21)
 };

static const UType JSum_8_23_7_1[]=
 {
  108u,
  126u,
  112u,
  122u,
  106u,
  112u,
  100u,
  120u,
  118u,
  110u,
  120u,
  92u,
  118u,
  118u,
  118u,
  104u,
  104u,
  114u,
  120u,
  86u,
  98u,
  107u,
  96u
 };

static const UType JSum_8_23_7_2[]=
 {
  94u,
  102u,
  117u,
  94u,
  100u,
  122u,
  101u,
  113u,
  115u,
  105u,
  130u,
  107u,
  114u,
  107u,
  128u,
  101u,
  103u,
  107u,
  114u,
  117u,
  126u,
  115u,
  97u
 };

static const UType JSum_8_23_7_3[]=
 {
  119u,
  125u,
  103u,
  108u,
  103u,
  100u,
  113u,
  120u,
  105u,
  125u,
  103u,
  95u,
  104u,
  116u,
  104u,
  83u,
  122u,
  108u,
  123u,
  107u,
  108u,
  117u,
  118u
 };

static const UType JSum_8_23_7_4[]=
 {
  123u,
  102u,
  99u,
  106u,
  111u,
  117u,
  108u,
  107u,
  123u,
  88u,
  122u,
  121u,
  110u,
  123u,
  123u,
  112u,
  99u,
  113u,
  103u,
  104u,
  88u,
  112u,
  115u
 };

static const UType JSum_8_23_7_5[]=
 {
  119u,
  107u,
  83u,
  95u,
  120u,
  108u,
  118u,
  123u,
  104u,
  103u,
  113u,
  103u,
  117u,
  108u,
  116u,
  125u,
  100u,
  125u,
  108u,
  122u,
  104u,
  105u,
  103u
 };

static const UType JSum_8_23_7_6[]=
 {
  123u,
  111u,
  123u,
  110u,
  99u,
  88u,
  102u,
  117u,
  88u,
  123u,
  113u,
  112u,
  99u,
  108u,
  122u,
  123u,
  103u,
  115u,
  106u,
  107u,
  121u,
  112u,
  104u
 };

static const UType JSum_8_23_7_7[]=
 {
  94u,
  126u,
  107u,
  128u,
  107u,
  115u,
  122u,
  117u,
  97u,
  117u,
  103u,
  107u,
  130u,
  113u,
  100u,
  102u,
  115u,
  114u,
  101u,
  114u,
  105u,
  101u,
  94u
 };

static const UType JSum_8_23_7_8[]=
 {
  119u,
  108u,
  113u,
  125u,
  104u,
  83u,
  123u,
  117u,
  125u,
  103u,
  120u,
  103u,
  116u,
  122u,
  107u,
  118u,
  103u,
  100u,
  105u,
  95u,
  104u,
  108u,
  108u
 };

static const UType JSum_8_23_7_9[]=
 {
  123u,
  103u,
  123u,
  123u,
  106u,
  112u,
  99u,
  121u,
  108u,
  102u,
  104u,
  123u,
  88u,
  111u,
  115u,
  113u,
  110u,
  107u,
  99u,
  88u,
  112u,
  122u,
  117u
 };

static const UType JSum_8_23_7_10[]=
 {
  94u,
  117u,
  100u,
  101u,
  115u,
  130u,
  114u,
  128u,
  103u,
  114u,
  126u,
  97u,
  102u,
  94u,
  122u,
  113u,
  105u,
  107u,
  107u,
  101u,
  107u,
  117u,
  115u
 };

static const UType JSum_8_23_7_11[]=
 {
  108u,
  107u,
  86u,
  114u,
  104u,
  118u,
  92u,
  110u,
  120u,
  112u,
  122u,
  126u,
  96u,
  98u,
  120u,
  104u,
  118u,
  118u,
  120u,
  118u,
  100u,
  106u,
  112u
 };

static const UType JSum_8_23_7_12[]=
 {
  94u,
  117u,
  100u,
  101u,
  115u,
  130u,
  114u,
  128u,
  103u,
  114u,
  126u,
  97u,
  102u,
  94u,
  122u,
  113u,
  105u,
  107u,
  107u,
  101u,
  107u,
  117u,
  115u
 };

static const UType JSum_8_23_7_13[]=
 {
  123u,
  103u,
  123u,
  123u,
  106u,
  112u,
  99u,
  121u,
  108u,
  102u,
  104u,
  123u,
  88u,
  111u,
  115u,
  113u,
  110u,
  107u,
  99u,
  88u,
  112u,
  122u,
  117u
 };

static const UType JSum_8_23_7_14[]=
 {
  119u,
  108u,
  113u,
  125u,
  104u,
  83u,
  123u,
  117u,
  125u,
  103u,
  120u,
  103u,
  116u,
  122u,
  107u,
  118u,
  103u,
  100u,
  105u,
  95u,
  104u,
  108u,
  108u
 };

static const UType JSum_8_23_7_15[]=
 {
  94u,
  126u,
  107u,
  128u,
  107u,
  115u,
  122u,
  117u,
  97u,
  117u,
  103u,
  107u,
  130u,
  113u,
  100u,
  102u,
  115u,
  114u,
  101u,
  114u,
  105u,
  101u,
  94u
 };

static const UType JSum_8_23_7_16[]=
 {
  123u,
  111u,
  123u,
  110u,
  99u,
  88u,
  102u,
  117u,
  88u,
  123u,
  113u,
  112u,
  99u,
  108u,
  122u,
  123u,
  103u,
  115u,
  106u,
  107u,
  121u,
  112u,
  104u
 };

static const UType JSum_8_23_7_17[]=
 {
  119u,
  107u,
  83u,
  95u,
  120u,
  108u,
  118u,
  123u,
  104u,
  103u,
  113u,
  103u,
  117u,
  108u,
  116u,
  125u,
  100u,
  125u,
  108u,
  122u,
  104u,
  105u,
  103u
 };

static const UType JSum_8_23_7_18[]=
 {
  123u,
  102u,
  99u,
  106u,
  111u,
  117u,
  108u,
  107u,
  123u,
  88u,
  122u,
  121u,
  110u,
  123u,
  123u,
  112u,
  99u,
  113u,
  103u,
  104u,
  88u,
  112u,
  115u
 };

static const UType JSum_8_23_7_19[]=
 {
  119u,
  125u,
  103u,
  108u,
  103u,
  100u,
  113u,
  120u,
  105u,
  125u,
  103u,
  95u,
  104u,
  116u,
  104u,
  83u,
  122u,
  108u,
  123u,
  107u,
  108u,
  117u,
  118u
 };

static const UType JSum_8_23_7_20[]=
 {
  94u,
  102u,
  117u,
  94u,
  100u,
  122u,
  101u,
  113u,
  115u,
  105u,
  130u,
  107u,
  114u,
  107u,
  128u,
  101u,
  103u,
  107u,
  114u,
  117u,
  126u,
  115u,
  97u
 };

static const UType JSum_8_23_7_21[]=
 {
  108u,
  126u,
  112u,
  122u,
  106u,
  112u,
  100u,
  120u,
  118u,
  110u,
  120u,
  92u,
  118u,
  118u,
  118u,
  104u,
  104u,
  114u,
  120u,
  86u,
  98u,
  107u,
  96u
 };

static const PtrLen<const UType> JTable_8_23_7[]=
 {
  Range(JSum_8_23_7_1),
  Range(JSum_8_23_7_2),
  Range(JSum_8_23_7_3),
  Range(JSum_8_23_7_4),
  Range(JSum_8_23_7_5),
  Range(JSum_8_23_7_6),
  Range(JSum_8_23_7_7),
  Range(JSum_8_23_7_8),
  Range(JSum_8_23_7_9),
  Range(JSum_8_23_7_10),
  Range(JSum_8_23_7_11),
  Range(JSum_8_23_7_12),
  Range(JSum_8_23_7_13),
  Range(JSum_8_23_7_14),
  Range(JSum_8_23_7_15),
  Range(JSum_8_23_7_16),
  Range(JSum_8_23_7_17),
  Range(JSum_8_23_7_18),
  Range(JSum_8_23_7_19),
  Range(JSum_8_23_7_20),
  Range(JSum_8_23_7_21)
 };

static const UType JSum_8_23_8_1[]=
 {
  172u,
  168u,
  188u,
  186u,
  160u,
  184u,
  168u,
  156u,
  174u,
  198u,
  166u,
  166u,
  156u,
  190u,
  170u,
  174u,
  168u,
  164u,
  174u,
  155u,
  172u,
  142u,
  158u
 };

static const UType JSum_8_23_8_2[]=
 {
  165u,
  184u,
  168u,
  146u,
  163u,
  155u,
  155u,
  187u,
  153u,
  196u,
  174u,
  171u,
  163u,
  176u,
  180u,
  182u,
  173u,
  168u,
  159u,
  159u,
  189u,
  182u,
  161u
 };

static const UType JSum_8_23_8_3[]=
 {
  157u,
  160u,
  174u,
  169u,
  165u,
  167u,
  193u,
  151u,
  172u,
  156u,
  164u,
  189u,
  167u,
  152u,
  167u,
  157u,
  171u,
  164u,
  175u,
  170u,
  182u,
  186u,
  201u
 };

static const UType JSum_8_23_8_4[]=
 {
  159u,
  194u,
  184u,
  160u,
  174u,
  156u,
  156u,
  164u,
  164u,
  165u,
  178u,
  170u,
  159u,
  167u,
  165u,
  179u,
  172u,
  192u,
  145u,
  165u,
  164u,
  195u,
  182u
 };

static const UType JSum_8_23_8_5[]=
 {
  157u,
  170u,
  157u,
  189u,
  151u,
  169u,
  201u,
  175u,
  167u,
  164u,
  193u,
  174u,
  186u,
  164u,
  152u,
  156u,
  167u,
  160u,
  182u,
  171u,
  167u,
  172u,
  165u
 };

static const UType JSum_8_23_8_6[]=
 {
  159u,
  174u,
  164u,
  159u,
  172u,
  164u,
  194u,
  156u,
  165u,
  167u,
  192u,
  195u,
  184u,
  156u,
  178u,
  165u,
  145u,
  182u,
  160u,
  164u,
  170u,
  179u,
  165u
 };

static const UType JSum_8_23_8_7[]=
 {
  165u,
  189u,
  168u,
  180u,
  171u,
  153u,
  155u,
  168u,
  161u,
  159u,
  173u,
  176u,
  174u,
  187u,
  163u,
  184u,
  182u,
  159u,
  182u,
  163u,
  196u,
  155u,
  146u
 };

static const UType JSum_8_23_8_8[]=
 {
  157u,
  169u,
  193u,
  156u,
  167u,
  157u,
  175u,
  186u,
  160u,
  165u,
  151u,
  164u,
  152u,
  171u,
  170u,
  201u,
  174u,
  167u,
  172u,
  189u,
  167u,
  164u,
  182u
 };

static const UType JSum_8_23_8_9[]=
 {
  159u,
  145u,
  167u,
  164u,
  160u,
  195u,
  172u,
  170u,
  156u,
  194u,
  165u,
  165u,
  165u,
  174u,
  182u,
  192u,
  159u,
  164u,
  184u,
  164u,
  179u,
  178u,
  156u
 };

static const UType JSum_8_23_8_10[]=
 {
  165u,
  168u,
  163u,
  155u,
  153u,
  174u,
  163u,
  180u,
  173u,
  159u,
  189u,
  161u,
  184u,
  146u,
  155u,
  187u,
  196u,
  171u,
  176u,
  182u,
  168u,
  159u,
  182u
 };

static const UType JSum_8_23_8_11[]=
 {
  172u,
  142u,
  155u,
  164u,
  174u,
  190u,
  166u,
  198u,
  156u,
  184u,
  186u,
  168u,
  158u,
  172u,
  174u,
  168u,
  170u,
  156u,
  166u,
  174u,
  168u,
  160u,
  188u
 };

static const UType JSum_8_23_8_12[]=
 {
  165u,
  168u,
  163u,
  155u,
  153u,
  174u,
  163u,
  180u,
  173u,
  159u,
  189u,
  161u,
  184u,
  146u,
  155u,
  187u,
  196u,
  171u,
  176u,
  182u,
  168u,
  159u,
  182u
 };

static const UType JSum_8_23_8_13[]=
 {
  159u,
  145u,
  167u,
  164u,
  160u,
  195u,
  172u,
  170u,
  156u,
  194u,
  165u,
  165u,
  165u,
  174u,
  182u,
  192u,
  159u,
  164u,
  184u,
  164u,
  179u,
  178u,
  156u
 };

static const UType JSum_8_23_8_14[]=
 {
  157u,
  169u,
  193u,
  156u,
  167u,
  157u,
  175u,
  186u,
  160u,
  165u,
  151u,
  164u,
  152u,
  171u,
  170u,
  201u,
  174u,
  167u,
  172u,
  189u,
  167u,
  164u,
  182u
 };

static const UType JSum_8_23_8_15[]=
 {
  165u,
  189u,
  168u,
  180u,
  171u,
  153u,
  155u,
  168u,
  161u,
  159u,
  173u,
  176u,
  174u,
  187u,
  163u,
  184u,
  182u,
  159u,
  182u,
  163u,
  196u,
  155u,
  146u
 };

static const UType JSum_8_23_8_16[]=
 {
  159u,
  174u,
  164u,
  159u,
  172u,
  164u,
  194u,
  156u,
  165u,
  167u,
  192u,
  195u,
  184u,
  156u,
  178u,
  165u,
  145u,
  182u,
  160u,
  164u,
  170u,
  179u,
  165u
 };

static const UType JSum_8_23_8_17[]=
 {
  157u,
  170u,
  157u,
  189u,
  151u,
  169u,
  201u,
  175u,
  167u,
  164u,
  193u,
  174u,
  186u,
  164u,
  152u,
  156u,
  167u,
  160u,
  182u,
  171u,
  167u,
  172u,
  165u
 };

static const UType JSum_8_23_8_18[]=
 {
  159u,
  194u,
  184u,
  160u,
  174u,
  156u,
  156u,
  164u,
  164u,
  165u,
  178u,
  170u,
  159u,
  167u,
  165u,
  179u,
  172u,
  192u,
  145u,
  165u,
  164u,
  195u,
  182u
 };

static const UType JSum_8_23_8_19[]=
 {
  157u,
  160u,
  174u,
  169u,
  165u,
  167u,
  193u,
  151u,
  172u,
  156u,
  164u,
  189u,
  167u,
  152u,
  167u,
  157u,
  171u,
  164u,
  175u,
  170u,
  182u,
  186u,
  201u
 };

static const UType JSum_8_23_8_20[]=
 {
  165u,
  184u,
  168u,
  146u,
  163u,
  155u,
  155u,
  187u,
  153u,
  196u,
  174u,
  171u,
  163u,
  176u,
  180u,
  182u,
  173u,
  168u,
  159u,
  159u,
  189u,
  182u,
  161u
 };

static const UType JSum_8_23_8_21[]=
 {
  172u,
  168u,
  188u,
  186u,
  160u,
  184u,
  168u,
  156u,
  174u,
  198u,
  166u,
  166u,
  156u,
  190u,
  170u,
  174u,
  168u,
  164u,
  174u,
  155u,
  172u,
  142u,
  158u
 };

static const PtrLen<const UType> JTable_8_23_8[]=
 {
  Range(JSum_8_23_8_1),
  Range(JSum_8_23_8_2),
  Range(JSum_8_23_8_3),
  Range(JSum_8_23_8_4),
  Range(JSum_8_23_8_5),
  Range(JSum_8_23_8_6),
  Range(JSum_8_23_8_7),
  Range(JSum_8_23_8_8),
  Range(JSum_8_23_8_9),
  Range(JSum_8_23_8_10),
  Range(JSum_8_23_8_11),
  Range(JSum_8_23_8_12),
  Range(JSum_8_23_8_13),
  Range(JSum_8_23_8_14),
  Range(JSum_8_23_8_15),
  Range(JSum_8_23_8_16),
  Range(JSum_8_23_8_17),
  Range(JSum_8_23_8_18),
  Range(JSum_8_23_8_19),
  Range(JSum_8_23_8_20),
  Range(JSum_8_23_8_21)
 };

static const UType JSum_8_23_9_1[]=
 {
  220u,
  200u,
  224u,
  216u,
  224u,
  195u,
  210u,
  206u,
  210u,
  198u,
  222u,
  190u,
  196u,
  242u,
  214u,
  190u,
  202u,
  184u,
  216u,
  200u,
  220u,
  226u,
  224u
 };

static const UType JSum_8_23_9_2[]=
 {
  181u,
  224u,
  201u,
  211u,
  202u,
  229u,
  217u,
  224u,
  208u,
  199u,
  222u,
  231u,
  195u,
  215u,
  216u,
  204u,
  197u,
  216u,
  221u,
  233u,
  187u,
  206u,
  190u
 };

static const UType JSum_8_23_9_3[]=
 {
  216u,
  198u,
  203u,
  195u,
  187u,
  220u,
  205u,
  200u,
  212u,
  215u,
  201u,
  232u,
  225u,
  209u,
  202u,
  233u,
  224u,
  194u,
  203u,
  187u,
  237u,
  206u,
  225u
 };

static const UType JSum_8_23_9_4[]=
 {
  201u,
  193u,
  187u,
  220u,
  190u,
  199u,
  210u,
  214u,
  212u,
  227u,
  224u,
  178u,
  212u,
  209u,
  217u,
  219u,
  210u,
  232u,
  212u,
  194u,
  227u,
  212u,
  230u
 };

static const UType JSum_8_23_9_5[]=
 {
  216u,
  187u,
  233u,
  232u,
  200u,
  195u,
  225u,
  203u,
  202u,
  201u,
  205u,
  203u,
  206u,
  194u,
  209u,
  215u,
  220u,
  198u,
  237u,
  224u,
  225u,
  212u,
  187u
 };

static const UType JSum_8_23_9_6[]=
 {
  201u,
  190u,
  212u,
  212u,
  210u,
  227u,
  193u,
  199u,
  227u,
  209u,
  232u,
  212u,
  187u,
  210u,
  224u,
  217u,
  212u,
  230u,
  220u,
  214u,
  178u,
  219u,
  194u
 };

static const UType JSum_8_23_9_7[]=
 {
  181u,
  187u,
  216u,
  216u,
  231u,
  208u,
  229u,
  201u,
  190u,
  233u,
  197u,
  215u,
  222u,
  224u,
  202u,
  224u,
  206u,
  221u,
  204u,
  195u,
  199u,
  217u,
  211u
 };

static const UType JSum_8_23_9_8[]=
 {
  216u,
  195u,
  205u,
  215u,
  225u,
  233u,
  203u,
  206u,
  198u,
  187u,
  200u,
  201u,
  209u,
  224u,
  187u,
  225u,
  203u,
  220u,
  212u,
  232u,
  202u,
  194u,
  237u
 };

static const UType JSum_8_23_9_9[]=
 {
  201u,
  212u,
  209u,
  212u,
  220u,
  212u,
  210u,
  178u,
  210u,
  193u,
  194u,
  217u,
  227u,
  190u,
  230u,
  232u,
  212u,
  214u,
  187u,
  227u,
  219u,
  224u,
  199u
 };

static const UType JSum_8_23_9_10[]=
 {
  181u,
  201u,
  202u,
  217u,
  208u,
  222u,
  195u,
  216u,
  197u,
  221u,
  187u,
  190u,
  224u,
  211u,
  229u,
  224u,
  199u,
  231u,
  215u,
  204u,
  216u,
  233u,
  206u
 };

static const UType JSum_8_23_9_11[]=
 {
  220u,
  226u,
  200u,
  184u,
  190u,
  242u,
  190u,
  198u,
  206u,
  195u,
  216u,
  200u,
  224u,
  220u,
  216u,
  202u,
  214u,
  196u,
  222u,
  210u,
  210u,
  224u,
  224u
 };

static const UType JSum_8_23_9_12[]=
 {
  181u,
  201u,
  202u,
  217u,
  208u,
  222u,
  195u,
  216u,
  197u,
  221u,
  187u,
  190u,
  224u,
  211u,
  229u,
  224u,
  199u,
  231u,
  215u,
  204u,
  216u,
  233u,
  206u
 };

static const UType JSum_8_23_9_13[]=
 {
  201u,
  212u,
  209u,
  212u,
  220u,
  212u,
  210u,
  178u,
  210u,
  193u,
  194u,
  217u,
  227u,
  190u,
  230u,
  232u,
  212u,
  214u,
  187u,
  227u,
  219u,
  224u,
  199u
 };

static const UType JSum_8_23_9_14[]=
 {
  216u,
  195u,
  205u,
  215u,
  225u,
  233u,
  203u,
  206u,
  198u,
  187u,
  200u,
  201u,
  209u,
  224u,
  187u,
  225u,
  203u,
  220u,
  212u,
  232u,
  202u,
  194u,
  237u
 };

static const UType JSum_8_23_9_15[]=
 {
  181u,
  187u,
  216u,
  216u,
  231u,
  208u,
  229u,
  201u,
  190u,
  233u,
  197u,
  215u,
  222u,
  224u,
  202u,
  224u,
  206u,
  221u,
  204u,
  195u,
  199u,
  217u,
  211u
 };

static const UType JSum_8_23_9_16[]=
 {
  201u,
  190u,
  212u,
  212u,
  210u,
  227u,
  193u,
  199u,
  227u,
  209u,
  232u,
  212u,
  187u,
  210u,
  224u,
  217u,
  212u,
  230u,
  220u,
  214u,
  178u,
  219u,
  194u
 };

static const UType JSum_8_23_9_17[]=
 {
  216u,
  187u,
  233u,
  232u,
  200u,
  195u,
  225u,
  203u,
  202u,
  201u,
  205u,
  203u,
  206u,
  194u,
  209u,
  215u,
  220u,
  198u,
  237u,
  224u,
  225u,
  212u,
  187u
 };

static const UType JSum_8_23_9_18[]=
 {
  201u,
  193u,
  187u,
  220u,
  190u,
  199u,
  210u,
  214u,
  212u,
  227u,
  224u,
  178u,
  212u,
  209u,
  217u,
  219u,
  210u,
  232u,
  212u,
  194u,
  227u,
  212u,
  230u
 };

static const UType JSum_8_23_9_19[]=
 {
  216u,
  198u,
  203u,
  195u,
  187u,
  220u,
  205u,
  200u,
  212u,
  215u,
  201u,
  232u,
  225u,
  209u,
  202u,
  233u,
  224u,
  194u,
  203u,
  187u,
  237u,
  206u,
  225u
 };

static const UType JSum_8_23_9_20[]=
 {
  181u,
  224u,
  201u,
  211u,
  202u,
  229u,
  217u,
  224u,
  208u,
  199u,
  222u,
  231u,
  195u,
  215u,
  216u,
  204u,
  197u,
  216u,
  221u,
  233u,
  187u,
  206u,
  190u
 };

static const UType JSum_8_23_9_21[]=
 {
  220u,
  200u,
  224u,
  216u,
  224u,
  195u,
  210u,
  206u,
  210u,
  198u,
  222u,
  190u,
  196u,
  242u,
  214u,
  190u,
  202u,
  184u,
  216u,
  200u,
  220u,
  226u,
  224u
 };

static const PtrLen<const UType> JTable_8_23_9[]=
 {
  Range(JSum_8_23_9_1),
  Range(JSum_8_23_9_2),
  Range(JSum_8_23_9_3),
  Range(JSum_8_23_9_4),
  Range(JSum_8_23_9_5),
  Range(JSum_8_23_9_6),
  Range(JSum_8_23_9_7),
  Range(JSum_8_23_9_8),
  Range(JSum_8_23_9_9),
  Range(JSum_8_23_9_10),
  Range(JSum_8_23_9_11),
  Range(JSum_8_23_9_12),
  Range(JSum_8_23_9_13),
  Range(JSum_8_23_9_14),
  Range(JSum_8_23_9_15),
  Range(JSum_8_23_9_16),
  Range(JSum_8_23_9_17),
  Range(JSum_8_23_9_18),
  Range(JSum_8_23_9_19),
  Range(JSum_8_23_9_20),
  Range(JSum_8_23_9_21)
 };

static const UType JSum_8_23_10_1[]=
 {
  338u,
  336u,
  324u,
  344u,
  312u,
  342u,
  356u,
  318u,
  338u,
  320u,
  314u,
  374u,
  347u,
  344u,
  300u,
  330u,
  316u,
  312u,
  298u,
  344u,
  330u,
  318u,
  334u
 };

static const UType JSum_8_23_10_2[]=
 {
  336u,
  336u,
  305u,
  352u,
  354u,
  354u,
  326u,
  313u,
  315u,
  337u,
  294u,
  321u,
  329u,
  311u,
  341u,
  359u,
  317u,
  320u,
  321u,
  353u,
  312u,
  351u,
  332u
 };

static const UType JSum_8_23_10_3[]=
 {
  345u,
  323u,
  313u,
  334u,
  335u,
  297u,
  367u,
  344u,
  360u,
  348u,
  322u,
  321u,
  320u,
  324u,
  348u,
  309u,
  314u,
  319u,
  333u,
  330u,
  335u,
  299u,
  349u
 };

static const UType JSum_8_23_10_4[]=
 {
  327u,
  330u,
  293u,
  360u,
  316u,
  321u,
  326u,
  335u,
  350u,
  339u,
  323u,
  346u,
  344u,
  354u,
  327u,
  330u,
  319u,
  325u,
  288u,
  325u,
  351u,
  349u,
  311u
 };

static const UType JSum_8_23_10_5[]=
 {
  345u,
  330u,
  309u,
  321u,
  344u,
  334u,
  349u,
  333u,
  348u,
  322u,
  367u,
  313u,
  299u,
  319u,
  324u,
  348u,
  297u,
  323u,
  335u,
  314u,
  320u,
  360u,
  335u
 };

static const UType JSum_8_23_10_6[]=
 {
  327u,
  316u,
  350u,
  344u,
  319u,
  351u,
  330u,
  321u,
  339u,
  354u,
  325u,
  349u,
  293u,
  326u,
  323u,
  327u,
  288u,
  311u,
  360u,
  335u,
  346u,
  330u,
  325u
 };

static const UType JSum_8_23_10_7[]=
 {
  336u,
  312u,
  320u,
  341u,
  321u,
  315u,
  354u,
  305u,
  332u,
  353u,
  317u,
  311u,
  294u,
  313u,
  354u,
  336u,
  351u,
  321u,
  359u,
  329u,
  337u,
  326u,
  352u
 };

static const UType JSum_8_23_10_8[]=
 {
  345u,
  334u,
  367u,
  348u,
  320u,
  309u,
  333u,
  299u,
  323u,
  335u,
  344u,
  322u,
  324u,
  314u,
  330u,
  349u,
  313u,
  297u,
  360u,
  321u,
  348u,
  319u,
  335u
 };

static const UType JSum_8_23_10_9[]=
 {
  327u,
  288u,
  354u,
  350u,
  360u,
  349u,
  319u,
  346u,
  326u,
  330u,
  325u,
  327u,
  339u,
  316u,
  311u,
  325u,
  344u,
  335u,
  293u,
  351u,
  330u,
  323u,
  321u
 };

static const UType JSum_8_23_10_10[]=
 {
  336u,
  305u,
  354u,
  326u,
  315u,
  294u,
  329u,
  341u,
  317u,
  321u,
  312u,
  332u,
  336u,
  352u,
  354u,
  313u,
  337u,
  321u,
  311u,
  359u,
  320u,
  353u,
  351u
 };

static const UType JSum_8_23_10_11[]=
 {
  338u,
  318u,
  344u,
  312u,
  330u,
  344u,
  374u,
  320u,
  318u,
  342u,
  344u,
  336u,
  334u,
  330u,
  298u,
  316u,
  300u,
  347u,
  314u,
  338u,
  356u,
  312u,
  324u
 };

static const UType JSum_8_23_10_12[]=
 {
  336u,
  305u,
  354u,
  326u,
  315u,
  294u,
  329u,
  341u,
  317u,
  321u,
  312u,
  332u,
  336u,
  352u,
  354u,
  313u,
  337u,
  321u,
  311u,
  359u,
  320u,
  353u,
  351u
 };

static const UType JSum_8_23_10_13[]=
 {
  327u,
  288u,
  354u,
  350u,
  360u,
  349u,
  319u,
  346u,
  326u,
  330u,
  325u,
  327u,
  339u,
  316u,
  311u,
  325u,
  344u,
  335u,
  293u,
  351u,
  330u,
  323u,
  321u
 };

static const UType JSum_8_23_10_14[]=
 {
  345u,
  334u,
  367u,
  348u,
  320u,
  309u,
  333u,
  299u,
  323u,
  335u,
  344u,
  322u,
  324u,
  314u,
  330u,
  349u,
  313u,
  297u,
  360u,
  321u,
  348u,
  319u,
  335u
 };

static const UType JSum_8_23_10_15[]=
 {
  336u,
  312u,
  320u,
  341u,
  321u,
  315u,
  354u,
  305u,
  332u,
  353u,
  317u,
  311u,
  294u,
  313u,
  354u,
  336u,
  351u,
  321u,
  359u,
  329u,
  337u,
  326u,
  352u
 };

static const UType JSum_8_23_10_16[]=
 {
  327u,
  316u,
  350u,
  344u,
  319u,
  351u,
  330u,
  321u,
  339u,
  354u,
  325u,
  349u,
  293u,
  326u,
  323u,
  327u,
  288u,
  311u,
  360u,
  335u,
  346u,
  330u,
  325u
 };

static const UType JSum_8_23_10_17[]=
 {
  345u,
  330u,
  309u,
  321u,
  344u,
  334u,
  349u,
  333u,
  348u,
  322u,
  367u,
  313u,
  299u,
  319u,
  324u,
  348u,
  297u,
  323u,
  335u,
  314u,
  320u,
  360u,
  335u
 };

static const UType JSum_8_23_10_18[]=
 {
  327u,
  330u,
  293u,
  360u,
  316u,
  321u,
  326u,
  335u,
  350u,
  339u,
  323u,
  346u,
  344u,
  354u,
  327u,
  330u,
  319u,
  325u,
  288u,
  325u,
  351u,
  349u,
  311u
 };

static const UType JSum_8_23_10_19[]=
 {
  345u,
  323u,
  313u,
  334u,
  335u,
  297u,
  367u,
  344u,
  360u,
  348u,
  322u,
  321u,
  320u,
  324u,
  348u,
  309u,
  314u,
  319u,
  333u,
  330u,
  335u,
  299u,
  349u
 };

static const UType JSum_8_23_10_20[]=
 {
  336u,
  336u,
  305u,
  352u,
  354u,
  354u,
  326u,
  313u,
  315u,
  337u,
  294u,
  321u,
  329u,
  311u,
  341u,
  359u,
  317u,
  320u,
  321u,
  353u,
  312u,
  351u,
  332u
 };

static const UType JSum_8_23_10_21[]=
 {
  338u,
  336u,
  324u,
  344u,
  312u,
  342u,
  356u,
  318u,
  338u,
  320u,
  314u,
  374u,
  347u,
  344u,
  300u,
  330u,
  316u,
  312u,
  298u,
  344u,
  330u,
  318u,
  334u
 };

static const PtrLen<const UType> JTable_8_23_10[]=
 {
  Range(JSum_8_23_10_1),
  Range(JSum_8_23_10_2),
  Range(JSum_8_23_10_3),
  Range(JSum_8_23_10_4),
  Range(JSum_8_23_10_5),
  Range(JSum_8_23_10_6),
  Range(JSum_8_23_10_7),
  Range(JSum_8_23_10_8),
  Range(JSum_8_23_10_9),
  Range(JSum_8_23_10_10),
  Range(JSum_8_23_10_11),
  Range(JSum_8_23_10_12),
  Range(JSum_8_23_10_13),
  Range(JSum_8_23_10_14),
  Range(JSum_8_23_10_15),
  Range(JSum_8_23_10_16),
  Range(JSum_8_23_10_17),
  Range(JSum_8_23_10_18),
  Range(JSum_8_23_10_19),
  Range(JSum_8_23_10_20),
  Range(JSum_8_23_10_21)
 };

static const UType JSum_8_23_11_1[]=
 {
  380u,
  384u,
  386u,
  378u,
  396u,
  398u,
  354u,
  390u,
  406u,
  390u,
  388u,
  380u,
  352u,
  384u,
  392u,
  430u,
  412u,
  372u,
  434u,
  390u,
  394u,
  371u,
  408u
 };

static const UType JSum_8_23_11_2[]=
 {
  354u,
  408u,
  380u,
  408u,
  390u,
  404u,
  414u,
  395u,
  378u,
  404u,
  403u,
  417u,
  371u,
  357u,
  388u,
  394u,
  377u,
  435u,
  376u,
  371u,
  388u,
  381u,
  376u
 };

static const UType JSum_8_23_11_3[]=
 {
  379u,
  405u,
  366u,
  410u,
  375u,
  389u,
  397u,
  423u,
  382u,
  370u,
  351u,
  398u,
  386u,
  356u,
  414u,
  390u,
  372u,
  394u,
  390u,
  417u,
  416u,
  407u,
  382u
 };

static const UType JSum_8_23_11_4[]=
 {
  385u,
  388u,
  425u,
  408u,
  376u,
  397u,
  359u,
  385u,
  395u,
  443u,
  375u,
  380u,
  398u,
  371u,
  386u,
  356u,
  389u,
  390u,
  377u,
  380u,
  403u,
  389u,
  414u
 };

static const UType JSum_8_23_11_5[]=
 {
  379u,
  417u,
  390u,
  398u,
  423u,
  410u,
  382u,
  390u,
  414u,
  351u,
  397u,
  366u,
  407u,
  394u,
  356u,
  370u,
  389u,
  405u,
  416u,
  372u,
  386u,
  382u,
  375u
 };

static const UType JSum_8_23_11_6[]=
 {
  385u,
  376u,
  395u,
  398u,
  389u,
  403u,
  388u,
  397u,
  443u,
  371u,
  390u,
  389u,
  425u,
  359u,
  375u,
  386u,
  377u,
  414u,
  408u,
  385u,
  380u,
  356u,
  380u
 };

static const UType JSum_8_23_11_7[]=
 {
  354u,
  388u,
  435u,
  388u,
  417u,
  378u,
  404u,
  380u,
  376u,
  371u,
  377u,
  357u,
  403u,
  395u,
  390u,
  408u,
  381u,
  376u,
  394u,
  371u,
  404u,
  414u,
  408u
 };

static const UType JSum_8_23_11_8[]=
 {
  379u,
  410u,
  397u,
  370u,
  386u,
  390u,
  390u,
  407u,
  405u,
  375u,
  423u,
  351u,
  356u,
  372u,
  417u,
  382u,
  366u,
  389u,
  382u,
  398u,
  414u,
  394u,
  416u
 };

static const UType JSum_8_23_11_9[]=
 {
  385u,
  377u,
  371u,
  395u,
  408u,
  389u,
  389u,
  380u,
  359u,
  388u,
  380u,
  386u,
  443u,
  376u,
  414u,
  390u,
  398u,
  385u,
  425u,
  403u,
  356u,
  375u,
  397u
 };

static const UType JSum_8_23_11_10[]=
 {
  354u,
  380u,
  390u,
  414u,
  378u,
  403u,
  371u,
  388u,
  377u,
  376u,
  388u,
  376u,
  408u,
  408u,
  404u,
  395u,
  404u,
  417u,
  357u,
  394u,
  435u,
  371u,
  381u
 };

static const UType JSum_8_23_11_11[]=
 {
  380u,
  371u,
  390u,
  372u,
  430u,
  384u,
  380u,
  390u,
  390u,
  398u,
  378u,
  384u,
  408u,
  394u,
  434u,
  412u,
  392u,
  352u,
  388u,
  406u,
  354u,
  396u,
  386u
 };

static const UType JSum_8_23_11_12[]=
 {
  354u,
  380u,
  390u,
  414u,
  378u,
  403u,
  371u,
  388u,
  377u,
  376u,
  388u,
  376u,
  408u,
  408u,
  404u,
  395u,
  404u,
  417u,
  357u,
  394u,
  435u,
  371u,
  381u
 };

static const UType JSum_8_23_11_13[]=
 {
  385u,
  377u,
  371u,
  395u,
  408u,
  389u,
  389u,
  380u,
  359u,
  388u,
  380u,
  386u,
  443u,
  376u,
  414u,
  390u,
  398u,
  385u,
  425u,
  403u,
  356u,
  375u,
  397u
 };

static const UType JSum_8_23_11_14[]=
 {
  379u,
  410u,
  397u,
  370u,
  386u,
  390u,
  390u,
  407u,
  405u,
  375u,
  423u,
  351u,
  356u,
  372u,
  417u,
  382u,
  366u,
  389u,
  382u,
  398u,
  414u,
  394u,
  416u
 };

static const UType JSum_8_23_11_15[]=
 {
  354u,
  388u,
  435u,
  388u,
  417u,
  378u,
  404u,
  380u,
  376u,
  371u,
  377u,
  357u,
  403u,
  395u,
  390u,
  408u,
  381u,
  376u,
  394u,
  371u,
  404u,
  414u,
  408u
 };

static const UType JSum_8_23_11_16[]=
 {
  385u,
  376u,
  395u,
  398u,
  389u,
  403u,
  388u,
  397u,
  443u,
  371u,
  390u,
  389u,
  425u,
  359u,
  375u,
  386u,
  377u,
  414u,
  408u,
  385u,
  380u,
  356u,
  380u
 };

static const UType JSum_8_23_11_17[]=
 {
  379u,
  417u,
  390u,
  398u,
  423u,
  410u,
  382u,
  390u,
  414u,
  351u,
  397u,
  366u,
  407u,
  394u,
  356u,
  370u,
  389u,
  405u,
  416u,
  372u,
  386u,
  382u,
  375u
 };

static const UType JSum_8_23_11_18[]=
 {
  385u,
  388u,
  425u,
  408u,
  376u,
  397u,
  359u,
  385u,
  395u,
  443u,
  375u,
  380u,
  398u,
  371u,
  386u,
  356u,
  389u,
  390u,
  377u,
  380u,
  403u,
  389u,
  414u
 };

static const UType JSum_8_23_11_19[]=
 {
  379u,
  405u,
  366u,
  410u,
  375u,
  389u,
  397u,
  423u,
  382u,
  370u,
  351u,
  398u,
  386u,
  356u,
  414u,
  390u,
  372u,
  394u,
  390u,
  417u,
  416u,
  407u,
  382u
 };

static const UType JSum_8_23_11_20[]=
 {
  354u,
  408u,
  380u,
  408u,
  390u,
  404u,
  414u,
  395u,
  378u,
  404u,
  403u,
  417u,
  371u,
  357u,
  388u,
  394u,
  377u,
  435u,
  376u,
  371u,
  388u,
  381u,
  376u
 };

static const UType JSum_8_23_11_21[]=
 {
  380u,
  384u,
  386u,
  378u,
  396u,
  398u,
  354u,
  390u,
  406u,
  390u,
  388u,
  380u,
  352u,
  384u,
  392u,
  430u,
  412u,
  372u,
  434u,
  390u,
  394u,
  371u,
  408u
 };

static const PtrLen<const UType> JTable_8_23_11[]=
 {
  Range(JSum_8_23_11_1),
  Range(JSum_8_23_11_2),
  Range(JSum_8_23_11_3),
  Range(JSum_8_23_11_4),
  Range(JSum_8_23_11_5),
  Range(JSum_8_23_11_6),
  Range(JSum_8_23_11_7),
  Range(JSum_8_23_11_8),
  Range(JSum_8_23_11_9),
  Range(JSum_8_23_11_10),
  Range(JSum_8_23_11_11),
  Range(JSum_8_23_11_12),
  Range(JSum_8_23_11_13),
  Range(JSum_8_23_11_14),
  Range(JSum_8_23_11_15),
  Range(JSum_8_23_11_16),
  Range(JSum_8_23_11_17),
  Range(JSum_8_23_11_18),
  Range(JSum_8_23_11_19),
  Range(JSum_8_23_11_20),
  Range(JSum_8_23_11_21)
 };

static const UType JSum_8_23_12_1[]=
 {
  436u,
  442u,
  444u,
  508u,
  446u,
  478u,
  446u,
  454u,
  444u,
  436u,
  470u,
  490u,
  467u,
  468u,
  476u,
  490u,
  450u,
  492u,
  464u,
  432u,
  464u,
  486u,
  442u
 };

static const UType JSum_8_23_12_2[]=
 {
  487u,
  436u,
  465u,
  443u,
  435u,
  461u,
  474u,
  456u,
  454u,
  497u,
  498u,
  437u,
  490u,
  467u,
  451u,
  447u,
  448u,
  479u,
  496u,
  473u,
  448u,
  456u,
  427u
 };

static const UType JSum_8_23_12_3[]=
 {
  443u,
  448u,
  471u,
  444u,
  517u,
  458u,
  458u,
  464u,
  489u,
  455u,
  459u,
  459u,
  456u,
  459u,
  497u,
  482u,
  460u,
  439u,
  452u,
  439u,
  434u,
  443u,
  499u
 };

static const UType JSum_8_23_12_4[]=
 {
  469u,
  482u,
  470u,
  441u,
  479u,
  455u,
  482u,
  478u,
  488u,
  469u,
  475u,
  422u,
  464u,
  442u,
  435u,
  468u,
  453u,
  457u,
  455u,
  511u,
  439u,
  424u,
  467u
 };

static const UType JSum_8_23_12_5[]=
 {
  443u,
  439u,
  482u,
  459u,
  464u,
  444u,
  499u,
  452u,
  497u,
  459u,
  458u,
  471u,
  443u,
  439u,
  459u,
  455u,
  458u,
  448u,
  434u,
  460u,
  456u,
  489u,
  517u
 };

static const UType JSum_8_23_12_6[]=
 {
  469u,
  479u,
  488u,
  464u,
  453u,
  439u,
  482u,
  455u,
  469u,
  442u,
  457u,
  424u,
  470u,
  482u,
  475u,
  435u,
  455u,
  467u,
  441u,
  478u,
  422u,
  468u,
  511u
 };

static const UType JSum_8_23_12_7[]=
 {
  487u,
  448u,
  479u,
  451u,
  437u,
  454u,
  461u,
  465u,
  427u,
  473u,
  448u,
  467u,
  498u,
  456u,
  435u,
  436u,
  456u,
  496u,
  447u,
  490u,
  497u,
  474u,
  443u
 };

static const UType JSum_8_23_12_8[]=
 {
  443u,
  444u,
  458u,
  455u,
  456u,
  482u,
  452u,
  443u,
  448u,
  517u,
  464u,
  459u,
  459u,
  460u,
  439u,
  499u,
  471u,
  458u,
  489u,
  459u,
  497u,
  439u,
  434u
 };

static const UType JSum_8_23_12_9[]=
 {
  469u,
  455u,
  442u,
  488u,
  441u,
  424u,
  453u,
  422u,
  482u,
  482u,
  511u,
  435u,
  469u,
  479u,
  467u,
  457u,
  464u,
  478u,
  470u,
  439u,
  468u,
  475u,
  455u
 };

static const UType JSum_8_23_12_10[]=
 {
  487u,
  465u,
  435u,
  474u,
  454u,
  498u,
  490u,
  451u,
  448u,
  496u,
  448u,
  427u,
  436u,
  443u,
  461u,
  456u,
  497u,
  437u,
  467u,
  447u,
  479u,
  473u,
  456u
 };

static const UType JSum_8_23_12_11[]=
 {
  436u,
  486u,
  432u,
  492u,
  490u,
  468u,
  490u,
  436u,
  454u,
  478u,
  508u,
  442u,
  442u,
  464u,
  464u,
  450u,
  476u,
  467u,
  470u,
  444u,
  446u,
  446u,
  444u
 };

static const UType JSum_8_23_12_12[]=
 {
  487u,
  465u,
  435u,
  474u,
  454u,
  498u,
  490u,
  451u,
  448u,
  496u,
  448u,
  427u,
  436u,
  443u,
  461u,
  456u,
  497u,
  437u,
  467u,
  447u,
  479u,
  473u,
  456u
 };

static const UType JSum_8_23_12_13[]=
 {
  469u,
  455u,
  442u,
  488u,
  441u,
  424u,
  453u,
  422u,
  482u,
  482u,
  511u,
  435u,
  469u,
  479u,
  467u,
  457u,
  464u,
  478u,
  470u,
  439u,
  468u,
  475u,
  455u
 };

static const UType JSum_8_23_12_14[]=
 {
  443u,
  444u,
  458u,
  455u,
  456u,
  482u,
  452u,
  443u,
  448u,
  517u,
  464u,
  459u,
  459u,
  460u,
  439u,
  499u,
  471u,
  458u,
  489u,
  459u,
  497u,
  439u,
  434u
 };

static const UType JSum_8_23_12_15[]=
 {
  487u,
  448u,
  479u,
  451u,
  437u,
  454u,
  461u,
  465u,
  427u,
  473u,
  448u,
  467u,
  498u,
  456u,
  435u,
  436u,
  456u,
  496u,
  447u,
  490u,
  497u,
  474u,
  443u
 };

static const UType JSum_8_23_12_16[]=
 {
  469u,
  479u,
  488u,
  464u,
  453u,
  439u,
  482u,
  455u,
  469u,
  442u,
  457u,
  424u,
  470u,
  482u,
  475u,
  435u,
  455u,
  467u,
  441u,
  478u,
  422u,
  468u,
  511u
 };

static const UType JSum_8_23_12_17[]=
 {
  443u,
  439u,
  482u,
  459u,
  464u,
  444u,
  499u,
  452u,
  497u,
  459u,
  458u,
  471u,
  443u,
  439u,
  459u,
  455u,
  458u,
  448u,
  434u,
  460u,
  456u,
  489u,
  517u
 };

static const UType JSum_8_23_12_18[]=
 {
  469u,
  482u,
  470u,
  441u,
  479u,
  455u,
  482u,
  478u,
  488u,
  469u,
  475u,
  422u,
  464u,
  442u,
  435u,
  468u,
  453u,
  457u,
  455u,
  511u,
  439u,
  424u,
  467u
 };

static const UType JSum_8_23_12_19[]=
 {
  443u,
  448u,
  471u,
  444u,
  517u,
  458u,
  458u,
  464u,
  489u,
  455u,
  459u,
  459u,
  456u,
  459u,
  497u,
  482u,
  460u,
  439u,
  452u,
  439u,
  434u,
  443u,
  499u
 };

static const UType JSum_8_23_12_20[]=
 {
  487u,
  436u,
  465u,
  443u,
  435u,
  461u,
  474u,
  456u,
  454u,
  497u,
  498u,
  437u,
  490u,
  467u,
  451u,
  447u,
  448u,
  479u,
  496u,
  473u,
  448u,
  456u,
  427u
 };

static const UType JSum_8_23_12_21[]=
 {
  436u,
  442u,
  444u,
  508u,
  446u,
  478u,
  446u,
  454u,
  444u,
  436u,
  470u,
  490u,
  467u,
  468u,
  476u,
  490u,
  450u,
  492u,
  464u,
  432u,
  464u,
  486u,
  442u
 };

static const PtrLen<const UType> JTable_8_23_12[]=
 {
  Range(JSum_8_23_12_1),
  Range(JSum_8_23_12_2),
  Range(JSum_8_23_12_3),
  Range(JSum_8_23_12_4),
  Range(JSum_8_23_12_5),
  Range(JSum_8_23_12_6),
  Range(JSum_8_23_12_7),
  Range(JSum_8_23_12_8),
  Range(JSum_8_23_12_9),
  Range(JSum_8_23_12_10),
  Range(JSum_8_23_12_11),
  Range(JSum_8_23_12_12),
  Range(JSum_8_23_12_13),
  Range(JSum_8_23_12_14),
  Range(JSum_8_23_12_15),
  Range(JSum_8_23_12_16),
  Range(JSum_8_23_12_17),
  Range(JSum_8_23_12_18),
  Range(JSum_8_23_12_19),
  Range(JSum_8_23_12_20),
  Range(JSum_8_23_12_21)
 };

static const UType JSum_8_23_13_1[]=
 {
  508u,
  490u,
  460u,
  518u,
  488u,
  530u,
  548u,
  494u,
  518u,
  547u,
  524u,
  500u,
  478u,
  528u,
  526u,
  520u,
  502u,
  528u,
  474u,
  520u,
  510u,
  524u,
  494u
 };

static const UType JSum_8_23_13_2[]=
 {
  504u,
  484u,
  522u,
  522u,
  508u,
  523u,
  568u,
  516u,
  493u,
  494u,
  518u,
  511u,
  509u,
  497u,
  521u,
  527u,
  506u,
  536u,
  448u,
  508u,
  487u,
  500u,
  527u
 };

static const UType JSum_8_23_13_3[]=
 {
  520u,
  500u,
  498u,
  516u,
  504u,
  499u,
  506u,
  477u,
  452u,
  534u,
  550u,
  492u,
  543u,
  483u,
  529u,
  495u,
  503u,
  510u,
  530u,
  523u,
  512u,
  518u,
  535u
 };

static const UType JSum_8_23_13_4[]=
 {
  499u,
  513u,
  516u,
  506u,
  473u,
  537u,
  511u,
  508u,
  520u,
  550u,
  501u,
  537u,
  530u,
  509u,
  493u,
  502u,
  498u,
  473u,
  537u,
  506u,
  544u,
  503u,
  463u
 };

static const UType JSum_8_23_13_5[]=
 {
  520u,
  523u,
  495u,
  492u,
  477u,
  516u,
  535u,
  530u,
  529u,
  550u,
  506u,
  498u,
  518u,
  510u,
  483u,
  534u,
  499u,
  500u,
  512u,
  503u,
  543u,
  452u,
  504u
 };

static const UType JSum_8_23_13_6[]=
 {
  499u,
  473u,
  520u,
  530u,
  498u,
  544u,
  513u,
  537u,
  550u,
  509u,
  473u,
  503u,
  516u,
  511u,
  501u,
  493u,
  537u,
  463u,
  506u,
  508u,
  537u,
  502u,
  506u
 };

static const UType JSum_8_23_13_7[]=
 {
  504u,
  487u,
  536u,
  521u,
  511u,
  493u,
  523u,
  522u,
  527u,
  508u,
  506u,
  497u,
  518u,
  516u,
  508u,
  484u,
  500u,
  448u,
  527u,
  509u,
  494u,
  568u,
  522u
 };

static const UType JSum_8_23_13_8[]=
 {
  520u,
  516u,
  506u,
  534u,
  543u,
  495u,
  530u,
  518u,
  500u,
  504u,
  477u,
  550u,
  483u,
  503u,
  523u,
  535u,
  498u,
  499u,
  452u,
  492u,
  529u,
  510u,
  512u
 };

static const UType JSum_8_23_13_9[]=
 {
  499u,
  537u,
  509u,
  520u,
  506u,
  503u,
  498u,
  537u,
  511u,
  513u,
  506u,
  493u,
  550u,
  473u,
  463u,
  473u,
  530u,
  508u,
  516u,
  544u,
  502u,
  501u,
  537u
 };

static const UType JSum_8_23_13_10[]=
 {
  504u,
  522u,
  508u,
  568u,
  493u,
  518u,
  509u,
  521u,
  506u,
  448u,
  487u,
  527u,
  484u,
  522u,
  523u,
  516u,
  494u,
  511u,
  497u,
  527u,
  536u,
  508u,
  500u
 };

static const UType JSum_8_23_13_11[]=
 {
  508u,
  524u,
  520u,
  528u,
  520u,
  528u,
  500u,
  547u,
  494u,
  530u,
  518u,
  490u,
  494u,
  510u,
  474u,
  502u,
  526u,
  478u,
  524u,
  518u,
  548u,
  488u,
  460u
 };

static const UType JSum_8_23_13_12[]=
 {
  504u,
  522u,
  508u,
  568u,
  493u,
  518u,
  509u,
  521u,
  506u,
  448u,
  487u,
  527u,
  484u,
  522u,
  523u,
  516u,
  494u,
  511u,
  497u,
  527u,
  536u,
  508u,
  500u
 };

static const UType JSum_8_23_13_13[]=
 {
  499u,
  537u,
  509u,
  520u,
  506u,
  503u,
  498u,
  537u,
  511u,
  513u,
  506u,
  493u,
  550u,
  473u,
  463u,
  473u,
  530u,
  508u,
  516u,
  544u,
  502u,
  501u,
  537u
 };

static const UType JSum_8_23_13_14[]=
 {
  520u,
  516u,
  506u,
  534u,
  543u,
  495u,
  530u,
  518u,
  500u,
  504u,
  477u,
  550u,
  483u,
  503u,
  523u,
  535u,
  498u,
  499u,
  452u,
  492u,
  529u,
  510u,
  512u
 };

static const UType JSum_8_23_13_15[]=
 {
  504u,
  487u,
  536u,
  521u,
  511u,
  493u,
  523u,
  522u,
  527u,
  508u,
  506u,
  497u,
  518u,
  516u,
  508u,
  484u,
  500u,
  448u,
  527u,
  509u,
  494u,
  568u,
  522u
 };

static const UType JSum_8_23_13_16[]=
 {
  499u,
  473u,
  520u,
  530u,
  498u,
  544u,
  513u,
  537u,
  550u,
  509u,
  473u,
  503u,
  516u,
  511u,
  501u,
  493u,
  537u,
  463u,
  506u,
  508u,
  537u,
  502u,
  506u
 };

static const UType JSum_8_23_13_17[]=
 {
  520u,
  523u,
  495u,
  492u,
  477u,
  516u,
  535u,
  530u,
  529u,
  550u,
  506u,
  498u,
  518u,
  510u,
  483u,
  534u,
  499u,
  500u,
  512u,
  503u,
  543u,
  452u,
  504u
 };

static const UType JSum_8_23_13_18[]=
 {
  499u,
  513u,
  516u,
  506u,
  473u,
  537u,
  511u,
  508u,
  520u,
  550u,
  501u,
  537u,
  530u,
  509u,
  493u,
  502u,
  498u,
  473u,
  537u,
  506u,
  544u,
  503u,
  463u
 };

static const UType JSum_8_23_13_19[]=
 {
  520u,
  500u,
  498u,
  516u,
  504u,
  499u,
  506u,
  477u,
  452u,
  534u,
  550u,
  492u,
  543u,
  483u,
  529u,
  495u,
  503u,
  510u,
  530u,
  523u,
  512u,
  518u,
  535u
 };

static const UType JSum_8_23_13_20[]=
 {
  504u,
  484u,
  522u,
  522u,
  508u,
  523u,
  568u,
  516u,
  493u,
  494u,
  518u,
  511u,
  509u,
  497u,
  521u,
  527u,
  506u,
  536u,
  448u,
  508u,
  487u,
  500u,
  527u
 };

static const UType JSum_8_23_13_21[]=
 {
  508u,
  490u,
  460u,
  518u,
  488u,
  530u,
  548u,
  494u,
  518u,
  547u,
  524u,
  500u,
  478u,
  528u,
  526u,
  520u,
  502u,
  528u,
  474u,
  520u,
  510u,
  524u,
  494u
 };

static const PtrLen<const UType> JTable_8_23_13[]=
 {
  Range(JSum_8_23_13_1),
  Range(JSum_8_23_13_2),
  Range(JSum_8_23_13_3),
  Range(JSum_8_23_13_4),
  Range(JSum_8_23_13_5),
  Range(JSum_8_23_13_6),
  Range(JSum_8_23_13_7),
  Range(JSum_8_23_13_8),
  Range(JSum_8_23_13_9),
  Range(JSum_8_23_13_10),
  Range(JSum_8_23_13_11),
  Range(JSum_8_23_13_12),
  Range(JSum_8_23_13_13),
  Range(JSum_8_23_13_14),
  Range(JSum_8_23_13_15),
  Range(JSum_8_23_13_16),
  Range(JSum_8_23_13_17),
  Range(JSum_8_23_13_18),
  Range(JSum_8_23_13_19),
  Range(JSum_8_23_13_20),
  Range(JSum_8_23_13_21)
 };

static const UType JSum_8_23_14_1[]=
 {
  1310u,
  1330u,
  1254u,
  1246u,
  1286u,
  1212u,
  1252u,
  1264u,
  1252u,
  1246u,
  1272u,
  1282u,
  1262u,
  1210u,
  1250u,
  1196u,
  1252u,
  1188u,
  1288u,
  1276u,
  1256u,
  1259u,
  1198u
 };

static const UType JSum_8_23_14_2[]=
 {
  1315u,
  1187u,
  1201u,
  1260u,
  1192u,
  1237u,
  1297u,
  1270u,
  1275u,
  1235u,
  1261u,
  1206u,
  1258u,
  1283u,
  1270u,
  1271u,
  1223u,
  1300u,
  1285u,
  1284u,
  1228u,
  1259u,
  1244u
 };

static const UType JSum_8_23_14_3[]=
 {
  1212u,
  1255u,
  1245u,
  1324u,
  1215u,
  1268u,
  1320u,
  1253u,
  1263u,
  1237u,
  1310u,
  1229u,
  1253u,
  1256u,
  1270u,
  1235u,
  1235u,
  1253u,
  1270u,
  1247u,
  1296u,
  1222u,
  1173u
 };

static const UType JSum_8_23_14_4[]=
 {
  1213u,
  1194u,
  1280u,
  1312u,
  1255u,
  1269u,
  1318u,
  1280u,
  1234u,
  1264u,
  1232u,
  1239u,
  1250u,
  1216u,
  1317u,
  1216u,
  1293u,
  1226u,
  1207u,
  1236u,
  1265u,
  1256u,
  1269u
 };

static const UType JSum_8_23_14_5[]=
 {
  1212u,
  1247u,
  1235u,
  1229u,
  1253u,
  1324u,
  1173u,
  1270u,
  1270u,
  1310u,
  1320u,
  1245u,
  1222u,
  1253u,
  1256u,
  1237u,
  1268u,
  1255u,
  1296u,
  1235u,
  1253u,
  1263u,
  1215u
 };

static const UType JSum_8_23_14_6[]=
 {
  1213u,
  1255u,
  1234u,
  1250u,
  1293u,
  1265u,
  1194u,
  1269u,
  1264u,
  1216u,
  1226u,
  1256u,
  1280u,
  1318u,
  1232u,
  1317u,
  1207u,
  1269u,
  1312u,
  1280u,
  1239u,
  1216u,
  1236u
 };

static const UType JSum_8_23_14_7[]=
 {
  1315u,
  1228u,
  1300u,
  1270u,
  1206u,
  1275u,
  1237u,
  1201u,
  1244u,
  1284u,
  1223u,
  1283u,
  1261u,
  1270u,
  1192u,
  1187u,
  1259u,
  1285u,
  1271u,
  1258u,
  1235u,
  1297u,
  1260u
 };

static const UType JSum_8_23_14_8[]=
 {
  1212u,
  1324u,
  1320u,
  1237u,
  1253u,
  1235u,
  1270u,
  1222u,
  1255u,
  1215u,
  1253u,
  1310u,
  1256u,
  1235u,
  1247u,
  1173u,
  1245u,
  1268u,
  1263u,
  1229u,
  1270u,
  1253u,
  1296u
 };

static const UType JSum_8_23_14_9[]=
 {
  1213u,
  1207u,
  1216u,
  1234u,
  1312u,
  1256u,
  1293u,
  1239u,
  1318u,
  1194u,
  1236u,
  1317u,
  1264u,
  1255u,
  1269u,
  1226u,
  1250u,
  1280u,
  1280u,
  1265u,
  1216u,
  1232u,
  1269u
 };

static const UType JSum_8_23_14_10[]=
 {
  1315u,
  1201u,
  1192u,
  1297u,
  1275u,
  1261u,
  1258u,
  1270u,
  1223u,
  1285u,
  1228u,
  1244u,
  1187u,
  1260u,
  1237u,
  1270u,
  1235u,
  1206u,
  1283u,
  1271u,
  1300u,
  1284u,
  1259u
 };

static const UType JSum_8_23_14_11[]=
 {
  1310u,
  1259u,
  1276u,
  1188u,
  1196u,
  1210u,
  1282u,
  1246u,
  1264u,
  1212u,
  1246u,
  1330u,
  1198u,
  1256u,
  1288u,
  1252u,
  1250u,
  1262u,
  1272u,
  1252u,
  1252u,
  1286u,
  1254u
 };

static const UType JSum_8_23_14_12[]=
 {
  1315u,
  1201u,
  1192u,
  1297u,
  1275u,
  1261u,
  1258u,
  1270u,
  1223u,
  1285u,
  1228u,
  1244u,
  1187u,
  1260u,
  1237u,
  1270u,
  1235u,
  1206u,
  1283u,
  1271u,
  1300u,
  1284u,
  1259u
 };

static const UType JSum_8_23_14_13[]=
 {
  1213u,
  1207u,
  1216u,
  1234u,
  1312u,
  1256u,
  1293u,
  1239u,
  1318u,
  1194u,
  1236u,
  1317u,
  1264u,
  1255u,
  1269u,
  1226u,
  1250u,
  1280u,
  1280u,
  1265u,
  1216u,
  1232u,
  1269u
 };

static const UType JSum_8_23_14_14[]=
 {
  1212u,
  1324u,
  1320u,
  1237u,
  1253u,
  1235u,
  1270u,
  1222u,
  1255u,
  1215u,
  1253u,
  1310u,
  1256u,
  1235u,
  1247u,
  1173u,
  1245u,
  1268u,
  1263u,
  1229u,
  1270u,
  1253u,
  1296u
 };

static const UType JSum_8_23_14_15[]=
 {
  1315u,
  1228u,
  1300u,
  1270u,
  1206u,
  1275u,
  1237u,
  1201u,
  1244u,
  1284u,
  1223u,
  1283u,
  1261u,
  1270u,
  1192u,
  1187u,
  1259u,
  1285u,
  1271u,
  1258u,
  1235u,
  1297u,
  1260u
 };

static const UType JSum_8_23_14_16[]=
 {
  1213u,
  1255u,
  1234u,
  1250u,
  1293u,
  1265u,
  1194u,
  1269u,
  1264u,
  1216u,
  1226u,
  1256u,
  1280u,
  1318u,
  1232u,
  1317u,
  1207u,
  1269u,
  1312u,
  1280u,
  1239u,
  1216u,
  1236u
 };

static const UType JSum_8_23_14_17[]=
 {
  1212u,
  1247u,
  1235u,
  1229u,
  1253u,
  1324u,
  1173u,
  1270u,
  1270u,
  1310u,
  1320u,
  1245u,
  1222u,
  1253u,
  1256u,
  1237u,
  1268u,
  1255u,
  1296u,
  1235u,
  1253u,
  1263u,
  1215u
 };

static const UType JSum_8_23_14_18[]=
 {
  1213u,
  1194u,
  1280u,
  1312u,
  1255u,
  1269u,
  1318u,
  1280u,
  1234u,
  1264u,
  1232u,
  1239u,
  1250u,
  1216u,
  1317u,
  1216u,
  1293u,
  1226u,
  1207u,
  1236u,
  1265u,
  1256u,
  1269u
 };

static const UType JSum_8_23_14_19[]=
 {
  1212u,
  1255u,
  1245u,
  1324u,
  1215u,
  1268u,
  1320u,
  1253u,
  1263u,
  1237u,
  1310u,
  1229u,
  1253u,
  1256u,
  1270u,
  1235u,
  1235u,
  1253u,
  1270u,
  1247u,
  1296u,
  1222u,
  1173u
 };

static const UType JSum_8_23_14_20[]=
 {
  1315u,
  1187u,
  1201u,
  1260u,
  1192u,
  1237u,
  1297u,
  1270u,
  1275u,
  1235u,
  1261u,
  1206u,
  1258u,
  1283u,
  1270u,
  1271u,
  1223u,
  1300u,
  1285u,
  1284u,
  1228u,
  1259u,
  1244u
 };

static const UType JSum_8_23_14_21[]=
 {
  1310u,
  1330u,
  1254u,
  1246u,
  1286u,
  1212u,
  1252u,
  1264u,
  1252u,
  1246u,
  1272u,
  1282u,
  1262u,
  1210u,
  1250u,
  1196u,
  1252u,
  1188u,
  1288u,
  1276u,
  1256u,
  1259u,
  1198u
 };

static const PtrLen<const UType> JTable_8_23_14[]=
 {
  Range(JSum_8_23_14_1),
  Range(JSum_8_23_14_2),
  Range(JSum_8_23_14_3),
  Range(JSum_8_23_14_4),
  Range(JSum_8_23_14_5),
  Range(JSum_8_23_14_6),
  Range(JSum_8_23_14_7),
  Range(JSum_8_23_14_8),
  Range(JSum_8_23_14_9),
  Range(JSum_8_23_14_10),
  Range(JSum_8_23_14_11),
  Range(JSum_8_23_14_12),
  Range(JSum_8_23_14_13),
  Range(JSum_8_23_14_14),
  Range(JSum_8_23_14_15),
  Range(JSum_8_23_14_16),
  Range(JSum_8_23_14_17),
  Range(JSum_8_23_14_18),
  Range(JSum_8_23_14_19),
  Range(JSum_8_23_14_20),
  Range(JSum_8_23_14_21)
 };

static const UType JSum_8_23_15_1[]=
 {
  2698u,
  2738u,
  2778u,
  2696u,
  2678u,
  2780u,
  2696u,
  2838u,
  2678u,
  2676u,
  2690u,
  2772u,
  2752u,
  2672u,
  2708u,
  2710u,
  2658u,
  2698u,
  2731u,
  2840u,
  2740u,
  2772u,
  2790u
 };

static const UType JSum_8_23_15_2[]=
 {
  2680u,
  2627u,
  2797u,
  2683u,
  2778u,
  2788u,
  2843u,
  2744u,
  2698u,
  2682u,
  2804u,
  2721u,
  2711u,
  2772u,
  2657u,
  2720u,
  2762u,
  2738u,
  2685u,
  2699u,
  2758u,
  2712u,
  2730u
 };

static const UType JSum_8_23_15_3[]=
 {
  2728u,
  2734u,
  2621u,
  2668u,
  2792u,
  2769u,
  2781u,
  2807u,
  2666u,
  2760u,
  2700u,
  2768u,
  2691u,
  2775u,
  2736u,
  2742u,
  2818u,
  2683u,
  2708u,
  2757u,
  2703u,
  2644u,
  2738u
 };

static const UType JSum_8_23_15_4[]=
 {
  2811u,
  2730u,
  2730u,
  2700u,
  2703u,
  2740u,
  2703u,
  2776u,
  2699u,
  2809u,
  2674u,
  2677u,
  2811u,
  2757u,
  2760u,
  2835u,
  2711u,
  2715u,
  2713u,
  2756u,
  2657u,
  2652u,
  2670u
 };

static const UType JSum_8_23_15_5[]=
 {
  2728u,
  2757u,
  2742u,
  2768u,
  2807u,
  2668u,
  2738u,
  2708u,
  2736u,
  2700u,
  2781u,
  2621u,
  2644u,
  2683u,
  2775u,
  2760u,
  2769u,
  2734u,
  2703u,
  2818u,
  2691u,
  2666u,
  2792u
 };

static const UType JSum_8_23_15_6[]=
 {
  2811u,
  2703u,
  2699u,
  2811u,
  2711u,
  2657u,
  2730u,
  2740u,
  2809u,
  2757u,
  2715u,
  2652u,
  2730u,
  2703u,
  2674u,
  2760u,
  2713u,
  2670u,
  2700u,
  2776u,
  2677u,
  2835u,
  2756u
 };

static const UType JSum_8_23_15_7[]=
 {
  2680u,
  2758u,
  2738u,
  2657u,
  2721u,
  2698u,
  2788u,
  2797u,
  2730u,
  2699u,
  2762u,
  2772u,
  2804u,
  2744u,
  2778u,
  2627u,
  2712u,
  2685u,
  2720u,
  2711u,
  2682u,
  2843u,
  2683u
 };

static const UType JSum_8_23_15_8[]=
 {
  2728u,
  2668u,
  2781u,
  2760u,
  2691u,
  2742u,
  2708u,
  2644u,
  2734u,
  2792u,
  2807u,
  2700u,
  2775u,
  2818u,
  2757u,
  2738u,
  2621u,
  2769u,
  2666u,
  2768u,
  2736u,
  2683u,
  2703u
 };

static const UType JSum_8_23_15_9[]=
 {
  2811u,
  2713u,
  2757u,
  2699u,
  2700u,
  2652u,
  2711u,
  2677u,
  2703u,
  2730u,
  2756u,
  2760u,
  2809u,
  2703u,
  2670u,
  2715u,
  2811u,
  2776u,
  2730u,
  2657u,
  2835u,
  2674u,
  2740u
 };

static const UType JSum_8_23_15_10[]=
 {
  2680u,
  2797u,
  2778u,
  2843u,
  2698u,
  2804u,
  2711u,
  2657u,
  2762u,
  2685u,
  2758u,
  2730u,
  2627u,
  2683u,
  2788u,
  2744u,
  2682u,
  2721u,
  2772u,
  2720u,
  2738u,
  2699u,
  2712u
 };

static const UType JSum_8_23_15_11[]=
 {
  2698u,
  2772u,
  2840u,
  2698u,
  2710u,
  2672u,
  2772u,
  2676u,
  2838u,
  2780u,
  2696u,
  2738u,
  2790u,
  2740u,
  2731u,
  2658u,
  2708u,
  2752u,
  2690u,
  2678u,
  2696u,
  2678u,
  2778u
 };

static const UType JSum_8_23_15_12[]=
 {
  2680u,
  2797u,
  2778u,
  2843u,
  2698u,
  2804u,
  2711u,
  2657u,
  2762u,
  2685u,
  2758u,
  2730u,
  2627u,
  2683u,
  2788u,
  2744u,
  2682u,
  2721u,
  2772u,
  2720u,
  2738u,
  2699u,
  2712u
 };

static const UType JSum_8_23_15_13[]=
 {
  2811u,
  2713u,
  2757u,
  2699u,
  2700u,
  2652u,
  2711u,
  2677u,
  2703u,
  2730u,
  2756u,
  2760u,
  2809u,
  2703u,
  2670u,
  2715u,
  2811u,
  2776u,
  2730u,
  2657u,
  2835u,
  2674u,
  2740u
 };

static const UType JSum_8_23_15_14[]=
 {
  2728u,
  2668u,
  2781u,
  2760u,
  2691u,
  2742u,
  2708u,
  2644u,
  2734u,
  2792u,
  2807u,
  2700u,
  2775u,
  2818u,
  2757u,
  2738u,
  2621u,
  2769u,
  2666u,
  2768u,
  2736u,
  2683u,
  2703u
 };

static const UType JSum_8_23_15_15[]=
 {
  2680u,
  2758u,
  2738u,
  2657u,
  2721u,
  2698u,
  2788u,
  2797u,
  2730u,
  2699u,
  2762u,
  2772u,
  2804u,
  2744u,
  2778u,
  2627u,
  2712u,
  2685u,
  2720u,
  2711u,
  2682u,
  2843u,
  2683u
 };

static const UType JSum_8_23_15_16[]=
 {
  2811u,
  2703u,
  2699u,
  2811u,
  2711u,
  2657u,
  2730u,
  2740u,
  2809u,
  2757u,
  2715u,
  2652u,
  2730u,
  2703u,
  2674u,
  2760u,
  2713u,
  2670u,
  2700u,
  2776u,
  2677u,
  2835u,
  2756u
 };

static const UType JSum_8_23_15_17[]=
 {
  2728u,
  2757u,
  2742u,
  2768u,
  2807u,
  2668u,
  2738u,
  2708u,
  2736u,
  2700u,
  2781u,
  2621u,
  2644u,
  2683u,
  2775u,
  2760u,
  2769u,
  2734u,
  2703u,
  2818u,
  2691u,
  2666u,
  2792u
 };

static const UType JSum_8_23_15_18[]=
 {
  2811u,
  2730u,
  2730u,
  2700u,
  2703u,
  2740u,
  2703u,
  2776u,
  2699u,
  2809u,
  2674u,
  2677u,
  2811u,
  2757u,
  2760u,
  2835u,
  2711u,
  2715u,
  2713u,
  2756u,
  2657u,
  2652u,
  2670u
 };

static const UType JSum_8_23_15_19[]=
 {
  2728u,
  2734u,
  2621u,
  2668u,
  2792u,
  2769u,
  2781u,
  2807u,
  2666u,
  2760u,
  2700u,
  2768u,
  2691u,
  2775u,
  2736u,
  2742u,
  2818u,
  2683u,
  2708u,
  2757u,
  2703u,
  2644u,
  2738u
 };

static const UType JSum_8_23_15_20[]=
 {
  2680u,
  2627u,
  2797u,
  2683u,
  2778u,
  2788u,
  2843u,
  2744u,
  2698u,
  2682u,
  2804u,
  2721u,
  2711u,
  2772u,
  2657u,
  2720u,
  2762u,
  2738u,
  2685u,
  2699u,
  2758u,
  2712u,
  2730u
 };

static const UType JSum_8_23_15_21[]=
 {
  2698u,
  2738u,
  2778u,
  2696u,
  2678u,
  2780u,
  2696u,
  2838u,
  2678u,
  2676u,
  2690u,
  2772u,
  2752u,
  2672u,
  2708u,
  2710u,
  2658u,
  2698u,
  2731u,
  2840u,
  2740u,
  2772u,
  2790u
 };

static const PtrLen<const UType> JTable_8_23_15[]=
 {
  Range(JSum_8_23_15_1),
  Range(JSum_8_23_15_2),
  Range(JSum_8_23_15_3),
  Range(JSum_8_23_15_4),
  Range(JSum_8_23_15_5),
  Range(JSum_8_23_15_6),
  Range(JSum_8_23_15_7),
  Range(JSum_8_23_15_8),
  Range(JSum_8_23_15_9),
  Range(JSum_8_23_15_10),
  Range(JSum_8_23_15_11),
  Range(JSum_8_23_15_12),
  Range(JSum_8_23_15_13),
  Range(JSum_8_23_15_14),
  Range(JSum_8_23_15_15),
  Range(JSum_8_23_15_16),
  Range(JSum_8_23_15_17),
  Range(JSum_8_23_15_18),
  Range(JSum_8_23_15_19),
  Range(JSum_8_23_15_20),
  Range(JSum_8_23_15_21)
 };

static const UType JSum_8_23_16_1[]=
 {
  3894u,
  3908u,
  4002u,
  3986u,
  4048u,
  4016u,
  3964u,
  3986u,
  3970u,
  4034u,
  4064u,
  3984u,
  3968u,
  4018u,
  3918u,
  4098u,
  3964u,
  4080u,
  4038u,
  4008u,
  3850u,
  3915u,
  4056u
 };

static const UType JSum_8_23_16_2[]=
 {
  3923u,
  3924u,
  3896u,
  3921u,
  4005u,
  4002u,
  4003u,
  3963u,
  4062u,
  3963u,
  4000u,
  3933u,
  4077u,
  3934u,
  4028u,
  4014u,
  3983u,
  4121u,
  3955u,
  3902u,
  4093u,
  4061u,
  4006u
 };

static const UType JSum_8_23_16_3[]=
 {
  3989u,
  3893u,
  4068u,
  3994u,
  4030u,
  4013u,
  3989u,
  3922u,
  4181u,
  4088u,
  3941u,
  3989u,
  3940u,
  3967u,
  3931u,
  3944u,
  4052u,
  3971u,
  4002u,
  3969u,
  3971u,
  3992u,
  3933u
 };

static const UType JSum_8_23_16_4[]=
 {
  4024u,
  4020u,
  3964u,
  3955u,
  4012u,
  4117u,
  3951u,
  4019u,
  4089u,
  3934u,
  3897u,
  4028u,
  3992u,
  4095u,
  3984u,
  4036u,
  3922u,
  4004u,
  3970u,
  3900u,
  3963u,
  3873u,
  4020u
 };

static const UType JSum_8_23_16_5[]=
 {
  3989u,
  3969u,
  3944u,
  3989u,
  3922u,
  3994u,
  3933u,
  4002u,
  3931u,
  3941u,
  3989u,
  4068u,
  3992u,
  3971u,
  3967u,
  4088u,
  4013u,
  3893u,
  3971u,
  4052u,
  3940u,
  4181u,
  4030u
 };

static const UType JSum_8_23_16_6[]=
 {
  4024u,
  4012u,
  4089u,
  3992u,
  3922u,
  3963u,
  4020u,
  4117u,
  3934u,
  4095u,
  4004u,
  3873u,
  3964u,
  3951u,
  3897u,
  3984u,
  3970u,
  4020u,
  3955u,
  4019u,
  4028u,
  4036u,
  3900u
 };

static const UType JSum_8_23_16_7[]=
 {
  3923u,
  4093u,
  4121u,
  4028u,
  3933u,
  4062u,
  4002u,
  3896u,
  4006u,
  3902u,
  3983u,
  3934u,
  4000u,
  3963u,
  4005u,
  3924u,
  4061u,
  3955u,
  4014u,
  4077u,
  3963u,
  4003u,
  3921u
 };

static const UType JSum_8_23_16_8[]=
 {
  3989u,
  3994u,
  3989u,
  4088u,
  3940u,
  3944u,
  4002u,
  3992u,
  3893u,
  4030u,
  3922u,
  3941u,
  3967u,
  4052u,
  3969u,
  3933u,
  4068u,
  4013u,
  4181u,
  3989u,
  3931u,
  3971u,
  3971u
 };

static const UType JSum_8_23_16_9[]=
 {
  4024u,
  3970u,
  4095u,
  4089u,
  3955u,
  3873u,
  3922u,
  4028u,
  3951u,
  4020u,
  3900u,
  3984u,
  3934u,
  4012u,
  4020u,
  4004u,
  3992u,
  4019u,
  3964u,
  3963u,
  4036u,
  3897u,
  4117u
 };

static const UType JSum_8_23_16_10[]=
 {
  3923u,
  3896u,
  4005u,
  4003u,
  4062u,
  4000u,
  4077u,
  4028u,
  3983u,
  3955u,
  4093u,
  4006u,
  3924u,
  3921u,
  4002u,
  3963u,
  3963u,
  3933u,
  3934u,
  4014u,
  4121u,
  3902u,
  4061u
 };

static const UType JSum_8_23_16_11[]=
 {
  3894u,
  3915u,
  4008u,
  4080u,
  4098u,
  4018u,
  3984u,
  4034u,
  3986u,
  4016u,
  3986u,
  3908u,
  4056u,
  3850u,
  4038u,
  3964u,
  3918u,
  3968u,
  4064u,
  3970u,
  3964u,
  4048u,
  4002u
 };

static const UType JSum_8_23_16_12[]=
 {
  3923u,
  3896u,
  4005u,
  4003u,
  4062u,
  4000u,
  4077u,
  4028u,
  3983u,
  3955u,
  4093u,
  4006u,
  3924u,
  3921u,
  4002u,
  3963u,
  3963u,
  3933u,
  3934u,
  4014u,
  4121u,
  3902u,
  4061u
 };

static const UType JSum_8_23_16_13[]=
 {
  4024u,
  3970u,
  4095u,
  4089u,
  3955u,
  3873u,
  3922u,
  4028u,
  3951u,
  4020u,
  3900u,
  3984u,
  3934u,
  4012u,
  4020u,
  4004u,
  3992u,
  4019u,
  3964u,
  3963u,
  4036u,
  3897u,
  4117u
 };

static const UType JSum_8_23_16_14[]=
 {
  3989u,
  3994u,
  3989u,
  4088u,
  3940u,
  3944u,
  4002u,
  3992u,
  3893u,
  4030u,
  3922u,
  3941u,
  3967u,
  4052u,
  3969u,
  3933u,
  4068u,
  4013u,
  4181u,
  3989u,
  3931u,
  3971u,
  3971u
 };

static const UType JSum_8_23_16_15[]=
 {
  3923u,
  4093u,
  4121u,
  4028u,
  3933u,
  4062u,
  4002u,
  3896u,
  4006u,
  3902u,
  3983u,
  3934u,
  4000u,
  3963u,
  4005u,
  3924u,
  4061u,
  3955u,
  4014u,
  4077u,
  3963u,
  4003u,
  3921u
 };

static const UType JSum_8_23_16_16[]=
 {
  4024u,
  4012u,
  4089u,
  3992u,
  3922u,
  3963u,
  4020u,
  4117u,
  3934u,
  4095u,
  4004u,
  3873u,
  3964u,
  3951u,
  3897u,
  3984u,
  3970u,
  4020u,
  3955u,
  4019u,
  4028u,
  4036u,
  3900u
 };

static const UType JSum_8_23_16_17[]=
 {
  3989u,
  3969u,
  3944u,
  3989u,
  3922u,
  3994u,
  3933u,
  4002u,
  3931u,
  3941u,
  3989u,
  4068u,
  3992u,
  3971u,
  3967u,
  4088u,
  4013u,
  3893u,
  3971u,
  4052u,
  3940u,
  4181u,
  4030u
 };

 {
