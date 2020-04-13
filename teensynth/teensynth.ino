#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// STEREO SYNTH WITH FILTER LOW PASS, 1 NOISE, 1 PINK NOISE, 1 REVERB, ENV ON FILTER, ENV ON AMP.

// GUItool: begin automatically generated code
AudioSynthWaveformDc     dc2; //xy=57.85714340209961,80.42856979370117
AudioSynthWaveformDc     dc3; //xy=59.14285659790039,333.7142925262451
AudioSynthWaveformModulated waveformMod3; //xy=258.5714111328125,172.85712242126465
AudioSynthWaveformModulated waveformMod2; //xy=260.71428298950195,379.85714054107666
AudioSynthWaveformModulated waveformMod1;   //xy=263.85716247558594,35.7142858505249
AudioSynthWaveformModulated waveformMod4; //xy=297.1428451538086,542.8571653366089
AudioSynthNoiseWhite     noise2; //xy=351.00001525878906,79.28570938110352
AudioSynthNoisePink      pink1;          //xy=355.00001525878906,113.28570938110352
AudioSynthNoiseWhite     noise1;         //xy=400.5714111328125,428.14285469055176
AudioSynthNoisePink      pink2;          //xy=401.5714111328125,462.14285469055176
AudioMixer4              mixer5; //xy=572.7142715454102,103.57142639160156
AudioMixer4              mixer4;         //xy=679.2857093811035,442.57143783569336
AudioSynthWaveformDc     dc1;            //xy=756.5000076293945,262.42858123779297
AudioEffectEnvelope      envelope1;      //xy=812.9285926818848,102.21428298950195
AudioEffectEnvelope      envelope3; //xy=840.9642944335938,426.1428451538086
AudioEffectEnvelope      envelope2; //xy=897.7500076293945,256.17858123779297
AudioFilterStateVariable filter1;        //xy=1013.2857055664062,126.57143020629883
AudioFilterStateVariable filter2; //xy=1012.5357055664062,352.8214302062988
AudioMixer4              mixer3;         //xy=1094.7857055664062,242.07143020629883
AudioEffectFreeverbStereo freeverbs1;     //xy=1242.0357055664062,236.32143020629883
AudioMixer4              mixer2;         //xy=1329.2857055664062,349.8214302062988
AudioMixer4              mixer1;         //xy=1342.0357055664062,137.57143020629883
AudioOutputAnalogStereo  dacs1;          //xy=1450.2857055664062,240.32143020629883
AudioConnection          patchCord1(dc2, 0, waveformMod1, 0);
AudioConnection          patchCord2(dc3, 0, waveformMod2, 0);
AudioConnection          patchCord3(waveformMod3, 0, mixer5, 3);
AudioConnection          patchCord4(waveformMod2, 0, mixer4, 0);
AudioConnection          patchCord5(waveformMod1, 0, mixer5, 0);
AudioConnection          patchCord6(waveformMod4, 0, mixer4, 3);
AudioConnection          patchCord7(noise2, 0, mixer5, 1);
AudioConnection          patchCord8(pink1, 0, mixer5, 2);
AudioConnection          patchCord9(noise1, 0, mixer4, 1);
AudioConnection          patchCord10(pink2, 0, mixer4, 2);
AudioConnection          patchCord11(mixer5, envelope1);
AudioConnection          patchCord12(mixer4, envelope3);
AudioConnection          patchCord13(dc1, envelope2);
AudioConnection          patchCord14(envelope1, 0, filter1, 0);
AudioConnection          patchCord15(envelope3, 0, filter2, 0);
AudioConnection          patchCord16(envelope2, 0, filter1, 1);
AudioConnection          patchCord17(envelope2, 0, filter2, 1);
AudioConnection          patchCord18(filter1, 0, mixer1, 1);
AudioConnection          patchCord19(filter1, 0, mixer3, 0);
AudioConnection          patchCord20(filter2, 0, mixer2, 1);
AudioConnection          patchCord21(filter2, 0, mixer3, 1);
AudioConnection          patchCord22(mixer3, freeverbs1);
AudioConnection          patchCord23(freeverbs1, 0, mixer1, 0);
AudioConnection          patchCord24(freeverbs1, 1, mixer2, 0);
AudioConnection          patchCord25(mixer2, 0, dacs1, 1);
AudioConnection          patchCord26(mixer1, 0, dacs1, 0);
// GUItool: end automatically generated code

// WAVEFORMS 3 AND 4 ARE TEMPORARILY CONNECTED. NOT IN USE.

float hz;

float cutoff = 200;
float reso = 1.11;
float revol = 0;
float rsize = 0.1;
int nOn = 0;
int nOff = 1;
float atk = 10.5;
float dcy = 35;
float sus = 0.5;
float rls = 300;
float atkf = 10.5;
float dcyf = 35;
float susf = 0.5;
float rlsf = 300;
float md = 0.0;
float phs1 = 1.000;
float phs2 = -1.000;
int swc = 0;
int wavfrm;
int srlswc = 0;
float nse1 = 0.0;
float nse2 = 0.0;
float pnk1 = 0.0;
float pnk2 = 0.0;
int valueconvert;

int voice1;
int voice2;
int i=0;
extern const int16_t myWaveform[256];  // defined in myWaveform.ino

void OnControlChange(byte channel, byte control, byte value) 

{                  // LPD 8 CONTROL SURFACE   // SERIAL BUTTON SWITCH
  if (control == 1) {        //CUTOFF    
    cutoff = (pow(value, 2.04))+20;  
  }
  if (control == 2) {        //RESO
    reso = (value / 29.53)+1.11;    
  }
  if (control == 19) {             //REVERB VOL
    revol = (value / 254.00);         
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
  if (control == 4) {            //PHASE VCO's 
     valueconvert = map (value, 127, 0, 0, 127);
     phs1 = (valueconvert / 128.00) + 0.01;
     phs2 = -phs1;
  }
  if (control == 5) {             // SWITCH
    swc = value;
  }
  if (control == 6) {             // NOISE 
    nse1 = (value/254.00);
    nse2 = nse1;
  }
  if (control == 7) {             // PINK 
    pnk1 = (value/254.00);
    pnk2 = pnk1;  }                                       //SERIALE 
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
  Serial.print("  SWC=");
  Serial.print(swc);
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
           Serial.print("  Phs1=");
           Serial.print(phs1);
           Serial.print("  Phs2=");
           Serial.print(phs2);
           Serial.println();
   }
}   
void OnNoteOn(byte channel, byte noteon, byte velocity) {             //READ KEYBOARD
  envelope1.noteOn();
  envelope2.noteOn();
  envelope3.noteOn();
  
                                                                   // EXPR MIDI TO FREQUENCY
 
  hz  = 440 * pow (2.0, (noteon - 69.0) / 12.0);                 
                                                                    //SERIAL
 if (srlswc == HIGH){
  Serial.print("ON,       ch=");
  Serial.print(channel);
  Serial.print(", note=");
  Serial.print(noteon);
  Serial.print(", velocity=");
  Serial.print(velocity);
  Serial.print(", VOICE1=");
  Serial.print(voice1);
  Serial.print(", VOICE2=");
  Serial.print(voice2);
  Serial.println();
  }
}
void OnNoteOff(byte channel, byte noteof, byte velocity) {

   envelope1.noteOff();
   envelope2.noteOff();
   envelope3.noteOff();
                                         //SERIAL
  if (srlswc == HIGH){
  Serial.print("OFF,     ch=");
  Serial.print(channel);
  Serial.print(", note=");
  Serial.print(noteof);
  Serial.print(", velocity=");
  Serial.print(velocity);
  Serial.println();
}
}
void setup() {                       //                     S  E  T  U  P

  pinMode(24, INPUT_PULLUP);
 
  usbMIDI.setHandleControlChange(OnControlChange);
  usbMIDI.setHandleNoteOn(OnNoteOn);
  usbMIDI.setHandleNoteOff(OnNoteOff);
  Serial.begin(38400);
 
  AudioMemory(128);                           //BUFFER

  

  waveformMod1.arbitraryWaveform(myWaveform, 172.0);
  waveformMod2.arbitraryWaveform(myWaveform, 172.0);
//  waveformMod3.arbitraryWaveform(myWaveform, 172.0);
//  waveformMod4.arbitraryWaveform(myWaveform, 172.0);
  
  filter1.octaveControl(48);
  filter2.octaveControl(48);
  freeverbs1.damping(1.0);
  
  
  envelope1.delay(0);
  envelope1.hold(0);
  envelope2.delay(0);
  envelope2.hold(0);
  envelope3.delay(0);
  envelope3.hold(0);
}

void loop() {                           //                L   O   O   P

  dc1.amplitude(md); //mod depth env

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


    waveformMod1.begin(0.5, 440, wavfrm);  //loader waveform
    waveformMod2.begin(0.5, 440, wavfrm);  //loader waveform
  //  waveformMod3.begin(0.5, 440, wavfrm);  //loader waveform
 //   waveformMod4.begin(0.5, 440, wavfrm);  //loader waveform
  
  envelope1.attack(atk);
  envelope1.decay(dcy);
  envelope1.sustain(sus);
  envelope1.release(rls);

  envelope2.attack(atkf);
  envelope2.decay(dcyf);
  envelope2.sustain(susf);
  envelope2.release(rlsf);

  envelope3.attack(atk);
  envelope3.decay(dcy);
  envelope3.sustain(sus);
  envelope3.release(rls);
  
  filter1.frequency(cutoff);
  filter1.resonance(reso);
  
  waveformMod1.frequency(hz);
  waveformMod2.frequency(hz);
  waveformMod1.phaseModulation(phs1);
  waveformMod2.phaseModulation(phs2);
 // waveformMod3.frequency(hz2);
 // waveformMod4.frequency(hz2);
//  waveformMod3.phaseModulation(phs1);
//  waveformMod4.phaseModulation(phs2);
  
  filter2.frequency(cutoff);
  filter2.resonance(reso);
  dc2.amplitude(phs1);
  dc3.amplitude(phs2);
  mixer1.gain(0, revol);
  mixer2.gain(0, revol);
  freeverbs1.roomsize(rsize);
  noise1.amplitude(nse1);
  noise2.amplitude(nse2);
  pink1.amplitude(pnk1);
  pink2.amplitude(pnk2);
  usbMIDI.read();

  srlswc = digitalRead(24);
}
