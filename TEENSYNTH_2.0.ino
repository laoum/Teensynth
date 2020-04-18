#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     dc1;            //xy=55,229.9999976158142
AudioSynthWaveformModulated waveformMod9;   //xy=228.57149451119562,475.7143028804235
AudioSynthWaveformModulated waveformMod3;   //xy=231.42856979370117,176.85713577270508
AudioSynthWaveformModulated waveformMod4;   //xy=231.42856979370117,211.85713577270508
AudioSynthWaveformModulated waveformMod5;   //xy=231.42858123779297,255.42856407165527
AudioSynthWaveformModulated waveformMod6;   //xy=231.42858123779297,290.4285640716553
AudioSynthWaveformModulated waveformMod7;   //xy=231.42858123779297,325.4285640716553
AudioSynthWaveformModulated waveformMod8;   //xy=231.42858123779297,362.4285640716553
AudioSynthWaveformModulated waveformMod2;   //xy=232.42856979370117,139.85713577270508
AudioSynthWaveformModulated waveformMod1;   //xy=233.42856979370117,102.85713577270508
AudioSynthNoiseWhite     noise1;         //xy=235.71430587768555,527.1428508758545
AudioSynthNoisePink      pink1;          //xy=244.28573608398438,571.4285678863525
AudioEffectEnvelope      envelope7;      //xy=410.4285697937012,325.8571357727051
AudioEffectEnvelope      envelope6;      //xy=414.4285697937012,289.8571357727051
AudioEffectEnvelope      envelope1;      //xy=415.4285697937012,102.85713577270508
AudioEffectEnvelope      envelope5;      //xy=415.4285697937012,254.85713577270508
AudioEffectEnvelope      envelope8;      //xy=415.4285697937012,362.8571357727051
AudioEffectEnvelope      envelope2;      //xy=416.4285697937012,139.85713577270508
AudioEffectEnvelope      envelope4;      //xy=416.4285697937012,216.85713577270508
AudioEffectEnvelope      envelope3;      //xy=417.4285697937012,178.85713577270508
AudioMixer4              mixer4;         //xy=438.5714530944824,517.1428680419922
AudioEffectEnvelope      envelope9;      //xy=601.4286117553711,477.1428565979004
AudioMixer4              mixer1;         //xy=619.4285697937012,171.85713577270508
AudioMixer4              mixer2;         //xy=625.4285697937012,282.8571357727051
AudioSynthWaveformDc     dc2;            //xy=625.1072998046875,421.3571472167969
AudioSynthWaveformDc     dc3;            //xy=647,79.25
AudioEffectEnvelope      envelope10;     //xy=786.46435546875,411.857177734375
AudioSynthWaveformModulated waveformMod11;  //xy=794,329
AudioMixer4              mixer3;         //xy=806.7858390808105,194.64279556274414
AudioSynthWaveformModulated waveformMod10;  //xy=827.75,98.74999904632568
AudioMixer4              mixer8;         //xy=958,343
AudioEffectMultiply      multiply1;      //xy=1055.0000038146973,74.24999976158142
AudioFilterStateVariable filter1;        //xy=1091.5714111328125,283.00006103515625
AudioMixer4              mixer7;         //xy=1283.7500190734863,245.00000190734863
AudioEffectDelay         delay1;         //xy=1491.1905250549316,414.9405460357666
AudioEffectFreeverbStereo freeverbs1;     //xy=1511.190486907959,253.51194190979004
AudioMixer4              mixer5;         //xy=1671.1904525756836,140.65477180480957
AudioMixer4              mixer6;         //xy=1672.6188468933105,363.5119228363037
AudioOutputAnalogStereo  dacs1;          //xy=1821.4761123657227,290.65477991104126
AudioConnection          patchCord1(dc1, 0, waveformMod1, 1);
AudioConnection          patchCord2(dc1, 0, waveformMod2, 1);
AudioConnection          patchCord3(dc1, 0, waveformMod3, 1);
AudioConnection          patchCord4(dc1, 0, waveformMod4, 1);
AudioConnection          patchCord5(dc1, 0, waveformMod5, 1);
AudioConnection          patchCord6(dc1, 0, waveformMod6, 1);
AudioConnection          patchCord7(dc1, 0, waveformMod7, 1);
AudioConnection          patchCord8(dc1, 0, waveformMod8, 1);
AudioConnection          patchCord9(dc1, 0, waveformMod9, 1);
AudioConnection          patchCord10(waveformMod9, 0, mixer4, 0);
AudioConnection          patchCord11(waveformMod3, envelope3);
AudioConnection          patchCord12(waveformMod4, envelope4);
AudioConnection          patchCord13(waveformMod5, envelope5);
AudioConnection          patchCord14(waveformMod6, envelope6);
AudioConnection          patchCord15(waveformMod7, envelope7);
AudioConnection          patchCord16(waveformMod8, envelope8);
AudioConnection          patchCord17(waveformMod2, envelope2);
AudioConnection          patchCord18(waveformMod1, envelope1);
AudioConnection          patchCord19(noise1, 0, mixer4, 1);
AudioConnection          patchCord20(pink1, 0, mixer4, 2);
AudioConnection          patchCord21(envelope7, 0, mixer2, 2);
AudioConnection          patchCord22(envelope6, 0, mixer2, 1);
AudioConnection          patchCord23(envelope1, 0, mixer1, 0);
AudioConnection          patchCord24(envelope5, 0, mixer2, 0);
AudioConnection          patchCord25(envelope8, 0, mixer2, 3);
AudioConnection          patchCord26(envelope2, 0, mixer1, 1);
AudioConnection          patchCord27(envelope4, 0, mixer1, 3);
AudioConnection          patchCord28(envelope3, 0, mixer1, 2);
AudioConnection          patchCord29(mixer4, envelope9);
AudioConnection          patchCord30(envelope9, 0, mixer3, 2);
AudioConnection          patchCord31(mixer1, 0, mixer3, 0);
AudioConnection          patchCord32(mixer2, 0, mixer3, 1);
AudioConnection          patchCord33(dc2, envelope10);
AudioConnection          patchCord34(dc3, 0, waveformMod10, 1);
AudioConnection          patchCord35(dc3, 0, waveformMod11, 1);
AudioConnection          patchCord36(envelope10, 0, mixer8, 1);
AudioConnection          patchCord37(waveformMod11, 0, mixer8, 0);
AudioConnection          patchCord38(mixer3, 0, filter1, 0);
AudioConnection          patchCord39(waveformMod10, 0, multiply1, 1);
AudioConnection          patchCord40(mixer8, 0, filter1, 1);
AudioConnection          patchCord41(multiply1, 0, mixer7, 0);
AudioConnection          patchCord42(filter1, 0, multiply1, 0);
AudioConnection          patchCord43(filter1, 0, mixer7, 1);
AudioConnection          patchCord44(mixer7, freeverbs1);
AudioConnection          patchCord45(mixer7, delay1);
AudioConnection          patchCord46(mixer7, 0, mixer5, 1);
AudioConnection          patchCord47(delay1, 0, mixer6, 1);
AudioConnection          patchCord48(freeverbs1, 0, mixer5, 0);
AudioConnection          patchCord49(freeverbs1, 1, mixer6, 0);
AudioConnection          patchCord50(mixer5, 0, dacs1, 0);
AudioConnection          patchCord51(mixer6, 0, dacs1, 1);
// GUItool: end automatically generated code




/**
 * End generated code block
 */

float hz2;

float cutoff = 19000;
float reso = 1.11;

float revol = 0;
float rsize = 0.1;

float atk = 10.5;
float dcy = 35;
float sus = 0.5;
float rls = 300;
float atkf = 10.5;
float dcyf = 35;
float susf = 0.5;
float rlsf = 300;
float md = 0.0;

float phs = 0;

int swc = 0;
int swc2 = 0;

int wavfrm;
int wavfrm2;

int srlswc = 0;

float nse1 = 0.0;
float pnk1 = 0.0;

float amp2 = 0.00;
float vely = 0.00;

float shpwm = 0.00;
float shpwm2 = 0.00;

float lfofreq = 0.00;
float lfoamp = 0.00;
float lfoampf = 0.00;

int valueconvert;
extern const int16_t myWaveform[256];  // defined in myWaveform.ino

#define POLYPHONY 8  // Max # simultaneous notes
#define WAVEFORM WAVEFORM_SAWTOOTH

byte notesSounding[POLYPHONY] = {0};

void OnControlChange(byte channel, byte control, byte value){//LPD 8 CONTROL SURFACE// SERIAL BUTTON SWITCH
  if (control == 1) {        //CUTOFF    
    cutoff = (pow(value, 2.04))+20;  
  }
  if (control == 2) {        //RESO
    reso = (value / 29.53)+1.11;
      
  }
  if (control == 19) {             //REVERB VOL
    revol = (value / 381.00);         
  }
  if (control == 20) {            //REVERB SIZE
    rsize = (value / 254.00);         
  } 
                        //ADSR                            
  if (control == 13) {           //A
    atk = pow(value, 1.70);          
  }
  if (control == 14) {           //D
    dcy = pow(value, 1.70);           
  }
  if (control == 15) {           //S
    sus = (value / 127.00);        
  }
  if (control == 16) {           //R
    rls = pow(value, 1.91);             
  }
                       //ADSR VCF
  if (control == 9) {            //A  
    atkf = pow(value, 1.70);             
  }
  if (control == 10) {           //D
    dcyf = pow(value, 1.70);        
  }
  if (control == 11) {           //S
    susf = (value / 127.00);        
  }
  if (control == 12) {           //R
    rlsf = pow(value, 1.91);        
  }                              
  if (control == 3) {            // MOD DEPTH
    md = (value / 127.00);          
  }  
  if (control == 4) {            //PHASE 
     phs = (value / 254.00);
  }
  if (control == 5) {             // SWITCH
    swc = value;}
  if (control == 22) {             // SWITCH LFO
    swc2 = value;}  
  if (control == 6) {             // NOISE 
    nse1 = (value/254.00);}
  if (control == 7) {             // PINK 
    pnk1 = (value/254.00);}    
  if (control == 8) {             //3 and 4 OSC VOL's
    amp2 = (value / 254.00);}   
  if (control == 24) {            //SHAPE WAVEFORM
    shpwm = (value / 127.000);}  
  if (control == 23) {            //LFO SHAPE WAVEFORM
    shpwm2 = (value / 127.000);} 
  if (control == 17) {            //LFO AMOUNT
    lfoamp = (value / 127.00);} 
  if (control == 21) {            //LFO FILTER AMOUNT
    lfoampf = (value / 127.00);} 
  if (control == 18) {            //LFO FREQ
    lfofreq = pow(value, 2.04);}
       if (srlswc == HIGH){                                   //TASTO SWITCH SERIALE
  
  Serial.print("CC, ch=");
  Serial.print(channel);
  Serial.print(", ctrl= ");
  Serial.print(control);
  Serial.print(", value=");
  Serial.print(value);

  Serial.print("   A=");
  Serial.print(atk);
  Serial.print("   D=");
  Serial.print(dcy);
  Serial.print("   S=");
  Serial.print(sus);
  Serial.print("   R=");
  Serial.print(rls);
  
  Serial.print("   Af=");
  Serial.print(atkf);
  Serial.print("   Df=");
  Serial.print(dcyf);
  Serial.print("   Sf=");
  Serial.print(susf);
  Serial.print("   Rf=");
  Serial.print(rlsf);
  Serial.print("  SWC=");
  Serial.print(swc);
  Serial.print("  SWC2=");
  Serial.print(swc2);
  Serial.println();
       }
       if (srlswc == LOW){
      if(swc <= 14){
      Serial.print ("WAVEFORM = SINE ");
      Serial.println ();}
      if(swc > 14 && swc <= 28){
      Serial.print ("WAVEFORM = TRIANGLE ");
      Serial.println ();}
      if(swc > 28 && swc <= 42){
      Serial.print ("WAVEFORM = TRIANGLE VAR ");
      Serial.println ();}
      if(swc > 42 && swc <= 56){
      Serial.print ("WAVEFORM = SAWTOOTH ");
      Serial.println ();}
      if(swc > 56 && swc <= 70){
      Serial.print ("WAVEFORM = SAWTOOTH REV ");
      Serial.println ();}
      if(swc > 70 && swc <= 84){
      Serial.print ("WAVEFORM = SQUARE ");
      Serial.println ();}
      if(swc > 84 && swc <= 98){
      Serial.print ("WAVEFORM = PULSE ");
      Serial.println ();}
      if(swc > 98 && swc <= 113){
      Serial.print ("WAVEFORM = ARBITRARY ");
      Serial.println ();}
      if(swc > 113 && swc <= 127){
      Serial.print ("WAVEFORM = SAMPLE&HOLD ");
      Serial.println ();}
      
         if(swc2 <= 14){
      Serial.print ("LFO = SINE ");
      Serial.println ();}
      if(swc2 > 14 && swc2 <= 28){
      Serial.print ("LFO = TRIANGLE ");
      Serial.println ();}
      if(swc2 > 28 && swc2 <= 42){
      Serial.print ("LFO = TRIANGLE VAR ");
      Serial.println ();}
      if(swc2 > 42 && swc2 <= 56){
      Serial.print ("LFO = SAWTOOTH ");
      Serial.println ();}
      if(swc2 > 56 && swc2 <= 70){
      Serial.print ("LFO = SAWTOOTH REV ");
      Serial.println ();}
      if(swc2 > 70 && swc2 <= 84){
      Serial.print ("LFO = SQUARE ");
      Serial.println ();}
      if(swc2 > 84 && swc2 <= 98){
      Serial.print ("LFO = PULSE ");
      Serial.println ();}
      if(swc2 > 98 && swc2 <= 113){
      Serial.print ("LFO = ARBITRARY ");
      Serial.println ();}
      if(swc2 > 113 && swc2 <= 127){
      Serial.print ("LFO = SAMPLE&HOLD ");
      Serial.println ();}
      
           Serial.print("CUTOFF=");
           Serial.print(cutoff);
           Serial.print("   Q=");
           Serial.print(reso);
           Serial.print("  MOD DEPTH=");
           Serial.print(md);
           Serial.print("   REV VOL=");
           Serial.print(revol);
           Serial.print("   REV SIZE=");
           Serial.print(rsize);
           Serial.print("   NOISE=");
           Serial.print(nse1);
           Serial.print("   PINK=");
           Serial.print(pnk1);
           Serial.print("  Ø=");
           Serial.print(phs);
           Serial.print("  V's=");
           Serial.print(amp2);
           Serial.print("  pwm=");
           Serial.print(shpwm);
           Serial.print("  LFO pwm=");
           Serial.print(shpwm2);
           Serial.print("  LFO FREQ=");
           Serial.print(lfofreq);
           Serial.print("  LFO AMOUNT=");
           Serial.print(lfoamp);
           Serial.println();
    }
  }
AudioSynthWaveformModulated *waveforms[POLYPHONY] = {
  &waveformMod1,
  &waveformMod2,
  &waveformMod3,
  &waveformMod4,
  &waveformMod5,
  &waveformMod6,
  &waveformMod7,
  &waveformMod8
};
AudioEffectEnvelope *envelopes[POLYPHONY] = {
  &envelope1,
  &envelope2,
  &envelope3,
  &envelope4,
  &envelope5,
  &envelope6,
  &envelope7,
  &envelope8
};
byte currentNote = 0;
double noteToFrequency(byte note) {
  return 440.0 * pow(2, ((note - 69.0) / 12.0));
}
byte getFreeWaveform() {
  for (byte i = 0; i < POLYPHONY; i++) {
    if (notesSounding[i] == 0) {
      return i;
    }
  }
    
  return 0;
}

void onNoteOn(byte channel, byte note, byte velocity) {       // VELOCITY
    vely = (velocity / 181.42)+0.07;                      
 
   
  envelope9.noteOn();
  envelope10.noteOn();
  
  byte index = getFreeWaveform();
  
  
  AudioSynthWaveformModulated *waveform = waveforms[index];
  waveform->frequency(noteToFrequency(note));
  
  AudioEffectEnvelope *envelope = envelopes[index];
  envelope->noteOn();
    
  notesSounding[index] = note;

  hz2  = 440 * pow (2.0, ((note +  7) - 69.0) / 12.0); 

  if (srlswc == HIGH){
  Serial.print("ON,       ch=");
  Serial.print(channel);
  Serial.print(", note=");
  Serial.print(note);
  Serial.print(", velocity=");
  Serial.print(velocity);
  Serial.print(", vely=");
  Serial.print(vely);
  Serial.println();
  }
}
void onNoteOff(byte channel, byte note, byte velocity) {

  envelope9.noteOff();
  envelope10.noteOff();
  
  for (byte i = 0; i < POLYPHONY; i++) {
    if (notesSounding[i] == note) {
      AudioEffectEnvelope *envelope = envelopes[i];
      envelope->noteOff();
      notesSounding[i] = 0;
    }
  }
                                           //SERIAL
  if (srlswc == HIGH){
  Serial.print("OFF,     ch=");
  Serial.print(channel);
  Serial.print(", note=");
  Serial.print(note);
  Serial.print(", velocity=");
  Serial.print(velocity);
  Serial.println();
}
}
void setup() {                 //                     S  E  T  U  P


  dacs1.analogReference(EXTERNAL);
  
  pinMode(24, INPUT_PULLUP);
  Serial.begin(38400);
  AudioMemory(20);

  mixer5.gain(1, 1.0);
  mixer6.gain(1, 1.0);
  
  mixer8.gain(2, 0.0);
  mixer8.gain(3, 0.0);

  waveformMod1.arbitraryWaveform(myWaveform, 172.0);
  waveformMod2.arbitraryWaveform(myWaveform, 172.0);
  waveformMod3.arbitraryWaveform(myWaveform, 172.0);
  waveformMod4.arbitraryWaveform(myWaveform, 172.0);
  waveformMod5.arbitraryWaveform(myWaveform, 172.0);
  waveformMod6.arbitraryWaveform(myWaveform, 172.0);
  waveformMod7.arbitraryWaveform(myWaveform, 172.0);
  waveformMod8.arbitraryWaveform(myWaveform, 172.0);
  waveformMod9.arbitraryWaveform(myWaveform, 172.0);
  
  for (byte i = 0; i < POLYPHONY; i++) {
    waveforms[i]->amplitude(0.5);
    waveforms[i]->begin(WAVEFORM);
    envelopes[i]->delay(0.0);
    envelopes[i]->hold(0.0);
  }

  envelope9.delay(0);
  envelope9.hold(0);
  envelope10.delay(0);
  envelope10.hold(0);
  
  usbMIDI.setHandleControlChange(OnControlChange);
  usbMIDI.setHandleNoteOn(onNoteOn);
  usbMIDI.setHandleNoteOff(onNoteOff);

  delay1.disable(1);
  delay1.disable(2);
  delay1.disable(3);
  delay1.disable(4);
  delay1.disable(5);
  delay1.disable(6);
  delay1.disable(7);

  freeverbs1.damping(1.0);
  filter1.octaveControl(24);
}
void loop() {                        //                L   O   O   P

   srlswc = digitalRead(24);
   
  
   if(swc <= 14){                    // SINE
    wavfrm = WAVEFORM_SINE;}
    if(swc > 14 && swc <= 28){        //TRIANGLE
    wavfrm = WAVEFORM_TRIANGLE;}
    if(swc > 28 && swc <= 42){        //TRIANGLE VAR
    wavfrm = WAVEFORM_TRIANGLE_VARIABLE;}
    if(swc > 42 && swc <= 56){        //SAWTOOTH
    wavfrm = WAVEFORM_SAWTOOTH;}
    if(swc > 56 && swc <= 70){        //SAWTOOTH REV
    wavfrm = WAVEFORM_SAWTOOTH_REVERSE;}
    if(swc > 70 && swc <= 84){        //SQUARE
    wavfrm = WAVEFORM_SQUARE;}
    if(swc > 84 && swc <= 98){        //PULSE
    wavfrm = WAVEFORM_PULSE;}
    if(swc > 98 && swc <= 113){       //ARBITRARY
    wavfrm = WAVEFORM_ARBITRARY;}
    if(swc > 113 && swc <= 127){      //SAMPLE&HOLD
    wavfrm = WAVEFORM_SAMPLE_HOLD;}
                                                                 //LFO SHAPE
    if(swc2 <= 14){                    // SINE
    wavfrm2 = WAVEFORM_SINE;}
    if(swc2 > 14 && swc2 <= 28){        //TRIANGLE
    wavfrm2 = WAVEFORM_TRIANGLE;}
    if(swc2 > 28 && swc2 <= 42){        //TRIANGLE VAR
    wavfrm2 = WAVEFORM_TRIANGLE_VARIABLE;}
    if(swc2 > 42 && swc2 <= 56){        //SAWTOOTH
    wavfrm2 = WAVEFORM_SAWTOOTH;}
    if(swc2 > 56 && swc2 <= 70){        //SAWTOOTH REV
    wavfrm2 = WAVEFORM_SAWTOOTH_REVERSE;}
    if(swc2 > 70 && swc2 <= 84){        //SQUARE
    wavfrm2 = WAVEFORM_SQUARE;}
    if(swc2 > 84 && swc2 <= 98){        //PULSE
    wavfrm2 = WAVEFORM_PULSE;}
    if(swc2 > 98 && swc2 <= 113){       //ARBITRARY
    wavfrm2 = WAVEFORM_ARBITRARY;}
    if(swc2 > 113 && swc2 <= 127){      //SAMPLE&HOLD
    wavfrm2 = WAVEFORM_SAMPLE_HOLD;}

  waveformMod9.begin(0.3, 440, wavfrm);  //loader waveform
  waveformMod9.frequency(hz2);
  waveformMod9.amplitude(amp2);

  waveformMod10.begin(0.3, 440, wavfrm2);
  waveformMod10.frequency(lfofreq);
  waveformMod10.amplitude(lfoamp);
  
  waveformMod11.begin(0.3, 440, wavfrm2);
  waveformMod11.frequency(lfofreq);
  waveformMod11.amplitude(lfoampf);
  mixer8.gain(0, lfoampf);
  
  envelope1.attack(atk);
  envelope1.decay(dcy);
  envelope1.sustain(sus);
  envelope1.release(rls);
  
  envelope2.attack(atk);
  envelope2.decay(dcy);
  envelope2.sustain(sus);
  envelope2.release(rls);

  envelope3.attack(atk);
  envelope3.decay(dcy);
  envelope3.sustain(sus);
  envelope3.release(rls);

  envelope4.attack(atk);
  envelope4.decay(dcy);
  envelope4.sustain(sus);
  envelope4.release(rls);

  envelope5.attack(atk);
  envelope5.decay(dcy);
  envelope5.sustain(sus);
  envelope5.release(rls);

  envelope6.attack(atk);
  envelope6.decay(dcy);
  envelope6.sustain(sus);
  envelope6.release(rls);  

  envelope7.attack(atk);
  envelope7.decay(dcy);
  envelope7.sustain(sus);
  envelope7.release(rls);  

  envelope8.attack(atk);
  envelope8.decay(dcy);
  envelope8.sustain(sus);
  envelope8.release(rls);

  envelope9.attack(atk);
  envelope9.decay(dcy);
  envelope9.sustain(sus);
  envelope9.release(rls);  

  envelope10.attack(atkf);
  envelope10.decay(dcyf);
  envelope10.sustain(susf);
  envelope10.release(rlsf);  

  filter1.frequency(cutoff);
  filter1.resonance(reso);
         

  delay1.delay(0,phs);      //stereoize
  
  dc1.amplitude(shpwm);     //pwm
  dc3.amplitude(shpwm2);    //Lfo waveform pwm
  dc2.amplitude(md);        //mod depth env 

  pink1.amplitude(pnk1);
  noise1.amplitude(nse1);
  freeverbs1.roomsize(rsize);
  mixer5.gain(0, revol);
  mixer6.gain(0, revol);

  
    
    for (byte i = 0; i < POLYPHONY; i++) {
     waveforms[i]->begin(wavfrm);
     waveforms[i]->amplitude(vely); 
    }
   
  usbMIDI.read();
}
