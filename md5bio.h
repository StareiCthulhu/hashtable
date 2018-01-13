#pragma once

typedef unsigned long DWrd;
typedef unsigned char Byte;

static const DWrd dwA = 0x67452301;
static const DWrd dwB = 0xefcdab89;
static const DWrd dwC = 0x98badcfe;
static const DWrd dwD = 0x10325476;

bool CodeMD5(const char *buffer, DWrd size, DWrd digest[4]);

DWrd go_hash(const char* buffer);
