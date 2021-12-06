#include <iostream>
typedef unsigned char   byte;
typedef struct CMpeg CMpeg, * PCMpeg;
typedef struct CutsceneManager CutsceneManager, * PCutsceneManager;

class Mpeg
{
    public:
        typedef enum OID
        {
            OID__WORLD = 3,
            OID_bentley = 6,
            OID__CAMERA = 4,
            OID_murray = 7,
            OID__MERGED_STATICS = 1,
            OID_rat = 617,
            OID_Unknown = 0,
            OID_jt = 5,
            OID__VISIBILITY_MAP = 2
        } OID;

        struct CutsceneManager
        {
            uint32_t cutscene_index;
            enum OID* name;
            enum OID* second_cutscene;
            int field_0xc;
            uint32_t field_0x10;
            char* field_0x14;
            int field_0x18;
            enum OID* field_0x1c;
            enum OID* field_0x20;
            uint32_t field_0x24;
            byte field_0x28;
            byte field_0x29;
            byte field_0x2a;
            byte field_0x2b;
            byte field_0x2c;
            byte field_0x2d;
            byte field_0x2e;
            byte field_0x2f;
            byte field_0x30;
            byte field_0x31;
            byte field_0x32;
            byte field_0x33;
            byte field_0x34;
            byte field_0x35;
            byte field_0x36;
            byte field_0x37;
            byte field_0x38;
            byte field_0x39;
            byte field_0x3a;
            byte field_0x3b;
            byte field_0x3c;
            byte field_0x3d;
            byte field_0x3e;
            byte field_0x3f;
            byte field_0x40;
            byte field_0x41;
            byte field_0x42;
            byte field_0x43;
            byte field_0x44;
            byte field_0x45;
            byte field_0x46;
            byte field_0x47;
            byte field_0x48;
            byte field_0x49;
            byte field_0x4a;
            byte field_0x4b;
            byte field_0x4c;
            byte field_0x4d;
            byte field_0x4e;
            byte field_0x4f;
            byte field_0x50;
            byte field_0x51;
            byte field_0x52;
            byte field_0x53;
            byte field_0x54;
            byte field_0x55;
            byte field_0x56;
            byte field_0x57;
            uint32_t field_0x58;
            uint32_t field_0x5c;
            byte field_0x60;
            byte field_0x61;
            byte field_0x62;
            byte field_0x63;
            byte field_0x64;
            byte field_0x65;
            byte field_0x66;
            byte field_0x67;
            byte field_0x68;
            byte field_0x69;
            byte field_0x6a;
            byte field_0x6b;
            byte field_0x6c;
            byte field_0x6d;
            byte field_0x6e;
            byte field_0x6f;
            byte field_0x70;
            byte field_0x71;
            byte field_0x72;
            byte field_0x73;
            byte field_0x74;
            byte field_0x75;
            byte field_0x76;
            byte field_0x77;
            byte field_0x78;
            byte field_0x79;
            byte field_0x7a;
            byte field_0x7b;
            byte field_0x7c;
            byte field_0x7d;
            byte field_0x7e;
            byte field_0x7f;
            int field_0x80;
            byte field_0x84;
            byte field_0x85;
            byte field_0x86;
            byte field_0x87;
            byte field_0x88;
            byte field_0x89;
            byte field_0x8a;
            byte field_0x8b;
            byte field_0x8c;
            byte field_0x8d;
            byte field_0x8e;
            byte field_0x8f;
            byte field_0x90;
            byte field_0x91;
            byte field_0x92;
            byte field_0x93;
            byte field_0x94;
            byte field_0x95;
            byte field_0x96;
            byte field_0x97;
            byte field_0x98;
            byte field_0x99;
            byte field_0x9a;
            byte field_0x9b;
            byte field_0x9c;
            byte field_0x9d;
            byte field_0x9e;
            byte field_0x9f;
            byte field_0xa0;
            byte field_0xa1;
            byte field_0xa2;
            byte field_0xa3;
            byte field_0xa4;
            byte field_0xa5;
            byte field_0xa6;
            byte field_0xa7;
            byte field_0xa8;
            byte field_0xa9;
            byte field_0xaa;
            byte field_0xab;
            byte field_0xac;
            byte field_0xad;
            byte field_0xae;
            byte field_0xaf;
            byte field_0xb0;
            byte field_0xb1;
            byte field_0xb2;
            byte field_0xb3;
            byte field_0xb4;
            byte field_0xb5;
            byte field_0xb6;
            byte field_0xb7;
            byte field_0xb8;
            byte field_0xb9;
            byte field_0xba;
            byte field_0xbb;
            byte field_0xbc;
            byte field_0xbd;
            byte field_0xbe;
            byte field_0xbf;
            byte field_0xc0;
            byte field_0xc1;
            byte field_0xc2;
            byte field_0xc3;
            byte field_0xc4;
            byte field_0xc5;
            byte field_0xc6;
            byte field_0xc7;
            byte field_0xc8;
            byte field_0xc9;
            byte field_0xca;
            byte field_0xcb;
            byte field_0xcc;
            byte field_0xcd;
            byte field_0xce;
            byte field_0xcf;
            byte field_0xd0;
            byte field_0xd1;
            byte field_0xd2;
            byte field_0xd3;
            byte field_0xd4;
            byte field_0xd5;
            byte field_0xd6;
            byte field_0xd7;
            byte field_0xd8;
            byte field_0xd9;
            byte field_0xda;
            byte field_0xdb;
            byte field_0xdc;
            byte field_0xdd;
            byte field_0xde;
            byte field_0xdf;
            byte field_0xe0;
            byte field_0xe1;
            byte field_0xe2;
            byte field_0xe3;
            byte field_0xe4;
            byte field_0xe5;
            byte field_0xe6;
            byte field_0xe7;
            byte field_0xe8;
            byte field_0xe9;
            byte field_0xea;
            byte field_0xeb;
            byte field_0xec;
            byte field_0xed;
            byte field_0xee;
            byte field_0xef;
            byte field_0xf0;
            byte field_0xf1;
            byte field_0xf2;
            byte field_0xf3;
            byte field_0xf4;
            byte field_0xf5;
            byte field_0xf6;
            byte field_0xf7;
            byte field_0xf8;
            byte field_0xf9;
            byte field_0xfa;
            byte field_0xfb;
            byte field_0xfc;
            byte field_0xfd;
            byte field_0xfe;
            byte field_0xff;
            byte field_0x100;
            byte field_0x101;
            byte field_0x102;
            byte field_0x103;
            byte field_0x104;
            byte field_0x105;
            byte field_0x106;
            byte field_0x107;
            byte field_0x108;
            byte field_0x109;
            byte field_0x10a;
            byte field_0x10b;
            byte field_0x10c;
            byte field_0x10d;
            byte field_0x10e;
            byte field_0x10f;
            byte field_0x110;
            byte field_0x111;
            byte field_0x112;
            byte field_0x113;
            uint32_t field_0x114;
            uint32_t field_0x118;
            byte field_0x11c;
            byte field_0x11d;
            byte field_0x11e;
            byte field_0x11f;
            byte field_0x120;
            byte field_0x121;
            byte field_0x122;
            byte field_0x123;
            byte field_0x124;
            byte field_0x125;
            byte field_0x126;
            byte field_0x127;
            byte field_0x128;
            byte field_0x129;
            byte field_0x12a;
            byte field_0x12b;
            byte field_0x12c;
            byte field_0x12d;
            byte field_0x12e;
            byte field_0x12f;
        };

        struct CMpeg
        {
            char* name;
            byte field_0x4;
            byte field_0x5;
            byte field_0x6;
            byte field_0x7;
            byte field_0x8;
            byte field_0x9;
            byte field_0xa;
            byte field_0xb;
            byte field_0xc;
            byte field_0xd;
            byte field_0xe;
            byte field_0xf;
            byte field_0x10;
            byte field_0x11;
            byte field_0x12;
            byte field_0x13;
            byte field_0x14;
            byte field_0x15;
            byte field_0x16;
            byte field_0x17;
            byte field_0x18;
            byte field_0x19;
            byte field_0x1a;
            byte field_0x1b;
            byte field_0x1c;
            byte field_0x1d;
            byte field_0x1e;
            byte field_0x1f;
            byte field_0x20;
            byte field_0x21;
            byte field_0x22;
            byte field_0x23;
            byte field_0x24;
            byte field_0x25;
            byte field_0x26;
            byte field_0x27;
            byte field_0x28;
            byte field_0x29;
            byte field_0x2a;
            byte field_0x2b;
            byte field_0x2c;
            byte field_0x2d;
            byte field_0x2e;
            byte field_0x2f;
            byte field_0x30;
            byte field_0x31;
            byte field_0x32;
            byte field_0x33;
            byte field_0x34;
            byte field_0x35;
            byte field_0x36;
            byte field_0x37;
            byte field_0x38;
            byte field_0x39;
            byte field_0x3a;
            byte field_0x3b;
            byte field_0x3c;
            byte field_0x3d;
            byte field_0x3e;
            byte field_0x3f;
            byte field_0x40;
            byte field_0x41;
            byte field_0x42;
            byte field_0x43;
            byte field_0x44;
            byte field_0x45;
            byte field_0x46;
            byte field_0x47;
            byte field_0x48;
            byte field_0x49;
            byte field_0x4a;
            byte field_0x4b;
            byte field_0x4c;
            byte field_0x4d;
            byte field_0x4e;
            byte field_0x4f;
            byte field_0x50;
            byte field_0x51;
            byte field_0x52;
            byte field_0x53;
            byte field_0x54;
            byte field_0x55;
            byte field_0x56;
            byte field_0x57;
            byte field_0x58;
            byte field_0x59;
            byte field_0x5a;
            byte field_0x5b;
            byte field_0x5c;
            byte field_0x5d;
            byte field_0x5e;
            byte field_0x5f;
            byte field_0x60;
            byte field_0x61;
            byte field_0x62;
            byte field_0x63;
            byte field_0x64;
            byte field_0x65;
            byte field_0x66;
            byte field_0x67;
            byte field_0x68;
            byte field_0x69;
            byte field_0x6a;
            byte field_0x6b;
            byte field_0x6c;
            byte field_0x6d;
            byte field_0x6e;
            byte field_0x6f;
            byte field_0x70;
            byte field_0x71;
            byte field_0x72;
            byte field_0x73;
            byte field_0x74;
            byte field_0x75;
            byte field_0x76;
            byte field_0x77;
            byte field_0x78;
            byte field_0x79;
            byte field_0x7a;
            byte field_0x7b;
            byte field_0x7c;
            byte field_0x7d;
            byte field_0x7e;
            byte field_0x7f;
            byte field_0x80;
            byte field_0x81;
            byte field_0x82;
            byte field_0x83;
            byte field_0x84;
            byte field_0x85;
            byte field_0x86;
            byte field_0x87;
            byte field_0x88;
            byte field_0x89;
            byte field_0x8a;
            byte field_0x8b;
            byte field_0x8c;
            byte field_0x8d;
            byte field_0x8e;
            byte field_0x8f;
            byte field_0x90;
            byte field_0x91;
            byte field_0x92;
            byte field_0x93;
            byte field_0x94;
            byte field_0x95;
            byte field_0x96;
            byte field_0x97;
            byte field_0x98;
            byte field_0x99;
            byte field_0x9a;
            byte field_0x9b;
            byte field_0x9c;
            byte field_0x9d;
            byte field_0x9e;
            byte field_0x9f;
            byte field_0xa0;
            byte field_0xa1;
            byte field_0xa2;
            byte field_0xa3;
            byte field_0xa4;
            byte field_0xa5;
            byte field_0xa6;
            byte field_0xa7;
            byte field_0xa8;
            byte field_0xa9;
            byte field_0xaa;
            byte field_0xab;
            byte field_0xac;
            byte field_0xad;
            byte field_0xae;
            byte field_0xaf;
            byte field_0xb0;
            byte field_0xb1;
            byte field_0xb2;
            byte field_0xb3;
            byte field_0xb4;
            byte field_0xb5;
            byte field_0xb6;
            byte field_0xb7;
            byte field_0xb8;
            byte field_0xb9;
            byte field_0xba;
            byte field_0xbb;
            byte field_0xbc;
            byte field_0xbd;
            byte field_0xbe;
            byte field_0xbf;
            byte field_0xc0;
            byte field_0xc1;
            byte field_0xc2;
            byte field_0xc3;
            byte field_0xc4;
            byte field_0xc5;
            byte field_0xc6;
            byte field_0xc7;
            byte field_0xc8;
            byte field_0xc9;
            byte field_0xca;
            byte field_0xcb;
            byte field_0xcc;
            byte field_0xcd;
            byte field_0xce;
            byte field_0xcf;
            byte field_0xd0;
            byte field_0xd1;
            byte field_0xd2;
            byte field_0xd3;
            byte field_0xd4;
            byte field_0xd5;
            byte field_0xd6;
            byte field_0xd7;
            byte field_0xd8;
            byte field_0xd9;
            byte field_0xda;
            byte field_0xdb;
            byte field_0xdc;
            byte field_0xdd;
            byte field_0xde;
            byte field_0xdf;
            byte field_0xe0;
            byte field_0xe1;
            byte field_0xe2;
            byte field_0xe3;
            byte field_0xe4;
            byte field_0xe5;
            byte field_0xe6;
            byte field_0xe7;
            byte field_0xe8;
            byte field_0xe9;
            byte field_0xea;
            byte field_0xeb;
            byte field_0xec;
            byte field_0xed;
            byte field_0xee;
            byte field_0xef;
            byte field_0xf0;
            byte field_0xf1;
            byte field_0xf2;
            byte field_0xf3;
            byte field_0xf4;
            byte field_0xf5;
            byte field_0xf6;
            byte field_0xf7;
            byte field_0xf8;
            byte field_0xf9;
            byte field_0xfa;
            byte field_0xfb;
            byte field_0xfc;
            byte field_0xfd;
            byte field_0xfe;
            byte field_0xff;
            byte field_0x100;
            byte field_0x101;
            byte field_0x102;
            byte field_0x103;
            byte field_0x104;
            byte field_0x105;
            byte field_0x106;
            byte field_0x107;
            byte field_0x108;
            byte field_0x109;
            byte field_0x10a;
            byte field_0x10b;
            byte field_0x10c;
            byte field_0x10d;
            byte field_0x10e;
            byte field_0x10f;
            byte field_0x110;
            byte field_0x111;
            byte field_0x112;
            byte field_0x113;
            byte field_0x114;
            byte field_0x115;
            byte field_0x116;
            byte field_0x117;
            byte field_0x118;
            byte field_0x119;
            byte field_0x11a;
            byte field_0x11b;
            byte field_0x11c;
            byte field_0x11d;
            byte field_0x11e;
            byte field_0x11f;
            byte field_0x120;
            byte field_0x121;
            byte field_0x122;
            byte field_0x123;
            byte field_0x124;
            byte field_0x125;
            byte field_0x126;
            byte field_0x127;
            byte field_0x128;
            byte field_0x129;
            byte field_0x12a;
            byte field_0x12b;
            byte field_0x12c;
            byte field_0x12d;
            byte field_0x12e;
            byte field_0x12f;
        };

        void Execute(CutsceneManager* cutscene_manager);
};