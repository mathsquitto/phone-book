#ifndef CRUSSIFICATION_H
#define CRUSSIFICATION_H
#include <stdio.h>


int ___cmplet ( const char* str, const char* charRus )
{
    if( str[ 0 ] == charRus[ 0 ] && str[ 1 ] == charRus[ 1 ] )
    {
        return 1 ;
    }
    else
    {
        return 0;
    }
}

#define ___MAX 10000
    char ___buff [ ___MAX ];

char* _torus ( const char* str )
{
    const char* ___c_rusAlph = "АаБбВвГгДдЕеЁёЖжЗзИиЙйКкЛлМмНнОоПпРрСсТтУуФфХхЦцЧчШшЩщЪъЫыЬьЭэЮюЯя№";
    short int ___si_step = 2;
#define ___MAXL 67
    short int ___si_arrayLetter[ ___MAXL ] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34,
                                       36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68,
                                       70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 102,
                                       104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126, 128, 130, 132 };
    char ___charRus [ 2 ];
    char ___compRus [ 2 ];

    ___buff [ 0 ] = '\0';
    int SIZE = 0;
    int i;
    int j;
    int k = 0;
    for( i = 0; str[ i ] != '\0'; i++ )
    {
        SIZE++;
    }
    if( SIZE > ( ___MAX * 2 ) - 2 )
    {
        return ___buff;
    }

    for( i = 0; str[ i ] != '\0'; i += ___si_step )
    {
        ___compRus[ 0 ] = str[ i ];
        ___compRus[ 1 ] = str [ i + 1 ];
        for( j = 0; j < ___MAXL; j++ )
        {
            ___charRus[ 0 ] = ___c_rusAlph[ ___si_arrayLetter [ j ] ];
            ___charRus[ 1 ] = ___c_rusAlph[ ___si_arrayLetter [ j ] + 1 ];

            if( ___cmplet( ___compRus, ___charRus ) )
            {
                switch( j )
                {
                case 0:
                    ___buff[ k++ ] = 128;
                    break;

                case 1:
                    ___buff[ k++ ] = 160;
                    break;

                case 2:
                    ___buff[ k++ ] = 129;
                    break;

                case 3:
                    ___buff[ k++ ] = 161;
                    break;

                case 4:
                    ___buff[ k++ ] = 130;
                    break;

                case 5:
                    ___buff[ k++ ] = 162;
                    break;

                case 6:
                    ___buff[ k++ ] = 131;
                    break;

                case 7:
                    ___buff[ k++ ] = 163;
                    break;

                case 8:
                    ___buff[ k++ ] = 132;
                    break;

                case 9:
                    ___buff[ k++ ] = 164;
                    break;

                case 10:
                    ___buff[ k++ ] = 133;
                    break;

                case 11:
                    ___buff[ k++ ] = 165;
                    break;

                case 12:
                    ___buff[ k++ ] = 240;
                    break;

                case 13:
                    ___buff[ k++ ] = 241;
                    break;

                case 14:
                    ___buff[ k++ ] = 134;
                    break;

                case 15:
                    ___buff[ k++ ] = 166;
                    break;

                case 16:
                    ___buff[ k++ ] = 135;
                    break;

                case 17:
                    ___buff[ k++ ] = 167;
                    break;

                case 18:
                    ___buff[ k++ ] = 136;
                    break;

                case 19:
                    ___buff[ k++ ] = 168;
                    break;

                case 20:
                    ___buff[ k++ ] = 137;
                    break;

                case 21:
                    ___buff[ k++ ] = 169;
                    break;

                case 22:
                    ___buff[ k++ ] = 138;
                    break;

                case 23:
                    ___buff[ k++ ] = 170;
                    break;

                case 24:
                    ___buff[ k++ ] = 139;
                    break;

                case 25:
                    ___buff[ k++ ] = 171;
                    break;

                case 26:
                    ___buff[ k++ ] = 140;
                    break;

                case 27:
                    ___buff[ k++ ] = 172;
                    break;

                case 28:
                    ___buff[ k++ ] = 141;
                    break;

                case 29:
                    ___buff[ k++ ] = 173;
                    break;

                case 30:
                    ___buff[ k++ ] = 142;
                    break;

                case 31:
                    ___buff[ k++ ] = 174;
                    break;

                case 32:
                    ___buff[ k++ ] = 143;
                    break;

                case 33:
                    ___buff[ k++ ] = 175;
                    break;

                case 34:
                    ___buff[ k++ ] = 144;
                    break;

                case 35:
                    ___buff[ k++ ] = 224;
                    break;

                case 36:
                    ___buff[ k++ ] = 145;
                    break;

                case 37:
                    ___buff[ k++ ] = 225;
                    break;

                case 38:
                    ___buff[ k++ ] = 146;
                    break;

                case 39:
                    ___buff[ k++ ] = 226;
                    break;

                case 40:
                    ___buff[ k++ ] = 147;
                    break;

                case 41:
                    ___buff[ k++ ] = 227;
                    break;

                case 42:
                    ___buff[ k++ ] = 148;
                    break;

                case 43:
                    ___buff[ k++ ] = 228;
                    break;

                case 44:
                    ___buff[ k++ ] = 149;
                    break;

                case 45:
                    ___buff[ k++ ] = 229;
                    break;

                case 46:
                    ___buff[ k++ ] = 150;
                    break;

                case 47:
                    ___buff[ k++ ] = 230;
                    break;

                case 48:
                    ___buff[ k++ ] = 151;
                    break;

                case 49:
                    ___buff[ k++ ] = 231;
                    break;

                case 50:
                    ___buff[ k++ ] = 152;
                    break;

                case 51:
                    ___buff[ k++ ] = 232;
                    break;

                case 52:
                    ___buff[ k++ ] = 153;
                    break;

                case 53:
                    ___buff[ k++ ] = 233;
                    break;

                case 54:
                    ___buff[ k++ ] = 154;
                    break;

                case 55:
                    ___buff[ k++ ] = 234;
                    break;

                case 56:
                    ___buff[ k++ ] = 155;
                    break;

                case 57:
                    ___buff[ k++ ] = 235;
                    break;

                case 58:
                    ___buff[ k++ ] = 156;
                    break;

                case 59:
                    ___buff[ k++ ] = 236;
                    break;

                case 60:
                    ___buff[ k++ ] = 157;
                    break;

                case 61:
                    ___buff[ k++ ] = 237;
                    break;

                case 62:
                    ___buff[ k++ ] = 158;
                    break;

                case 63:
                    ___buff[ k++ ] = 238;
                    break;

                case 64:
                    ___buff[ k++ ] = 159;
                    break;

                case 65:
                    ___buff[ k++ ] = 239;
                    break;

                case 66:
                    ___buff[ k++ ] = 252;
                    i++;
                    break;

                }
                j = ___MAXL;
            }
            else
            {
                if( j == ___MAXL - 1 )
                {
                    ___buff[ k++ ] = str[ i-- ];
                }
            }
        }
    }
    ___buff [ k ] = '\0';
    return ___buff;
}

void _testrus( void )
{
    printf( "%s", _torus("Аа Бб Вв Гг Дд Ее Ёё\nЖж Зз Ии Йй Кк Лл Мм\nНн Оо Пп Рр Сс Тт Уу\nФф Хх Цц Чч Шш Щщ ЪЪ\nЫы Ьь Ээ Юю Яя\n\nAa Bb Cc Dd Ee Ff Gg\nHh Ii Jj Kk Ll Mm Nn\nOo Pp Qq Rr Ss Tt Uu\nvv Ww Xx Yy Zz\n\n0 1 2 3 4 5 6 7 8 9 \n0 ` ~ @ # $ % ^ & * \n( ) - _ = + '' ; : .\n? * /\\| < > { } [ ]\n№\n\n") );
}

char* IForcedYouBitch( const char* str )
{
    return _torus( str );
}

#endif // CRUSSIFICATION_H
