;typedef struct _SoundUnit
;{
;	uint8_t increment_frac;
;	uint8_t increment_int;
;	uint8_t  wavetablePos_frac;
;	uint16_t  wavetablePos_int;
;	uint8_t envelopeLevel;
;	uint8_t envelopePos;
;	int16_t val;
;	int8_t sampleVal;
;} SoundUnit;


;typedef struct _Synthesizer
;{
;    SoundUnitUnion SoundUnitUnionList[POLY_NUM];
;	int16_t mixOut;
;    uint8_t lastSoundUnit;
;}Synthesizer;

unitSz=10

pIncrement_int=0
pIncrement_frac=1
pWavetablePos_frac=2
pWavetablePos_int_h=4
pWavetablePos_int_l=3
pEnvelopeLevel=5
pEnvelopePos=6
pVal_l=7
pVal_h=8
pSampleVal=9

pMixOut_l=unitSz*POLY_NUM
pMixOut_h=unitSz*POLY_NUM+1
pLastSoundUnit=unitSz*POLY_NUM+2

pSynth=0x10+0x0d

ENVELOP_LEN=256
POLY_NUM=5
WAVETABLE_ATTACK_LEN=1507
WAVETABLE_LEN=2608
WAVETABLE_LOOP_LEN=(WAVETABLE_LEN - WAVETABLE_ATTACK_LEN)

ENVELOP_LEN=256
POLY_NUM=6

DECAY_TIME_FACTOR=150