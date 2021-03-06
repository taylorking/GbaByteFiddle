# GBA Byte Fiddle
### What this is 
This thing flips the bytes around in a GBA ROM you dump out of WiiU RAM. 

### Binaries
- [Mac OS X](http://d2a5v43y5lgvv8.cloudfront.net/bin/Mac+x64/fiddle) 
- [Windows x64](http://d2a5v43y5lgvv8.cloudfront.net/bin/Windows+x64/fiddle.exe)

### Usage

```
$ gcc main.c -o fiddle.exe
$ fiddle.exe gbaRomDump.gba
```

That will output a file in the same directory called gbaRomDump.gba.new.gba.

### Example

Before: 

```
2E 00 00 EA 24 FF AE 51 69 9A A2 21 3D 84 82 0A 84 E4 09 AD 11 24 8B 98 C0 81 7F 21 A3 52 BE 19 93 09 CE 20 10 46 4A 4A F8 27 31 EC 58 C7 E8 33 82 E3 CE BF 85 F4 DF 94 CE 4B 09 C1 94 56 8A C0 13 72 A7 FC 9F 84 4D 73 A3 CA 9A 61 58 97 A3 27 FC 03 98 76 23 1D C7 61 03 04 AE 56 BF 38 84 00 40 A7 0E FD FF 52 FE 03 6F 95 30 F1 97 FB C0 85 60 D6 80 25 A9 63 BE 03 01 4E 38 E2 F9 A2 34 FF BB 3E 03 44 78 00 90 CB 88 11 3A 94 65 C0 7C 63 87 F0 3C AF D6 25 E4 8B 38 0A AC 72 21 D4 F8 07 53 55 50 45 52 20 4D 41 52 49 4F 44 41 58 34 45 30 31 96 00 00 00 00 00 00 00 00 00 01 72 00 00 12 00 A0 E3 00 F0 29 E1 28 D0 9F E5 1F 00 A0 E3 00 F0 29 E1 18 D0 9F E5 98 11 9F E5 18 00 8F E2 00 00 81 E5 90 11 9F E5 0F E0 A0 E1 11 FF 2F E1 F2 FF FF EA 00 7E 00 03 80 7F 00 03
```

After: 

```
00 2E EA 00 FF 24 51 AE 9A 69 21 A2 84 3D 0A 82 E4 84 AD 09 24 11 98 8B 81 C0 21 7F 52 A3 19 BE 09 93 20 CE 46 10 4A 4A 27 F8 EC 31 C7 58 33 E8 E3 82 BF CE F4 85 94 DF 4B CE C1 09 56 94 C0 8A 72 13 FC A7 84 9F 73 4D CA A3 61 9A 97 58 27 A3 03 FC 76 98 1D 23 61 C7 04 03 56 AE 38 BF 00 84 A7 40 FD 0E 52 FF 03 FE 95 6F F1 30 FB 97 85 C0 D6 60 25 80 63 A9 03 BE 4E 01 E2 38 A2 F9 FF 34 3E BB 44 03 00 78 CB 90 11 88 94 3A C0 65 63 7C F0 87 AF 3C 25 D6 8B E4 0A 38 72 AC D4 21 07 F8 55 53 45 50 20 52 41 4D 49 52 44 4F 58 41 45 34 31 30 00 96 00 00 00 00 00 00 00 00 72 01 00 00 00 12 E3 A0 F0 00 E1 29 D0 28 E5 9F 00 1F E3 A0 F0 00 E1 29 D0 18 E5 9F 11 98 E5 9F 00 18 E2 8F
```

I didn't copy the same number of bytes, but you get the picture
