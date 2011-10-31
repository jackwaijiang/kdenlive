/* -LICENSE-START-
** Copyright (c) 2011 Blackmagic Design
**
** Permission is hereby granted, free of charge, to any person or organization
** obtaining a copy of the software and accompanying documentation covered by
** this license (the "Software") to use, reproduce, display, distribute,
** execute, and transmit the Software, and to prepare derivative works of the
** Software, and to permit third-parties to whom the Software is furnished to
** do so, all subject to the following:
** 
** The copyright notices in the Software and this entire statement, including
** the above license grant, this restriction and the following disclaimer,
** must be included in all copies of the Software, in whole or in part, and
** all derivative works of the Software, unless such copies or derivative
** works are solely in the form of machine-executable object code generated by
** a source language processor.
** 
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
** SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
** FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
** ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
** -LICENSE-END-
*/

#ifndef BMD_DECKLINKAPICONFIGURATION_H
#define BMD_DECKLINKAPICONFIGURATION_H

// Type Declarations


// Interface ID Declarations

#define IID_IDeckLinkConfiguration                       /* C679A35B-610C-4D09-B748-1D0478100FC0 */ (REFIID){0xC6,0x79,0xA3,0x5B,0x61,0x0C,0x4D,0x09,0xB7,0x48,0x1D,0x04,0x78,0x10,0x0F,0xC0}

/* Enum BMDDeckLinkConfigurationID - DeckLink Configuration ID */

typedef uint32_t BMDDeckLinkConfigurationID;
enum _BMDDeckLinkConfigurationID {

    /* Serial port Flags */

    bmdDeckLinkConfigSwapSerialRxTx                              = /* 'ssrt' */ 0x73737274,

    /* Video Input/Output Flags */

    bmdDeckLinkConfigUse1080pNotPsF                              = /* 'fpro' */ 0x6670726F,

    /* Video Input/Output Integers */

    bmdDeckLinkConfigHDMI3DPackingFormat                         = /* '3dpf' */ 0x33647066,
    bmdDeckLinkConfigBypass                                      = /* 'byps' */ 0x62797073,

    /* Audio Input/Output Flags */

    bmdDeckLinkConfigAnalogAudioConsumerLevels                   = /* 'aacl' */ 0x6161636C,

    /* Video output flags */

    bmdDeckLinkConfigFieldFlickerRemoval                         = /* 'fdfr' */ 0x66646672,
    bmdDeckLinkConfigHD1080p24ToHD1080i5994Conversion            = /* 'to59' */ 0x746F3539,
    bmdDeckLinkConfig444SDIVideoOutput                           = /* '444o' */ 0x3434346F,
    bmdDeckLinkConfig3GBpsVideoOutput                            = /* '3gbs' */ 0x33676273,
    bmdDeckLinkConfigBlackVideoOutputDuringCapture               = /* 'bvoc' */ 0x62766F63,
    bmdDeckLinkConfigLowLatencyVideoOutput                       = /* 'llvo' */ 0x6C6C766F,

    /* Video Output Integers */

    bmdDeckLinkConfigVideoOutputConnection                       = /* 'vocn' */ 0x766F636E,
    bmdDeckLinkConfigVideoOutputConversionMode                   = /* 'vocm' */ 0x766F636D,
    bmdDeckLinkConfigAnalogVideoOutputFlags                      = /* 'avof' */ 0x61766F66,
    bmdDeckLinkConfigReferenceInputTimingOffset                  = /* 'glot' */ 0x676C6F74,
    bmdDeckLinkConfigVideoOutputIdleOperation                    = /* 'voio' */ 0x766F696F,

    /* Video Output Floats */

    bmdDeckLinkConfigVideoOutputComponentLumaGain                = /* 'oclg' */ 0x6F636C67,
    bmdDeckLinkConfigVideoOutputComponentChromaBlueGain          = /* 'occb' */ 0x6F636362,
    bmdDeckLinkConfigVideoOutputComponentChromaRedGain           = /* 'occr' */ 0x6F636372,
    bmdDeckLinkConfigVideoOutputCompositeLumaGain                = /* 'oilg' */ 0x6F696C67,
    bmdDeckLinkConfigVideoOutputCompositeChromaGain              = /* 'oicg' */ 0x6F696367,
    bmdDeckLinkConfigVideoOutputSVideoLumaGain                   = /* 'oslg' */ 0x6F736C67,
    bmdDeckLinkConfigVideoOutputSVideoChromaGain                 = /* 'oscg' */ 0x6F736367,

    /* Video Input Flags */

    bmdDeckLinkConfigVideoInputScanning                          = /* 'visc' */ 0x76697363,	// Applicable to H264 Pro Recorder only

    /* Video Input Integers */

    bmdDeckLinkConfigVideoInputConnection                        = /* 'vicn' */ 0x7669636E,
    bmdDeckLinkConfigAnalogVideoInputFlags                       = /* 'avif' */ 0x61766966,
    bmdDeckLinkConfigVideoInputConversionMode                    = /* 'vicm' */ 0x7669636D,
    bmdDeckLinkConfig32PulldownSequenceInitialTimecodeFrame      = /* 'pdif' */ 0x70646966,
    bmdDeckLinkConfigVANCSourceLine1Mapping                      = /* 'vsl1' */ 0x76736C31,
    bmdDeckLinkConfigVANCSourceLine2Mapping                      = /* 'vsl2' */ 0x76736C32,
    bmdDeckLinkConfigVANCSourceLine3Mapping                      = /* 'vsl3' */ 0x76736C33,

    /* Video Input Floats */

    bmdDeckLinkConfigVideoInputComponentLumaGain                 = /* 'iclg' */ 0x69636C67,
    bmdDeckLinkConfigVideoInputComponentChromaBlueGain           = /* 'iccb' */ 0x69636362,
    bmdDeckLinkConfigVideoInputComponentChromaRedGain            = /* 'iccr' */ 0x69636372,
    bmdDeckLinkConfigVideoInputCompositeLumaGain                 = /* 'iilg' */ 0x69696C67,
    bmdDeckLinkConfigVideoInputCompositeChromaGain               = /* 'iicg' */ 0x69696367,
    bmdDeckLinkConfigVideoInputSVideoLumaGain                    = /* 'islg' */ 0x69736C67,
    bmdDeckLinkConfigVideoInputSVideoChromaGain                  = /* 'iscg' */ 0x69736367,

    /* Audio Input Integers */

    bmdDeckLinkConfigAudioInputConnection                        = /* 'aicn' */ 0x6169636E,

    /* Audio Input Floats */

    bmdDeckLinkConfigAnalogAudioInputScaleChannel1               = /* 'ais1' */ 0x61697331,
    bmdDeckLinkConfigAnalogAudioInputScaleChannel2               = /* 'ais2' */ 0x61697332,
    bmdDeckLinkConfigAnalogAudioInputScaleChannel3               = /* 'ais3' */ 0x61697333,
    bmdDeckLinkConfigAnalogAudioInputScaleChannel4               = /* 'ais4' */ 0x61697334,
    bmdDeckLinkConfigDigitalAudioInputScale                      = /* 'dais' */ 0x64616973,

    /* Audio Output Integers */

    bmdDeckLinkConfigAudioOutputAESAnalogSwitch                  = /* 'aoaa' */ 0x616F6161,

    /* Audio Output Floats */

    bmdDeckLinkConfigAnalogAudioOutputScaleChannel1              = /* 'aos1' */ 0x616F7331,
    bmdDeckLinkConfigAnalogAudioOutputScaleChannel2              = /* 'aos2' */ 0x616F7332,
    bmdDeckLinkConfigAnalogAudioOutputScaleChannel3              = /* 'aos3' */ 0x616F7333,
    bmdDeckLinkConfigAnalogAudioOutputScaleChannel4              = /* 'aos4' */ 0x616F7334,
    bmdDeckLinkConfigDigitalAudioOutputScale                     = /* 'daos' */ 0x64616F73
};

// Forward Declarations

class IDeckLinkConfiguration;

/* Interface IDeckLinkConfiguration - DeckLink Configuration interface */

class IDeckLinkConfiguration : public IUnknown
{
public:
    virtual HRESULT SetFlag (/* in */ BMDDeckLinkConfigurationID cfgID, /* in */ bool value) = 0;
    virtual HRESULT GetFlag (/* in */ BMDDeckLinkConfigurationID cfgID, /* out */ bool *value) = 0;
    virtual HRESULT SetInt (/* in */ BMDDeckLinkConfigurationID cfgID, /* in */ int64_t value) = 0;
    virtual HRESULT GetInt (/* in */ BMDDeckLinkConfigurationID cfgID, /* out */ int64_t *value) = 0;
    virtual HRESULT SetFloat (/* in */ BMDDeckLinkConfigurationID cfgID, /* in */ double value) = 0;
    virtual HRESULT GetFloat (/* in */ BMDDeckLinkConfigurationID cfgID, /* out */ double *value) = 0;
    virtual HRESULT SetString (/* in */ BMDDeckLinkConfigurationID cfgID, /* in */ const char *value) = 0;
    virtual HRESULT GetString (/* in */ BMDDeckLinkConfigurationID cfgID, /* out */ const char **value) = 0;
    virtual HRESULT WriteConfigurationToPreferences (void) = 0;

protected:
    virtual ~IDeckLinkConfiguration () {}; // call Release method to drop reference count
};

/* Functions */

extern "C" {


};


#endif /* defined(BMD_DECKLINKAPICONFIGURATION_H) */
