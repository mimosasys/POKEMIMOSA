	.align 2
BW::
	voice_keysplit BW1_piano, KeySplitTableBW46 @ 0 | Multi | 
	voice_keysplit BW2_bright_piano, KeySplitTableBW07 @ 1 | Multi | 
	voice_keysplit BW3_piano2, KeySplitTableBW08 @ 2 | Multi | 
	voice_keysplit BW4_epiano, KeySplitTableBW09 @ 3 | Multi | 
	voice_keysplit BW5_vibra, KeySplitTableBW11 @ 5 | Multi | 
	voice_keysplit BW6_marimba, KeySplitTableBW12 @ 6 | Multi | 
	voice_keysplit BW7_xylo, KeySplitTableBW13 @ 7 | Multi | 
	voice_keysplit BW8_tubular, KeySplitTableBW14 @ 8 | Multi | 
	voice_directsound 60, 0, DirectSoundWaveData_BW9_glockenspiel, 255, 240, 0, 185 @ 9 | Direct | 
	voice_keysplit BW10_music_box, KeySplitTableBW16 @ 10 | Multi | 
	voice_keysplit BW11_rock_organ, KeySplitTableBW17 @ 11 | Multi | 
	voice_keysplit BW12_perc_organ, KeySplitTableBW18 @ 12 | Multi | 
	voice_keysplit BW13_accordion, KeySplitTableBW19 @ 13 | Multi | 
	voice_keysplit BW14_aguitar, KeySplitTableBW05 @ 14 | Multi | 
	voice_keysplit BW15_aguitar2, KeySplitTableBW21 @ 15 | Multi | 
	voice_keysplit BW16_eguitar, KeySplitTableBW22 @ 16 | Multi | 
	voice_keysplit BW17_eguitar_clean, KeySplitTableBW24 @ 18 | Multi | 
	voice_keysplit BW18_abass, KeySplitTableBW25 @ 19 | Multi | 
	voice_keysplit BW19_ebass, KeySplitTableBW26 @ 20 | Multi | 
	voice_keysplit BW20_slapbass, KeySplitTableBW51 @ 21 | Multi | 
	voice_keysplit BW21_synbass, KeySplitTableBW27 @ 22 | Multi | 
	voice_keysplit BW22_strings, KeySplitTableBW28 @ 23 | Multi | 
	voice_keysplit BW23_violin, KeySplitTableBW29 @ 24 | Multi | 
	voice_keysplit BW24_string_stab, KeySplitTableBW30 @ 25 | Multi | 
	voice_keysplit BW25_string_pizz, KeySplitTableBW31 @ 26 | Multi | 
	voice_keysplit BW26_harp, KeySplitTableBW32 @ 27 | Multi | 
	voice_keysplit BW27_timpani, KeySplitTableBW33 @ 28 | Multi | 
	voice_keysplit BW28_trumpet, KeySplitTableBW34 @ 29 | Multi | 
	voice_keysplit BW29_trombone, KeySplitTableBW35 @ 30 | Multi | 
	voice_keysplit BW30_tuba, KeySplitTableBW36 @ 31 | Multi | 
	voice_keysplit BW31_french_horn, KeySplitTableBW47 @ 32 | Multi | 
	voice_keysplit BW32_oboe, KeySplitTableBW38 @ 33 | Multi | 
	voice_keysplit BW33_clarinet, KeySplitTableBW39 @ 34 | Multi | 
	voice_keysplit BW34_flute, KeySplitTableBW40 @ 35 | Multi | 
	voice_keysplit BW35_bassoon, KeySplitTableBW41 @ 36 | Multi | 
	voice_keysplit BW36_orch_hit, KeySplitTableBW42 @ 37 | Multi | 
	voice_keysplit_all BW37_drums @ 39 | Drum | 
	voice_keysplit_all BW38_taiko @ 40 | Drum | 
	voice_keysplit BW39_koto, KeySplitTableBW44 @ 42 | Multi | 
	voice_directsound 60, 0, DirectSoundWaveData_BW40_wind, 255, 240, 110, 165 @ 44 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW41_low_thunder, 130, 45, 210, 240 @ 45 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW42_square_synth, 255, 245, 110, 165 @ 46 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW43_bubbles, 60, 240, 0, 80 @ 47 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW44_fm_bass, 255, 245, 0, 165 @ 49 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW45_string_stab2, 145, 0, 145, 165 @ 50 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW46_eguitar2, 255, 245, 0, 165 @ 51 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW47_eguitar3, 255, 245, 0, 165 @ 53 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW47_brass_stab, 255, 0, 255, 165 @ 54 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW48_ocarina, 255, 245, 90, 185 @ 55 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW49_cymbal, 255, 245, 90, 165 @ 56 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW50_jazz_organ, 255, 245, 90, 165 @ 57 | Direct | 
	voice_keysplit_all BW51_drums_dance @ 60 | Drum | 
	voice_directsound 60, 0, DirectSoundWaveData_BW51_saw_synth, 255, 245, 210, 210 @ 61 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW52_wind2, 255, 250, 190, 185 @ 62 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW53_beep_bass, 255, 245, 200, 165 @ 63 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW54_synbass2, 255, 250, 230, 225 @ 64 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW55_voice, 255, 240, 130, 165 @ 65 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW56_saxophone, 255, 250, 235, 185 @ 67 | Direct | 
	voice_keysplit BW57_saxophone2, KeySplitTableBW49 @ 68 | Multi | 
	voice_directsound 60, 0, DirectSoundWaveData_BW58_saxophone3, 185, 0, 185, 185 @ 69 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW59_shakuhachi, 255, 0, 255, 165 @ 70 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW60_drumbreak1, 255, 0, 255, 165 @ 71 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW61_violin2, 55, 0, 165, 165 @ 74 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW62_church_organ, 255, 0, 255, 205 @ 75 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW63_steelpan, 255, 245, 0, 165 @ 76 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW64_piccolo, 255, 240, 110, 225 @ 77 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW65_saw_synth2, 255, 0, 255, 165 @ 78 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW66_noise, 75, 0, 175, 255 @ 83 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW67_dance_clap, 255, 245, 0, 165 @ 84 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW68_eguitar_muted, 255, 0, 255, 165 @ 85 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW68_eguitar_power, 255, 0, 255, 165 @ 86 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW69_you_got_me, 155, 0, 155, 165 @ 87 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW70_square_synth2, 145, 0, 145, 165 @ 88 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW71_thunder, 255, 0, 255, 165 @ 89 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW72_fire, 255, 0, 255, 165 @ 90 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW73_explosion, 255, 0, 255, 165 @ 91 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW74_car_screech, 255, 0, 255, 165 @ 92 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW75_waves, 165, 0, 165, 165 @ 93 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW76_synbass_e4, 165, 0, 165, 165 @ 94 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW77_synbass_3, 165, 0, 165, 165 @ 95 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW78_music_box2, 255, 0, 255, 235 @ 97 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW79_piano3, 255, 245, 0, 224 @ 98 | Direct | 
	voice_keysplit BW80_reed_section, KeySplitTableBW06 @ 99 | Multi | 
	voice_keysplit BW81_timpani2, KeySplitTableBW45 @ 100 | Multi | 
	voice_directsound 60, 0, DirectSoundWaveData_BW82_drumbreak2, 255, 0, 255, 165 @ 101 | Direct | 
	voice_keysplit BW83_voice2, KeySplitTableBW48 @ 102 | Multi | 
	voice_directsound 60, 0, DirectSoundWaveData_BW82_drumbreak_amen, 255, 0, 255, 165 @ 103 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW83_orch_hit2, 15, 0, 165, 165 @ 104 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW84_trombone2, 255, 0, 160, 205 @ 105 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW85_orch_hit3, 255, 245, 0, 165 @ 108 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW86_brass_swell, 255, 0, 255, 165 @ 109 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW87_glass_break, 255, 250, 0, 224 @ 111 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW88_hard_kick, 255, 0, 255, 165 @ 115 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW89_hard_snare, 255, 0, 255, 165 @ 116 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW90_snare, 255, 0, 255, 165 @ 117 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW91_glockenspiel2, 224, 245, 0, 200 @ 118 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW92_gong, 255, 0, 255, 165 @ 121 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW93_tom, 165, 165, 0, 165 @ 122 | Direct | 
	voice_keysplit BW94_eguitar4, KeySplitTableBW50 @ 126 | Multi | 
	voice_directsound 60, 0, DirectSoundWaveData_BW95_gunshot, 255, 0, 255, 165 @ 127 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW96_ebass2, 255, 245, 0, 165 @ 21 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW97_eguitar_harmonics, 255, 0, 255, 165 @ 90 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW98_eguitar_harmonics2, 255, 0, 255, 165 @ 93 | Direct | 
	voice_keysplit BW99_filter_synth, KeySplitTableBW57 @ 99 | Multi | 
	voice_directsound 60, 0, DirectSoundWaveData_BW100_eguitar_solo, 255, 0, 255, 165 @ 120 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW101_tubular2, 255, 245, 0, 165 @ 121 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW102_drumbreak_amen2, 255, 0, 255, 165 @ 122 | Direct | 
	voice_directsound 60, 0, DirectSoundWaveData_BW103_drumbreak_3, 255, 0, 255, 165 @ 123 | Direct | 
	voice_keysplit_all BW104_drums2 @ 126 | Drum | 
	


