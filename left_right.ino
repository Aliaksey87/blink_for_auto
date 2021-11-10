#include <EEPROM.h>
bool _gtv1 = 0;
bool _gen19I = 0;
bool _gen19O = 0;
unsigned long _gen19P = 0UL;
bool _tim20I = 0;
bool _tim20O = 0;
unsigned long _tim20P = 0UL;
bool _SEEPR1OSN = 0;
bool _dms1Q0 = 0;
bool _dms1Q1 = 0;
bool _dms1Q2 = 0;
bool _dms1Q3 = 0;
bool _dms1Q4 = 0;
bool _dms1Q5 = 0;
bool _dms1Q6 = 0;
bool _dms1Q7 = 0;
bool _dms1Q8 = 0;
bool _dms1Q9 = 0;
bool _dms1Q10 = 0;
bool _tim9I = 0;
bool _tim9O = 0;
unsigned long _tim9P = 0UL;
bool _tim66I = 0;
bool _tim66O = 0;
unsigned long _tim66P = 0UL;
bool _bounseInputD16S = 0;
bool _bounseInputD16O = 0;
unsigned long _bounseInputD16P = 0UL;
bool _tim2I = 0;
bool _tim2O = 0;
unsigned long _tim2P = 0UL;
bool _tim57I = 0;
bool _tim57O = 0;
unsigned long _tim57P = 0UL;
bool _gen6I = 0;
bool _gen6O = 0;
unsigned long _gen6P = 0UL;
bool _tim80I = 0;
bool _tim80O = 0;
unsigned long _tim80P = 0UL;
bool _tim42I = 0;
bool _tim42O = 0;
unsigned long _tim42P = 0UL;
bool _tim33I = 0;
bool _tim33O = 0;
unsigned long _tim33P = 0UL;
bool _tim76I = 0;
bool _tim76O = 0;
unsigned long _tim76P = 0UL;
bool _count7I = 0;
bool _count7_SCST = 0;
int _count7_Value = 0;
bool _trgrt6 = 0;
bool _trgrt6I = 0;
bool _tim18I = 0;
bool _tim18O = 0;
unsigned long _tim18P = 0UL;
bool _gen22I = 0;
bool _gen22O = 0;
unsigned long _gen22P = 0UL;
bool _tim7I = 0;
bool _tim7O = 0;
unsigned long _tim7P = 0UL;
bool _tim64I = 0;
bool _tim64O = 0;
unsigned long _tim64P = 0UL;
bool _bounseInputD15S = 0;
bool _bounseInputD15O = 0;
unsigned long _bounseInputD15P = 0UL;
bool _tim55I = 0;
bool _tim55O = 0;
unsigned long _tim55P = 0UL;
bool _gen24I = 0;
bool _gen24O = 0;
unsigned long _gen24P = 0UL;
bool _tim40I = 0;
bool _tim40O = 0;
unsigned long _tim40P = 0UL;
bool _tim31I = 0;
bool _tim31O = 0;
unsigned long _tim31P = 0UL;
bool _dms3Q0 = 0;
bool _dms3Q1 = 0;
bool _dms3Q2 = 0;
bool _dms3Q3 = 0;
bool _dms3Q4 = 0;
bool _dms3Q5 = 0;
bool _dms3Q6 = 0;
bool _dms3Q7 = 0;
bool _dms3Q8 = 0;
bool _dms3Q9 = 0;
bool _dms3Q10 = 0;
bool _tim81I = 0;
bool _tim81O = 0;
unsigned long _tim81P = 0UL;
bool _trgrt2 = 0;
bool _trgrt2I = 0;
bool _tim43I = 0;
bool _tim43O = 0;
unsigned long _tim43P = 0UL;
bool _tim34I = 0;
bool _tim34O = 0;
unsigned long _tim34P = 0UL;
bool _trgrt8 = 0;
bool _trgrt8I = 0;
bool _gen28I = 0;
bool _gen28O = 0;
unsigned long _gen28P = 0UL;
bool _tim19I = 0;
bool _tim19O = 0;
unsigned long _tim19P = 0UL;
bool _tim8I = 0;
bool _tim8O = 0;
unsigned long _tim8P = 0UL;
bool _tim65I = 0;
bool _tim65O = 0;
unsigned long _tim65P = 0UL;
bool _tim56I = 0;
bool _tim56O = 0;
unsigned long _tim56P = 0UL;
bool _tim79I = 0;
bool _tim79O = 0;
unsigned long _tim79P = 0UL;
bool _tim41I = 0;
bool _tim41O = 0;
unsigned long _tim41P = 0UL;
bool _tim32I = 0;
bool _tim32O = 0;
unsigned long _tim32P = 0UL;
bool _gen21I = 0;
bool _gen21O = 0;
unsigned long _gen21P = 0UL;
bool _gen27I = 0;
bool _gen27O = 0;
unsigned long _gen27P = 0UL;
bool _tim6I = 0;
bool _tim6O = 0;
unsigned long _tim6P = 0UL;
bool _gen13I = 0;
bool _gen13O = 0;
unsigned long _gen13P = 0UL;
bool _gen18I = 0;
bool _gen18O = 0;
unsigned long _gen18P = 0UL;
bool _tim17I = 0;
bool _tim17O = 0;
unsigned long _tim17P = 0UL;
bool _trgrt12 = 0;
bool _trgrt12I = 0;
bool _tim5I = 0;
bool _tim5O = 0;
unsigned long _tim5P = 0UL;
bool _tim63I = 0;
bool _tim63O = 0;
unsigned long _tim63P = 0UL;
bool _tim54I = 0;
bool _tim54O = 0;
unsigned long _tim54P = 0UL;
bool _count4I = 0;
bool _count4_SCST = 0;
int _count4_Value = 0;
bool _tim30I = 0;
bool _tim30O = 0;
unsigned long _tim30P = 0UL;
bool _trgrt13 = 0;
bool _trgrt13I = 0;
bool _trgrt4 = 0;
bool _trgrt4I = 0;
bool _tim78I = 0;
bool _tim78O = 0;
unsigned long _tim78P = 0UL;
bool _dms7Q0 = 0;
bool _dms7Q1 = 0;
bool _dms7Q2 = 0;
bool _dms7Q3 = 0;
bool _dms7Q4 = 0;
bool _dms7Q5 = 0;
bool _dms7Q6 = 0;
bool _dms7Q7 = 0;
bool _dms7Q8 = 0;
bool _dms7Q9 = 0;
bool _dms7Q10 = 0;
bool _tim52I = 0;
bool _tim52O = 0;
unsigned long _tim52P = 0UL;
bool _tim50I = 0;
bool _tim50O = 0;
unsigned long _tim50P = 0UL;
bool _gen17I = 0;
bool _gen17O = 0;
unsigned long _gen17P = 0UL;
bool _tim39I = 0;
bool _tim39O = 0;
unsigned long _tim39P = 0UL;
bool _tim28I = 0;
bool _tim28O = 0;
unsigned long _tim28P = 0UL;
bool _tim26I = 0;
bool _tim26O = 0;
unsigned long _tim26P = 0UL;
bool _gen23I = 0;
bool _gen23O = 0;
unsigned long _gen23P = 0UL;
bool _tim15I = 0;
bool _tim15O = 0;
unsigned long _tim15P = 0UL;
bool _tim72I = 0;
bool _tim72O = 0;
unsigned long _tim72P = 0UL;
bool _count3I = 0;
bool _count3_SCST = 0;
int _count3_Value = 0;
bool _tim3I = 0;
bool _tim3O = 0;
unsigned long _tim3P = 0UL;
bool _tim62I = 0;
bool _tim62O = 0;
unsigned long _tim62P = 0UL;
bool _tim48I = 0;
bool _tim48O = 0;
unsigned long _tim48P = 0UL;
bool _trgrt9 = 0;
bool _trgrt9I = 0;
bool _gen2I = 0;
bool _gen2O = 0;
unsigned long _gen2P = 0UL;
bool _trgrt14 = 0;
bool _trgrt14I = 0;
bool _tim4I = 0;
bool _tim4O = 0;
unsigned long _tim4P = 0UL;
bool _count8I = 0;
bool _count8_SCST = 0;
int _count8_Value = 0;
bool _tim53I = 0;
bool _tim53O = 0;
unsigned long _tim53P = 0UL;
bool _dms2Q0 = 0;
bool _dms2Q1 = 0;
bool _dms2Q2 = 0;
bool _dms2Q3 = 0;
bool _dms2Q4 = 0;
bool _dms2Q5 = 0;
bool _dms2Q6 = 0;
bool _dms2Q7 = 0;
bool _dms2Q8 = 0;
bool _dms2Q9 = 0;
bool _dms2Q10 = 0;
bool _trgrt5 = 0;
bool _trgrt5I = 0;
bool _tim29I = 0;
bool _tim29O = 0;
unsigned long _tim29P = 0UL;
bool _tim27I = 0;
bool _tim27O = 0;
unsigned long _tim27P = 0UL;
bool _tim82I = 0;
bool _tim82O = 0;
unsigned long _tim82P = 0UL;
bool _tim16I = 0;
bool _tim16O = 0;
unsigned long _tim16P = 0UL;
bool _tim73I = 0;
bool _tim73O = 0;
unsigned long _tim73P = 0UL;
bool _gen16I = 0;
bool _gen16O = 0;
unsigned long _gen16P = 0UL;
bool _trgrt3 = 0;
bool _trgrt3I = 0;
bool _trgrt7 = 0;
bool _trgrt7I = 0;
bool _gen26I = 0;
bool _gen26O = 0;
unsigned long _gen26P = 0UL;
bool _tim51I = 0;
bool _tim51O = 0;
unsigned long _tim51P = 0UL;
bool _tim49I = 0;
bool _tim49O = 0;
unsigned long _tim49P = 0UL;
bool _tim25I = 0;
bool _tim25O = 0;
unsigned long _tim25P = 0UL;
bool _gen11I = 0;
bool _gen11O = 0;
unsigned long _gen11P = 0UL;
bool _tim14I = 0;
bool _tim14O = 0;
unsigned long _tim14P = 0UL;
bool _tim71I = 0;
bool _tim71O = 0;
unsigned long _tim71P = 0UL;
bool _gen15I = 0;
bool _gen15O = 0;
unsigned long _gen15P = 0UL;
bool _gen10I = 0;
bool _gen10O = 0;
unsigned long _gen10P = 0UL;
bool _tim47I = 0;
bool _tim47O = 0;
unsigned long _tim47P = 0UL;
bool _tim75I = 0;
bool _tim75O = 0;
unsigned long _tim75P = 0UL;
bool _dms6Q0 = 0;
bool _dms6Q1 = 0;
bool _dms6Q2 = 0;
bool _dms6Q3 = 0;
bool _dms6Q4 = 0;
bool _dms6Q5 = 0;
bool _dms6Q6 = 0;
bool _dms6Q7 = 0;
bool _dms6Q8 = 0;
bool _dms6Q9 = 0;
bool _dms6Q10 = 0;
bool _tim38I = 0;
bool _tim38O = 0;
unsigned long _tim38P = 0UL;
bool _tim85I = 0;
bool _tim85O = 0;
unsigned long _tim85P = 0UL;
bool _tim23I = 0;
bool _tim23O = 0;
unsigned long _tim23P = 0UL;
bool _tim12I = 0;
bool _tim12O = 0;
unsigned long _tim12P = 0UL;
bool _tim69I = 0;
bool _tim69O = 0;
unsigned long _tim69P = 0UL;
bool _trgrt10 = 0;
bool _trgrt10I = 0;
bool _gen9I = 0;
bool _gen9O = 0;
unsigned long _gen9P = 0UL;
bool _tim60I = 0;
bool _tim60O = 0;
unsigned long _tim60P = 0UL;
bool _tim45I = 0;
bool _tim45O = 0;
unsigned long _tim45P = 0UL;
bool _trgrt1 = 0;
bool _trgrt1I = 0;
bool _tim36I = 0;
bool _tim36O = 0;
unsigned long _tim36P = 0UL;
bool _tim84I = 0;
bool _tim84O = 0;
unsigned long _tim84P = 0UL;
bool _tim21I = 0;
bool _tim21O = 0;
unsigned long _tim21P = 0UL;
bool _tim10I = 0;
bool _tim10O = 0;
unsigned long _tim10P = 0UL;
bool _tim67I = 0;
bool _tim67O = 0;
unsigned long _tim67P = 0UL;
bool _tim58I = 0;
bool _tim58O = 0;
unsigned long _tim58P = 0UL;
bool _trgrt11 = 0;
bool _trgrt11I = 0;
bool _tim24I = 0;
bool _tim24O = 0;
unsigned long _tim24P = 0UL;
bool _tim13I = 0;
bool _tim13O = 0;
unsigned long _tim13P = 0UL;
bool _tim70I = 0;
bool _tim70O = 0;
unsigned long _tim70P = 0UL;
bool _gen20I = 0;
bool _gen20O = 0;
unsigned long _gen20P = 0UL;
bool _tim61I = 0;
bool _tim61O = 0;
unsigned long _tim61P = 0UL;
bool _tim46I = 0;
bool _tim46O = 0;
unsigned long _tim46P = 0UL;
bool _gen14I = 0;
bool _gen14O = 0;
unsigned long _gen14P = 0UL;
bool _tim37I = 0;
bool _tim37O = 0;
unsigned long _tim37P = 0UL;
bool _tim22I = 0;
bool _tim22O = 0;
unsigned long _tim22P = 0UL;
bool _tim11I = 0;
bool _tim11O = 0;
unsigned long _tim11P = 0UL;
bool _tim68I = 0;
bool _tim68O = 0;
unsigned long _tim68P = 0UL;
bool _tim77I = 0;
bool _tim77O = 0;
unsigned long _tim77P = 0UL;
bool _bounseInputD14S = 0;
bool _bounseInputD14O = 0;
unsigned long _bounseInputD14P = 0UL;
bool _tim59I = 0;
bool _tim59O = 0;
unsigned long _tim59P = 0UL;
bool _gen4I = 0;
bool _gen4O = 0;
unsigned long _gen4P = 0UL;
bool _tim44I = 0;
bool _tim44O = 0;
unsigned long _tim44P = 0UL;
bool _tim1I = 0;
bool _tim1O = 0;
unsigned long _tim1P = 0UL;
bool _tim35I = 0;
bool _tim35O = 0;
unsigned long _tim35P = 0UL;
bool _tim83I = 0;
bool _tim83O = 0;
unsigned long _tim83P = 0UL;
void setup()
{
    pinMode(16, INPUT_PULLUP);
    pinMode(15, INPUT_PULLUP);
    pinMode(14, INPUT_PULLUP);
    pinMode(2, OUTPUT);
    digitalWrite(2, 0);
    pinMode(3, OUTPUT);
    digitalWrite(3, 0);
    pinMode(4, OUTPUT);
    digitalWrite(4, 0);
    pinMode(5, OUTPUT);
    digitalWrite(5, 0);
    pinMode(6, OUTPUT);
    digitalWrite(6, 0);
    pinMode(7, OUTPUT);
    digitalWrite(7, 0);
    pinMode(8, OUTPUT);
    digitalWrite(8, 0);
    pinMode(9, OUTPUT);
    digitalWrite(9, 0);
    pinMode(10, OUTPUT);
    digitalWrite(10, 0);
    pinMode(11, OUTPUT);
    digitalWrite(11, 0);
    pinMode(12, OUTPUT);
    digitalWrite(12, 0);
    pinMode(13, OUTPUT);
    digitalWrite(13, 0);
    if(((readByteFromEEPROM(0, 0, 0x0))) != 208) 
    {
        (updateByteToEEPROM(0, 0, 0x0, (208)));
        (updateIntegerToEEPROM(1, 0, 0x0, (0)));
    }
    _bounseInputD14O =  digitalRead(14);
    _bounseInputD15O =  digitalRead(15);
    _bounseInputD16O =  digitalRead(16);
}
void loop()
{
    bool  _bounceInputTmpD16 =  (digitalRead (16));
    if (_bounseInputD16S)
    {
        if (millis() >= (_bounseInputD16P + 40))
        {
            _bounseInputD16O= _bounceInputTmpD16;
            _bounseInputD16S=0;
        }
    }
    else
    {
        if (_bounceInputTmpD16 != _bounseInputD16O)
        {
            _bounseInputD16S=1;
            _bounseInputD16P = millis();
        }
    }
    bool  _bounceInputTmpD14 =  (digitalRead (14));
    if (_bounseInputD14S)
    {
        if (millis() >= (_bounseInputD14P + 40))
        {
            _bounseInputD14O= _bounceInputTmpD14;
            _bounseInputD14S=0;
        }
    }
    else
    {
        if (_bounceInputTmpD14 != _bounseInputD14O)
        {
            _bounseInputD14S=1;
            _bounseInputD14P = millis();
        }
    }
    bool  _bounceInputTmpD15 =  (digitalRead (15));
    if (_bounseInputD15S)
    {
        if (millis() >= (_bounseInputD15P + 40))
        {
            _bounseInputD15O= _bounceInputTmpD15;
            _bounseInputD15S=0;
        }
    }
    else
    {
        if (_bounceInputTmpD15 != _bounseInputD15O)
        {
            _bounseInputD15S=1;
            _bounseInputD15P = millis();
        }
    }
    //Плата:1
    digitalWrite(13, !(_bounseInputD16O));
    if (1) 
    {
        if (! _gen23I)
        {
            _gen23I = 1;
            _gen23O = 1;
            _gen23P = millis();
        }
    }
     else 
    {
        _gen23I = 0 ;
        _gen23O= 0;
    }
     if (_gen23I &&  _gen23O)   _gen23O = !(_isTimer(_gen23P , 50));
    if (_gen23O)
    {
        _count8_Value = (readIntegerFromEEPROM(1, 0, 0x0));
    }
     else 
    {
        if (!(_bounseInputD14O))
        {
            if (! _count8I) 
            {
                _count8I = 1;
                if(_count8_Value < 10) 
                {
                    _count8_Value = _count8_Value + 1;
                }
            }
        }
         else 
        {
            _count8I = 0;
        }
        if (!(_bounseInputD15O))
        {
            if (! _count8_SCST) 
            {
                _count8_SCST = 1;
                if(_count8_Value > 0) 
                {
                    _count8_Value = _count8_Value - 1;
                }
            }
        }
         else 
        {
            _count8_SCST = 0;
        }
    }
    if((_count8_Value == 0))
    {
        _dms6Q0 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q0 = 0;
    }
    if((_count8_Value == 1))
    {
        _dms6Q1 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q1 = 0;
    }
    if((_count8_Value == 2))
    {
        _dms6Q2 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q2 = 0;
    }
    if((_count8_Value == 3))
    {
        _dms6Q3 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q3 = 0;
    }
    if((_count8_Value == 4))
    {
        _dms6Q4 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q4 = 0;
    }
    if((_count8_Value == 5))
    {
        _dms6Q5 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q5 = 0;
    }
    if((_count8_Value == 6))
    {
        _dms6Q6 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q6 = 0;
    }
    if((_count8_Value == 7))
    {
        _dms6Q7 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q7 = 0;
    }
    if((_count8_Value == 8))
    {
        _dms6Q8 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q8 = 0;
    }
    if((_count8_Value == 9))
    {
        _dms6Q9 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q9 = 0;
    }
    if((_count8_Value == 10))
    {
        _dms6Q10 = ((!(_bounseInputD14O)) || (!(_bounseInputD15O)));
    }
    else 
    {
        _dms6Q10 = 0;
    }
    digitalWrite(12, _dms6Q10);
    digitalWrite(11, _dms6Q9);
    digitalWrite(10, _dms6Q8);
    digitalWrite(9, _dms6Q7);
    digitalWrite(8, _dms6Q6);
    digitalWrite(7, _dms6Q5);
    digitalWrite(6, _dms6Q4);
    digitalWrite(5, _dms6Q3);
    digitalWrite(4, _dms6Q2);
    digitalWrite(3, _dms6Q1);
    digitalWrite(2, _dms6Q0);
    if(((!(_bounseInputD14O)) || (!(_bounseInputD15O))))
    {
         if(!_SEEPR1OSN)
        {
            (updateIntegerToEEPROM(1, 0, 0x0, (_count8_Value)));
            _SEEPR1OSN=1;
        }
    }
    else
    {
         if(_SEEPR1OSN)
        {
            _SEEPR1OSN=0;
        }
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 0))
    {
        _dms7Q0 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q0 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 1))
    {
        _dms7Q1 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q1 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 2))
    {
        _dms7Q2 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q2 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 3))
    {
        _dms7Q3 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q3 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 4))
    {
        _dms7Q4 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q4 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 5))
    {
        _dms7Q5 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q5 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 6))
    {
        _dms7Q6 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q6 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 7))
    {
        _dms7Q7 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q7 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 8))
    {
        _dms7Q8 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q8 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 9))
    {
        _dms7Q9 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q9 = 0;
    }
    if(((readIntegerFromEEPROM(1, 0, 0x0)) == 10))
    {
        _dms7Q10 = !(_bounseInputD16O);
    }
    else 
    {
        _dms7Q10 = 0;
    }
    if (_dms7Q10) 
    {
         if (_trgrt8I) 
        {
             _trgrt8 = 0;
        }
         else 
        {
            _trgrt8 = 1;
            _trgrt8I = 1;
        }
    }
     else 
    {
        _trgrt8 = 0;
        _trgrt8I = 0;
    }
    ;
    if(_trgrt8) 
    {
        _tim76O = 1;
        _tim76I = 1;
    }
     else 
    {
         if(_tim76I) 
        {
            _tim76I = 0;
            _tim76P = millis();
        }
         else 
        {
             if (_tim76O) 
            {
                if (_isTimer(_tim76P, 2250)) _tim76O = 0;
            }
        }
    }
    if (((_dms7Q10) || (_tim76O))) 
    {
        if (! _gen21I) 
        {
            _gen21I = 1;
            _gen21O = 1;
            _gen21P =  millis();
        }
    }
     else 
    {
        _gen21I = 0 ;
        _gen21O= 0;
    }
     if (_gen21I) 
    {
         if (_gen21O) 
        {
             if (_isTimer(_gen21P , 450)) 
            {
                 _gen21P = millis();
                _gen21O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen21P , 450)) 
            {
                  _gen21P = millis();
                _gen21O = 1;
            }
        }
    }
    if (_gen21O) 
    {
        if (! _gen14I) 
        {
            _gen14I = 1;
            _gen14O = 1;
            _gen14P =  millis();
        }
    }
     else 
    {
        _gen14I = 0 ;
        _gen14O= 0;
    }
     if (_gen14I) 
    {
         if (_gen14O) 
        {
             if (_isTimer(_gen14P , 30)) 
            {
                 _gen14P = millis();
                _gen14O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen14P , 30)) 
            {
                  _gen14P = millis();
                _gen14O = 1;
            }
        }
    }
    digitalWrite(11, ((_gen14O) || (0)));
    digitalWrite(9, ((_gen14O) || (0)));
    digitalWrite(7, ((_gen14O) || (0)));
    digitalWrite(5, ((_gen14O) || (0)));
    digitalWrite(3, ((_gen14O) || (0)));
    digitalWrite(12, ((_gen21O) || (0)));
    digitalWrite(10, ((_gen21O) || (0)));
    digitalWrite(8, ((_gen21O) || (0)));
    digitalWrite(6, ((_gen21O) || (0)));
    digitalWrite(4, ((_gen21O) || (0)));
    digitalWrite(2, ((_gen21O) || (0)));
    if (_dms7Q9) 
    {
         if (_trgrt10I) 
        {
             _trgrt10 = 0;
        }
         else 
        {
            _trgrt10 = 1;
            _trgrt10I = 1;
        }
    }
     else 
    {
        _trgrt10 = 0;
        _trgrt10I = 0;
    }
    ;
    if(_trgrt10) 
    {
        _tim77O = 1;
        _tim77I = 1;
    }
     else 
    {
         if(_tim77I) 
        {
            _tim77I = 0;
            _tim77P = millis();
        }
         else 
        {
             if (_tim77O) 
            {
                if (_isTimer(_tim77P, 3305)) _tim77O = 0;
            }
        }
    }
    if (((_dms7Q9) || (_tim77O))) 
    {
        if (! _gen22I) 
        {
            _gen22I = 1;
            _gen22O = 1;
            _gen22P =  millis();
        }
    }
     else 
    {
        _gen22I = 0 ;
        _gen22O= 0;
    }
     if (_gen22I) 
    {
         if (_gen22O) 
        {
             if (_isTimer(_gen22P , 665)) 
            {
                 _gen22P = millis();
                _gen22O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen22P , 660)) 
            {
                  _gen22P = millis();
                _gen22O = 1;
            }
        }
    }
    _gtv1 = _gen22O;
    if (_gen22O) 
    {
         if (_trgrt12I) 
        {
             _trgrt12 = 0;
        }
         else 
        {
            _trgrt12 = 1;
            _trgrt12I = 1;
        }
    }
     else 
    {
        _trgrt12 = 0;
        _trgrt12I = 0;
    }
    ;
    if(_trgrt12) 
    {
        _tim78O = 1;
        _tim78I = 1;
    }
     else 
    {
         if(_tim78I) 
        {
            _tim78I = 0;
            _tim78P = millis();
        }
         else 
        {
             if (_tim78O) 
            {
                if (_isTimer(_tim78P, 330)) _tim78O = 0;
            }
        }
    }
    if (_tim78O) 
    {
        if (! _gen15I) 
        {
            _gen15I = 1;
            _gen15O = 1;
            _gen15P =  millis();
        }
    }
     else 
    {
        _gen15I = 0 ;
        _gen15O= 0;
    }
     if (_gen15I) 
    {
         if (_gen15O) 
        {
             if (_isTimer(_gen15P , 20)) 
            {
                 _gen15P = millis();
                _gen15O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen15P , 10)) 
            {
                  _gen15P = millis();
                _gen15O = 1;
            }
        }
    }
    if (_gen22O)
    {
         if (_tim81I) 
        {
             if (_isTimer(_tim81P, 330)) 
            {
                _tim81O = 1;
            }
        }
         else 
        {
            _tim81I =1;
            _tim81P = millis();
        }
    }
     else 
    {
        _tim81O = 0;
        _tim81I = 0;
    }
    if (_tim81O)
    {
         if (_tim84I) 
        {
             if (_isTimer(_tim84P, 30)) 
            {
                _tim84O = 1;
            }
        }
         else 
        {
            _tim84I =1;
            _tim84P = millis();
        }
    }
     else 
    {
        _tim84O = 0;
        _tim84I = 0;
    }
    if (_tim84O) 
    {
        if (! _gen28I) 
        {
            _gen28I = 1;
            _gen28O = 1;
            _gen28P =  millis();
        }
    }
     else 
    {
        _gen28I = 0 ;
        _gen28O= 0;
    }
     if (_gen28I) 
    {
         if (_gen28O) 
        {
             if (_isTimer(_gen28P , 20)) 
            {
                 _gen28P = millis();
                _gen28O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen28P , 10)) 
            {
                  _gen28P = millis();
                _gen28O = 1;
            }
        }
    }
    if (_tim78O)
    {
         if (_tim83I) 
        {
             if (_isTimer(_tim83P, 40)) 
            {
                _tim83O = 1;
            }
        }
         else 
        {
            _tim83I =1;
            _tim83P = millis();
        }
    }
     else 
    {
        _tim83O = 0;
        _tim83I = 0;
    }
    if (_tim83O) 
    {
        if (! _gen27I) 
        {
            _gen27I = 1;
            _gen27O = 1;
            _gen27P =  millis();
        }
    }
     else 
    {
        _gen27I = 0 ;
        _gen27O= 0;
    }
     if (_gen27I) 
    {
         if (_gen27O) 
        {
             if (_isTimer(_gen27P , 20)) 
            {
                 _gen27P = millis();
                _gen27O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen27P , 10)) 
            {
                  _gen27P = millis();
                _gen27O = 1;
            }
        }
    }
    if (0)
    {
        _count7_Value = 0;
    }
     else 
    {
        if (_gen27O)
        {
            if (! _count7I) 
            {
                _count7I = 1;
                if(_count7_Value < 11) 
                {
                    _count7_Value = _count7_Value + 1;
                }
            }
        }
         else 
        {
            _count7I = 0;
        }
        if (_gen28O)
        {
            if (! _count7_SCST) 
            {
                _count7_SCST = 1;
                if(_count7_Value > -1) 
                {
                    _count7_Value = _count7_Value - 1;
                }
            }
        }
         else 
        {
            _count7_SCST = 0;
        }
    }
    if((_count7_Value == 0))
    {
        _dms3Q0 = 1;
    }
    else 
    {
        _dms3Q0 = 0;
    }
    if((_count7_Value == 1))
    {
        _dms3Q1 = 1;
    }
    else 
    {
        _dms3Q1 = 0;
    }
    if((_count7_Value == 2))
    {
        _dms3Q2 = 1;
    }
    else 
    {
        _dms3Q2 = 0;
    }
    if((_count7_Value == 3))
    {
        _dms3Q3 = 1;
    }
    else 
    {
        _dms3Q3 = 0;
    }
    if((_count7_Value == 4))
    {
        _dms3Q4 = 1;
    }
    else 
    {
        _dms3Q4 = 0;
    }
    if((_count7_Value == 5))
    {
        _dms3Q5 = 1;
    }
    else 
    {
        _dms3Q5 = 0;
    }
    if((_count7_Value == 6))
    {
        _dms3Q6 = 1;
    }
    else 
    {
        _dms3Q6 = 0;
    }
    if((_count7_Value == 7))
    {
        _dms3Q7 = 1;
    }
    else 
    {
        _dms3Q7 = 0;
    }
    if((_count7_Value == 8))
    {
        _dms3Q8 = 1;
    }
    else 
    {
        _dms3Q8 = 0;
    }
    if((_count7_Value == 9))
    {
        _dms3Q9 = 1;
    }
    else 
    {
        _dms3Q9 = 0;
    }
    if((_count7_Value == 10))
    {
        _dms3Q10 = 1;
    }
    else 
    {
        _dms3Q10 = 0;
    }
    if (_tim81O) 
    {
        if (! _gen16I) 
        {
            _gen16I = 1;
            _gen16O = 1;
            _gen16P =  millis();
        }
    }
     else 
    {
        _gen16I = 0 ;
        _gen16O= 0;
    }
     if (_gen16I) 
    {
         if (_gen16O) 
        {
             if (_isTimer(_gen16P , 20)) 
            {
                 _gen16P = millis();
                _gen16O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen16P , 10)) 
            {
                  _gen16P = millis();
                _gen16O = 1;
            }
        }
    }
    if (0)
    {
        _count3_Value = 0;
    }
     else 
    {
        if (_gen15O)
        {
            if (! _count3I) 
            {
                _count3I = 1;
                if(_count3_Value < 11) 
                {
                    _count3_Value = _count3_Value + 1;
                }
            }
        }
         else 
        {
            _count3I = 0;
        }
        if (_gen16O)
        {
            if (! _count3_SCST) 
            {
                _count3_SCST = 1;
                if(_count3_Value > -1) 
                {
                    _count3_Value = _count3_Value - 1;
                }
            }
        }
         else 
        {
            _count3_SCST = 0;
        }
    }
    if((_count3_Value == 0))
    {
        _dms1Q0 = 1;
    }
    else 
    {
        _dms1Q0 = 0;
    }
    if((_count3_Value == 1))
    {
        _dms1Q1 = 1;
    }
    else 
    {
        _dms1Q1 = 0;
    }
    if((_count3_Value == 2))
    {
        _dms1Q2 = 1;
    }
    else 
    {
        _dms1Q2 = 0;
    }
    if((_count3_Value == 3))
    {
        _dms1Q3 = 1;
    }
    else 
    {
        _dms1Q3 = 0;
    }
    if((_count3_Value == 4))
    {
        _dms1Q4 = 1;
    }
    else 
    {
        _dms1Q4 = 0;
    }
    if((_count3_Value == 5))
    {
        _dms1Q5 = 1;
    }
    else 
    {
        _dms1Q5 = 0;
    }
    if((_count3_Value == 6))
    {
        _dms1Q6 = 1;
    }
    else 
    {
        _dms1Q6 = 0;
    }
    if((_count3_Value == 7))
    {
        _dms1Q7 = 1;
    }
    else 
    {
        _dms1Q7 = 0;
    }
    if((_count3_Value == 8))
    {
        _dms1Q8 = 1;
    }
    else 
    {
        _dms1Q8 = 0;
    }
    if((_count3_Value == 9))
    {
        _dms1Q9 = 1;
    }
    else 
    {
        _dms1Q9 = 0;
    }
    if((_count3_Value == 10))
    {
        _dms1Q10 = 1;
    }
    else 
    {
        _dms1Q10 = 0;
    }
    digitalWrite(12, ((((_gtv1) && (!(_dms1Q10)))) && (!(_dms3Q10))));
    digitalWrite(11, ((((_gtv1) && (!(_dms1Q9)))) && (!(_dms3Q9))));
    digitalWrite(10, ((((_gtv1) && (!(_dms1Q8)))) && (!(_dms3Q8))));
    digitalWrite(9, ((((_gtv1) && (!(_dms1Q7)))) && (!(_dms3Q7))));
    digitalWrite(8, ((((_gtv1) && (!(_dms1Q6)))) && (!(_dms3Q6))));
    digitalWrite(7, ((((_gtv1) && (!(_dms1Q5)))) && (!(_dms3Q5))));
    digitalWrite(6, ((((_gtv1) && (!(_dms1Q4)))) && (!(_dms3Q4))));
    digitalWrite(5, ((((_gtv1) && (!(_dms1Q3)))) && (!(_dms3Q3))));
    digitalWrite(3, ((((_gtv1) && (!(_dms1Q1)))) && (!(_dms3Q1))));
    digitalWrite(4, ((((_gtv1) && (!(_dms1Q2)))) && (!(_dms3Q2))));
    digitalWrite(2, ((((_gtv1) && (!(_dms1Q0)))) && (!(_dms3Q0))));
    if (_dms7Q8) 
    {
         if (_trgrt9I) 
        {
             _trgrt9 = 0;
        }
         else 
        {
            _trgrt9 = 1;
            _trgrt9I = 1;
        }
    }
     else 
    {
        _trgrt9 = 0;
        _trgrt9I = 0;
    }
    ;
    if(_trgrt9) 
    {
        _tim75O = 1;
        _tim75I = 1;
    }
     else 
    {
         if(_tim75I) 
        {
            _tim75I = 0;
            _tim75P = millis();
        }
         else 
        {
             if (_tim75O) 
            {
                if (_isTimer(_tim75P, 3305)) _tim75O = 0;
            }
        }
    }
    if (((_dms7Q8) || (_tim75O))) 
    {
        if (! _gen4I) 
        {
            _gen4I = 1;
            _gen4O = 1;
            _gen4P =  millis();
        }
    }
     else 
    {
        _gen4I = 0 ;
        _gen4O= 0;
    }
     if (_gen4I) 
    {
         if (_gen4O) 
        {
             if (_isTimer(_gen4P , 665)) 
            {
                 _gen4P = millis();
                _gen4O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen4P , 660)) 
            {
                  _gen4P = millis();
                _gen4O = 1;
            }
        }
    }
    _gtv1 = _gen4O;
    if (_gen4O) 
    {
         if (_trgrt11I) 
        {
             _trgrt11 = 0;
        }
         else 
        {
            _trgrt11 = 1;
            _trgrt11I = 1;
        }
    }
     else 
    {
        _trgrt11 = 0;
        _trgrt11I = 0;
    }
    ;
    if(_trgrt11) 
    {
        _tim79O = 1;
        _tim79I = 1;
    }
     else 
    {
         if(_tim79I) 
        {
            _tim79I = 0;
            _tim79P = millis();
        }
         else 
        {
             if (_tim79O) 
            {
                if (_isTimer(_tim79P, 330)) _tim79O = 0;
            }
        }
    }
    if (_tim79O) 
    {
        if (! _gen17I) 
        {
            _gen17I = 1;
            _gen17O = 1;
            _gen17P =  millis();
        }
    }
     else 
    {
        _gen17I = 0 ;
        _gen17O= 0;
    }
     if (_gen17I) 
    {
         if (_gen17O) 
        {
             if (_isTimer(_gen17P , 20)) 
            {
                 _gen17P = millis();
                _gen17O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen17P , 10)) 
            {
                  _gen17P = millis();
                _gen17O = 1;
            }
        }
    }
    if (_gen4O)
    {
         if (_tim80I) 
        {
             if (_isTimer(_tim80P, 330)) 
            {
                _tim80O = 1;
            }
        }
         else 
        {
            _tim80I =1;
            _tim80P = millis();
        }
    }
     else 
    {
        _tim80O = 0;
        _tim80I = 0;
    }
    if (_tim80O) 
    {
        if (! _gen24I) 
        {
            _gen24I = 1;
            _gen24O = 1;
            _gen24P =  millis();
        }
    }
     else 
    {
        _gen24I = 0 ;
        _gen24O= 0;
    }
     if (_gen24I) 
    {
         if (_gen24O) 
        {
             if (_isTimer(_gen24P , 20)) 
            {
                 _gen24P = millis();
                _gen24O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen24P , 10)) 
            {
                  _gen24P = millis();
                _gen24O = 1;
            }
        }
    }
    if (0)
    {
        _count4_Value = 0;
    }
     else 
    {
        if (_gen17O)
        {
            if (! _count4I) 
            {
                _count4I = 1;
                if(_count4_Value < 11) 
                {
                    _count4_Value = _count4_Value + 1;
                }
            }
        }
         else 
        {
            _count4I = 0;
        }
        if (_gen24O)
        {
            if (! _count4_SCST) 
            {
                _count4_SCST = 1;
                if(_count4_Value > -1) 
                {
                    _count4_Value = _count4_Value - 1;
                }
            }
        }
         else 
        {
            _count4_SCST = 0;
        }
    }
    if((_count4_Value == 0))
    {
        _dms2Q0 = 1;
    }
    else 
    {
        _dms2Q0 = 0;
    }
    if((_count4_Value == 1))
    {
        _dms2Q1 = 1;
    }
    else 
    {
        _dms2Q1 = 0;
    }
    if((_count4_Value == 2))
    {
        _dms2Q2 = 1;
    }
    else 
    {
        _dms2Q2 = 0;
    }
    if((_count4_Value == 3))
    {
        _dms2Q3 = 1;
    }
    else 
    {
        _dms2Q3 = 0;
    }
    if((_count4_Value == 4))
    {
        _dms2Q4 = 1;
    }
    else 
    {
        _dms2Q4 = 0;
    }
    if((_count4_Value == 5))
    {
        _dms2Q5 = 1;
    }
    else 
    {
        _dms2Q5 = 0;
    }
    if((_count4_Value == 6))
    {
        _dms2Q6 = 1;
    }
    else 
    {
        _dms2Q6 = 0;
    }
    if((_count4_Value == 7))
    {
        _dms2Q7 = 1;
    }
    else 
    {
        _dms2Q7 = 0;
    }
    if((_count4_Value == 8))
    {
        _dms2Q8 = 1;
    }
    else 
    {
        _dms2Q8 = 0;
    }
    if((_count4_Value == 9))
    {
        _dms2Q9 = 1;
    }
    else 
    {
        _dms2Q9 = 0;
    }
    if((_count4_Value == 10))
    {
        _dms2Q10 = 1;
    }
    else 
    {
        _dms2Q10 = 0;
    }
    digitalWrite(3, ((_gtv1) && (!(_dms2Q1))));
    digitalWrite(12, ((_gtv1) && (!(_dms2Q10))));
    digitalWrite(11, ((_gtv1) && (!(_dms2Q9))));
    digitalWrite(10, ((_gtv1) && (!(_dms2Q8))));
    digitalWrite(9, ((_gtv1) && (!(_dms2Q7))));
    digitalWrite(8, ((_gtv1) && (!(_dms2Q6))));
    digitalWrite(7, ((_gtv1) && (!(_dms2Q5))));
    digitalWrite(6, ((_gtv1) && (!(_dms2Q4))));
    digitalWrite(5, ((_gtv1) && (!(_dms2Q3))));
    digitalWrite(4, ((_gtv1) && (!(_dms2Q2))));
    digitalWrite(2, ((_gtv1) && (!(_dms2Q0))));
    if (_dms7Q7) 
    {
         if (_trgrt7I) 
        {
             _trgrt7 = 0;
        }
         else 
        {
            _trgrt7 = 1;
            _trgrt7I = 1;
        }
    }
     else 
    {
        _trgrt7 = 0;
        _trgrt7I = 0;
    }
    ;
    if(_trgrt7) 
    {
        _tim62O = 1;
        _tim62I = 1;
    }
     else 
    {
         if(_tim62I) 
        {
            _tim62I = 0;
            _tim62P = millis();
        }
         else 
        {
             if (_tim62O) 
            {
                if (_isTimer(_tim62P, 1250)) _tim62O = 0;
            }
        }
    }
    if (((_dms7Q7) || (_tim62O))) 
    {
        if (! _gen10I) 
        {
            _gen10I = 1;
            _gen10O = 1;
            _gen10P =  millis();
        }
    }
     else 
    {
        _gen10I = 0 ;
        _gen10O= 0;
    }
     if (_gen10I) 
    {
         if (_gen10O) 
        {
             if (_isTimer(_gen10P , 250)) 
            {
                 _gen10P = millis();
                _gen10O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen10P , 250)) 
            {
                  _gen10P = millis();
                _gen10O = 1;
            }
        }
    }
    if(((_gen10O) || (0))) 
    {
        _tim50O = 1;
        _tim50I = 1;
    }
     else 
    {
         if(_tim50I) 
        {
            _tim50I = 0;
            _tim50P = millis();
        }
         else 
        {
             if (_tim50O) 
            {
                if (_isTimer(_tim50P, 220)) _tim50O = 0;
            }
        }
    }
    if (_tim50O)
    {
         if (_tim61I) 
        {
             if (_isTimer(_tim61P, 200)) 
            {
                _tim61O = 1;
            }
        }
         else 
        {
            _tim61I =1;
            _tim61P = millis();
        }
    }
     else 
    {
        _tim61O = 0;
        _tim61I = 0;
    }
    digitalWrite(12, _tim61O);
    if(((_gen10O) || (0))) 
    {
        _tim49O = 1;
        _tim49I = 1;
    }
     else 
    {
         if(_tim49I) 
        {
            _tim49I = 0;
            _tim49P = millis();
        }
         else 
        {
             if (_tim49O) 
            {
                if (_isTimer(_tim49P, 200)) _tim49O = 0;
            }
        }
    }
    if (_tim49O)
    {
         if (_tim60I) 
        {
             if (_isTimer(_tim60P, 180)) 
            {
                _tim60O = 1;
            }
        }
         else 
        {
            _tim60I =1;
            _tim60P = millis();
        }
    }
     else 
    {
        _tim60O = 0;
        _tim60I = 0;
    }
    digitalWrite(11, _tim60O);
    if(((_gen10O) || (0))) 
    {
        _tim48O = 1;
        _tim48I = 1;
    }
     else 
    {
         if(_tim48I) 
        {
            _tim48I = 0;
            _tim48P = millis();
        }
         else 
        {
             if (_tim48O) 
            {
                if (_isTimer(_tim48P, 180)) _tim48O = 0;
            }
        }
    }
    if (_tim48O)
    {
         if (_tim59I) 
        {
             if (_isTimer(_tim59P, 160)) 
            {
                _tim59O = 1;
            }
        }
         else 
        {
            _tim59I =1;
            _tim59P = millis();
        }
    }
     else 
    {
        _tim59O = 0;
        _tim59I = 0;
    }
    digitalWrite(10, _tim59O);
    if(((_gen10O) || (0))) 
    {
        _tim47O = 1;
        _tim47I = 1;
    }
     else 
    {
         if(_tim47I) 
        {
            _tim47I = 0;
            _tim47P = millis();
        }
         else 
        {
             if (_tim47O) 
            {
                if (_isTimer(_tim47P, 160)) _tim47O = 0;
            }
        }
    }
    if (_tim47O)
    {
         if (_tim58I) 
        {
             if (_isTimer(_tim58P, 140)) 
            {
                _tim58O = 1;
            }
        }
         else 
        {
            _tim58I =1;
            _tim58P = millis();
        }
    }
     else 
    {
        _tim58O = 0;
        _tim58I = 0;
    }
    digitalWrite(9, _tim58O);
    if(((_gen10O) || (0))) 
    {
        _tim46O = 1;
        _tim46I = 1;
    }
     else 
    {
         if(_tim46I) 
        {
            _tim46I = 0;
            _tim46P = millis();
        }
         else 
        {
             if (_tim46O) 
            {
                if (_isTimer(_tim46P, 140)) _tim46O = 0;
            }
        }
    }
    if (_tim46O)
    {
         if (_tim57I) 
        {
             if (_isTimer(_tim57P, 120)) 
            {
                _tim57O = 1;
            }
        }
         else 
        {
            _tim57I =1;
            _tim57P = millis();
        }
    }
     else 
    {
        _tim57O = 0;
        _tim57I = 0;
    }
    digitalWrite(8, _tim57O);
    if(((_gen10O) || (0))) 
    {
        _tim45O = 1;
        _tim45I = 1;
    }
     else 
    {
         if(_tim45I) 
        {
            _tim45I = 0;
            _tim45P = millis();
        }
         else 
        {
             if (_tim45O) 
            {
                if (_isTimer(_tim45P, 120)) _tim45O = 0;
            }
        }
    }
    if (_tim45O)
    {
         if (_tim56I) 
        {
             if (_isTimer(_tim56P, 100)) 
            {
                _tim56O = 1;
            }
        }
         else 
        {
            _tim56I =1;
            _tim56P = millis();
        }
    }
     else 
    {
        _tim56O = 0;
        _tim56I = 0;
    }
    digitalWrite(7, _tim56O);
    if(((_gen10O) || (0))) 
    {
        _tim44O = 1;
        _tim44I = 1;
    }
     else 
    {
         if(_tim44I) 
        {
            _tim44I = 0;
            _tim44P = millis();
        }
         else 
        {
             if (_tim44O) 
            {
                if (_isTimer(_tim44P, 100)) _tim44O = 0;
            }
        }
    }
    if (_tim44O)
    {
         if (_tim55I) 
        {
             if (_isTimer(_tim55P, 80)) 
            {
                _tim55O = 1;
            }
        }
         else 
        {
            _tim55I =1;
            _tim55P = millis();
        }
    }
     else 
    {
        _tim55O = 0;
        _tim55I = 0;
    }
    digitalWrite(6, _tim55O);
    if(((_gen10O) || (0))) 
    {
        _tim43O = 1;
        _tim43I = 1;
    }
     else 
    {
         if(_tim43I) 
        {
            _tim43I = 0;
            _tim43P = millis();
        }
         else 
        {
             if (_tim43O) 
            {
                if (_isTimer(_tim43P, 80)) _tim43O = 0;
            }
        }
    }
    if (_tim43O)
    {
         if (_tim54I) 
        {
             if (_isTimer(_tim54P, 60)) 
            {
                _tim54O = 1;
            }
        }
         else 
        {
            _tim54I =1;
            _tim54P = millis();
        }
    }
     else 
    {
        _tim54O = 0;
        _tim54I = 0;
    }
    digitalWrite(5, _tim54O);
    if(((_gen10O) || (0))) 
    {
        _tim42O = 1;
        _tim42I = 1;
    }
     else 
    {
         if(_tim42I) 
        {
            _tim42I = 0;
            _tim42P = millis();
        }
         else 
        {
             if (_tim42O) 
            {
                if (_isTimer(_tim42P, 60)) _tim42O = 0;
            }
        }
    }
    if (_tim42O)
    {
         if (_tim53I) 
        {
             if (_isTimer(_tim53P, 40)) 
            {
                _tim53O = 1;
            }
        }
         else 
        {
            _tim53I =1;
            _tim53P = millis();
        }
    }
     else 
    {
        _tim53O = 0;
        _tim53I = 0;
    }
    digitalWrite(4, _tim53O);
    if(((_gen10O) || (0))) 
    {
        _tim41O = 1;
        _tim41I = 1;
    }
     else 
    {
         if(_tim41I) 
        {
            _tim41I = 0;
            _tim41P = millis();
        }
         else 
        {
             if (_tim41O) 
            {
                if (_isTimer(_tim41P, 40)) _tim41O = 0;
            }
        }
    }
    if (_tim41O)
    {
         if (_tim52I) 
        {
             if (_isTimer(_tim52P, 20)) 
            {
                _tim52O = 1;
            }
        }
         else 
        {
            _tim52I =1;
            _tim52P = millis();
        }
    }
     else 
    {
        _tim52O = 0;
        _tim52I = 0;
    }
    digitalWrite(3, _tim52O);
    if(((_gen10O) || (0))) 
    {
        _tim40O = 1;
        _tim40I = 1;
    }
     else 
    {
         if(_tim40I) 
        {
            _tim40I = 0;
            _tim40P = millis();
        }
         else 
        {
             if (_tim40O) 
            {
                if (_isTimer(_tim40P, 20)) _tim40O = 0;
            }
        }
    }
    if (_tim40O)
    {
         if (_tim51I) 
        {
             if (_isTimer(_tim51P, 0)) 
            {
                _tim51O = 1;
            }
        }
         else 
        {
            _tim51I =1;
            _tim51P = millis();
        }
    }
     else 
    {
        _tim51O = 0;
        _tim51I = 0;
    }
    digitalWrite(2, _tim51O);
    if (_dms7Q6) 
    {
         if (_trgrt5I) 
        {
             _trgrt5 = 0;
        }
         else 
        {
            _trgrt5 = 1;
            _trgrt5I = 1;
        }
    }
     else 
    {
        _trgrt5 = 0;
        _trgrt5I = 0;
    }
    ;
    if(_trgrt5) 
    {
        _tim39O = 1;
        _tim39I = 1;
    }
     else 
    {
         if(_tim39I) 
        {
            _tim39I = 0;
            _tim39P = millis();
        }
         else 
        {
             if (_tim39O) 
            {
                if (_isTimer(_tim39P, 2550)) _tim39O = 0;
            }
        }
    }
    if (((_dms7Q6) || (_tim39O))) 
    {
        if (! _gen2I) 
        {
            _gen2I = 1;
            _gen2O = 1;
            _gen2P =  millis();
        }
    }
     else 
    {
        _gen2I = 0 ;
        _gen2O= 0;
    }
     if (_gen2I) 
    {
         if (_gen2O) 
        {
             if (_isTimer(_gen2P , 500)) 
            {
                 _gen2P = millis();
                _gen2O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen2P , 500)) 
            {
                  _gen2P = millis();
                _gen2O = 1;
            }
        }
    }
    if(((_gen2O) || (0))) 
    {
        _tim27O = 1;
        _tim27I = 1;
    }
     else 
    {
         if(_tim27I) 
        {
            _tim27I = 0;
            _tim27P = millis();
        }
         else 
        {
             if (_tim27O) 
            {
                if (_isTimer(_tim27P, 440)) _tim27O = 0;
            }
        }
    }
    if (_tim27O)
    {
         if (_tim38I) 
        {
             if (_isTimer(_tim38P, 400)) 
            {
                _tim38O = 1;
            }
        }
         else 
        {
            _tim38I =1;
            _tim38P = millis();
        }
    }
     else 
    {
        _tim38O = 0;
        _tim38I = 0;
    }
    digitalWrite(12, _tim38O);
    if(((_gen2O) || (0))) 
    {
        _tim26O = 1;
        _tim26I = 1;
    }
     else 
    {
         if(_tim26I) 
        {
            _tim26I = 0;
            _tim26P = millis();
        }
         else 
        {
             if (_tim26O) 
            {
                if (_isTimer(_tim26P, 400)) _tim26O = 0;
            }
        }
    }
    if (_tim26O)
    {
         if (_tim37I) 
        {
             if (_isTimer(_tim37P, 360)) 
            {
                _tim37O = 1;
            }
        }
         else 
        {
            _tim37I =1;
            _tim37P = millis();
        }
    }
     else 
    {
        _tim37O = 0;
        _tim37I = 0;
    }
    digitalWrite(11, _tim37O);
    if(((_gen2O) || (0))) 
    {
        _tim25O = 1;
        _tim25I = 1;
    }
     else 
    {
         if(_tim25I) 
        {
            _tim25I = 0;
            _tim25P = millis();
        }
         else 
        {
             if (_tim25O) 
            {
                if (_isTimer(_tim25P, 360)) _tim25O = 0;
            }
        }
    }
    if (_tim25O)
    {
         if (_tim36I) 
        {
             if (_isTimer(_tim36P, 320)) 
            {
                _tim36O = 1;
            }
        }
         else 
        {
            _tim36I =1;
            _tim36P = millis();
        }
    }
     else 
    {
        _tim36O = 0;
        _tim36I = 0;
    }
    digitalWrite(10, _tim36O);
    if(((_gen2O) || (0))) 
    {
        _tim24O = 1;
        _tim24I = 1;
    }
     else 
    {
         if(_tim24I) 
        {
            _tim24I = 0;
            _tim24P = millis();
        }
         else 
        {
             if (_tim24O) 
            {
                if (_isTimer(_tim24P, 320)) _tim24O = 0;
            }
        }
    }
    if (_tim24O)
    {
         if (_tim35I) 
        {
             if (_isTimer(_tim35P, 280)) 
            {
                _tim35O = 1;
            }
        }
         else 
        {
            _tim35I =1;
            _tim35P = millis();
        }
    }
     else 
    {
        _tim35O = 0;
        _tim35I = 0;
    }
    digitalWrite(9, _tim35O);
    if(((_gen2O) || (0))) 
    {
        _tim23O = 1;
        _tim23I = 1;
    }
     else 
    {
         if(_tim23I) 
        {
            _tim23I = 0;
            _tim23P = millis();
        }
         else 
        {
             if (_tim23O) 
            {
                if (_isTimer(_tim23P, 280)) _tim23O = 0;
            }
        }
    }
    if (_tim23O)
    {
         if (_tim34I) 
        {
             if (_isTimer(_tim34P, 240)) 
            {
                _tim34O = 1;
            }
        }
         else 
        {
            _tim34I =1;
            _tim34P = millis();
        }
    }
     else 
    {
        _tim34O = 0;
        _tim34I = 0;
    }
    digitalWrite(8, _tim34O);
    if(((_gen2O) || (0))) 
    {
        _tim22O = 1;
        _tim22I = 1;
    }
     else 
    {
         if(_tim22I) 
        {
            _tim22I = 0;
            _tim22P = millis();
        }
         else 
        {
             if (_tim22O) 
            {
                if (_isTimer(_tim22P, 240)) _tim22O = 0;
            }
        }
    }
    if (_tim22O)
    {
         if (_tim33I) 
        {
             if (_isTimer(_tim33P, 200)) 
            {
                _tim33O = 1;
            }
        }
         else 
        {
            _tim33I =1;
            _tim33P = millis();
        }
    }
     else 
    {
        _tim33O = 0;
        _tim33I = 0;
    }
    digitalWrite(7, _tim33O);
    if(((_gen2O) || (0))) 
    {
        _tim21O = 1;
        _tim21I = 1;
    }
     else 
    {
         if(_tim21I) 
        {
            _tim21I = 0;
            _tim21P = millis();
        }
         else 
        {
             if (_tim21O) 
            {
                if (_isTimer(_tim21P, 200)) _tim21O = 0;
            }
        }
    }
    if (_tim21O)
    {
         if (_tim32I) 
        {
             if (_isTimer(_tim32P, 160)) 
            {
                _tim32O = 1;
            }
        }
         else 
        {
            _tim32I =1;
            _tim32P = millis();
        }
    }
     else 
    {
        _tim32O = 0;
        _tim32I = 0;
    }
    digitalWrite(6, _tim32O);
    if(((_gen2O) || (0))) 
    {
        _tim20O = 1;
        _tim20I = 1;
    }
     else 
    {
         if(_tim20I) 
        {
            _tim20I = 0;
            _tim20P = millis();
        }
         else 
        {
             if (_tim20O) 
            {
                if (_isTimer(_tim20P, 160)) _tim20O = 0;
            }
        }
    }
    if (_tim20O)
    {
         if (_tim31I) 
        {
             if (_isTimer(_tim31P, 120)) 
            {
                _tim31O = 1;
            }
        }
         else 
        {
            _tim31I =1;
            _tim31P = millis();
        }
    }
     else 
    {
        _tim31O = 0;
        _tim31I = 0;
    }
    digitalWrite(5, _tim31O);
    if(((_gen2O) || (0))) 
    {
        _tim19O = 1;
        _tim19I = 1;
    }
     else 
    {
         if(_tim19I) 
        {
            _tim19I = 0;
            _tim19P = millis();
        }
         else 
        {
             if (_tim19O) 
            {
                if (_isTimer(_tim19P, 120)) _tim19O = 0;
            }
        }
    }
    if (_tim19O)
    {
         if (_tim30I) 
        {
             if (_isTimer(_tim30P, 80)) 
            {
                _tim30O = 1;
            }
        }
         else 
        {
            _tim30I =1;
            _tim30P = millis();
        }
    }
     else 
    {
        _tim30O = 0;
        _tim30I = 0;
    }
    digitalWrite(4, _tim30O);
    if(((_gen2O) || (0))) 
    {
        _tim18O = 1;
        _tim18I = 1;
    }
     else 
    {
         if(_tim18I) 
        {
            _tim18I = 0;
            _tim18P = millis();
        }
         else 
        {
             if (_tim18O) 
            {
                if (_isTimer(_tim18P, 80)) _tim18O = 0;
            }
        }
    }
    if (_tim18O)
    {
         if (_tim29I) 
        {
             if (_isTimer(_tim29P, 40)) 
            {
                _tim29O = 1;
            }
        }
         else 
        {
            _tim29I =1;
            _tim29P = millis();
        }
    }
     else 
    {
        _tim29O = 0;
        _tim29I = 0;
    }
    digitalWrite(3, _tim29O);
    if(((_gen2O) || (0))) 
    {
        _tim17O = 1;
        _tim17I = 1;
    }
     else 
    {
         if(_tim17I) 
        {
            _tim17I = 0;
            _tim17P = millis();
        }
         else 
        {
             if (_tim17O) 
            {
                if (_isTimer(_tim17P, 40)) _tim17O = 0;
            }
        }
    }
    if (_tim17O)
    {
         if (_tim28I) 
        {
             if (_isTimer(_tim28P, 0)) 
            {
                _tim28O = 1;
            }
        }
         else 
        {
            _tim28I =1;
            _tim28P = millis();
        }
    }
     else 
    {
        _tim28O = 0;
        _tim28I = 0;
    }
    digitalWrite(2, _tim28O);
    if (_dms7Q5) 
    {
         if (_trgrt4I) 
        {
             _trgrt4 = 0;
        }
         else 
        {
            _trgrt4 = 1;
            _trgrt4I = 1;
        }
    }
     else 
    {
        _trgrt4 = 0;
        _trgrt4I = 0;
    }
    ;
    if(_trgrt4) 
    {
        _tim16O = 1;
        _tim16I = 1;
    }
     else 
    {
         if(_tim16I) 
        {
            _tim16I = 0;
            _tim16P = millis();
        }
         else 
        {
             if (_tim16O) 
            {
                if (_isTimer(_tim16P, 3000)) _tim16O = 0;
            }
        }
    }
    if (((_dms7Q5) || (_tim16O))) 
    {
        if (! _gen11I) 
        {
            _gen11I = 1;
            _gen11O = 1;
            _gen11P =  millis();
        }
    }
     else 
    {
        _gen11I = 0 ;
        _gen11O= 0;
    }
     if (_gen11I) 
    {
         if (_gen11O) 
        {
             if (_isTimer(_gen11P , 600)) 
            {
                 _gen11P = millis();
                _gen11O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen11P , 500)) 
            {
                  _gen11P = millis();
                _gen11O = 1;
            }
        }
    }
    if (((_gen11O) || (0)))
    {
         if (_tim73I) 
        {
             if (_isTimer(_tim73P, 500)) 
            {
                _tim73O = 1;
            }
        }
         else 
        {
            _tim73I =1;
            _tim73P = millis();
        }
    }
     else 
    {
        _tim73O = 0;
        _tim73I = 0;
    }
    digitalWrite(12, ((_tim73O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim72I) 
        {
             if (_isTimer(_tim72P, 450)) 
            {
                _tim72O = 1;
            }
        }
         else 
        {
            _tim72I =1;
            _tim72P = millis();
        }
    }
     else 
    {
        _tim72O = 0;
        _tim72I = 0;
    }
    digitalWrite(11, ((_tim72O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim71I) 
        {
             if (_isTimer(_tim71P, 400)) 
            {
                _tim71O = 1;
            }
        }
         else 
        {
            _tim71I =1;
            _tim71P = millis();
        }
    }
     else 
    {
        _tim71O = 0;
        _tim71I = 0;
    }
    digitalWrite(10, ((_tim71O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim70I) 
        {
             if (_isTimer(_tim70P, 350)) 
            {
                _tim70O = 1;
            }
        }
         else 
        {
            _tim70I =1;
            _tim70P = millis();
        }
    }
     else 
    {
        _tim70O = 0;
        _tim70I = 0;
    }
    digitalWrite(9, ((_tim70O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim69I) 
        {
             if (_isTimer(_tim69P, 300)) 
            {
                _tim69O = 1;
            }
        }
         else 
        {
            _tim69I =1;
            _tim69P = millis();
        }
    }
     else 
    {
        _tim69O = 0;
        _tim69I = 0;
    }
    digitalWrite(8, ((_tim69O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim68I) 
        {
             if (_isTimer(_tim68P, 250)) 
            {
                _tim68O = 1;
            }
        }
         else 
        {
            _tim68I =1;
            _tim68P = millis();
        }
    }
     else 
    {
        _tim68O = 0;
        _tim68I = 0;
    }
    digitalWrite(7, ((_tim68O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim67I) 
        {
             if (_isTimer(_tim67P, 200)) 
            {
                _tim67O = 1;
            }
        }
         else 
        {
            _tim67I =1;
            _tim67P = millis();
        }
    }
     else 
    {
        _tim67O = 0;
        _tim67I = 0;
    }
    digitalWrite(6, ((_tim67O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim66I) 
        {
             if (_isTimer(_tim66P, 150)) 
            {
                _tim66O = 1;
            }
        }
         else 
        {
            _tim66I =1;
            _tim66P = millis();
        }
    }
     else 
    {
        _tim66O = 0;
        _tim66I = 0;
    }
    digitalWrite(5, ((_tim66O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim65I) 
        {
             if (_isTimer(_tim65P, 100)) 
            {
                _tim65O = 1;
            }
        }
         else 
        {
            _tim65I =1;
            _tim65P = millis();
        }
    }
     else 
    {
        _tim65O = 0;
        _tim65I = 0;
    }
    digitalWrite(4, ((_tim65O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim64I) 
        {
             if (_isTimer(_tim64P, 50)) 
            {
                _tim64O = 1;
            }
        }
         else 
        {
            _tim64I =1;
            _tim64P = millis();
        }
    }
     else 
    {
        _tim64O = 0;
        _tim64I = 0;
    }
    digitalWrite(3, ((_tim64O) || (0)));
    if (((_gen11O) || (0)))
    {
         if (_tim63I) 
        {
             if (_isTimer(_tim63P, 0)) 
            {
                _tim63O = 1;
            }
        }
         else 
        {
            _tim63I =1;
            _tim63P = millis();
        }
    }
     else 
    {
        _tim63O = 0;
        _tim63I = 0;
    }
    digitalWrite(2, ((_tim63O) || (0)));
    if (((!(_gen11O)) && (_tim16O))) 
    {
         if (_trgrt14I) 
        {
             _trgrt14 = 0;
        }
         else 
        {
            _trgrt14 = 1;
            _trgrt14I = 1;
        }
    }
     else 
    {
        _trgrt14 = 0;
        _trgrt14I = 0;
    }
    ;
    if(_trgrt14) 
    {
        _tim85O = 1;
        _tim85I = 1;
    }
     else 
    {
         if(_tim85I) 
        {
            _tim85I = 0;
            _tim85P = millis();
        }
         else 
        {
             if (_tim85O) 
            {
                if (_isTimer(_tim85P, 240)) _tim85O = 0;
            }
        }
    }
    if (_tim85O) 
    {
        if (! _gen13I) 
        {
            _gen13I = 1;
            _gen13O = 1;
            _gen13P =  millis();
        }
    }
     else 
    {
        _gen13I = 0 ;
        _gen13O= 0;
    }
     if (_gen13I) 
    {
         if (_gen13O) 
        {
             if (_isTimer(_gen13P , 30)) 
            {
                 _gen13P = millis();
                _gen13O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen13P , 30)) 
            {
                  _gen13P = millis();
                _gen13O = 1;
            }
        }
    }
    digitalWrite(12, ((_gen13O) || (0)));
    digitalWrite(11, ((_gen13O) || (0)));
    digitalWrite(10, ((_gen13O) || (0)));
    digitalWrite(9, ((_gen13O) || (0)));
    digitalWrite(8, ((_gen13O) || (0)));
    digitalWrite(7, ((_gen13O) || (0)));
    digitalWrite(6, ((_gen13O) || (0)));
    digitalWrite(5, ((_gen13O) || (0)));
    digitalWrite(4, ((_gen13O) || (0)));
    digitalWrite(3, ((_gen13O) || (0)));
    digitalWrite(2, ((_gen13O) || (0)));
    if (_dms7Q4) 
    {
         if (_trgrt3I) 
        {
             _trgrt3 = 0;
        }
         else 
        {
            _trgrt3 = 1;
            _trgrt3I = 1;
        }
    }
     else 
    {
        _trgrt3 = 0;
        _trgrt3I = 0;
    }
    ;
    if(_trgrt3) 
    {
        _tim3O = 1;
        _tim3I = 1;
    }
     else 
    {
         if(_tim3I) 
        {
            _tim3I = 0;
            _tim3P = millis();
        }
         else 
        {
             if (_tim3O) 
            {
                if (_isTimer(_tim3P, 1950)) _tim3O = 0;
            }
        }
    }
    if (((_dms7Q4) || (_tim3O))) 
    {
        if (! _gen20I) 
        {
            _gen20I = 1;
            _gen20O = 1;
            _gen20P =  millis();
        }
    }
     else 
    {
        _gen20I = 0 ;
        _gen20O= 0;
    }
     if (_gen20I) 
    {
         if (_gen20O) 
        {
             if (_isTimer(_gen20P , 550)) 
            {
                 _gen20P = millis();
                _gen20O = 0;
            }
        }
         else  
        {
             if (_isTimer(_gen20P , 150)) 
            {
                  _gen20P = millis();
                _gen20O = 1;
            }
        }
    }
    if (((_gen20O) || (0)))
    {
         if (_tim15I) 
        {
             if (_isTimer(_tim15P, 500)) 
            {
                _tim15O = 1;
            }
        }
         else 
        {
            _tim15I =1;
            _tim15P = millis();
        }
    }
     else 
    {
        _tim15O = 0;
        _tim15I = 0;
    }
    digitalWrite(12, _tim15O);
    if (((_gen20O) || (0)))
    {
         if (_tim14I) 
        {
             if (_isTimer(_tim14P, 450)) 
            {
                _tim14O = 1;
            }
        }
         else 
        {
            _tim14I =1;
            _tim14P = millis();
        }
    }
     else 
    {
        _tim14O = 0;
        _tim14I = 0;
    }
    digitalWrite(11, _tim14O);
    if (((_gen20O) || (0)))
    {
         if (_tim13I) 
        {
             if (_isTimer(_tim13P, 400)) 
            {
                _tim13O = 1;
            }
        }
         else 
        {
            _tim13I =1;
            _tim13P = millis();
        }
    }
     else 
    {
        _tim13O = 0;
        _tim13I = 0;
    }
    digitalWrite(10, _tim13O);
    if (((_gen20O) || (0)))
    {
         if (_tim12I) 
        {
             if (_isTimer(_tim12P, 350)) 
            {
                _tim12O = 1;
            }
        }
         else 
        {
            _tim12I =1;
            _tim12P = millis();
        }
    }
     else 
    {
        _tim12O = 0;
        _tim12I = 0;
    }
    digitalWrite(9, _tim12O);
    if (((_gen20O) || (0)))
    {
         if (_tim11I) 
        {
             if (_isTimer(_tim11P, 300)) 
            {
                _tim11O = 1;
            }
        }
         else 
        {
            _tim11I =1;
            _tim11P = millis();
        }
    }
     else 
    {
        _tim11O = 0;
        _tim11I = 0;
    }
    digitalWrite(8, _tim11O);
    if (((_gen20O) || (0)))
    {
         if (_tim10I) 
        {
             if (_isTimer(_tim10P, 250)) 
            {
                _tim10O = 1;
            }
        }
         else 
        {
            _tim10I =1;
            _tim10P = millis();
        }
    }
     else 
    {
        _tim10O = 0;
        _tim10I = 0;
    }
    digitalWrite(7, _tim10O);
    if (((_gen20O) || (0)))
    {
         if (_tim9I) 
        {
             if (_isTimer(_tim9P, 200)) 
            {
                _tim9O = 1;
            }
        }
         else 
        {
            _tim9I =1;
            _tim9P = millis();
        }
    }
     else 
    {
        _tim9O = 0;
        _tim9I = 0;
    }
    digitalWrite(6, _tim9O);
    if (((_gen20O) || (0)))
    {
         if (_tim8I) 
        {
             if (_isTimer(_tim8P, 150)) 
            {
                _tim8O = 1;
            }
        }
         else 
        {
            _tim8I =1;
            _tim8P = millis();
        }
    }
     else 
    {
        _tim8O = 0;
        _tim8I = 0;
    }
    digitalWrite(5, _tim8O);
    if (((_gen20O) || (0)))
    {
         if (_tim7I) 
        {
             if (_isTimer(_tim7P, 100)) 
            {
                _tim7O = 1;
            }
        }
         else 
        {
            _tim7I =1;
            _tim7P = millis();
        }
    }
     else 
    {
        _tim7O = 0;
        _tim7I = 0;
    }
    digitalWrite(4, _tim7O);
    if (((_gen20O) || (0)))
    {
         if (_tim5I) 
        {
             if (_isTimer(_tim5P, 50)) 
            {
                _tim5O = 1;
            }
        }
         else 
        {
            _tim5I =1;
            _tim5P = millis();
        }
    }
     else 
    {
        _tim5O = 0;
        _tim5I = 0;
    }
    digitalWrite(3, _tim5O);
    if (((_gen20O) || (0)))
    {
         if (_tim4I) 
        {
             if (_isTimer(_tim4P, 0)) 
            {
                _tim4O = 1;
            }
        }
         else 
        {
            _tim4I =1;
            _tim4P = millis();
        }
    }
     else 
    {
        _tim4O = 0;
        _tim4I = 0;
    }
    digitalWrite(2, _tim4O);
    if (_dms7Q3) 
    {
         if (_trgrt2I) 
        {
             _trgrt2 = 0;
        }
         else 
        {
            _trgrt2 = 1;
            _trgrt2I = 1;
        }
    }
     else 
    {
        _trgrt2 = 0;
        _trgrt2I = 0;
    }
    ;
    if(_trgrt2) 
    {
        _tim2O = 1;
        _tim2I = 1;
    }
     else 
    {
         if(_tim2I) 
        {
            _tim2I = 0;
            _tim2P = millis();
        }
         else 
        {
             if (_tim2O) 
            {
                if (_isTimer(_tim2P, 1600)) _tim2O = 0;
            }
        }
    }
    if (((_dms7Q3) || (_tim2O))) 
    {
         if (! _gen6I) 
        {
            _gen6I = 1;
            _gen6O = 1;
            _gen6P = millis();
        }
    }
     else 
    {
        _gen6I = 0 ;
        _gen6O= 0;
    }
    if (_gen6I) 
    {
          if (_isTimer (_gen6P , 270)) 
        {
             _gen6P = millis();
            _gen6O = ! _gen6O;
        }
    }
    if (_gen6O) 
    {
         if (! _gen9I) 
        {
            _gen9I = 1;
            _gen9O = 1;
            _gen9P = millis();
        }
    }
     else 
    {
        _gen9I = 0 ;
        _gen9O= 0;
    }
    if (_gen9I) 
    {
          if (_isTimer (_gen9P , 45)) 
        {
             _gen9P = millis();
            _gen9O = ! _gen9O;
        }
    }
    digitalWrite(12, ((_gen9O) || (0)));
    digitalWrite(11, ((_gen9O) || (0)));
    digitalWrite(10, ((_gen9O) || (0)));
    digitalWrite(9, ((_gen9O) || (0)));
    digitalWrite(8, ((_gen9O) || (0)));
    digitalWrite(7, ((_gen9O) || (0)));
    digitalWrite(6, ((_gen9O) || (0)));
    digitalWrite(5, ((_gen9O) || (0)));
    digitalWrite(4, ((_gen9O) || (0)));
    digitalWrite(3, ((_gen9O) || (0)));
    digitalWrite(2, ((_gen9O) || (0)));
    if (_dms7Q2) 
    {
         if (_trgrt1I) 
        {
             _trgrt1 = 0;
        }
         else 
        {
            _trgrt1 = 1;
            _trgrt1I = 1;
        }
    }
     else 
    {
        _trgrt1 = 0;
        _trgrt1I = 0;
    }
    ;
    if(_trgrt1) 
    {
        _tim1O = 1;
        _tim1I = 1;
    }
     else 
    {
         if(_tim1I) 
        {
            _tim1I = 0;
            _tim1P = millis();
        }
         else 
        {
             if (_tim1O) 
            {
                if (_isTimer(_tim1P, 1600)) _tim1O = 0;
            }
        }
    }
    if (((_dms7Q2) || (_tim1O))) 
    {
         if (! _gen19I) 
        {
            _gen19I = 1;
            _gen19O = 1;
            _gen19P = millis();
        }
    }
     else 
    {
        _gen19I = 0 ;
        _gen19O= 0;
    }
    if (_gen19I) 
    {
          if (_isTimer (_gen19P , (1600)/(5.9))) 
        {
             _gen19P = millis();
            _gen19O = ! _gen19O;
        }
    }
    digitalWrite(12, ((_gen19O) || (0)));
    digitalWrite(11, ((_gen19O) || (0)));
    digitalWrite(10, ((_gen19O) || (0)));
    digitalWrite(9, ((_gen19O) || (0)));
    digitalWrite(8, ((_gen19O) || (0)));
    digitalWrite(7, ((_gen19O) || (0)));
    digitalWrite(6, ((_gen19O) || (0)));
    digitalWrite(5, ((_gen19O) || (0)));
    digitalWrite(4, ((_gen19O) || (0)));
    digitalWrite(3, ((_gen19O) || (0)));
    digitalWrite(2, ((_gen19O) || (0)));
    if (_dms7Q1) 
    {
         if (_trgrt6I) 
        {
             _trgrt6 = 0;
        }
         else 
        {
            _trgrt6 = 1;
            _trgrt6I = 1;
        }
    }
     else 
    {
        _trgrt6 = 0;
        _trgrt6I = 0;
    }
    ;
    if(_trgrt6) 
    {
        _tim6O = 1;
        _tim6I = 1;
    }
     else 
    {
         if(_tim6I) 
        {
            _tim6I = 0;
            _tim6P = millis();
        }
         else 
        {
             if (_tim6O) 
            {
                if (_isTimer(_tim6P, 2600)) _tim6O = 0;
            }
        }
    }
    if (((_dms7Q1) || (_tim6O))) 
    {
         if (! _gen18I) 
        {
            _gen18I = 1;
            _gen18O = 1;
            _gen18P = millis();
        }
    }
     else 
    {
        _gen18I = 0 ;
        _gen18O= 0;
    }
    if (_gen18I) 
    {
          if (_isTimer (_gen18P , (2600)/(5.9))) 
        {
             _gen18P = millis();
            _gen18O = ! _gen18O;
        }
    }
    digitalWrite(12, ((_gen18O) || (0)));
    digitalWrite(11, ((_gen18O) || (0)));
    digitalWrite(10, ((_gen18O) || (0)));
    digitalWrite(9, ((_gen18O) || (0)));
    digitalWrite(8, ((_gen18O) || (0)));
    digitalWrite(7, ((_gen18O) || (0)));
    digitalWrite(6, ((_gen18O) || (0)));
    digitalWrite(5, ((_gen18O) || (0)));
    digitalWrite(4, ((_gen18O) || (0)));
    digitalWrite(3, ((_gen18O) || (0)));
    digitalWrite(2, ((_gen18O) || (0)));
    if (_dms7Q0) 
    {
         if (_trgrt13I) 
        {
             _trgrt13 = 0;
        }
         else 
        {
            _trgrt13 = 1;
            _trgrt13I = 1;
        }
    }
     else 
    {
        _trgrt13 = 0;
        _trgrt13I = 0;
    }
    ;
    if(_trgrt13) 
    {
        _tim82O = 1;
        _tim82I = 1;
    }
     else 
    {
         if(_tim82I) 
        {
            _tim82I = 0;
            _tim82P = millis();
        }
         else 
        {
             if (_tim82O) 
            {
                if (_isTimer(_tim82P, 3600)) _tim82O = 0;
            }
        }
    }
    if (((_dms7Q0) || (_tim82O))) 
    {
         if (! _gen26I) 
        {
            _gen26I = 1;
            _gen26O = 1;
            _gen26P = millis();
        }
    }
     else 
    {
        _gen26I = 0 ;
        _gen26O= 0;
    }
    if (_gen26I) 
    {
          if (_isTimer (_gen26P , (3600)/(5.9))) 
        {
             _gen26P = millis();
            _gen26O = ! _gen26O;
        }
    }
    digitalWrite(12, ((_gen26O) || (0)));
    digitalWrite(11, ((_gen26O) || (0)));
    digitalWrite(10, ((_gen26O) || (0)));
    digitalWrite(9, ((_gen26O) || (0)));
    digitalWrite(8, ((_gen26O) || (0)));
    digitalWrite(7, ((_gen26O) || (0)));
    digitalWrite(6, ((_gen26O) || (0)));
    digitalWrite(5, ((_gen26O) || (0)));
    digitalWrite(4, ((_gen26O) || (0)));
    digitalWrite(3, ((_gen26O) || (0)));
    digitalWrite(2, ((_gen26O) || (0)));
}
bool _isTimer(unsigned long startTime, unsigned long period)
{
    unsigned long currentTime;
    currentTime = millis();
    if (currentTime>= startTime) 
    {
        return (currentTime>=(startTime + period));
    }
     else 
    {
        return (currentTime >=(4294967295-startTime+period));
    }
}
byte readByteFromEEPROM(int addres, byte bitAddres, byte chipAddres)
{
    return EEPROM.read(addres);
}
void updateByteToEEPROM(int addres, byte bitAddres, byte chipAddres, byte value)
{
    return EEPROM.update(addres, value);
}
int readIntegerFromEEPROM(int addres, byte bitAddres, byte chipAddres)
{
    byte hight = readByteFromEEPROM(addres,  bitAddres,  chipAddres);
    byte low = readByteFromEEPROM((addres+1),  bitAddres,  chipAddres);
    return  word(hight, low);
}
void updateIntegerToEEPROM(int addres, byte bitAddres, byte chipAddres, int value)
{
    updateByteToEEPROM(addres,  bitAddres,  chipAddres, highByte(value));
    updateByteToEEPROM((addres+1),  bitAddres,  chipAddres, lowByte(value));
}
