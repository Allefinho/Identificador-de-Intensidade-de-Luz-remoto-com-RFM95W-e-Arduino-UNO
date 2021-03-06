//----------------------------------------------
//
//         Sketch Generated by Visuino
//               www.visuino.com
//          Version 8.0.0.37
//
//------------------ Source --------------------
//
// PacketLoRaShieldSendAnalogValueTutorial.visuino
//
 //----------------------------------------------

#define VISUINO_ARDUINO_UNO

#include <OpenWire.h>
#include <Mitov.h>
#include <SPI.h>
#include <Mitov_Arduino_SPI.h>
#include <Mitov_LoRa_RFM9X.h>
#include <Mitov_Snapshot.h>
#include <Mitov_Timing.h>
#include <Mitov_Header_ID.h>



// Shared Component Member Variables

namespace ComponentVariables
{
class
{
public:
  bool Value1 : 1;
  bool Value2 : 1;
  uint32_t Value3 : 3;

} BitFields;

class Variable1
{
public:
  inline static bool GetValue() { return BitFields.Value1; }
  inline static void SetValue( bool AValue ) { BitFields.Value1 = AValue; }

};

class Variable2
{
public:
  inline static bool GetValue() { return BitFields.Value2; }
  inline static void SetValue( bool AValue ) { BitFields.Value2 = AValue; }

};

class Variable3
{
public:
  inline static uint32_t GetValue() { return BitFields.Value3; }
  inline static void SetValue( uint32_t AValue ) { BitFields.Value3 = AValue; }

};

} // ComponentVariables

// Arduino Constant Declarations

namespace VisuinoConstants
{
class FloatValue1
{
public:
    inline static constexpr float GetValue() { return 125; }
};

class FloatValue2
{
public:
    inline static constexpr float GetValue() { return 1; }
};

class FloatValue0
{
public:
    inline static constexpr float GetValue() { return 915; }
};

  constexpr PROGMEM const uint8_t ArrayValue0[] = { 52,103 };
} // VisuinoConstants

// Pin Call Declarations

namespace PinCalls
{
class PinCallerReceive0
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive1
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive2
{
public:
  void Notify( void *_Data );

};
class PinCallerReceive3
{
public:
  void Notify( void *_Data );

};
} // PinCalls

// Call Chains

namespace CallChains
{
class GetValue1
{
public:
  inline static uint32_t Count() { return 0; }
  static void Call( int32_t AIndex, uint8_t & AValue );

};
class ApplyValues1
{
public:
  inline static uint32_t Count() { return 0; }
  static void Call( uint8_t * AValue );

};
} // CallChains

// Arduino Board Declarations

namespace BoardDeclarations
{
namespace Types
{
typedef Mitov::ArduinoSPI<
  SPI // 0_SPI
   > BoardSPI0;
} // namespace Types

namespace Instances
{
BoardDeclarations::Types::BoardSPI0 BoardSPI0;
} // namespace Instances

namespace Types
{
typedef Mitov::ArduinoAnalogInputChannel<0, Mitov::AnalogPin_EmbeddedPinImplementation<6, ::PinCalls::PinCallerReceive0 >> ArduinoAnalogInputChannel_0;
} // Types

namespace Instances
{
Types::ArduinoAnalogInputChannel_0 ArduinoAnalogInputChannel_0;
} // Instances

} // BoardDeclarations

// Declarations

namespace Declarations
{
namespace Types
{
typedef Mitov::MitovLoRaRFM9XShield_Interrupt<
  10, // 0_PIN_CS
  9, // 1_PIN_RST
  2, // 2_PIN_INT
  Mitov::ConstantProperty<13, Mitov::TRFM9XCodingRate, Mitov::cr4_5 >, // CodingRate
  Mitov::TypedVariable<20, uint32_t, ::ComponentVariables::Variable3 >, // FMode
  Mitov::TypedVariable<18, bool, ::ComponentVariables::Variable2 >, // FModeChange
  Mitov::TypedVariable<16, bool, ::ComponentVariables::Variable1 >, // FReady
  Mitov::ConstantPropertyFloat<3, float, ::VisuinoConstants::FloatValue0 >, // Frequency
  Mitov::ConstantProperty<7, Mitov::TRFM9XGainControl, Mitov::gcAuto >, // Gain
  Mitov::ConstantProperty<11, bool, true >, // LoRaTMMode
  Mitov::ConstantProperty<12, bool, false >, // LowNoiseAmplifierHighFrequencyBoost
  Mitov::ConstantProperty<4, uint32_t, 10 >, // MaxSendQueue
  Mitov::ConstantProperty<10, bool, false >, // MobileNode
  Mitov::GenericPin_NoImplementation<1 >, // OutputPin
  Mitov::ConstantProperty<6, int32_t, 13 >, // Power
  Mitov::ConstantProperty<8, uint32_t, 8 >, // PreambleLength
  Mitov::ConstantPropertyFloat<9, float, ::VisuinoConstants::FloatValue1 >, // SignalBandwidth
  Mitov::TypedPin_NoImplementation<2, int32_t >, // SignalStrengthOutputPin
  Mitov::ConstantProperty<14, uint32_t, 7 >, // SpreadingFactorOrder
  Mitov::ConstantProperty<15, uint32_t, 100 > // SymbolTimeout
   > TArduinoMakerfabsLoRaRFM9XShield1;
} // Types

namespace Instances
{
Types::TArduinoMakerfabsLoRaRFM9XShield1 TArduinoMakerfabsLoRaRFM9XShield1;
} // Instances

namespace Types
{
typedef Mitov::ArduinoSerialInput_Binary<Declarations::Types::TArduinoMakerfabsLoRaRFM9XShield1, Declarations::Instances::TArduinoMakerfabsLoRaRFM9XShield1, Mitov::TArray<uint8_t>> TArduinoMakerfabsLoRaRFM9XShield1_Input_IOWByteStream_1;
} // Types

namespace Instances
{
Types::TArduinoMakerfabsLoRaRFM9XShield1_Input_IOWByteStream_1 TArduinoMakerfabsLoRaRFM9XShield1_Input_IOWByteStream_1;
} // Instances

namespace Types
{
typedef Mitov::Snapshot<
  float, // 0_TYPE
  Mitov::ConstantProperty<5, bool, true >, // Enabled
  Mitov::AnalogPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive1 > // OutputPin
   > AnalogSnapshot1;
} // Types

namespace Instances
{
Types::AnalogSnapshot1 AnalogSnapshot1 = Types::AnalogSnapshot1( 0.0f );
} // Instances

namespace Types
{
typedef Mitov::ClockGenerator<
  Mitov::ConstantProperty<4, bool, true >, // Enabled
  Mitov::ConstantPropertyFloat<5, float, ::VisuinoConstants::FloatValue2 >, // Frequency
  Mitov::ClockPin_EmbeddedPinImplementation<3, ::PinCalls::PinCallerReceive2 > // OutputPin
   > ClockGenerator1;
} // Types

namespace Instances
{
Types::ClockGenerator1 ClockGenerator1;
} // Instances

namespace Types
{
typedef Mitov::AddPacketHeaderID<
  Mitov::ConstantProperty<3, bool, true >, // Enabled
  Mitov::ConstantPropertyArray<4, uint8_t, uint8_t, ::VisuinoConstants::ArrayValue0, 2 >, // ID
  Mitov::EmbeddedCallChain<CallChains::ApplyValues1 >, // ID_ApplyValues
  Mitov::EmbeddedCallChain<CallChains::GetValue1 >, // ID_GetValue
  Mitov::TypedPin_EmbeddedPinImplementation<6, ::PinCalls::PinCallerReceive3, Mitov::TArray<uint8_t> > // OutputPin
   > AddPacketHeaderID1;
} // Types

namespace Instances
{
Types::AddPacketHeaderID1 AddPacketHeaderID1;
} // Instances

namespace Types
{
typedef Mitov::ArduinoSerialInput<Declarations::Types::AddPacketHeaderID1, Declarations::Instances::AddPacketHeaderID1, float> AddPacketHeaderID1_Input_IOWFloatStream_1;
} // Types

namespace Instances
{
Types::AddPacketHeaderID1_Input_IOWFloatStream_1 AddPacketHeaderID1_Input_IOWFloatStream_1;
} // Instances

} // Declarations

// Call Chains

namespace CallChains
{
void GetValue1::Call( int32_t AIndex, uint8_t & AValue )
{
}

void ApplyValues1::Call( uint8_t * AValue )
{
}

} // CallChains

// Pin Call Implementations

namespace PinCalls
{
void PinCallerReceive0::Notify( void *_Data )
{
  Declarations::Instances::AnalogSnapshot1.InputPin_o_Receive( _Data );
}

void PinCallerReceive1::Notify( void *_Data )
{
  Declarations::Instances::AddPacketHeaderID1_Input_IOWFloatStream_1.InputPin_o_Receive( _Data );
}

void PinCallerReceive2::Notify( void *_Data )
{
  Declarations::Instances::AnalogSnapshot1.SnapshotInputPin_o_Receive( _Data );
}

void PinCallerReceive3::Notify( void *_Data )
{
  Declarations::Instances::TArduinoMakerfabsLoRaRFM9XShield1_Input_IOWByteStream_1.InputPin_o_Receive( _Data );
}

} // PinCalls

namespace ComponentsHardware
{
void SystemUpdateHardware()
{
}
} // ComponentsHardware

//The setup function is called once at startup of the sketch
void setup()
{
  BoardDeclarations::Instances::BoardSPI0.SystemInit();
  BoardDeclarations::Instances::ArduinoAnalogInputChannel_0.SystemInit();
  Declarations::Instances::TArduinoMakerfabsLoRaRFM9XShield1.SystemInit();
  Declarations::Instances::ClockGenerator1.SystemInit();
  BoardDeclarations::Instances::ArduinoAnalogInputChannel_0.SystemStart();
  Declarations::Instances::ClockGenerator1.SystemStart();
}

// The loop function is called in an endless loop
void loop()
{
  BoardDeclarations::Instances::ArduinoAnalogInputChannel_0.SystemLoopBegin();
  Declarations::Instances::TArduinoMakerfabsLoRaRFM9XShield1.SystemLoopBegin();
  Declarations::Instances::ClockGenerator1.SystemLoopBegin();
}
