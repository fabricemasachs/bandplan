
/*
	 This file is part of xmlbandplan.

    Xmlbandplan is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Xmlbandplan is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Xmlbandplan.  If not, see http://www.gnu.org/licenses/;.	  
*/

/*
 * This file has been created by xmlbandplan.
 */

// Single channels
typedef struct 
{
  char *name; // channel name
  long freq;  // frequency (Hz/10)  --- negative frequency indicates repeater
  byte mode;  // mode
  // int rpt;   // repeater shift (kHz) --- currently not used due to memory constraint
} t_channel;

long rpt70cm = 760000; // 7,6 MHz
long rpt2m   = 60000; // 600 kHz

const t_channel channels[] = {
						{"WSPR",13600, NULL },
&gt;
		&gt;
	{"WSPR",183660, NULL },
{"QRP",183600,FT817_MODE_CW_NARROW},
&gt;
		&gt;
	{"ATV",373500, NULL },
{"Emergency Region 1",376000, NULL },
{"QRP",369000, NULL },
{"Digital Speech",363000, NULL },
{"QRP",356000,FT817_MODE_CW_NARROW},
{"QRS",355500,FT817_MODE_CW_NARROW},
{"WSPR",359260, NULL },
&gt;
		&gt;
	{"QRP",703000,FT817_MODE_CW_NARROW},
{"Emergency Region 1",711000, NULL },
{"ATV",716500, NULL },
{"Digital Speech",707000, NULL },
{"QRP",709000, NULL },
{"WSPR",703860, NULL },
&gt;
		&gt;
	{"QRP",1011600,FT817_MODE_CW_NARROW},
{"WSPR",1013870, NULL },
&gt;
		&gt;
	{"QRP",1406000,FT817_MODE_CW_NARROW},
{"Emergency",1430000, NULL },
{"WSPR",1409560, NULL },
&gt;
		&gt;
	{"QRP",1808600,FT817_MODE_CW_NARROW},
{"QRP",1813000, NULL },
{"Digital Speech",1815000, NULL },
{"Emergency",1816000, NULL },
{"WSPR",1810460, NULL },
&gt;
		&gt;
	{"QRP",2106000,FT817_MODE_CW_NARROW},
{"QRS",2105500,FT817_MODE_CW_NARROW},
{"Digital Speech",2118000, NULL },
{"WSPR",2199460, NULL },
&gt;
		&gt;
	{"QRP",2490600,FT817_MODE_CW_NARROW},
{"QRP",2495000, NULL },
{"WSPR",2492460, NULL },
&gt;
		&gt;
	{"QRP",2836000, NULL },
{"Digital Speech",2833000, NULL },
{"FM Call",2960000,FT817_MODE_FM},
{"FM Call: Simplex Repeater: In",2961000,FT817_MODE_FM},
{"QRS",2805500,FT817_MODE_CW_NARROW},
{"QRP",2806000,FT817_MODE_CW_NARROW},
{"APRS",2925000,FT817_MODE_FM},
{"WSPR",2812460, NULL },
&gt;
		&gt;
	{"1: Call FM.",2696500,FT817_MODE_AM},
{"2",2697500,FT817_MODE_AM},
{"3",2698500,FT817_MODE_AM},
{"3A: Not allowed for CB.",2699500, NULL },
{"4: Call AM.",2700500,FT817_MODE_AM},
{"5",2701500,FT817_MODE_AM},
{"6",2702500,FT817_MODE_AM},
{"7",2703500,FT817_MODE_AM},
{"7A: Not allowed for CB.",2704500, NULL },
{"8",2705500,FT817_MODE_AM},
{"9: Emergency",2706500,FT817_MODE_AM},
{"10",2707500,FT817_MODE_AM},
{"11",2708500,FT817_MODE_AM},
{"11A: Not allowed for CB.",2709500, NULL },
{"12",2710500,FT817_MODE_AM},
{"13",2711500,FT817_MODE_FM},
{"14",2712500,FT817_MODE_FM},
{"15",2713500,FT817_MODE_FM},
{"15A: Not allowed for CB.",2715500, NULL },
{"16",2715500,FT817_MODE_FM},
{"17",2716500,FT817_MODE_FM},
{"18",2717500,FT817_MODE_FM},
{"19",2718500,FT817_MODE_FM},
{"19A: Not allowed for CB.",2719500, NULL },
{"20",2720500,FT817_MODE_FM},
{"21",2721500,FT817_MODE_FM},
{"22",2722500,FT817_MODE_FM},
{"23",2725500,FT817_MODE_FM},
{"24",2723500,FT817_MODE_FM},
{"25",2724500,FT817_MODE_FM},
{"26",2726500,FT817_MODE_FM},
{"27",2727500,FT817_MODE_FM},
{"28",2728500,FT817_MODE_FM},
{"29",2729500,FT817_MODE_FM},
{"30",2730500,FT817_MODE_FM},
{"31",2731500,FT817_MODE_FM},
{"32",2732500,FT817_MODE_FM},
{"33",2733500,FT817_MODE_FM},
{"34",2734500,FT817_MODE_FM},
{"35",2735500,FT817_MODE_FM},
{"36",2736500,FT817_MODE_FM},
{"37",2737500,FT817_MODE_FM},
{"38",2738500,FT817_MODE_FM},
{"39",2737500,FT817_MODE_FM},
{"40",2740500,FT817_MODE_FM},
{"41",2656500,FT817_MODE_FM},
{"42",2657500,FT817_MODE_FM},
{"43",2658500,FT817_MODE_FM},
{"44",2659500,FT817_MODE_FM},
{"45",2660500,FT817_MODE_FM},
{"46",2661500,FT817_MODE_FM},
{"47",2662500,FT817_MODE_FM},
{"48",2663500,FT817_MODE_FM},
{"49",2664500,FT817_MODE_FM},
{"50",2665500,FT817_MODE_FM},
{"51",2666500,FT817_MODE_FM},
{"52",2667500,FT817_MODE_FM},
{"53",2668500,FT817_MODE_FM},
{"54",2669500,FT817_MODE_FM},
{"55",2670500,FT817_MODE_FM},
{"56",2671500,FT817_MODE_FM},
{"57",2672500,FT817_MODE_FM},
{"58",2673500,FT817_MODE_FM},
{"59",2674500,FT817_MODE_FM},
{"60",2675500,FT817_MODE_FM},
{"61",2676500,FT817_MODE_FM},
{"62",2677500,FT817_MODE_FM},
{"63",2678500,FT817_MODE_FM},
{"64",2679500,FT817_MODE_FM},
{"65",2680500,FT817_MODE_FM},
{"66",2681500,FT817_MODE_FM},
{"67",2682500,FT817_MODE_FM},
{"68",2683500,FT817_MODE_FM},
{"69",2684500,FT817_MODE_FM},
{"70",2685500,FT817_MODE_FM},
{"71",2686500,FT817_MODE_FM},
{"72",2687500,FT817_MODE_FM},
{"73",2688500,FT817_MODE_FM},
{"74",2689500,FT817_MODE_FM},
{"75",2690500,FT817_MODE_FM},
{"76",2691500,FT817_MODE_FM},
{"77",2692500,FT817_MODE_FM},
{"78",2693500,FT817_MODE_FM},
{"79",2694500,FT817_MODE_FM},
{"80",2695500,FT817_MODE_FM},
&gt;
		&gt;
	{"WSPR",502930, NULL },
&gt;
		&gt;
	{"S1: simplex channel",14521250,FT817_MODE_FM},
{"ARPS",14480000,FT817_MODE_FM},
{"Echolink",14496250,FT817_MODE_FM},
{"Echolink",14497500,FT817_MODE_FM},
{"RTTY local",14530000, NULL },
{"DV CQ: Digital Speech with ",14537500, NULL },
{"PSK31: MGM PSK31",14417000, NULL },
{"SSB CQ",14430000, NULL },
{"MGM CQ",14437000, NULL },
{"WSPR",14448900, NULL },
{"SSTV CQ",14450000, NULL },
{"ATV: ATV SSB Callback",14452500, NULL },
{"RTTY CQ",14460000, NULL },
{"Fax CQ",14470000, NULL },
{"ATV CQ / Callback",14475000, NULL },
&gt;
		&gt;
	&gt;
		{"DB0VA",-43932500,FT817_MODE_FM},
{"DB0ESW",-43905000,FT817_MODE_FM},
&gt;
	{"1",43307500,FT817_MODE_FM},
{"2",43310000,FT817_MODE_FM},
{"3",43312500,FT817_MODE_FM},
{"4",43315000,FT817_MODE_FM},
{"5",43317500,FT817_MODE_FM},
{"6",43320000,FT817_MODE_FM},
{"7",43322500,FT817_MODE_FM},
{"8",43325000,FT817_MODE_FM},
{"9",43327500,FT817_MODE_FM},
{"10",43330000,FT817_MODE_FM},
{"11",43332500,FT817_MODE_FM},
{"12",43335000,FT817_MODE_FM},
{"13",43337500,FT817_MODE_FM},
{"14",43340000,FT817_MODE_FM},
{"15",43342500,FT817_MODE_FM},
{"16",43345000,FT817_MODE_FM},
{"17",43347500,FT817_MODE_FM},
{"18",43350000,FT817_MODE_FM},
{"19",43352500,FT817_MODE_FM},
{"20",43355000,FT817_MODE_FM},
{"21",43357500,FT817_MODE_FM},
{"22",43360000,FT817_MODE_FM},
{"23",43362500,FT817_MODE_FM},
{"24",43365000,FT817_MODE_FM},
{"25",43367500,FT817_MODE_FM},
{"26",43370000,FT817_MODE_FM},
{"27",43372500,FT817_MODE_FM},
{"28",43375000,FT817_MODE_FM},
{"29",43377500,FT817_MODE_FM},
{"30",43380000,FT817_MODE_FM},
{"31",43382500,FT817_MODE_FM},
{"32",43385000,FT817_MODE_FM},
{"33",43387500,FT817_MODE_FM},
{"34",43390000,FT817_MODE_FM},
{"35",43392500,FT817_MODE_FM},
{"36",43395000,FT817_MODE_FM},
{"37",43397500,FT817_MODE_FM},
{"38",43400000,FT817_MODE_FM},
{"39",43402500,FT817_MODE_FM},
{"40",43405000,FT817_MODE_FM},
{"41",43407500,FT817_MODE_FM},
{"42",43410000,FT817_MODE_FM},
{"43",43412500,FT817_MODE_FM},
{"44",43415000,FT817_MODE_FM},
{"45",43417500,FT817_MODE_FM},
{"46",43420000,FT817_MODE_FM},
{"47",43422500,FT817_MODE_FM},
{"48",43425000,FT817_MODE_FM},
{"49",43427500,FT817_MODE_FM},
{"50",43430000,FT817_MODE_FM},
{"51",43432500,FT817_MODE_FM},
{"52",43435000,FT817_MODE_FM},
{"53",43437500,FT817_MODE_FM},
{"54",43440000,FT817_MODE_FM},
{"55",43442500,FT817_MODE_FM},
{"56",43445000,FT817_MODE_FM},
{"57",43447500,FT817_MODE_FM},
{"58",43450000,FT817_MODE_FM},
{"59",43452500,FT817_MODE_FM},
{"60",43455000,FT817_MODE_FM},
{"61",43457500,FT817_MODE_FM},
{"62",43460000,FT817_MODE_FM},
{"63",43462500,FT817_MODE_FM},
{"64",43465000,FT817_MODE_FM},
{"65",43467500,FT817_MODE_FM},
{"66",43470000,FT817_MODE_FM},
{"67",43472500,FT817_MODE_FM},
{"68",43475000,FT817_MODE_FM},
{"69",43477500,FT817_MODE_FM},
&gt;
		&gt;
	{"1",44600620,FT817_MODE_FM},
{"2",44601875,FT817_MODE_FM},
{"3",44603125,FT817_MODE_FM},
{"4",44604375,FT817_MODE_FM},
{"5",44605625,FT817_MODE_FM},
{"6",44606875,FT817_MODE_FM},
{"7",44608125,FT817_MODE_FM},
{"8",44609375,FT817_MODE_FM},
&gt;
		&gt;
	
};
int nchannels = sizeof(channels)/sizeof(channels[0]);
						
