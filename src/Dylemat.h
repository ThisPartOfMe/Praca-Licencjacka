#pragma once
#include<iostream>
#include<ctime>
#include<cstring>
#include<string>
#include<fstream>
#include<iomanip>
#include <windows.h>
#include <winbase.h>
#include <msclr\marshal_cppstd.h>

namespace Licencjat {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dylemat
	/// </summary>
	public ref class Dylemat : public System::Windows::Forms::Form
	{
	public:
		Dylemat(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dylemat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  Automat;
	protected:

	private: System::Windows::Forms::Label^  label601;
	private: System::Windows::Forms::Label^  label602;
	private: System::Windows::Forms::Label^  label603;
	private: System::Windows::Forms::Label^  label604;
	private: System::Windows::Forms::Label^  label605;
	private: System::Windows::Forms::Label^  label606;
	private: System::Windows::Forms::Label^  label607;
	private: System::Windows::Forms::Label^  label608;
	private: System::Windows::Forms::Label^  label609;
	private: System::Windows::Forms::Label^  label610;
	private: System::Windows::Forms::Label^  label611;
	private: System::Windows::Forms::Label^  label612;
	private: System::Windows::Forms::Label^  label613;
	private: System::Windows::Forms::Label^  label614;
	private: System::Windows::Forms::Label^  label615;
	private: System::Windows::Forms::Label^  label616;
	private: System::Windows::Forms::Label^  label617;
	private: System::Windows::Forms::Label^  label618;
	private: System::Windows::Forms::Label^  label619;
	private: System::Windows::Forms::Label^  label620;
	private: System::Windows::Forms::Label^  label621;
	private: System::Windows::Forms::Label^  label622;
	private: System::Windows::Forms::Label^  label623;
	private: System::Windows::Forms::Label^  label624;
	private: System::Windows::Forms::Label^  label625;
	private: System::Windows::Forms::Label^  label576;
	private: System::Windows::Forms::Label^  label577;
	private: System::Windows::Forms::Label^  label578;
	private: System::Windows::Forms::Label^  label579;
	private: System::Windows::Forms::Label^  label580;
	private: System::Windows::Forms::Label^  label581;
	private: System::Windows::Forms::Label^  label582;
	private: System::Windows::Forms::Label^  label583;
	private: System::Windows::Forms::Label^  label584;
	private: System::Windows::Forms::Label^  label585;
	private: System::Windows::Forms::Label^  label586;
	private: System::Windows::Forms::Label^  label587;
	private: System::Windows::Forms::Label^  label588;
	private: System::Windows::Forms::Label^  label589;
	private: System::Windows::Forms::Label^  label590;
	private: System::Windows::Forms::Label^  label591;
	private: System::Windows::Forms::Label^  label592;
	private: System::Windows::Forms::Label^  label593;
	private: System::Windows::Forms::Label^  label594;
	private: System::Windows::Forms::Label^  label595;
	private: System::Windows::Forms::Label^  label596;
	private: System::Windows::Forms::Label^  label597;
	private: System::Windows::Forms::Label^  label598;
	private: System::Windows::Forms::Label^  label599;
	private: System::Windows::Forms::Label^  label600;
	private: System::Windows::Forms::Label^  label551;
	private: System::Windows::Forms::Label^  label552;
	private: System::Windows::Forms::Label^  label553;
	private: System::Windows::Forms::Label^  label554;
	private: System::Windows::Forms::Label^  label555;
	private: System::Windows::Forms::Label^  label556;
	private: System::Windows::Forms::Label^  label557;
	private: System::Windows::Forms::Label^  label558;
	private: System::Windows::Forms::Label^  label559;
	private: System::Windows::Forms::Label^  label560;
	private: System::Windows::Forms::Label^  label561;
	private: System::Windows::Forms::Label^  label562;
	private: System::Windows::Forms::Label^  label563;
	private: System::Windows::Forms::Label^  label564;
	private: System::Windows::Forms::Label^  label565;
	private: System::Windows::Forms::Label^  label566;
	private: System::Windows::Forms::Label^  label567;
	private: System::Windows::Forms::Label^  label568;
	private: System::Windows::Forms::Label^  label569;
	private: System::Windows::Forms::Label^  label570;
	private: System::Windows::Forms::Label^  label571;
	private: System::Windows::Forms::Label^  label572;
	private: System::Windows::Forms::Label^  label573;
	private: System::Windows::Forms::Label^  label574;
	private: System::Windows::Forms::Label^  label575;
	private: System::Windows::Forms::Label^  label526;
	private: System::Windows::Forms::Label^  label527;
	private: System::Windows::Forms::Label^  label528;
	private: System::Windows::Forms::Label^  label529;
	private: System::Windows::Forms::Label^  label530;
	private: System::Windows::Forms::Label^  label531;
	private: System::Windows::Forms::Label^  label532;
	private: System::Windows::Forms::Label^  label533;
	private: System::Windows::Forms::Label^  label534;
	private: System::Windows::Forms::Label^  label535;
	private: System::Windows::Forms::Label^  label536;
	private: System::Windows::Forms::Label^  label537;
	private: System::Windows::Forms::Label^  label538;
	private: System::Windows::Forms::Label^  label539;
	private: System::Windows::Forms::Label^  label540;
	private: System::Windows::Forms::Label^  label541;
	private: System::Windows::Forms::Label^  label542;
	private: System::Windows::Forms::Label^  label543;
	private: System::Windows::Forms::Label^  label544;
	private: System::Windows::Forms::Label^  label545;
	private: System::Windows::Forms::Label^  label546;
	private: System::Windows::Forms::Label^  label547;
	private: System::Windows::Forms::Label^  label548;
	private: System::Windows::Forms::Label^  label549;
	private: System::Windows::Forms::Label^  label550;
	private: System::Windows::Forms::Label^  label501;
	private: System::Windows::Forms::Label^  label502;
	private: System::Windows::Forms::Label^  label503;
	private: System::Windows::Forms::Label^  label504;
	private: System::Windows::Forms::Label^  label505;
	private: System::Windows::Forms::Label^  label506;
	private: System::Windows::Forms::Label^  label507;
	private: System::Windows::Forms::Label^  label508;
	private: System::Windows::Forms::Label^  label509;
	private: System::Windows::Forms::Label^  label510;
	private: System::Windows::Forms::Label^  label511;
	private: System::Windows::Forms::Label^  label512;
	private: System::Windows::Forms::Label^  label513;
	private: System::Windows::Forms::Label^  label514;
	private: System::Windows::Forms::Label^  label515;
	private: System::Windows::Forms::Label^  label516;
	private: System::Windows::Forms::Label^  label517;
	private: System::Windows::Forms::Label^  label518;
	private: System::Windows::Forms::Label^  label519;
	private: System::Windows::Forms::Label^  label520;
	private: System::Windows::Forms::Label^  label521;
	private: System::Windows::Forms::Label^  label522;
	private: System::Windows::Forms::Label^  label523;
	private: System::Windows::Forms::Label^  label524;
	private: System::Windows::Forms::Label^  label525;
	private: System::Windows::Forms::Label^  label476;
	private: System::Windows::Forms::Label^  label477;
	private: System::Windows::Forms::Label^  label478;
	private: System::Windows::Forms::Label^  label479;
	private: System::Windows::Forms::Label^  label480;
	private: System::Windows::Forms::Label^  label481;
	private: System::Windows::Forms::Label^  label482;
	private: System::Windows::Forms::Label^  label483;
	private: System::Windows::Forms::Label^  label484;
	private: System::Windows::Forms::Label^  label485;
	private: System::Windows::Forms::Label^  label486;
	private: System::Windows::Forms::Label^  label487;
	private: System::Windows::Forms::Label^  label488;
	private: System::Windows::Forms::Label^  label489;
	private: System::Windows::Forms::Label^  label490;
	private: System::Windows::Forms::Label^  label491;
	private: System::Windows::Forms::Label^  label492;
	private: System::Windows::Forms::Label^  label493;
	private: System::Windows::Forms::Label^  label494;
	private: System::Windows::Forms::Label^  label495;
	private: System::Windows::Forms::Label^  label496;
	private: System::Windows::Forms::Label^  label497;
	private: System::Windows::Forms::Label^  label498;
	private: System::Windows::Forms::Label^  label499;
	private: System::Windows::Forms::Label^  label500;
	private: System::Windows::Forms::Label^  label451;
	private: System::Windows::Forms::Label^  label452;
	private: System::Windows::Forms::Label^  label453;
	private: System::Windows::Forms::Label^  label454;
	private: System::Windows::Forms::Label^  label455;
	private: System::Windows::Forms::Label^  label456;
	private: System::Windows::Forms::Label^  label457;
	private: System::Windows::Forms::Label^  label458;
	private: System::Windows::Forms::Label^  label459;
	private: System::Windows::Forms::Label^  label460;
	private: System::Windows::Forms::Label^  label461;
	private: System::Windows::Forms::Label^  label462;
	private: System::Windows::Forms::Label^  label463;
	private: System::Windows::Forms::Label^  label464;
	private: System::Windows::Forms::Label^  label465;
	private: System::Windows::Forms::Label^  label466;
	private: System::Windows::Forms::Label^  label467;
	private: System::Windows::Forms::Label^  label468;
	private: System::Windows::Forms::Label^  label469;
	private: System::Windows::Forms::Label^  label470;
	private: System::Windows::Forms::Label^  label471;
	private: System::Windows::Forms::Label^  label472;
	private: System::Windows::Forms::Label^  label473;
	private: System::Windows::Forms::Label^  label474;
	private: System::Windows::Forms::Label^  label475;
	private: System::Windows::Forms::Label^  label426;
	private: System::Windows::Forms::Label^  label427;
	private: System::Windows::Forms::Label^  label428;
	private: System::Windows::Forms::Label^  label429;
	private: System::Windows::Forms::Label^  label430;
	private: System::Windows::Forms::Label^  label431;
	private: System::Windows::Forms::Label^  label432;
	private: System::Windows::Forms::Label^  label433;
	private: System::Windows::Forms::Label^  label434;
	private: System::Windows::Forms::Label^  label435;
	private: System::Windows::Forms::Label^  label436;
	private: System::Windows::Forms::Label^  label437;
	private: System::Windows::Forms::Label^  label438;
	private: System::Windows::Forms::Label^  label439;
	private: System::Windows::Forms::Label^  label440;
	private: System::Windows::Forms::Label^  label441;
	private: System::Windows::Forms::Label^  label442;
	private: System::Windows::Forms::Label^  label443;
	private: System::Windows::Forms::Label^  label444;
	private: System::Windows::Forms::Label^  label445;
	private: System::Windows::Forms::Label^  label446;
	private: System::Windows::Forms::Label^  label447;
	private: System::Windows::Forms::Label^  label448;
	private: System::Windows::Forms::Label^  label449;
	private: System::Windows::Forms::Label^  label450;
	private: System::Windows::Forms::Label^  label401;
	private: System::Windows::Forms::Label^  label402;
	private: System::Windows::Forms::Label^  label403;
	private: System::Windows::Forms::Label^  label404;
	private: System::Windows::Forms::Label^  label405;
	private: System::Windows::Forms::Label^  label406;
	private: System::Windows::Forms::Label^  label407;
	private: System::Windows::Forms::Label^  label408;
	private: System::Windows::Forms::Label^  label409;
	private: System::Windows::Forms::Label^  label410;
	private: System::Windows::Forms::Label^  label411;
	private: System::Windows::Forms::Label^  label412;
	private: System::Windows::Forms::Label^  label413;
	private: System::Windows::Forms::Label^  label414;
	private: System::Windows::Forms::Label^  label415;
	private: System::Windows::Forms::Label^  label416;
	private: System::Windows::Forms::Label^  label417;
	private: System::Windows::Forms::Label^  label418;
	private: System::Windows::Forms::Label^  label419;
	private: System::Windows::Forms::Label^  label420;
	private: System::Windows::Forms::Label^  label421;
	private: System::Windows::Forms::Label^  label422;
	private: System::Windows::Forms::Label^  label423;
	private: System::Windows::Forms::Label^  label424;
	private: System::Windows::Forms::Label^  label425;
	private: System::Windows::Forms::Label^  label376;
	private: System::Windows::Forms::Label^  label377;
	private: System::Windows::Forms::Label^  label378;
	private: System::Windows::Forms::Label^  label379;
	private: System::Windows::Forms::Label^  label380;
	private: System::Windows::Forms::Label^  label381;
	private: System::Windows::Forms::Label^  label382;
	private: System::Windows::Forms::Label^  label383;
	private: System::Windows::Forms::Label^  label384;
	private: System::Windows::Forms::Label^  label385;
	private: System::Windows::Forms::Label^  label386;
	private: System::Windows::Forms::Label^  label387;
	private: System::Windows::Forms::Label^  label388;
	private: System::Windows::Forms::Label^  label389;
	private: System::Windows::Forms::Label^  label390;
	private: System::Windows::Forms::Label^  label391;
	private: System::Windows::Forms::Label^  label392;
	private: System::Windows::Forms::Label^  label393;
	private: System::Windows::Forms::Label^  label394;
	private: System::Windows::Forms::Label^  label395;
	private: System::Windows::Forms::Label^  label396;
	private: System::Windows::Forms::Label^  label397;
	private: System::Windows::Forms::Label^  label398;
	private: System::Windows::Forms::Label^  label399;
	private: System::Windows::Forms::Label^  label400;
	private: System::Windows::Forms::Label^  label351;
	private: System::Windows::Forms::Label^  label352;
	private: System::Windows::Forms::Label^  label353;
	private: System::Windows::Forms::Label^  label354;
	private: System::Windows::Forms::Label^  label355;
	private: System::Windows::Forms::Label^  label356;
	private: System::Windows::Forms::Label^  label357;
	private: System::Windows::Forms::Label^  label358;
	private: System::Windows::Forms::Label^  label359;
	private: System::Windows::Forms::Label^  label360;
	private: System::Windows::Forms::Label^  label361;
	private: System::Windows::Forms::Label^  label362;
	private: System::Windows::Forms::Label^  label363;
	private: System::Windows::Forms::Label^  label364;
	private: System::Windows::Forms::Label^  label365;
	private: System::Windows::Forms::Label^  label366;
	private: System::Windows::Forms::Label^  label367;
	private: System::Windows::Forms::Label^  label368;
	private: System::Windows::Forms::Label^  label369;
	private: System::Windows::Forms::Label^  label370;
	private: System::Windows::Forms::Label^  label371;
	private: System::Windows::Forms::Label^  label372;
	private: System::Windows::Forms::Label^  label373;
	private: System::Windows::Forms::Label^  label374;
	private: System::Windows::Forms::Label^  label375;
	private: System::Windows::Forms::Label^  label326;
	private: System::Windows::Forms::Label^  label327;
	private: System::Windows::Forms::Label^  label328;
	private: System::Windows::Forms::Label^  label329;
	private: System::Windows::Forms::Label^  label330;
	private: System::Windows::Forms::Label^  label331;
	private: System::Windows::Forms::Label^  label332;
	private: System::Windows::Forms::Label^  label333;
	private: System::Windows::Forms::Label^  label334;
	private: System::Windows::Forms::Label^  label335;
	private: System::Windows::Forms::Label^  label336;
	private: System::Windows::Forms::Label^  label337;
	private: System::Windows::Forms::Label^  label338;
	private: System::Windows::Forms::Label^  label339;
	private: System::Windows::Forms::Label^  label340;
	private: System::Windows::Forms::Label^  label341;
	private: System::Windows::Forms::Label^  label342;
	private: System::Windows::Forms::Label^  label343;
	private: System::Windows::Forms::Label^  label344;
	private: System::Windows::Forms::Label^  label345;
	private: System::Windows::Forms::Label^  label346;
	private: System::Windows::Forms::Label^  label347;
	private: System::Windows::Forms::Label^  label348;
	private: System::Windows::Forms::Label^  label349;
	private: System::Windows::Forms::Label^  label350;
	private: System::Windows::Forms::Label^  label301;
	private: System::Windows::Forms::Label^  label302;
	private: System::Windows::Forms::Label^  label303;
	private: System::Windows::Forms::Label^  label304;
	private: System::Windows::Forms::Label^  label305;
	private: System::Windows::Forms::Label^  label306;
	private: System::Windows::Forms::Label^  label307;
	private: System::Windows::Forms::Label^  label308;
	private: System::Windows::Forms::Label^  label309;
	private: System::Windows::Forms::Label^  label310;
	private: System::Windows::Forms::Label^  label311;
	private: System::Windows::Forms::Label^  label312;
	private: System::Windows::Forms::Label^  label313;
	private: System::Windows::Forms::Label^  label314;
	private: System::Windows::Forms::Label^  label315;
	private: System::Windows::Forms::Label^  label316;
	private: System::Windows::Forms::Label^  label317;
	private: System::Windows::Forms::Label^  label318;
	private: System::Windows::Forms::Label^  label319;
	private: System::Windows::Forms::Label^  label320;
	private: System::Windows::Forms::Label^  label321;
	private: System::Windows::Forms::Label^  label322;
	private: System::Windows::Forms::Label^  label323;
	private: System::Windows::Forms::Label^  label324;
	private: System::Windows::Forms::Label^  label325;
	private: System::Windows::Forms::Label^  label276;
	private: System::Windows::Forms::Label^  label277;
	private: System::Windows::Forms::Label^  label278;
	private: System::Windows::Forms::Label^  label279;
	private: System::Windows::Forms::Label^  label280;
	private: System::Windows::Forms::Label^  label281;
	private: System::Windows::Forms::Label^  label282;
	private: System::Windows::Forms::Label^  label283;
	private: System::Windows::Forms::Label^  label284;
	private: System::Windows::Forms::Label^  label285;
	private: System::Windows::Forms::Label^  label286;
	private: System::Windows::Forms::Label^  label287;
	private: System::Windows::Forms::Label^  label288;
	private: System::Windows::Forms::Label^  label289;
	private: System::Windows::Forms::Label^  label290;
	private: System::Windows::Forms::Label^  label291;
	private: System::Windows::Forms::Label^  label292;
	private: System::Windows::Forms::Label^  label293;
	private: System::Windows::Forms::Label^  label294;
	private: System::Windows::Forms::Label^  label295;
	private: System::Windows::Forms::Label^  label296;
	private: System::Windows::Forms::Label^  label297;
	private: System::Windows::Forms::Label^  label298;
	private: System::Windows::Forms::Label^  label299;
	private: System::Windows::Forms::Label^  label300;
	private: System::Windows::Forms::Label^  label251;
	private: System::Windows::Forms::Label^  label252;
	private: System::Windows::Forms::Label^  label253;
	private: System::Windows::Forms::Label^  label254;
	private: System::Windows::Forms::Label^  label255;
	private: System::Windows::Forms::Label^  label256;
	private: System::Windows::Forms::Label^  label257;
	private: System::Windows::Forms::Label^  label258;
	private: System::Windows::Forms::Label^  label259;
	private: System::Windows::Forms::Label^  label260;
	private: System::Windows::Forms::Label^  label261;
	private: System::Windows::Forms::Label^  label262;
	private: System::Windows::Forms::Label^  label263;
	private: System::Windows::Forms::Label^  label264;
	private: System::Windows::Forms::Label^  label265;
	private: System::Windows::Forms::Label^  label266;
	private: System::Windows::Forms::Label^  label267;
	private: System::Windows::Forms::Label^  label268;
	private: System::Windows::Forms::Label^  label269;
	private: System::Windows::Forms::Label^  label270;
	private: System::Windows::Forms::Label^  label271;
	private: System::Windows::Forms::Label^  label272;
	private: System::Windows::Forms::Label^  label273;
	private: System::Windows::Forms::Label^  label274;
	private: System::Windows::Forms::Label^  label275;
	private: System::Windows::Forms::Label^  label226;
	private: System::Windows::Forms::Label^  label227;
	private: System::Windows::Forms::Label^  label228;
	private: System::Windows::Forms::Label^  label229;
	private: System::Windows::Forms::Label^  label230;
	private: System::Windows::Forms::Label^  label231;
	private: System::Windows::Forms::Label^  label232;
	private: System::Windows::Forms::Label^  label233;
	private: System::Windows::Forms::Label^  label234;
	private: System::Windows::Forms::Label^  label235;
	private: System::Windows::Forms::Label^  label236;
	private: System::Windows::Forms::Label^  label237;
	private: System::Windows::Forms::Label^  label238;
	private: System::Windows::Forms::Label^  label239;
	private: System::Windows::Forms::Label^  label240;
	private: System::Windows::Forms::Label^  label241;
	private: System::Windows::Forms::Label^  label242;
	private: System::Windows::Forms::Label^  label243;
	private: System::Windows::Forms::Label^  label244;
	private: System::Windows::Forms::Label^  label245;
	private: System::Windows::Forms::Label^  label246;
	private: System::Windows::Forms::Label^  label247;
	private: System::Windows::Forms::Label^  label248;
	private: System::Windows::Forms::Label^  label249;
	private: System::Windows::Forms::Label^  label250;
	private: System::Windows::Forms::Label^  label201;
	private: System::Windows::Forms::Label^  label202;
	private: System::Windows::Forms::Label^  label203;
	private: System::Windows::Forms::Label^  label204;
	private: System::Windows::Forms::Label^  label205;
	private: System::Windows::Forms::Label^  label206;
	private: System::Windows::Forms::Label^  label207;
	private: System::Windows::Forms::Label^  label208;
	private: System::Windows::Forms::Label^  label209;
	private: System::Windows::Forms::Label^  label210;
	private: System::Windows::Forms::Label^  label211;
	private: System::Windows::Forms::Label^  label212;
	private: System::Windows::Forms::Label^  label213;
	private: System::Windows::Forms::Label^  label214;
	private: System::Windows::Forms::Label^  label215;
	private: System::Windows::Forms::Label^  label216;
	private: System::Windows::Forms::Label^  label217;
	private: System::Windows::Forms::Label^  label218;
	private: System::Windows::Forms::Label^  label219;
	private: System::Windows::Forms::Label^  label220;
	private: System::Windows::Forms::Label^  label221;
	private: System::Windows::Forms::Label^  label222;
	private: System::Windows::Forms::Label^  label223;
	private: System::Windows::Forms::Label^  label224;
	private: System::Windows::Forms::Label^  label225;
	private: System::Windows::Forms::Label^  label176;
	private: System::Windows::Forms::Label^  label177;
	private: System::Windows::Forms::Label^  label178;
	private: System::Windows::Forms::Label^  label179;
	private: System::Windows::Forms::Label^  label180;
	private: System::Windows::Forms::Label^  label181;
	private: System::Windows::Forms::Label^  label182;
	private: System::Windows::Forms::Label^  label183;
	private: System::Windows::Forms::Label^  label184;
	private: System::Windows::Forms::Label^  label185;
	private: System::Windows::Forms::Label^  label186;
	private: System::Windows::Forms::Label^  label187;
	private: System::Windows::Forms::Label^  label188;
	private: System::Windows::Forms::Label^  label189;
	private: System::Windows::Forms::Label^  label190;
	private: System::Windows::Forms::Label^  label191;
	private: System::Windows::Forms::Label^  label192;
	private: System::Windows::Forms::Label^  label193;
	private: System::Windows::Forms::Label^  label194;
	private: System::Windows::Forms::Label^  label195;
	private: System::Windows::Forms::Label^  label196;
	private: System::Windows::Forms::Label^  label197;
	private: System::Windows::Forms::Label^  label198;
	private: System::Windows::Forms::Label^  label199;
	private: System::Windows::Forms::Label^  label200;
	private: System::Windows::Forms::Label^  label151;
	private: System::Windows::Forms::Label^  label152;
	private: System::Windows::Forms::Label^  label153;
	private: System::Windows::Forms::Label^  label154;
	private: System::Windows::Forms::Label^  label155;
	private: System::Windows::Forms::Label^  label156;
	private: System::Windows::Forms::Label^  label157;
	private: System::Windows::Forms::Label^  label158;
	private: System::Windows::Forms::Label^  label159;
	private: System::Windows::Forms::Label^  label160;
	private: System::Windows::Forms::Label^  label161;
	private: System::Windows::Forms::Label^  label162;
	private: System::Windows::Forms::Label^  label163;
	private: System::Windows::Forms::Label^  label164;
	private: System::Windows::Forms::Label^  label165;
	private: System::Windows::Forms::Label^  label166;
	private: System::Windows::Forms::Label^  label167;
	private: System::Windows::Forms::Label^  label168;
	private: System::Windows::Forms::Label^  label169;
	private: System::Windows::Forms::Label^  label170;
	private: System::Windows::Forms::Label^  label171;
	private: System::Windows::Forms::Label^  label172;
	private: System::Windows::Forms::Label^  label173;
	private: System::Windows::Forms::Label^  label174;
	private: System::Windows::Forms::Label^  label175;
	private: System::Windows::Forms::Label^  label126;
	private: System::Windows::Forms::Label^  label127;
	private: System::Windows::Forms::Label^  label128;
	private: System::Windows::Forms::Label^  label129;
	private: System::Windows::Forms::Label^  label130;
	private: System::Windows::Forms::Label^  label131;
	private: System::Windows::Forms::Label^  label132;
	private: System::Windows::Forms::Label^  label133;
	private: System::Windows::Forms::Label^  label134;
	private: System::Windows::Forms::Label^  label135;
	private: System::Windows::Forms::Label^  label136;
	private: System::Windows::Forms::Label^  label137;
	private: System::Windows::Forms::Label^  label138;
	private: System::Windows::Forms::Label^  label139;
	private: System::Windows::Forms::Label^  label140;
	private: System::Windows::Forms::Label^  label141;
	private: System::Windows::Forms::Label^  label142;
	private: System::Windows::Forms::Label^  label143;
	private: System::Windows::Forms::Label^  label144;
	private: System::Windows::Forms::Label^  label145;
	private: System::Windows::Forms::Label^  label146;
	private: System::Windows::Forms::Label^  label147;
	private: System::Windows::Forms::Label^  label148;
	private: System::Windows::Forms::Label^  label149;
	private: System::Windows::Forms::Label^  label150;
	private: System::Windows::Forms::Label^  label101;
	private: System::Windows::Forms::Label^  label102;
	private: System::Windows::Forms::Label^  label103;
	private: System::Windows::Forms::Label^  label104;
	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::Label^  label107;
	private: System::Windows::Forms::Label^  label108;
	private: System::Windows::Forms::Label^  label109;
	private: System::Windows::Forms::Label^  label110;
	private: System::Windows::Forms::Label^  label111;
	private: System::Windows::Forms::Label^  label112;
	private: System::Windows::Forms::Label^  label113;
	private: System::Windows::Forms::Label^  label114;
	private: System::Windows::Forms::Label^  label115;
	private: System::Windows::Forms::Label^  label116;
	private: System::Windows::Forms::Label^  label117;
	private: System::Windows::Forms::Label^  label118;
	private: System::Windows::Forms::Label^  label119;
	private: System::Windows::Forms::Label^  label120;
	private: System::Windows::Forms::Label^  label121;
	private: System::Windows::Forms::Label^  label122;
	private: System::Windows::Forms::Label^  label123;
	private: System::Windows::Forms::Label^  label124;
	private: System::Windows::Forms::Label^  label125;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::Label^  label84;
	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::Label^  label87;
	private: System::Windows::Forms::Label^  label88;
	private: System::Windows::Forms::Label^  label89;
	private: System::Windows::Forms::Label^  label90;
	private: System::Windows::Forms::Label^  label91;
	private: System::Windows::Forms::Label^  label92;
	private: System::Windows::Forms::Label^  label93;
	private: System::Windows::Forms::Label^  label94;
	private: System::Windows::Forms::Label^  label95;
	private: System::Windows::Forms::Label^  label96;
	private: System::Windows::Forms::Label^  label97;
	private: System::Windows::Forms::Label^  label98;
	private: System::Windows::Forms::Label^  label99;
	private: System::Windows::Forms::Label^  label100;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
private: System::Windows::Forms::Label^  label626;
private: System::Windows::Forms::NumericUpDown^  numericUpDownZdrajca;

private: System::Windows::Forms::Label^  label627;
private: System::Windows::Forms::NumericUpDown^  numericUpDownPrzegrany;
private: System::Windows::Forms::NumericUpDown^  numericUpDownKara;
private: System::Windows::Forms::NumericUpDown^  numericUpDownNagroda;



private: System::Windows::Forms::Label^  lblZdrada;
private: System::Windows::Forms::Label^  lblNagroda;
private: System::Windows::Forms::Label^  lblKara;
private: System::Windows::Forms::Label^  lblPrzegrany;
private: System::Windows::Forms::Label^  label628;
private: System::Windows::Forms::Button^  button2;







private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Automat = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label601 = (gcnew System::Windows::Forms::Label());
			this->label602 = (gcnew System::Windows::Forms::Label());
			this->label603 = (gcnew System::Windows::Forms::Label());
			this->label604 = (gcnew System::Windows::Forms::Label());
			this->label605 = (gcnew System::Windows::Forms::Label());
			this->label606 = (gcnew System::Windows::Forms::Label());
			this->label607 = (gcnew System::Windows::Forms::Label());
			this->label608 = (gcnew System::Windows::Forms::Label());
			this->label609 = (gcnew System::Windows::Forms::Label());
			this->label610 = (gcnew System::Windows::Forms::Label());
			this->label611 = (gcnew System::Windows::Forms::Label());
			this->label612 = (gcnew System::Windows::Forms::Label());
			this->label613 = (gcnew System::Windows::Forms::Label());
			this->label614 = (gcnew System::Windows::Forms::Label());
			this->label615 = (gcnew System::Windows::Forms::Label());
			this->label616 = (gcnew System::Windows::Forms::Label());
			this->label617 = (gcnew System::Windows::Forms::Label());
			this->label618 = (gcnew System::Windows::Forms::Label());
			this->label619 = (gcnew System::Windows::Forms::Label());
			this->label620 = (gcnew System::Windows::Forms::Label());
			this->label621 = (gcnew System::Windows::Forms::Label());
			this->label622 = (gcnew System::Windows::Forms::Label());
			this->label623 = (gcnew System::Windows::Forms::Label());
			this->label624 = (gcnew System::Windows::Forms::Label());
			this->label625 = (gcnew System::Windows::Forms::Label());
			this->label576 = (gcnew System::Windows::Forms::Label());
			this->label577 = (gcnew System::Windows::Forms::Label());
			this->label578 = (gcnew System::Windows::Forms::Label());
			this->label579 = (gcnew System::Windows::Forms::Label());
			this->label580 = (gcnew System::Windows::Forms::Label());
			this->label581 = (gcnew System::Windows::Forms::Label());
			this->label582 = (gcnew System::Windows::Forms::Label());
			this->label583 = (gcnew System::Windows::Forms::Label());
			this->label584 = (gcnew System::Windows::Forms::Label());
			this->label585 = (gcnew System::Windows::Forms::Label());
			this->label586 = (gcnew System::Windows::Forms::Label());
			this->label587 = (gcnew System::Windows::Forms::Label());
			this->label588 = (gcnew System::Windows::Forms::Label());
			this->label589 = (gcnew System::Windows::Forms::Label());
			this->label590 = (gcnew System::Windows::Forms::Label());
			this->label591 = (gcnew System::Windows::Forms::Label());
			this->label592 = (gcnew System::Windows::Forms::Label());
			this->label593 = (gcnew System::Windows::Forms::Label());
			this->label594 = (gcnew System::Windows::Forms::Label());
			this->label595 = (gcnew System::Windows::Forms::Label());
			this->label596 = (gcnew System::Windows::Forms::Label());
			this->label597 = (gcnew System::Windows::Forms::Label());
			this->label598 = (gcnew System::Windows::Forms::Label());
			this->label599 = (gcnew System::Windows::Forms::Label());
			this->label600 = (gcnew System::Windows::Forms::Label());
			this->label551 = (gcnew System::Windows::Forms::Label());
			this->label552 = (gcnew System::Windows::Forms::Label());
			this->label553 = (gcnew System::Windows::Forms::Label());
			this->label554 = (gcnew System::Windows::Forms::Label());
			this->label555 = (gcnew System::Windows::Forms::Label());
			this->label556 = (gcnew System::Windows::Forms::Label());
			this->label557 = (gcnew System::Windows::Forms::Label());
			this->label558 = (gcnew System::Windows::Forms::Label());
			this->label559 = (gcnew System::Windows::Forms::Label());
			this->label560 = (gcnew System::Windows::Forms::Label());
			this->label561 = (gcnew System::Windows::Forms::Label());
			this->label562 = (gcnew System::Windows::Forms::Label());
			this->label563 = (gcnew System::Windows::Forms::Label());
			this->label564 = (gcnew System::Windows::Forms::Label());
			this->label565 = (gcnew System::Windows::Forms::Label());
			this->label566 = (gcnew System::Windows::Forms::Label());
			this->label567 = (gcnew System::Windows::Forms::Label());
			this->label568 = (gcnew System::Windows::Forms::Label());
			this->label569 = (gcnew System::Windows::Forms::Label());
			this->label570 = (gcnew System::Windows::Forms::Label());
			this->label571 = (gcnew System::Windows::Forms::Label());
			this->label572 = (gcnew System::Windows::Forms::Label());
			this->label573 = (gcnew System::Windows::Forms::Label());
			this->label574 = (gcnew System::Windows::Forms::Label());
			this->label575 = (gcnew System::Windows::Forms::Label());
			this->label526 = (gcnew System::Windows::Forms::Label());
			this->label527 = (gcnew System::Windows::Forms::Label());
			this->label528 = (gcnew System::Windows::Forms::Label());
			this->label529 = (gcnew System::Windows::Forms::Label());
			this->label530 = (gcnew System::Windows::Forms::Label());
			this->label531 = (gcnew System::Windows::Forms::Label());
			this->label532 = (gcnew System::Windows::Forms::Label());
			this->label533 = (gcnew System::Windows::Forms::Label());
			this->label534 = (gcnew System::Windows::Forms::Label());
			this->label535 = (gcnew System::Windows::Forms::Label());
			this->label536 = (gcnew System::Windows::Forms::Label());
			this->label537 = (gcnew System::Windows::Forms::Label());
			this->label538 = (gcnew System::Windows::Forms::Label());
			this->label539 = (gcnew System::Windows::Forms::Label());
			this->label540 = (gcnew System::Windows::Forms::Label());
			this->label541 = (gcnew System::Windows::Forms::Label());
			this->label542 = (gcnew System::Windows::Forms::Label());
			this->label543 = (gcnew System::Windows::Forms::Label());
			this->label544 = (gcnew System::Windows::Forms::Label());
			this->label545 = (gcnew System::Windows::Forms::Label());
			this->label546 = (gcnew System::Windows::Forms::Label());
			this->label547 = (gcnew System::Windows::Forms::Label());
			this->label548 = (gcnew System::Windows::Forms::Label());
			this->label549 = (gcnew System::Windows::Forms::Label());
			this->label550 = (gcnew System::Windows::Forms::Label());
			this->label501 = (gcnew System::Windows::Forms::Label());
			this->label502 = (gcnew System::Windows::Forms::Label());
			this->label503 = (gcnew System::Windows::Forms::Label());
			this->label504 = (gcnew System::Windows::Forms::Label());
			this->label505 = (gcnew System::Windows::Forms::Label());
			this->label506 = (gcnew System::Windows::Forms::Label());
			this->label507 = (gcnew System::Windows::Forms::Label());
			this->label508 = (gcnew System::Windows::Forms::Label());
			this->label509 = (gcnew System::Windows::Forms::Label());
			this->label510 = (gcnew System::Windows::Forms::Label());
			this->label511 = (gcnew System::Windows::Forms::Label());
			this->label512 = (gcnew System::Windows::Forms::Label());
			this->label513 = (gcnew System::Windows::Forms::Label());
			this->label514 = (gcnew System::Windows::Forms::Label());
			this->label515 = (gcnew System::Windows::Forms::Label());
			this->label516 = (gcnew System::Windows::Forms::Label());
			this->label517 = (gcnew System::Windows::Forms::Label());
			this->label518 = (gcnew System::Windows::Forms::Label());
			this->label519 = (gcnew System::Windows::Forms::Label());
			this->label520 = (gcnew System::Windows::Forms::Label());
			this->label521 = (gcnew System::Windows::Forms::Label());
			this->label522 = (gcnew System::Windows::Forms::Label());
			this->label523 = (gcnew System::Windows::Forms::Label());
			this->label524 = (gcnew System::Windows::Forms::Label());
			this->label525 = (gcnew System::Windows::Forms::Label());
			this->label476 = (gcnew System::Windows::Forms::Label());
			this->label477 = (gcnew System::Windows::Forms::Label());
			this->label478 = (gcnew System::Windows::Forms::Label());
			this->label479 = (gcnew System::Windows::Forms::Label());
			this->label480 = (gcnew System::Windows::Forms::Label());
			this->label481 = (gcnew System::Windows::Forms::Label());
			this->label482 = (gcnew System::Windows::Forms::Label());
			this->label483 = (gcnew System::Windows::Forms::Label());
			this->label484 = (gcnew System::Windows::Forms::Label());
			this->label485 = (gcnew System::Windows::Forms::Label());
			this->label486 = (gcnew System::Windows::Forms::Label());
			this->label487 = (gcnew System::Windows::Forms::Label());
			this->label488 = (gcnew System::Windows::Forms::Label());
			this->label489 = (gcnew System::Windows::Forms::Label());
			this->label490 = (gcnew System::Windows::Forms::Label());
			this->label491 = (gcnew System::Windows::Forms::Label());
			this->label492 = (gcnew System::Windows::Forms::Label());
			this->label493 = (gcnew System::Windows::Forms::Label());
			this->label494 = (gcnew System::Windows::Forms::Label());
			this->label495 = (gcnew System::Windows::Forms::Label());
			this->label496 = (gcnew System::Windows::Forms::Label());
			this->label497 = (gcnew System::Windows::Forms::Label());
			this->label498 = (gcnew System::Windows::Forms::Label());
			this->label499 = (gcnew System::Windows::Forms::Label());
			this->label500 = (gcnew System::Windows::Forms::Label());
			this->label451 = (gcnew System::Windows::Forms::Label());
			this->label452 = (gcnew System::Windows::Forms::Label());
			this->label453 = (gcnew System::Windows::Forms::Label());
			this->label454 = (gcnew System::Windows::Forms::Label());
			this->label455 = (gcnew System::Windows::Forms::Label());
			this->label456 = (gcnew System::Windows::Forms::Label());
			this->label457 = (gcnew System::Windows::Forms::Label());
			this->label458 = (gcnew System::Windows::Forms::Label());
			this->label459 = (gcnew System::Windows::Forms::Label());
			this->label460 = (gcnew System::Windows::Forms::Label());
			this->label461 = (gcnew System::Windows::Forms::Label());
			this->label462 = (gcnew System::Windows::Forms::Label());
			this->label463 = (gcnew System::Windows::Forms::Label());
			this->label464 = (gcnew System::Windows::Forms::Label());
			this->label465 = (gcnew System::Windows::Forms::Label());
			this->label466 = (gcnew System::Windows::Forms::Label());
			this->label467 = (gcnew System::Windows::Forms::Label());
			this->label468 = (gcnew System::Windows::Forms::Label());
			this->label469 = (gcnew System::Windows::Forms::Label());
			this->label470 = (gcnew System::Windows::Forms::Label());
			this->label471 = (gcnew System::Windows::Forms::Label());
			this->label472 = (gcnew System::Windows::Forms::Label());
			this->label473 = (gcnew System::Windows::Forms::Label());
			this->label474 = (gcnew System::Windows::Forms::Label());
			this->label475 = (gcnew System::Windows::Forms::Label());
			this->label426 = (gcnew System::Windows::Forms::Label());
			this->label427 = (gcnew System::Windows::Forms::Label());
			this->label428 = (gcnew System::Windows::Forms::Label());
			this->label429 = (gcnew System::Windows::Forms::Label());
			this->label430 = (gcnew System::Windows::Forms::Label());
			this->label431 = (gcnew System::Windows::Forms::Label());
			this->label432 = (gcnew System::Windows::Forms::Label());
			this->label433 = (gcnew System::Windows::Forms::Label());
			this->label434 = (gcnew System::Windows::Forms::Label());
			this->label435 = (gcnew System::Windows::Forms::Label());
			this->label436 = (gcnew System::Windows::Forms::Label());
			this->label437 = (gcnew System::Windows::Forms::Label());
			this->label438 = (gcnew System::Windows::Forms::Label());
			this->label439 = (gcnew System::Windows::Forms::Label());
			this->label440 = (gcnew System::Windows::Forms::Label());
			this->label441 = (gcnew System::Windows::Forms::Label());
			this->label442 = (gcnew System::Windows::Forms::Label());
			this->label443 = (gcnew System::Windows::Forms::Label());
			this->label444 = (gcnew System::Windows::Forms::Label());
			this->label445 = (gcnew System::Windows::Forms::Label());
			this->label446 = (gcnew System::Windows::Forms::Label());
			this->label447 = (gcnew System::Windows::Forms::Label());
			this->label448 = (gcnew System::Windows::Forms::Label());
			this->label449 = (gcnew System::Windows::Forms::Label());
			this->label450 = (gcnew System::Windows::Forms::Label());
			this->label401 = (gcnew System::Windows::Forms::Label());
			this->label402 = (gcnew System::Windows::Forms::Label());
			this->label403 = (gcnew System::Windows::Forms::Label());
			this->label404 = (gcnew System::Windows::Forms::Label());
			this->label405 = (gcnew System::Windows::Forms::Label());
			this->label406 = (gcnew System::Windows::Forms::Label());
			this->label407 = (gcnew System::Windows::Forms::Label());
			this->label408 = (gcnew System::Windows::Forms::Label());
			this->label409 = (gcnew System::Windows::Forms::Label());
			this->label410 = (gcnew System::Windows::Forms::Label());
			this->label411 = (gcnew System::Windows::Forms::Label());
			this->label412 = (gcnew System::Windows::Forms::Label());
			this->label413 = (gcnew System::Windows::Forms::Label());
			this->label414 = (gcnew System::Windows::Forms::Label());
			this->label415 = (gcnew System::Windows::Forms::Label());
			this->label416 = (gcnew System::Windows::Forms::Label());
			this->label417 = (gcnew System::Windows::Forms::Label());
			this->label418 = (gcnew System::Windows::Forms::Label());
			this->label419 = (gcnew System::Windows::Forms::Label());
			this->label420 = (gcnew System::Windows::Forms::Label());
			this->label421 = (gcnew System::Windows::Forms::Label());
			this->label422 = (gcnew System::Windows::Forms::Label());
			this->label423 = (gcnew System::Windows::Forms::Label());
			this->label424 = (gcnew System::Windows::Forms::Label());
			this->label425 = (gcnew System::Windows::Forms::Label());
			this->label376 = (gcnew System::Windows::Forms::Label());
			this->label377 = (gcnew System::Windows::Forms::Label());
			this->label378 = (gcnew System::Windows::Forms::Label());
			this->label379 = (gcnew System::Windows::Forms::Label());
			this->label380 = (gcnew System::Windows::Forms::Label());
			this->label381 = (gcnew System::Windows::Forms::Label());
			this->label382 = (gcnew System::Windows::Forms::Label());
			this->label383 = (gcnew System::Windows::Forms::Label());
			this->label384 = (gcnew System::Windows::Forms::Label());
			this->label385 = (gcnew System::Windows::Forms::Label());
			this->label386 = (gcnew System::Windows::Forms::Label());
			this->label387 = (gcnew System::Windows::Forms::Label());
			this->label388 = (gcnew System::Windows::Forms::Label());
			this->label389 = (gcnew System::Windows::Forms::Label());
			this->label390 = (gcnew System::Windows::Forms::Label());
			this->label391 = (gcnew System::Windows::Forms::Label());
			this->label392 = (gcnew System::Windows::Forms::Label());
			this->label393 = (gcnew System::Windows::Forms::Label());
			this->label394 = (gcnew System::Windows::Forms::Label());
			this->label395 = (gcnew System::Windows::Forms::Label());
			this->label396 = (gcnew System::Windows::Forms::Label());
			this->label397 = (gcnew System::Windows::Forms::Label());
			this->label398 = (gcnew System::Windows::Forms::Label());
			this->label399 = (gcnew System::Windows::Forms::Label());
			this->label400 = (gcnew System::Windows::Forms::Label());
			this->label351 = (gcnew System::Windows::Forms::Label());
			this->label352 = (gcnew System::Windows::Forms::Label());
			this->label353 = (gcnew System::Windows::Forms::Label());
			this->label354 = (gcnew System::Windows::Forms::Label());
			this->label355 = (gcnew System::Windows::Forms::Label());
			this->label356 = (gcnew System::Windows::Forms::Label());
			this->label357 = (gcnew System::Windows::Forms::Label());
			this->label358 = (gcnew System::Windows::Forms::Label());
			this->label359 = (gcnew System::Windows::Forms::Label());
			this->label360 = (gcnew System::Windows::Forms::Label());
			this->label361 = (gcnew System::Windows::Forms::Label());
			this->label362 = (gcnew System::Windows::Forms::Label());
			this->label363 = (gcnew System::Windows::Forms::Label());
			this->label364 = (gcnew System::Windows::Forms::Label());
			this->label365 = (gcnew System::Windows::Forms::Label());
			this->label366 = (gcnew System::Windows::Forms::Label());
			this->label367 = (gcnew System::Windows::Forms::Label());
			this->label368 = (gcnew System::Windows::Forms::Label());
			this->label369 = (gcnew System::Windows::Forms::Label());
			this->label370 = (gcnew System::Windows::Forms::Label());
			this->label371 = (gcnew System::Windows::Forms::Label());
			this->label372 = (gcnew System::Windows::Forms::Label());
			this->label373 = (gcnew System::Windows::Forms::Label());
			this->label374 = (gcnew System::Windows::Forms::Label());
			this->label375 = (gcnew System::Windows::Forms::Label());
			this->label326 = (gcnew System::Windows::Forms::Label());
			this->label327 = (gcnew System::Windows::Forms::Label());
			this->label328 = (gcnew System::Windows::Forms::Label());
			this->label329 = (gcnew System::Windows::Forms::Label());
			this->label330 = (gcnew System::Windows::Forms::Label());
			this->label331 = (gcnew System::Windows::Forms::Label());
			this->label332 = (gcnew System::Windows::Forms::Label());
			this->label333 = (gcnew System::Windows::Forms::Label());
			this->label334 = (gcnew System::Windows::Forms::Label());
			this->label335 = (gcnew System::Windows::Forms::Label());
			this->label336 = (gcnew System::Windows::Forms::Label());
			this->label337 = (gcnew System::Windows::Forms::Label());
			this->label338 = (gcnew System::Windows::Forms::Label());
			this->label339 = (gcnew System::Windows::Forms::Label());
			this->label340 = (gcnew System::Windows::Forms::Label());
			this->label341 = (gcnew System::Windows::Forms::Label());
			this->label342 = (gcnew System::Windows::Forms::Label());
			this->label343 = (gcnew System::Windows::Forms::Label());
			this->label344 = (gcnew System::Windows::Forms::Label());
			this->label345 = (gcnew System::Windows::Forms::Label());
			this->label346 = (gcnew System::Windows::Forms::Label());
			this->label347 = (gcnew System::Windows::Forms::Label());
			this->label348 = (gcnew System::Windows::Forms::Label());
			this->label349 = (gcnew System::Windows::Forms::Label());
			this->label350 = (gcnew System::Windows::Forms::Label());
			this->label301 = (gcnew System::Windows::Forms::Label());
			this->label302 = (gcnew System::Windows::Forms::Label());
			this->label303 = (gcnew System::Windows::Forms::Label());
			this->label304 = (gcnew System::Windows::Forms::Label());
			this->label305 = (gcnew System::Windows::Forms::Label());
			this->label306 = (gcnew System::Windows::Forms::Label());
			this->label307 = (gcnew System::Windows::Forms::Label());
			this->label308 = (gcnew System::Windows::Forms::Label());
			this->label309 = (gcnew System::Windows::Forms::Label());
			this->label310 = (gcnew System::Windows::Forms::Label());
			this->label311 = (gcnew System::Windows::Forms::Label());
			this->label312 = (gcnew System::Windows::Forms::Label());
			this->label313 = (gcnew System::Windows::Forms::Label());
			this->label314 = (gcnew System::Windows::Forms::Label());
			this->label315 = (gcnew System::Windows::Forms::Label());
			this->label316 = (gcnew System::Windows::Forms::Label());
			this->label317 = (gcnew System::Windows::Forms::Label());
			this->label318 = (gcnew System::Windows::Forms::Label());
			this->label319 = (gcnew System::Windows::Forms::Label());
			this->label320 = (gcnew System::Windows::Forms::Label());
			this->label321 = (gcnew System::Windows::Forms::Label());
			this->label322 = (gcnew System::Windows::Forms::Label());
			this->label323 = (gcnew System::Windows::Forms::Label());
			this->label324 = (gcnew System::Windows::Forms::Label());
			this->label325 = (gcnew System::Windows::Forms::Label());
			this->label276 = (gcnew System::Windows::Forms::Label());
			this->label277 = (gcnew System::Windows::Forms::Label());
			this->label278 = (gcnew System::Windows::Forms::Label());
			this->label279 = (gcnew System::Windows::Forms::Label());
			this->label280 = (gcnew System::Windows::Forms::Label());
			this->label281 = (gcnew System::Windows::Forms::Label());
			this->label282 = (gcnew System::Windows::Forms::Label());
			this->label283 = (gcnew System::Windows::Forms::Label());
			this->label284 = (gcnew System::Windows::Forms::Label());
			this->label285 = (gcnew System::Windows::Forms::Label());
			this->label286 = (gcnew System::Windows::Forms::Label());
			this->label287 = (gcnew System::Windows::Forms::Label());
			this->label288 = (gcnew System::Windows::Forms::Label());
			this->label289 = (gcnew System::Windows::Forms::Label());
			this->label290 = (gcnew System::Windows::Forms::Label());
			this->label291 = (gcnew System::Windows::Forms::Label());
			this->label292 = (gcnew System::Windows::Forms::Label());
			this->label293 = (gcnew System::Windows::Forms::Label());
			this->label294 = (gcnew System::Windows::Forms::Label());
			this->label295 = (gcnew System::Windows::Forms::Label());
			this->label296 = (gcnew System::Windows::Forms::Label());
			this->label297 = (gcnew System::Windows::Forms::Label());
			this->label298 = (gcnew System::Windows::Forms::Label());
			this->label299 = (gcnew System::Windows::Forms::Label());
			this->label300 = (gcnew System::Windows::Forms::Label());
			this->label251 = (gcnew System::Windows::Forms::Label());
			this->label252 = (gcnew System::Windows::Forms::Label());
			this->label253 = (gcnew System::Windows::Forms::Label());
			this->label254 = (gcnew System::Windows::Forms::Label());
			this->label255 = (gcnew System::Windows::Forms::Label());
			this->label256 = (gcnew System::Windows::Forms::Label());
			this->label257 = (gcnew System::Windows::Forms::Label());
			this->label258 = (gcnew System::Windows::Forms::Label());
			this->label259 = (gcnew System::Windows::Forms::Label());
			this->label260 = (gcnew System::Windows::Forms::Label());
			this->label261 = (gcnew System::Windows::Forms::Label());
			this->label262 = (gcnew System::Windows::Forms::Label());
			this->label263 = (gcnew System::Windows::Forms::Label());
			this->label264 = (gcnew System::Windows::Forms::Label());
			this->label265 = (gcnew System::Windows::Forms::Label());
			this->label266 = (gcnew System::Windows::Forms::Label());
			this->label267 = (gcnew System::Windows::Forms::Label());
			this->label268 = (gcnew System::Windows::Forms::Label());
			this->label269 = (gcnew System::Windows::Forms::Label());
			this->label270 = (gcnew System::Windows::Forms::Label());
			this->label271 = (gcnew System::Windows::Forms::Label());
			this->label272 = (gcnew System::Windows::Forms::Label());
			this->label273 = (gcnew System::Windows::Forms::Label());
			this->label274 = (gcnew System::Windows::Forms::Label());
			this->label275 = (gcnew System::Windows::Forms::Label());
			this->label226 = (gcnew System::Windows::Forms::Label());
			this->label227 = (gcnew System::Windows::Forms::Label());
			this->label228 = (gcnew System::Windows::Forms::Label());
			this->label229 = (gcnew System::Windows::Forms::Label());
			this->label230 = (gcnew System::Windows::Forms::Label());
			this->label231 = (gcnew System::Windows::Forms::Label());
			this->label232 = (gcnew System::Windows::Forms::Label());
			this->label233 = (gcnew System::Windows::Forms::Label());
			this->label234 = (gcnew System::Windows::Forms::Label());
			this->label235 = (gcnew System::Windows::Forms::Label());
			this->label236 = (gcnew System::Windows::Forms::Label());
			this->label237 = (gcnew System::Windows::Forms::Label());
			this->label238 = (gcnew System::Windows::Forms::Label());
			this->label239 = (gcnew System::Windows::Forms::Label());
			this->label240 = (gcnew System::Windows::Forms::Label());
			this->label241 = (gcnew System::Windows::Forms::Label());
			this->label242 = (gcnew System::Windows::Forms::Label());
			this->label243 = (gcnew System::Windows::Forms::Label());
			this->label244 = (gcnew System::Windows::Forms::Label());
			this->label245 = (gcnew System::Windows::Forms::Label());
			this->label246 = (gcnew System::Windows::Forms::Label());
			this->label247 = (gcnew System::Windows::Forms::Label());
			this->label248 = (gcnew System::Windows::Forms::Label());
			this->label249 = (gcnew System::Windows::Forms::Label());
			this->label250 = (gcnew System::Windows::Forms::Label());
			this->label201 = (gcnew System::Windows::Forms::Label());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->label204 = (gcnew System::Windows::Forms::Label());
			this->label205 = (gcnew System::Windows::Forms::Label());
			this->label206 = (gcnew System::Windows::Forms::Label());
			this->label207 = (gcnew System::Windows::Forms::Label());
			this->label208 = (gcnew System::Windows::Forms::Label());
			this->label209 = (gcnew System::Windows::Forms::Label());
			this->label210 = (gcnew System::Windows::Forms::Label());
			this->label211 = (gcnew System::Windows::Forms::Label());
			this->label212 = (gcnew System::Windows::Forms::Label());
			this->label213 = (gcnew System::Windows::Forms::Label());
			this->label214 = (gcnew System::Windows::Forms::Label());
			this->label215 = (gcnew System::Windows::Forms::Label());
			this->label216 = (gcnew System::Windows::Forms::Label());
			this->label217 = (gcnew System::Windows::Forms::Label());
			this->label218 = (gcnew System::Windows::Forms::Label());
			this->label219 = (gcnew System::Windows::Forms::Label());
			this->label220 = (gcnew System::Windows::Forms::Label());
			this->label221 = (gcnew System::Windows::Forms::Label());
			this->label222 = (gcnew System::Windows::Forms::Label());
			this->label223 = (gcnew System::Windows::Forms::Label());
			this->label224 = (gcnew System::Windows::Forms::Label());
			this->label225 = (gcnew System::Windows::Forms::Label());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->label192 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->label196 = (gcnew System::Windows::Forms::Label());
			this->label197 = (gcnew System::Windows::Forms::Label());
			this->label198 = (gcnew System::Windows::Forms::Label());
			this->label199 = (gcnew System::Windows::Forms::Label());
			this->label200 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label626 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownZdrajca = (gcnew System::Windows::Forms::NumericUpDown());
			this->label627 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownPrzegrany = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownKara = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownNagroda = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblZdrada = (gcnew System::Windows::Forms::Label());
			this->lblNagroda = (gcnew System::Windows::Forms::Label());
			this->lblKara = (gcnew System::Windows::Forms::Label());
			this->lblPrzegrany = (gcnew System::Windows::Forms::Label());
			this->label628 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Automat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownZdrajca))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrzegrany))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownKara))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownNagroda))->BeginInit();
			this->SuspendLayout();
			// 
			// Automat
			// 
			this->Automat->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->Automat->ColumnCount = 25;
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->Automat->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 96)));
			this->Automat->Controls->Add(this->label601, 0, 24);
			this->Automat->Controls->Add(this->label602, 1, 24);
			this->Automat->Controls->Add(this->label603, 2, 24);
			this->Automat->Controls->Add(this->label604, 3, 24);
			this->Automat->Controls->Add(this->label605, 4, 24);
			this->Automat->Controls->Add(this->label606, 5, 24);
			this->Automat->Controls->Add(this->label607, 6, 24);
			this->Automat->Controls->Add(this->label608, 7, 24);
			this->Automat->Controls->Add(this->label609, 8, 24);
			this->Automat->Controls->Add(this->label610, 9, 24);
			this->Automat->Controls->Add(this->label611, 10, 24);
			this->Automat->Controls->Add(this->label612, 11, 24);
			this->Automat->Controls->Add(this->label613, 12, 24);
			this->Automat->Controls->Add(this->label614, 13, 24);
			this->Automat->Controls->Add(this->label615, 14, 24);
			this->Automat->Controls->Add(this->label616, 15, 24);
			this->Automat->Controls->Add(this->label617, 16, 24);
			this->Automat->Controls->Add(this->label618, 17, 24);
			this->Automat->Controls->Add(this->label619, 18, 24);
			this->Automat->Controls->Add(this->label620, 19, 24);
			this->Automat->Controls->Add(this->label621, 20, 24);
			this->Automat->Controls->Add(this->label622, 21, 24);
			this->Automat->Controls->Add(this->label623, 22, 24);
			this->Automat->Controls->Add(this->label624, 23, 24);
			this->Automat->Controls->Add(this->label625, 24, 24);
			this->Automat->Controls->Add(this->label576, 0, 23);
			this->Automat->Controls->Add(this->label577, 1, 23);
			this->Automat->Controls->Add(this->label578, 2, 23);
			this->Automat->Controls->Add(this->label579, 3, 23);
			this->Automat->Controls->Add(this->label580, 4, 23);
			this->Automat->Controls->Add(this->label581, 5, 23);
			this->Automat->Controls->Add(this->label582, 6, 23);
			this->Automat->Controls->Add(this->label583, 7, 23);
			this->Automat->Controls->Add(this->label584, 8, 23);
			this->Automat->Controls->Add(this->label585, 9, 23);
			this->Automat->Controls->Add(this->label586, 10, 23);
			this->Automat->Controls->Add(this->label587, 11, 23);
			this->Automat->Controls->Add(this->label588, 12, 23);
			this->Automat->Controls->Add(this->label589, 13, 23);
			this->Automat->Controls->Add(this->label590, 14, 23);
			this->Automat->Controls->Add(this->label591, 15, 23);
			this->Automat->Controls->Add(this->label592, 16, 23);
			this->Automat->Controls->Add(this->label593, 17, 23);
			this->Automat->Controls->Add(this->label594, 18, 23);
			this->Automat->Controls->Add(this->label595, 19, 23);
			this->Automat->Controls->Add(this->label596, 20, 23);
			this->Automat->Controls->Add(this->label597, 21, 23);
			this->Automat->Controls->Add(this->label598, 22, 23);
			this->Automat->Controls->Add(this->label599, 23, 23);
			this->Automat->Controls->Add(this->label600, 24, 23);
			this->Automat->Controls->Add(this->label551, 0, 22);
			this->Automat->Controls->Add(this->label552, 1, 22);
			this->Automat->Controls->Add(this->label553, 2, 22);
			this->Automat->Controls->Add(this->label554, 3, 22);
			this->Automat->Controls->Add(this->label555, 4, 22);
			this->Automat->Controls->Add(this->label556, 5, 22);
			this->Automat->Controls->Add(this->label557, 6, 22);
			this->Automat->Controls->Add(this->label558, 7, 22);
			this->Automat->Controls->Add(this->label559, 8, 22);
			this->Automat->Controls->Add(this->label560, 9, 22);
			this->Automat->Controls->Add(this->label561, 10, 22);
			this->Automat->Controls->Add(this->label562, 11, 22);
			this->Automat->Controls->Add(this->label563, 12, 22);
			this->Automat->Controls->Add(this->label564, 13, 22);
			this->Automat->Controls->Add(this->label565, 14, 22);
			this->Automat->Controls->Add(this->label566, 15, 22);
			this->Automat->Controls->Add(this->label567, 16, 22);
			this->Automat->Controls->Add(this->label568, 17, 22);
			this->Automat->Controls->Add(this->label569, 18, 22);
			this->Automat->Controls->Add(this->label570, 19, 22);
			this->Automat->Controls->Add(this->label571, 20, 22);
			this->Automat->Controls->Add(this->label572, 21, 22);
			this->Automat->Controls->Add(this->label573, 22, 22);
			this->Automat->Controls->Add(this->label574, 23, 22);
			this->Automat->Controls->Add(this->label575, 24, 22);
			this->Automat->Controls->Add(this->label526, 0, 21);
			this->Automat->Controls->Add(this->label527, 1, 21);
			this->Automat->Controls->Add(this->label528, 2, 21);
			this->Automat->Controls->Add(this->label529, 3, 21);
			this->Automat->Controls->Add(this->label530, 4, 21);
			this->Automat->Controls->Add(this->label531, 5, 21);
			this->Automat->Controls->Add(this->label532, 6, 21);
			this->Automat->Controls->Add(this->label533, 7, 21);
			this->Automat->Controls->Add(this->label534, 8, 21);
			this->Automat->Controls->Add(this->label535, 9, 21);
			this->Automat->Controls->Add(this->label536, 10, 21);
			this->Automat->Controls->Add(this->label537, 11, 21);
			this->Automat->Controls->Add(this->label538, 12, 21);
			this->Automat->Controls->Add(this->label539, 13, 21);
			this->Automat->Controls->Add(this->label540, 14, 21);
			this->Automat->Controls->Add(this->label541, 15, 21);
			this->Automat->Controls->Add(this->label542, 16, 21);
			this->Automat->Controls->Add(this->label543, 17, 21);
			this->Automat->Controls->Add(this->label544, 18, 21);
			this->Automat->Controls->Add(this->label545, 19, 21);
			this->Automat->Controls->Add(this->label546, 20, 21);
			this->Automat->Controls->Add(this->label547, 21, 21);
			this->Automat->Controls->Add(this->label548, 22, 21);
			this->Automat->Controls->Add(this->label549, 23, 21);
			this->Automat->Controls->Add(this->label550, 24, 21);
			this->Automat->Controls->Add(this->label501, 0, 20);
			this->Automat->Controls->Add(this->label502, 1, 20);
			this->Automat->Controls->Add(this->label503, 2, 20);
			this->Automat->Controls->Add(this->label504, 3, 20);
			this->Automat->Controls->Add(this->label505, 4, 20);
			this->Automat->Controls->Add(this->label506, 5, 20);
			this->Automat->Controls->Add(this->label507, 6, 20);
			this->Automat->Controls->Add(this->label508, 7, 20);
			this->Automat->Controls->Add(this->label509, 8, 20);
			this->Automat->Controls->Add(this->label510, 9, 20);
			this->Automat->Controls->Add(this->label511, 10, 20);
			this->Automat->Controls->Add(this->label512, 11, 20);
			this->Automat->Controls->Add(this->label513, 12, 20);
			this->Automat->Controls->Add(this->label514, 13, 20);
			this->Automat->Controls->Add(this->label515, 14, 20);
			this->Automat->Controls->Add(this->label516, 15, 20);
			this->Automat->Controls->Add(this->label517, 16, 20);
			this->Automat->Controls->Add(this->label518, 17, 20);
			this->Automat->Controls->Add(this->label519, 18, 20);
			this->Automat->Controls->Add(this->label520, 19, 20);
			this->Automat->Controls->Add(this->label521, 20, 20);
			this->Automat->Controls->Add(this->label522, 21, 20);
			this->Automat->Controls->Add(this->label523, 22, 20);
			this->Automat->Controls->Add(this->label524, 23, 20);
			this->Automat->Controls->Add(this->label525, 24, 20);
			this->Automat->Controls->Add(this->label476, 0, 19);
			this->Automat->Controls->Add(this->label477, 1, 19);
			this->Automat->Controls->Add(this->label478, 2, 19);
			this->Automat->Controls->Add(this->label479, 3, 19);
			this->Automat->Controls->Add(this->label480, 4, 19);
			this->Automat->Controls->Add(this->label481, 5, 19);
			this->Automat->Controls->Add(this->label482, 6, 19);
			this->Automat->Controls->Add(this->label483, 7, 19);
			this->Automat->Controls->Add(this->label484, 8, 19);
			this->Automat->Controls->Add(this->label485, 9, 19);
			this->Automat->Controls->Add(this->label486, 10, 19);
			this->Automat->Controls->Add(this->label487, 11, 19);
			this->Automat->Controls->Add(this->label488, 12, 19);
			this->Automat->Controls->Add(this->label489, 13, 19);
			this->Automat->Controls->Add(this->label490, 14, 19);
			this->Automat->Controls->Add(this->label491, 15, 19);
			this->Automat->Controls->Add(this->label492, 16, 19);
			this->Automat->Controls->Add(this->label493, 17, 19);
			this->Automat->Controls->Add(this->label494, 18, 19);
			this->Automat->Controls->Add(this->label495, 19, 19);
			this->Automat->Controls->Add(this->label496, 20, 19);
			this->Automat->Controls->Add(this->label497, 21, 19);
			this->Automat->Controls->Add(this->label498, 22, 19);
			this->Automat->Controls->Add(this->label499, 23, 19);
			this->Automat->Controls->Add(this->label500, 24, 19);
			this->Automat->Controls->Add(this->label451, 0, 18);
			this->Automat->Controls->Add(this->label452, 1, 18);
			this->Automat->Controls->Add(this->label453, 2, 18);
			this->Automat->Controls->Add(this->label454, 3, 18);
			this->Automat->Controls->Add(this->label455, 4, 18);
			this->Automat->Controls->Add(this->label456, 5, 18);
			this->Automat->Controls->Add(this->label457, 6, 18);
			this->Automat->Controls->Add(this->label458, 7, 18);
			this->Automat->Controls->Add(this->label459, 8, 18);
			this->Automat->Controls->Add(this->label460, 9, 18);
			this->Automat->Controls->Add(this->label461, 10, 18);
			this->Automat->Controls->Add(this->label462, 11, 18);
			this->Automat->Controls->Add(this->label463, 12, 18);
			this->Automat->Controls->Add(this->label464, 13, 18);
			this->Automat->Controls->Add(this->label465, 14, 18);
			this->Automat->Controls->Add(this->label466, 15, 18);
			this->Automat->Controls->Add(this->label467, 16, 18);
			this->Automat->Controls->Add(this->label468, 17, 18);
			this->Automat->Controls->Add(this->label469, 18, 18);
			this->Automat->Controls->Add(this->label470, 19, 18);
			this->Automat->Controls->Add(this->label471, 20, 18);
			this->Automat->Controls->Add(this->label472, 21, 18);
			this->Automat->Controls->Add(this->label473, 22, 18);
			this->Automat->Controls->Add(this->label474, 23, 18);
			this->Automat->Controls->Add(this->label475, 24, 18);
			this->Automat->Controls->Add(this->label426, 0, 17);
			this->Automat->Controls->Add(this->label427, 1, 17);
			this->Automat->Controls->Add(this->label428, 2, 17);
			this->Automat->Controls->Add(this->label429, 3, 17);
			this->Automat->Controls->Add(this->label430, 4, 17);
			this->Automat->Controls->Add(this->label431, 5, 17);
			this->Automat->Controls->Add(this->label432, 6, 17);
			this->Automat->Controls->Add(this->label433, 7, 17);
			this->Automat->Controls->Add(this->label434, 8, 17);
			this->Automat->Controls->Add(this->label435, 9, 17);
			this->Automat->Controls->Add(this->label436, 10, 17);
			this->Automat->Controls->Add(this->label437, 11, 17);
			this->Automat->Controls->Add(this->label438, 12, 17);
			this->Automat->Controls->Add(this->label439, 13, 17);
			this->Automat->Controls->Add(this->label440, 14, 17);
			this->Automat->Controls->Add(this->label441, 15, 17);
			this->Automat->Controls->Add(this->label442, 16, 17);
			this->Automat->Controls->Add(this->label443, 17, 17);
			this->Automat->Controls->Add(this->label444, 18, 17);
			this->Automat->Controls->Add(this->label445, 19, 17);
			this->Automat->Controls->Add(this->label446, 20, 17);
			this->Automat->Controls->Add(this->label447, 21, 17);
			this->Automat->Controls->Add(this->label448, 22, 17);
			this->Automat->Controls->Add(this->label449, 23, 17);
			this->Automat->Controls->Add(this->label450, 24, 17);
			this->Automat->Controls->Add(this->label401, 0, 16);
			this->Automat->Controls->Add(this->label402, 1, 16);
			this->Automat->Controls->Add(this->label403, 2, 16);
			this->Automat->Controls->Add(this->label404, 3, 16);
			this->Automat->Controls->Add(this->label405, 4, 16);
			this->Automat->Controls->Add(this->label406, 5, 16);
			this->Automat->Controls->Add(this->label407, 6, 16);
			this->Automat->Controls->Add(this->label408, 7, 16);
			this->Automat->Controls->Add(this->label409, 8, 16);
			this->Automat->Controls->Add(this->label410, 9, 16);
			this->Automat->Controls->Add(this->label411, 10, 16);
			this->Automat->Controls->Add(this->label412, 11, 16);
			this->Automat->Controls->Add(this->label413, 12, 16);
			this->Automat->Controls->Add(this->label414, 13, 16);
			this->Automat->Controls->Add(this->label415, 14, 16);
			this->Automat->Controls->Add(this->label416, 15, 16);
			this->Automat->Controls->Add(this->label417, 16, 16);
			this->Automat->Controls->Add(this->label418, 17, 16);
			this->Automat->Controls->Add(this->label419, 18, 16);
			this->Automat->Controls->Add(this->label420, 19, 16);
			this->Automat->Controls->Add(this->label421, 20, 16);
			this->Automat->Controls->Add(this->label422, 21, 16);
			this->Automat->Controls->Add(this->label423, 22, 16);
			this->Automat->Controls->Add(this->label424, 23, 16);
			this->Automat->Controls->Add(this->label425, 24, 16);
			this->Automat->Controls->Add(this->label376, 0, 15);
			this->Automat->Controls->Add(this->label377, 1, 15);
			this->Automat->Controls->Add(this->label378, 2, 15);
			this->Automat->Controls->Add(this->label379, 3, 15);
			this->Automat->Controls->Add(this->label380, 4, 15);
			this->Automat->Controls->Add(this->label381, 5, 15);
			this->Automat->Controls->Add(this->label382, 6, 15);
			this->Automat->Controls->Add(this->label383, 7, 15);
			this->Automat->Controls->Add(this->label384, 8, 15);
			this->Automat->Controls->Add(this->label385, 9, 15);
			this->Automat->Controls->Add(this->label386, 10, 15);
			this->Automat->Controls->Add(this->label387, 11, 15);
			this->Automat->Controls->Add(this->label388, 12, 15);
			this->Automat->Controls->Add(this->label389, 13, 15);
			this->Automat->Controls->Add(this->label390, 14, 15);
			this->Automat->Controls->Add(this->label391, 15, 15);
			this->Automat->Controls->Add(this->label392, 16, 15);
			this->Automat->Controls->Add(this->label393, 17, 15);
			this->Automat->Controls->Add(this->label394, 18, 15);
			this->Automat->Controls->Add(this->label395, 19, 15);
			this->Automat->Controls->Add(this->label396, 20, 15);
			this->Automat->Controls->Add(this->label397, 21, 15);
			this->Automat->Controls->Add(this->label398, 22, 15);
			this->Automat->Controls->Add(this->label399, 23, 15);
			this->Automat->Controls->Add(this->label400, 24, 15);
			this->Automat->Controls->Add(this->label351, 0, 14);
			this->Automat->Controls->Add(this->label352, 1, 14);
			this->Automat->Controls->Add(this->label353, 2, 14);
			this->Automat->Controls->Add(this->label354, 3, 14);
			this->Automat->Controls->Add(this->label355, 4, 14);
			this->Automat->Controls->Add(this->label356, 5, 14);
			this->Automat->Controls->Add(this->label357, 6, 14);
			this->Automat->Controls->Add(this->label358, 7, 14);
			this->Automat->Controls->Add(this->label359, 8, 14);
			this->Automat->Controls->Add(this->label360, 9, 14);
			this->Automat->Controls->Add(this->label361, 10, 14);
			this->Automat->Controls->Add(this->label362, 11, 14);
			this->Automat->Controls->Add(this->label363, 12, 14);
			this->Automat->Controls->Add(this->label364, 13, 14);
			this->Automat->Controls->Add(this->label365, 14, 14);
			this->Automat->Controls->Add(this->label366, 15, 14);
			this->Automat->Controls->Add(this->label367, 16, 14);
			this->Automat->Controls->Add(this->label368, 17, 14);
			this->Automat->Controls->Add(this->label369, 18, 14);
			this->Automat->Controls->Add(this->label370, 19, 14);
			this->Automat->Controls->Add(this->label371, 20, 14);
			this->Automat->Controls->Add(this->label372, 21, 14);
			this->Automat->Controls->Add(this->label373, 22, 14);
			this->Automat->Controls->Add(this->label374, 23, 14);
			this->Automat->Controls->Add(this->label375, 24, 14);
			this->Automat->Controls->Add(this->label326, 0, 13);
			this->Automat->Controls->Add(this->label327, 1, 13);
			this->Automat->Controls->Add(this->label328, 2, 13);
			this->Automat->Controls->Add(this->label329, 3, 13);
			this->Automat->Controls->Add(this->label330, 4, 13);
			this->Automat->Controls->Add(this->label331, 5, 13);
			this->Automat->Controls->Add(this->label332, 6, 13);
			this->Automat->Controls->Add(this->label333, 7, 13);
			this->Automat->Controls->Add(this->label334, 8, 13);
			this->Automat->Controls->Add(this->label335, 9, 13);
			this->Automat->Controls->Add(this->label336, 10, 13);
			this->Automat->Controls->Add(this->label337, 11, 13);
			this->Automat->Controls->Add(this->label338, 12, 13);
			this->Automat->Controls->Add(this->label339, 13, 13);
			this->Automat->Controls->Add(this->label340, 14, 13);
			this->Automat->Controls->Add(this->label341, 15, 13);
			this->Automat->Controls->Add(this->label342, 16, 13);
			this->Automat->Controls->Add(this->label343, 17, 13);
			this->Automat->Controls->Add(this->label344, 18, 13);
			this->Automat->Controls->Add(this->label345, 19, 13);
			this->Automat->Controls->Add(this->label346, 20, 13);
			this->Automat->Controls->Add(this->label347, 21, 13);
			this->Automat->Controls->Add(this->label348, 22, 13);
			this->Automat->Controls->Add(this->label349, 23, 13);
			this->Automat->Controls->Add(this->label350, 24, 13);
			this->Automat->Controls->Add(this->label301, 0, 12);
			this->Automat->Controls->Add(this->label302, 1, 12);
			this->Automat->Controls->Add(this->label303, 2, 12);
			this->Automat->Controls->Add(this->label304, 3, 12);
			this->Automat->Controls->Add(this->label305, 4, 12);
			this->Automat->Controls->Add(this->label306, 5, 12);
			this->Automat->Controls->Add(this->label307, 6, 12);
			this->Automat->Controls->Add(this->label308, 7, 12);
			this->Automat->Controls->Add(this->label309, 8, 12);
			this->Automat->Controls->Add(this->label310, 9, 12);
			this->Automat->Controls->Add(this->label311, 10, 12);
			this->Automat->Controls->Add(this->label312, 11, 12);
			this->Automat->Controls->Add(this->label313, 12, 12);
			this->Automat->Controls->Add(this->label314, 13, 12);
			this->Automat->Controls->Add(this->label315, 14, 12);
			this->Automat->Controls->Add(this->label316, 15, 12);
			this->Automat->Controls->Add(this->label317, 16, 12);
			this->Automat->Controls->Add(this->label318, 17, 12);
			this->Automat->Controls->Add(this->label319, 18, 12);
			this->Automat->Controls->Add(this->label320, 19, 12);
			this->Automat->Controls->Add(this->label321, 20, 12);
			this->Automat->Controls->Add(this->label322, 21, 12);
			this->Automat->Controls->Add(this->label323, 22, 12);
			this->Automat->Controls->Add(this->label324, 23, 12);
			this->Automat->Controls->Add(this->label325, 24, 12);
			this->Automat->Controls->Add(this->label276, 0, 11);
			this->Automat->Controls->Add(this->label277, 1, 11);
			this->Automat->Controls->Add(this->label278, 2, 11);
			this->Automat->Controls->Add(this->label279, 3, 11);
			this->Automat->Controls->Add(this->label280, 4, 11);
			this->Automat->Controls->Add(this->label281, 5, 11);
			this->Automat->Controls->Add(this->label282, 6, 11);
			this->Automat->Controls->Add(this->label283, 7, 11);
			this->Automat->Controls->Add(this->label284, 8, 11);
			this->Automat->Controls->Add(this->label285, 9, 11);
			this->Automat->Controls->Add(this->label286, 10, 11);
			this->Automat->Controls->Add(this->label287, 11, 11);
			this->Automat->Controls->Add(this->label288, 12, 11);
			this->Automat->Controls->Add(this->label289, 13, 11);
			this->Automat->Controls->Add(this->label290, 14, 11);
			this->Automat->Controls->Add(this->label291, 15, 11);
			this->Automat->Controls->Add(this->label292, 16, 11);
			this->Automat->Controls->Add(this->label293, 17, 11);
			this->Automat->Controls->Add(this->label294, 18, 11);
			this->Automat->Controls->Add(this->label295, 19, 11);
			this->Automat->Controls->Add(this->label296, 20, 11);
			this->Automat->Controls->Add(this->label297, 21, 11);
			this->Automat->Controls->Add(this->label298, 22, 11);
			this->Automat->Controls->Add(this->label299, 23, 11);
			this->Automat->Controls->Add(this->label300, 24, 11);
			this->Automat->Controls->Add(this->label251, 0, 10);
			this->Automat->Controls->Add(this->label252, 1, 10);
			this->Automat->Controls->Add(this->label253, 2, 10);
			this->Automat->Controls->Add(this->label254, 3, 10);
			this->Automat->Controls->Add(this->label255, 4, 10);
			this->Automat->Controls->Add(this->label256, 5, 10);
			this->Automat->Controls->Add(this->label257, 6, 10);
			this->Automat->Controls->Add(this->label258, 7, 10);
			this->Automat->Controls->Add(this->label259, 8, 10);
			this->Automat->Controls->Add(this->label260, 9, 10);
			this->Automat->Controls->Add(this->label261, 10, 10);
			this->Automat->Controls->Add(this->label262, 11, 10);
			this->Automat->Controls->Add(this->label263, 12, 10);
			this->Automat->Controls->Add(this->label264, 13, 10);
			this->Automat->Controls->Add(this->label265, 14, 10);
			this->Automat->Controls->Add(this->label266, 15, 10);
			this->Automat->Controls->Add(this->label267, 16, 10);
			this->Automat->Controls->Add(this->label268, 17, 10);
			this->Automat->Controls->Add(this->label269, 18, 10);
			this->Automat->Controls->Add(this->label270, 19, 10);
			this->Automat->Controls->Add(this->label271, 20, 10);
			this->Automat->Controls->Add(this->label272, 21, 10);
			this->Automat->Controls->Add(this->label273, 22, 10);
			this->Automat->Controls->Add(this->label274, 23, 10);
			this->Automat->Controls->Add(this->label275, 24, 10);
			this->Automat->Controls->Add(this->label226, 0, 9);
			this->Automat->Controls->Add(this->label227, 1, 9);
			this->Automat->Controls->Add(this->label228, 2, 9);
			this->Automat->Controls->Add(this->label229, 3, 9);
			this->Automat->Controls->Add(this->label230, 4, 9);
			this->Automat->Controls->Add(this->label231, 5, 9);
			this->Automat->Controls->Add(this->label232, 6, 9);
			this->Automat->Controls->Add(this->label233, 7, 9);
			this->Automat->Controls->Add(this->label234, 8, 9);
			this->Automat->Controls->Add(this->label235, 9, 9);
			this->Automat->Controls->Add(this->label236, 10, 9);
			this->Automat->Controls->Add(this->label237, 11, 9);
			this->Automat->Controls->Add(this->label238, 12, 9);
			this->Automat->Controls->Add(this->label239, 13, 9);
			this->Automat->Controls->Add(this->label240, 14, 9);
			this->Automat->Controls->Add(this->label241, 15, 9);
			this->Automat->Controls->Add(this->label242, 16, 9);
			this->Automat->Controls->Add(this->label243, 17, 9);
			this->Automat->Controls->Add(this->label244, 18, 9);
			this->Automat->Controls->Add(this->label245, 19, 9);
			this->Automat->Controls->Add(this->label246, 20, 9);
			this->Automat->Controls->Add(this->label247, 21, 9);
			this->Automat->Controls->Add(this->label248, 22, 9);
			this->Automat->Controls->Add(this->label249, 23, 9);
			this->Automat->Controls->Add(this->label250, 24, 9);
			this->Automat->Controls->Add(this->label201, 0, 8);
			this->Automat->Controls->Add(this->label202, 1, 8);
			this->Automat->Controls->Add(this->label203, 2, 8);
			this->Automat->Controls->Add(this->label204, 3, 8);
			this->Automat->Controls->Add(this->label205, 4, 8);
			this->Automat->Controls->Add(this->label206, 5, 8);
			this->Automat->Controls->Add(this->label207, 6, 8);
			this->Automat->Controls->Add(this->label208, 7, 8);
			this->Automat->Controls->Add(this->label209, 8, 8);
			this->Automat->Controls->Add(this->label210, 9, 8);
			this->Automat->Controls->Add(this->label211, 10, 8);
			this->Automat->Controls->Add(this->label212, 11, 8);
			this->Automat->Controls->Add(this->label213, 12, 8);
			this->Automat->Controls->Add(this->label214, 13, 8);
			this->Automat->Controls->Add(this->label215, 14, 8);
			this->Automat->Controls->Add(this->label216, 15, 8);
			this->Automat->Controls->Add(this->label217, 16, 8);
			this->Automat->Controls->Add(this->label218, 17, 8);
			this->Automat->Controls->Add(this->label219, 18, 8);
			this->Automat->Controls->Add(this->label220, 19, 8);
			this->Automat->Controls->Add(this->label221, 20, 8);
			this->Automat->Controls->Add(this->label222, 21, 8);
			this->Automat->Controls->Add(this->label223, 22, 8);
			this->Automat->Controls->Add(this->label224, 23, 8);
			this->Automat->Controls->Add(this->label225, 24, 8);
			this->Automat->Controls->Add(this->label176, 0, 7);
			this->Automat->Controls->Add(this->label177, 1, 7);
			this->Automat->Controls->Add(this->label178, 2, 7);
			this->Automat->Controls->Add(this->label179, 3, 7);
			this->Automat->Controls->Add(this->label180, 4, 7);
			this->Automat->Controls->Add(this->label181, 5, 7);
			this->Automat->Controls->Add(this->label182, 6, 7);
			this->Automat->Controls->Add(this->label183, 7, 7);
			this->Automat->Controls->Add(this->label184, 8, 7);
			this->Automat->Controls->Add(this->label185, 9, 7);
			this->Automat->Controls->Add(this->label186, 10, 7);
			this->Automat->Controls->Add(this->label187, 11, 7);
			this->Automat->Controls->Add(this->label188, 12, 7);
			this->Automat->Controls->Add(this->label189, 13, 7);
			this->Automat->Controls->Add(this->label190, 14, 7);
			this->Automat->Controls->Add(this->label191, 15, 7);
			this->Automat->Controls->Add(this->label192, 16, 7);
			this->Automat->Controls->Add(this->label193, 17, 7);
			this->Automat->Controls->Add(this->label194, 18, 7);
			this->Automat->Controls->Add(this->label195, 19, 7);
			this->Automat->Controls->Add(this->label196, 20, 7);
			this->Automat->Controls->Add(this->label197, 21, 7);
			this->Automat->Controls->Add(this->label198, 22, 7);
			this->Automat->Controls->Add(this->label199, 23, 7);
			this->Automat->Controls->Add(this->label200, 24, 7);
			this->Automat->Controls->Add(this->label151, 0, 6);
			this->Automat->Controls->Add(this->label152, 1, 6);
			this->Automat->Controls->Add(this->label153, 2, 6);
			this->Automat->Controls->Add(this->label154, 3, 6);
			this->Automat->Controls->Add(this->label155, 4, 6);
			this->Automat->Controls->Add(this->label156, 5, 6);
			this->Automat->Controls->Add(this->label157, 6, 6);
			this->Automat->Controls->Add(this->label158, 7, 6);
			this->Automat->Controls->Add(this->label159, 8, 6);
			this->Automat->Controls->Add(this->label160, 9, 6);
			this->Automat->Controls->Add(this->label161, 10, 6);
			this->Automat->Controls->Add(this->label162, 11, 6);
			this->Automat->Controls->Add(this->label163, 12, 6);
			this->Automat->Controls->Add(this->label164, 13, 6);
			this->Automat->Controls->Add(this->label165, 14, 6);
			this->Automat->Controls->Add(this->label166, 15, 6);
			this->Automat->Controls->Add(this->label167, 16, 6);
			this->Automat->Controls->Add(this->label168, 17, 6);
			this->Automat->Controls->Add(this->label169, 18, 6);
			this->Automat->Controls->Add(this->label170, 19, 6);
			this->Automat->Controls->Add(this->label171, 20, 6);
			this->Automat->Controls->Add(this->label172, 21, 6);
			this->Automat->Controls->Add(this->label173, 22, 6);
			this->Automat->Controls->Add(this->label174, 23, 6);
			this->Automat->Controls->Add(this->label175, 24, 6);
			this->Automat->Controls->Add(this->label126, 0, 5);
			this->Automat->Controls->Add(this->label127, 1, 5);
			this->Automat->Controls->Add(this->label128, 2, 5);
			this->Automat->Controls->Add(this->label129, 3, 5);
			this->Automat->Controls->Add(this->label130, 4, 5);
			this->Automat->Controls->Add(this->label131, 5, 5);
			this->Automat->Controls->Add(this->label132, 6, 5);
			this->Automat->Controls->Add(this->label133, 7, 5);
			this->Automat->Controls->Add(this->label134, 8, 5);
			this->Automat->Controls->Add(this->label135, 9, 5);
			this->Automat->Controls->Add(this->label136, 10, 5);
			this->Automat->Controls->Add(this->label137, 11, 5);
			this->Automat->Controls->Add(this->label138, 12, 5);
			this->Automat->Controls->Add(this->label139, 13, 5);
			this->Automat->Controls->Add(this->label140, 14, 5);
			this->Automat->Controls->Add(this->label141, 15, 5);
			this->Automat->Controls->Add(this->label142, 16, 5);
			this->Automat->Controls->Add(this->label143, 17, 5);
			this->Automat->Controls->Add(this->label144, 18, 5);
			this->Automat->Controls->Add(this->label145, 19, 5);
			this->Automat->Controls->Add(this->label146, 20, 5);
			this->Automat->Controls->Add(this->label147, 21, 5);
			this->Automat->Controls->Add(this->label148, 22, 5);
			this->Automat->Controls->Add(this->label149, 23, 5);
			this->Automat->Controls->Add(this->label150, 24, 5);
			this->Automat->Controls->Add(this->label101, 0, 4);
			this->Automat->Controls->Add(this->label102, 1, 4);
			this->Automat->Controls->Add(this->label103, 2, 4);
			this->Automat->Controls->Add(this->label104, 3, 4);
			this->Automat->Controls->Add(this->label105, 4, 4);
			this->Automat->Controls->Add(this->label106, 5, 4);
			this->Automat->Controls->Add(this->label107, 6, 4);
			this->Automat->Controls->Add(this->label108, 7, 4);
			this->Automat->Controls->Add(this->label109, 8, 4);
			this->Automat->Controls->Add(this->label110, 9, 4);
			this->Automat->Controls->Add(this->label111, 10, 4);
			this->Automat->Controls->Add(this->label112, 11, 4);
			this->Automat->Controls->Add(this->label113, 12, 4);
			this->Automat->Controls->Add(this->label114, 13, 4);
			this->Automat->Controls->Add(this->label115, 14, 4);
			this->Automat->Controls->Add(this->label116, 15, 4);
			this->Automat->Controls->Add(this->label117, 16, 4);
			this->Automat->Controls->Add(this->label118, 17, 4);
			this->Automat->Controls->Add(this->label119, 18, 4);
			this->Automat->Controls->Add(this->label120, 19, 4);
			this->Automat->Controls->Add(this->label121, 20, 4);
			this->Automat->Controls->Add(this->label122, 21, 4);
			this->Automat->Controls->Add(this->label123, 22, 4);
			this->Automat->Controls->Add(this->label124, 23, 4);
			this->Automat->Controls->Add(this->label125, 24, 4);
			this->Automat->Controls->Add(this->label76, 0, 3);
			this->Automat->Controls->Add(this->label77, 1, 3);
			this->Automat->Controls->Add(this->label78, 2, 3);
			this->Automat->Controls->Add(this->label79, 3, 3);
			this->Automat->Controls->Add(this->label80, 4, 3);
			this->Automat->Controls->Add(this->label81, 5, 3);
			this->Automat->Controls->Add(this->label82, 6, 3);
			this->Automat->Controls->Add(this->label83, 7, 3);
			this->Automat->Controls->Add(this->label84, 8, 3);
			this->Automat->Controls->Add(this->label85, 9, 3);
			this->Automat->Controls->Add(this->label86, 10, 3);
			this->Automat->Controls->Add(this->label87, 11, 3);
			this->Automat->Controls->Add(this->label88, 12, 3);
			this->Automat->Controls->Add(this->label89, 13, 3);
			this->Automat->Controls->Add(this->label90, 14, 3);
			this->Automat->Controls->Add(this->label91, 15, 3);
			this->Automat->Controls->Add(this->label92, 16, 3);
			this->Automat->Controls->Add(this->label93, 17, 3);
			this->Automat->Controls->Add(this->label94, 18, 3);
			this->Automat->Controls->Add(this->label95, 19, 3);
			this->Automat->Controls->Add(this->label96, 20, 3);
			this->Automat->Controls->Add(this->label97, 21, 3);
			this->Automat->Controls->Add(this->label98, 22, 3);
			this->Automat->Controls->Add(this->label99, 23, 3);
			this->Automat->Controls->Add(this->label100, 24, 3);
			this->Automat->Controls->Add(this->label51, 0, 2);
			this->Automat->Controls->Add(this->label52, 1, 2);
			this->Automat->Controls->Add(this->label53, 2, 2);
			this->Automat->Controls->Add(this->label54, 3, 2);
			this->Automat->Controls->Add(this->label55, 4, 2);
			this->Automat->Controls->Add(this->label56, 5, 2);
			this->Automat->Controls->Add(this->label57, 6, 2);
			this->Automat->Controls->Add(this->label58, 7, 2);
			this->Automat->Controls->Add(this->label59, 8, 2);
			this->Automat->Controls->Add(this->label60, 9, 2);
			this->Automat->Controls->Add(this->label61, 10, 2);
			this->Automat->Controls->Add(this->label62, 11, 2);
			this->Automat->Controls->Add(this->label63, 12, 2);
			this->Automat->Controls->Add(this->label64, 13, 2);
			this->Automat->Controls->Add(this->label65, 14, 2);
			this->Automat->Controls->Add(this->label66, 15, 2);
			this->Automat->Controls->Add(this->label67, 16, 2);
			this->Automat->Controls->Add(this->label68, 17, 2);
			this->Automat->Controls->Add(this->label69, 18, 2);
			this->Automat->Controls->Add(this->label70, 19, 2);
			this->Automat->Controls->Add(this->label71, 20, 2);
			this->Automat->Controls->Add(this->label72, 21, 2);
			this->Automat->Controls->Add(this->label73, 22, 2);
			this->Automat->Controls->Add(this->label74, 23, 2);
			this->Automat->Controls->Add(this->label75, 24, 2);
			this->Automat->Controls->Add(this->label26, 0, 1);
			this->Automat->Controls->Add(this->label27, 1, 1);
			this->Automat->Controls->Add(this->label28, 2, 1);
			this->Automat->Controls->Add(this->label29, 3, 1);
			this->Automat->Controls->Add(this->label30, 4, 1);
			this->Automat->Controls->Add(this->label31, 5, 1);
			this->Automat->Controls->Add(this->label32, 6, 1);
			this->Automat->Controls->Add(this->label33, 7, 1);
			this->Automat->Controls->Add(this->label34, 8, 1);
			this->Automat->Controls->Add(this->label35, 9, 1);
			this->Automat->Controls->Add(this->label36, 10, 1);
			this->Automat->Controls->Add(this->label37, 11, 1);
			this->Automat->Controls->Add(this->label38, 12, 1);
			this->Automat->Controls->Add(this->label39, 13, 1);
			this->Automat->Controls->Add(this->label40, 14, 1);
			this->Automat->Controls->Add(this->label41, 15, 1);
			this->Automat->Controls->Add(this->label42, 16, 1);
			this->Automat->Controls->Add(this->label43, 17, 1);
			this->Automat->Controls->Add(this->label44, 18, 1);
			this->Automat->Controls->Add(this->label45, 19, 1);
			this->Automat->Controls->Add(this->label46, 20, 1);
			this->Automat->Controls->Add(this->label47, 21, 1);
			this->Automat->Controls->Add(this->label48, 22, 1);
			this->Automat->Controls->Add(this->label49, 23, 1);
			this->Automat->Controls->Add(this->label50, 24, 1);
			this->Automat->Controls->Add(this->label25, 24, 0);
			this->Automat->Controls->Add(this->label24, 23, 0);
			this->Automat->Controls->Add(this->label23, 22, 0);
			this->Automat->Controls->Add(this->label22, 21, 0);
			this->Automat->Controls->Add(this->label21, 20, 0);
			this->Automat->Controls->Add(this->label20, 19, 0);
			this->Automat->Controls->Add(this->label19, 18, 0);
			this->Automat->Controls->Add(this->label18, 17, 0);
			this->Automat->Controls->Add(this->label17, 16, 0);
			this->Automat->Controls->Add(this->label16, 15, 0);
			this->Automat->Controls->Add(this->label15, 14, 0);
			this->Automat->Controls->Add(this->label14, 13, 0);
			this->Automat->Controls->Add(this->label13, 12, 0);
			this->Automat->Controls->Add(this->label12, 11, 0);
			this->Automat->Controls->Add(this->label11, 10, 0);
			this->Automat->Controls->Add(this->label10, 9, 0);
			this->Automat->Controls->Add(this->label9, 8, 0);
			this->Automat->Controls->Add(this->label8, 7, 0);
			this->Automat->Controls->Add(this->label7, 6, 0);
			this->Automat->Controls->Add(this->label6, 5, 0);
			this->Automat->Controls->Add(this->label5, 4, 0);
			this->Automat->Controls->Add(this->label4, 3, 0);
			this->Automat->Controls->Add(this->label3, 2, 0);
			this->Automat->Controls->Add(this->label2, 1, 0);
			this->Automat->Controls->Add(this->label1, 0, 0);
			this->Automat->Location = System::Drawing::Point(12, 12);
			this->Automat->Name = L"Automat";
			this->Automat->RowCount = 25;
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->Automat->Size = System::Drawing::Size(1535, 924);
			this->Automat->TabIndex = 0;
			// 
			// label601
			// 
			this->label601->AutoSize = true;
			this->label601->BackColor = System::Drawing::SystemColors::Window;
			this->label601->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label601->Location = System::Drawing::Point(1, 889);
			this->label601->Margin = System::Windows::Forms::Padding(0);
			this->label601->Name = L"label601";
			this->label601->Size = System::Drawing::Size(60, 36);
			this->label601->TabIndex = 624;
			// 
			// label602
			// 
			this->label602->AutoSize = true;
			this->label602->BackColor = System::Drawing::SystemColors::Window;
			this->label602->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label602->Location = System::Drawing::Point(62, 889);
			this->label602->Margin = System::Windows::Forms::Padding(0);
			this->label602->Name = L"label602";
			this->label602->Size = System::Drawing::Size(60, 36);
			this->label602->TabIndex = 623;
			// 
			// label603
			// 
			this->label603->AutoSize = true;
			this->label603->BackColor = System::Drawing::SystemColors::Window;
			this->label603->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label603->Location = System::Drawing::Point(123, 889);
			this->label603->Margin = System::Windows::Forms::Padding(0);
			this->label603->Name = L"label603";
			this->label603->Size = System::Drawing::Size(60, 36);
			this->label603->TabIndex = 622;
			// 
			// label604
			// 
			this->label604->AutoSize = true;
			this->label604->BackColor = System::Drawing::SystemColors::Window;
			this->label604->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label604->Location = System::Drawing::Point(184, 889);
			this->label604->Margin = System::Windows::Forms::Padding(0);
			this->label604->Name = L"label604";
			this->label604->Size = System::Drawing::Size(60, 36);
			this->label604->TabIndex = 621;
			// 
			// label605
			// 
			this->label605->AutoSize = true;
			this->label605->BackColor = System::Drawing::SystemColors::Window;
			this->label605->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label605->Location = System::Drawing::Point(245, 889);
			this->label605->Margin = System::Windows::Forms::Padding(0);
			this->label605->Name = L"label605";
			this->label605->Size = System::Drawing::Size(60, 36);
			this->label605->TabIndex = 620;
			// 
			// label606
			// 
			this->label606->AutoSize = true;
			this->label606->BackColor = System::Drawing::SystemColors::Window;
			this->label606->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label606->Location = System::Drawing::Point(306, 889);
			this->label606->Margin = System::Windows::Forms::Padding(0);
			this->label606->Name = L"label606";
			this->label606->Size = System::Drawing::Size(60, 36);
			this->label606->TabIndex = 619;
			// 
			// label607
			// 
			this->label607->AutoSize = true;
			this->label607->BackColor = System::Drawing::SystemColors::Window;
			this->label607->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label607->Location = System::Drawing::Point(367, 889);
			this->label607->Margin = System::Windows::Forms::Padding(0);
			this->label607->Name = L"label607";
			this->label607->Size = System::Drawing::Size(60, 36);
			this->label607->TabIndex = 618;
			// 
			// label608
			// 
			this->label608->AutoSize = true;
			this->label608->BackColor = System::Drawing::SystemColors::Window;
			this->label608->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label608->Location = System::Drawing::Point(428, 889);
			this->label608->Margin = System::Windows::Forms::Padding(0);
			this->label608->Name = L"label608";
			this->label608->Size = System::Drawing::Size(60, 36);
			this->label608->TabIndex = 617;
			// 
			// label609
			// 
			this->label609->AutoSize = true;
			this->label609->BackColor = System::Drawing::SystemColors::Window;
			this->label609->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label609->Location = System::Drawing::Point(489, 889);
			this->label609->Margin = System::Windows::Forms::Padding(0);
			this->label609->Name = L"label609";
			this->label609->Size = System::Drawing::Size(60, 36);
			this->label609->TabIndex = 616;
			// 
			// label610
			// 
			this->label610->AutoSize = true;
			this->label610->BackColor = System::Drawing::SystemColors::Window;
			this->label610->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label610->Location = System::Drawing::Point(550, 889);
			this->label610->Margin = System::Windows::Forms::Padding(0);
			this->label610->Name = L"label610";
			this->label610->Size = System::Drawing::Size(60, 36);
			this->label610->TabIndex = 615;
			// 
			// label611
			// 
			this->label611->AutoSize = true;
			this->label611->BackColor = System::Drawing::SystemColors::Window;
			this->label611->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label611->Location = System::Drawing::Point(611, 889);
			this->label611->Margin = System::Windows::Forms::Padding(0);
			this->label611->Name = L"label611";
			this->label611->Size = System::Drawing::Size(60, 36);
			this->label611->TabIndex = 614;
			// 
			// label612
			// 
			this->label612->AutoSize = true;
			this->label612->BackColor = System::Drawing::SystemColors::Window;
			this->label612->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label612->Location = System::Drawing::Point(672, 889);
			this->label612->Margin = System::Windows::Forms::Padding(0);
			this->label612->Name = L"label612";
			this->label612->Size = System::Drawing::Size(60, 36);
			this->label612->TabIndex = 613;
			// 
			// label613
			// 
			this->label613->AutoSize = true;
			this->label613->BackColor = System::Drawing::SystemColors::Window;
			this->label613->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label613->Location = System::Drawing::Point(733, 889);
			this->label613->Margin = System::Windows::Forms::Padding(0);
			this->label613->Name = L"label613";
			this->label613->Size = System::Drawing::Size(60, 36);
			this->label613->TabIndex = 612;
			// 
			// label614
			// 
			this->label614->AutoSize = true;
			this->label614->BackColor = System::Drawing::SystemColors::Window;
			this->label614->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label614->Location = System::Drawing::Point(794, 889);
			this->label614->Margin = System::Windows::Forms::Padding(0);
			this->label614->Name = L"label614";
			this->label614->Size = System::Drawing::Size(60, 36);
			this->label614->TabIndex = 611;
			// 
			// label615
			// 
			this->label615->AutoSize = true;
			this->label615->BackColor = System::Drawing::SystemColors::Window;
			this->label615->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label615->Location = System::Drawing::Point(855, 889);
			this->label615->Margin = System::Windows::Forms::Padding(0);
			this->label615->Name = L"label615";
			this->label615->Size = System::Drawing::Size(60, 36);
			this->label615->TabIndex = 610;
			// 
			// label616
			// 
			this->label616->AutoSize = true;
			this->label616->BackColor = System::Drawing::SystemColors::Window;
			this->label616->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label616->Location = System::Drawing::Point(916, 889);
			this->label616->Margin = System::Windows::Forms::Padding(0);
			this->label616->Name = L"label616";
			this->label616->Size = System::Drawing::Size(60, 36);
			this->label616->TabIndex = 609;
			// 
			// label617
			// 
			this->label617->AutoSize = true;
			this->label617->BackColor = System::Drawing::SystemColors::Window;
			this->label617->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label617->Location = System::Drawing::Point(977, 889);
			this->label617->Margin = System::Windows::Forms::Padding(0);
			this->label617->Name = L"label617";
			this->label617->Size = System::Drawing::Size(60, 36);
			this->label617->TabIndex = 608;
			// 
			// label618
			// 
			this->label618->AutoSize = true;
			this->label618->BackColor = System::Drawing::SystemColors::Window;
			this->label618->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label618->Location = System::Drawing::Point(1038, 889);
			this->label618->Margin = System::Windows::Forms::Padding(0);
			this->label618->Name = L"label618";
			this->label618->Size = System::Drawing::Size(60, 36);
			this->label618->TabIndex = 607;
			// 
			// label619
			// 
			this->label619->AutoSize = true;
			this->label619->BackColor = System::Drawing::SystemColors::Window;
			this->label619->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label619->Location = System::Drawing::Point(1099, 889);
			this->label619->Margin = System::Windows::Forms::Padding(0);
			this->label619->Name = L"label619";
			this->label619->Size = System::Drawing::Size(60, 36);
			this->label619->TabIndex = 606;
			// 
			// label620
			// 
			this->label620->AutoSize = true;
			this->label620->BackColor = System::Drawing::SystemColors::Window;
			this->label620->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label620->Location = System::Drawing::Point(1160, 889);
			this->label620->Margin = System::Windows::Forms::Padding(0);
			this->label620->Name = L"label620";
			this->label620->Size = System::Drawing::Size(60, 36);
			this->label620->TabIndex = 605;
			// 
			// label621
			// 
			this->label621->AutoSize = true;
			this->label621->BackColor = System::Drawing::SystemColors::Window;
			this->label621->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label621->Location = System::Drawing::Point(1221, 889);
			this->label621->Margin = System::Windows::Forms::Padding(0);
			this->label621->Name = L"label621";
			this->label621->Size = System::Drawing::Size(60, 36);
			this->label621->TabIndex = 604;
			// 
			// label622
			// 
			this->label622->AutoSize = true;
			this->label622->BackColor = System::Drawing::SystemColors::Window;
			this->label622->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label622->Location = System::Drawing::Point(1282, 889);
			this->label622->Margin = System::Windows::Forms::Padding(0);
			this->label622->Name = L"label622";
			this->label622->Size = System::Drawing::Size(60, 36);
			this->label622->TabIndex = 603;
			// 
			// label623
			// 
			this->label623->AutoSize = true;
			this->label623->BackColor = System::Drawing::SystemColors::Window;
			this->label623->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label623->Location = System::Drawing::Point(1343, 889);
			this->label623->Margin = System::Windows::Forms::Padding(0);
			this->label623->Name = L"label623";
			this->label623->Size = System::Drawing::Size(60, 36);
			this->label623->TabIndex = 602;
			// 
			// label624
			// 
			this->label624->AutoSize = true;
			this->label624->BackColor = System::Drawing::SystemColors::Window;
			this->label624->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label624->Location = System::Drawing::Point(1404, 889);
			this->label624->Margin = System::Windows::Forms::Padding(0);
			this->label624->Name = L"label624";
			this->label624->Size = System::Drawing::Size(60, 36);
			this->label624->TabIndex = 601;
			// 
			// label625
			// 
			this->label625->AutoSize = true;
			this->label625->BackColor = System::Drawing::SystemColors::Window;
			this->label625->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label625->Location = System::Drawing::Point(1465, 889);
			this->label625->Margin = System::Windows::Forms::Padding(0);
			this->label625->Name = L"label625";
			this->label625->Size = System::Drawing::Size(96, 36);
			this->label625->TabIndex = 600;
			// 
			// label576
			// 
			this->label576->AutoSize = true;
			this->label576->BackColor = System::Drawing::SystemColors::Window;
			this->label576->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label576->Location = System::Drawing::Point(1, 852);
			this->label576->Margin = System::Windows::Forms::Padding(0);
			this->label576->Name = L"label576";
			this->label576->Size = System::Drawing::Size(60, 36);
			this->label576->TabIndex = 599;
			// 
			// label577
			// 
			this->label577->AutoSize = true;
			this->label577->BackColor = System::Drawing::SystemColors::Window;
			this->label577->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label577->Location = System::Drawing::Point(62, 852);
			this->label577->Margin = System::Windows::Forms::Padding(0);
			this->label577->Name = L"label577";
			this->label577->Size = System::Drawing::Size(60, 36);
			this->label577->TabIndex = 598;
			// 
			// label578
			// 
			this->label578->AutoSize = true;
			this->label578->BackColor = System::Drawing::SystemColors::Window;
			this->label578->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label578->Location = System::Drawing::Point(123, 852);
			this->label578->Margin = System::Windows::Forms::Padding(0);
			this->label578->Name = L"label578";
			this->label578->Size = System::Drawing::Size(60, 36);
			this->label578->TabIndex = 597;
			// 
			// label579
			// 
			this->label579->AutoSize = true;
			this->label579->BackColor = System::Drawing::SystemColors::Window;
			this->label579->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label579->Location = System::Drawing::Point(184, 852);
			this->label579->Margin = System::Windows::Forms::Padding(0);
			this->label579->Name = L"label579";
			this->label579->Size = System::Drawing::Size(60, 36);
			this->label579->TabIndex = 596;
			// 
			// label580
			// 
			this->label580->AutoSize = true;
			this->label580->BackColor = System::Drawing::SystemColors::Window;
			this->label580->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label580->Location = System::Drawing::Point(245, 852);
			this->label580->Margin = System::Windows::Forms::Padding(0);
			this->label580->Name = L"label580";
			this->label580->Size = System::Drawing::Size(60, 36);
			this->label580->TabIndex = 595;
			// 
			// label581
			// 
			this->label581->AutoSize = true;
			this->label581->BackColor = System::Drawing::SystemColors::Window;
			this->label581->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label581->Location = System::Drawing::Point(306, 852);
			this->label581->Margin = System::Windows::Forms::Padding(0);
			this->label581->Name = L"label581";
			this->label581->Size = System::Drawing::Size(60, 36);
			this->label581->TabIndex = 594;
			// 
			// label582
			// 
			this->label582->AutoSize = true;
			this->label582->BackColor = System::Drawing::SystemColors::Window;
			this->label582->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label582->Location = System::Drawing::Point(367, 852);
			this->label582->Margin = System::Windows::Forms::Padding(0);
			this->label582->Name = L"label582";
			this->label582->Size = System::Drawing::Size(60, 36);
			this->label582->TabIndex = 593;
			// 
			// label583
			// 
			this->label583->AutoSize = true;
			this->label583->BackColor = System::Drawing::SystemColors::Window;
			this->label583->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label583->Location = System::Drawing::Point(428, 852);
			this->label583->Margin = System::Windows::Forms::Padding(0);
			this->label583->Name = L"label583";
			this->label583->Size = System::Drawing::Size(60, 36);
			this->label583->TabIndex = 592;
			// 
			// label584
			// 
			this->label584->AutoSize = true;
			this->label584->BackColor = System::Drawing::SystemColors::Window;
			this->label584->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label584->Location = System::Drawing::Point(489, 852);
			this->label584->Margin = System::Windows::Forms::Padding(0);
			this->label584->Name = L"label584";
			this->label584->Size = System::Drawing::Size(60, 36);
			this->label584->TabIndex = 591;
			// 
			// label585
			// 
			this->label585->AutoSize = true;
			this->label585->BackColor = System::Drawing::SystemColors::Window;
			this->label585->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label585->Location = System::Drawing::Point(550, 852);
			this->label585->Margin = System::Windows::Forms::Padding(0);
			this->label585->Name = L"label585";
			this->label585->Size = System::Drawing::Size(60, 36);
			this->label585->TabIndex = 590;
			// 
			// label586
			// 
			this->label586->AutoSize = true;
			this->label586->BackColor = System::Drawing::SystemColors::Window;
			this->label586->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label586->Location = System::Drawing::Point(611, 852);
			this->label586->Margin = System::Windows::Forms::Padding(0);
			this->label586->Name = L"label586";
			this->label586->Size = System::Drawing::Size(60, 36);
			this->label586->TabIndex = 589;
			// 
			// label587
			// 
			this->label587->AutoSize = true;
			this->label587->BackColor = System::Drawing::SystemColors::Window;
			this->label587->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label587->Location = System::Drawing::Point(672, 852);
			this->label587->Margin = System::Windows::Forms::Padding(0);
			this->label587->Name = L"label587";
			this->label587->Size = System::Drawing::Size(60, 36);
			this->label587->TabIndex = 588;
			// 
			// label588
			// 
			this->label588->AutoSize = true;
			this->label588->BackColor = System::Drawing::SystemColors::Window;
			this->label588->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label588->Location = System::Drawing::Point(733, 852);
			this->label588->Margin = System::Windows::Forms::Padding(0);
			this->label588->Name = L"label588";
			this->label588->Size = System::Drawing::Size(60, 36);
			this->label588->TabIndex = 587;
			// 
			// label589
			// 
			this->label589->AutoSize = true;
			this->label589->BackColor = System::Drawing::SystemColors::Window;
			this->label589->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label589->Location = System::Drawing::Point(794, 852);
			this->label589->Margin = System::Windows::Forms::Padding(0);
			this->label589->Name = L"label589";
			this->label589->Size = System::Drawing::Size(60, 36);
			this->label589->TabIndex = 586;
			// 
			// label590
			// 
			this->label590->AutoSize = true;
			this->label590->BackColor = System::Drawing::SystemColors::Window;
			this->label590->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label590->Location = System::Drawing::Point(855, 852);
			this->label590->Margin = System::Windows::Forms::Padding(0);
			this->label590->Name = L"label590";
			this->label590->Size = System::Drawing::Size(60, 36);
			this->label590->TabIndex = 585;
			// 
			// label591
			// 
			this->label591->AutoSize = true;
			this->label591->BackColor = System::Drawing::SystemColors::Window;
			this->label591->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label591->Location = System::Drawing::Point(916, 852);
			this->label591->Margin = System::Windows::Forms::Padding(0);
			this->label591->Name = L"label591";
			this->label591->Size = System::Drawing::Size(60, 36);
			this->label591->TabIndex = 584;
			// 
			// label592
			// 
			this->label592->AutoSize = true;
			this->label592->BackColor = System::Drawing::SystemColors::Window;
			this->label592->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label592->Location = System::Drawing::Point(977, 852);
			this->label592->Margin = System::Windows::Forms::Padding(0);
			this->label592->Name = L"label592";
			this->label592->Size = System::Drawing::Size(60, 36);
			this->label592->TabIndex = 583;
			// 
			// label593
			// 
			this->label593->AutoSize = true;
			this->label593->BackColor = System::Drawing::SystemColors::Window;
			this->label593->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label593->Location = System::Drawing::Point(1038, 852);
			this->label593->Margin = System::Windows::Forms::Padding(0);
			this->label593->Name = L"label593";
			this->label593->Size = System::Drawing::Size(60, 36);
			this->label593->TabIndex = 582;
			// 
			// label594
			// 
			this->label594->AutoSize = true;
			this->label594->BackColor = System::Drawing::SystemColors::Window;
			this->label594->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label594->Location = System::Drawing::Point(1099, 852);
			this->label594->Margin = System::Windows::Forms::Padding(0);
			this->label594->Name = L"label594";
			this->label594->Size = System::Drawing::Size(60, 36);
			this->label594->TabIndex = 581;
			// 
			// label595
			// 
			this->label595->AutoSize = true;
			this->label595->BackColor = System::Drawing::SystemColors::Window;
			this->label595->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label595->Location = System::Drawing::Point(1160, 852);
			this->label595->Margin = System::Windows::Forms::Padding(0);
			this->label595->Name = L"label595";
			this->label595->Size = System::Drawing::Size(60, 36);
			this->label595->TabIndex = 580;
			// 
			// label596
			// 
			this->label596->AutoSize = true;
			this->label596->BackColor = System::Drawing::SystemColors::Window;
			this->label596->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label596->Location = System::Drawing::Point(1221, 852);
			this->label596->Margin = System::Windows::Forms::Padding(0);
			this->label596->Name = L"label596";
			this->label596->Size = System::Drawing::Size(60, 36);
			this->label596->TabIndex = 579;
			// 
			// label597
			// 
			this->label597->AutoSize = true;
			this->label597->BackColor = System::Drawing::SystemColors::Window;
			this->label597->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label597->Location = System::Drawing::Point(1282, 852);
			this->label597->Margin = System::Windows::Forms::Padding(0);
			this->label597->Name = L"label597";
			this->label597->Size = System::Drawing::Size(60, 36);
			this->label597->TabIndex = 578;
			// 
			// label598
			// 
			this->label598->AutoSize = true;
			this->label598->BackColor = System::Drawing::SystemColors::Window;
			this->label598->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label598->Location = System::Drawing::Point(1343, 852);
			this->label598->Margin = System::Windows::Forms::Padding(0);
			this->label598->Name = L"label598";
			this->label598->Size = System::Drawing::Size(60, 36);
			this->label598->TabIndex = 577;
			// 
			// label599
			// 
			this->label599->AutoSize = true;
			this->label599->BackColor = System::Drawing::SystemColors::Window;
			this->label599->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label599->Location = System::Drawing::Point(1404, 852);
			this->label599->Margin = System::Windows::Forms::Padding(0);
			this->label599->Name = L"label599";
			this->label599->Size = System::Drawing::Size(60, 36);
			this->label599->TabIndex = 576;
			// 
			// label600
			// 
			this->label600->AutoSize = true;
			this->label600->BackColor = System::Drawing::SystemColors::Window;
			this->label600->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label600->Location = System::Drawing::Point(1465, 852);
			this->label600->Margin = System::Windows::Forms::Padding(0);
			this->label600->Name = L"label600";
			this->label600->Size = System::Drawing::Size(96, 36);
			this->label600->TabIndex = 575;
			// 
			// label551
			// 
			this->label551->AutoSize = true;
			this->label551->BackColor = System::Drawing::SystemColors::Window;
			this->label551->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label551->Location = System::Drawing::Point(1, 815);
			this->label551->Margin = System::Windows::Forms::Padding(0);
			this->label551->Name = L"label551";
			this->label551->Size = System::Drawing::Size(60, 36);
			this->label551->TabIndex = 574;
			// 
			// label552
			// 
			this->label552->AutoSize = true;
			this->label552->BackColor = System::Drawing::SystemColors::Window;
			this->label552->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label552->Location = System::Drawing::Point(62, 815);
			this->label552->Margin = System::Windows::Forms::Padding(0);
			this->label552->Name = L"label552";
			this->label552->Size = System::Drawing::Size(60, 36);
			this->label552->TabIndex = 573;
			// 
			// label553
			// 
			this->label553->AutoSize = true;
			this->label553->BackColor = System::Drawing::SystemColors::Window;
			this->label553->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label553->Location = System::Drawing::Point(123, 815);
			this->label553->Margin = System::Windows::Forms::Padding(0);
			this->label553->Name = L"label553";
			this->label553->Size = System::Drawing::Size(60, 36);
			this->label553->TabIndex = 572;
			// 
			// label554
			// 
			this->label554->AutoSize = true;
			this->label554->BackColor = System::Drawing::SystemColors::Window;
			this->label554->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label554->Location = System::Drawing::Point(184, 815);
			this->label554->Margin = System::Windows::Forms::Padding(0);
			this->label554->Name = L"label554";
			this->label554->Size = System::Drawing::Size(60, 36);
			this->label554->TabIndex = 571;
			// 
			// label555
			// 
			this->label555->AutoSize = true;
			this->label555->BackColor = System::Drawing::SystemColors::Window;
			this->label555->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label555->Location = System::Drawing::Point(245, 815);
			this->label555->Margin = System::Windows::Forms::Padding(0);
			this->label555->Name = L"label555";
			this->label555->Size = System::Drawing::Size(60, 36);
			this->label555->TabIndex = 570;
			// 
			// label556
			// 
			this->label556->AutoSize = true;
			this->label556->BackColor = System::Drawing::SystemColors::Window;
			this->label556->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label556->Location = System::Drawing::Point(306, 815);
			this->label556->Margin = System::Windows::Forms::Padding(0);
			this->label556->Name = L"label556";
			this->label556->Size = System::Drawing::Size(60, 36);
			this->label556->TabIndex = 569;
			// 
			// label557
			// 
			this->label557->AutoSize = true;
			this->label557->BackColor = System::Drawing::SystemColors::Window;
			this->label557->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label557->Location = System::Drawing::Point(367, 815);
			this->label557->Margin = System::Windows::Forms::Padding(0);
			this->label557->Name = L"label557";
			this->label557->Size = System::Drawing::Size(60, 36);
			this->label557->TabIndex = 568;
			// 
			// label558
			// 
			this->label558->AutoSize = true;
			this->label558->BackColor = System::Drawing::SystemColors::Window;
			this->label558->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label558->Location = System::Drawing::Point(428, 815);
			this->label558->Margin = System::Windows::Forms::Padding(0);
			this->label558->Name = L"label558";
			this->label558->Size = System::Drawing::Size(60, 36);
			this->label558->TabIndex = 567;
			// 
			// label559
			// 
			this->label559->AutoSize = true;
			this->label559->BackColor = System::Drawing::SystemColors::Window;
			this->label559->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label559->Location = System::Drawing::Point(489, 815);
			this->label559->Margin = System::Windows::Forms::Padding(0);
			this->label559->Name = L"label559";
			this->label559->Size = System::Drawing::Size(60, 36);
			this->label559->TabIndex = 566;
			// 
			// label560
			// 
			this->label560->AutoSize = true;
			this->label560->BackColor = System::Drawing::SystemColors::Window;
			this->label560->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label560->Location = System::Drawing::Point(550, 815);
			this->label560->Margin = System::Windows::Forms::Padding(0);
			this->label560->Name = L"label560";
			this->label560->Size = System::Drawing::Size(60, 36);
			this->label560->TabIndex = 565;
			// 
			// label561
			// 
			this->label561->AutoSize = true;
			this->label561->BackColor = System::Drawing::SystemColors::Window;
			this->label561->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label561->Location = System::Drawing::Point(611, 815);
			this->label561->Margin = System::Windows::Forms::Padding(0);
			this->label561->Name = L"label561";
			this->label561->Size = System::Drawing::Size(60, 36);
			this->label561->TabIndex = 564;
			// 
			// label562
			// 
			this->label562->AutoSize = true;
			this->label562->BackColor = System::Drawing::SystemColors::Window;
			this->label562->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label562->Location = System::Drawing::Point(672, 815);
			this->label562->Margin = System::Windows::Forms::Padding(0);
			this->label562->Name = L"label562";
			this->label562->Size = System::Drawing::Size(60, 36);
			this->label562->TabIndex = 563;
			// 
			// label563
			// 
			this->label563->AutoSize = true;
			this->label563->BackColor = System::Drawing::SystemColors::Window;
			this->label563->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label563->Location = System::Drawing::Point(733, 815);
			this->label563->Margin = System::Windows::Forms::Padding(0);
			this->label563->Name = L"label563";
			this->label563->Size = System::Drawing::Size(60, 36);
			this->label563->TabIndex = 562;
			// 
			// label564
			// 
			this->label564->AutoSize = true;
			this->label564->BackColor = System::Drawing::SystemColors::Window;
			this->label564->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label564->Location = System::Drawing::Point(794, 815);
			this->label564->Margin = System::Windows::Forms::Padding(0);
			this->label564->Name = L"label564";
			this->label564->Size = System::Drawing::Size(60, 36);
			this->label564->TabIndex = 561;
			// 
			// label565
			// 
			this->label565->AutoSize = true;
			this->label565->BackColor = System::Drawing::SystemColors::Window;
			this->label565->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label565->Location = System::Drawing::Point(855, 815);
			this->label565->Margin = System::Windows::Forms::Padding(0);
			this->label565->Name = L"label565";
			this->label565->Size = System::Drawing::Size(60, 36);
			this->label565->TabIndex = 560;
			// 
			// label566
			// 
			this->label566->AutoSize = true;
			this->label566->BackColor = System::Drawing::SystemColors::Window;
			this->label566->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label566->Location = System::Drawing::Point(916, 815);
			this->label566->Margin = System::Windows::Forms::Padding(0);
			this->label566->Name = L"label566";
			this->label566->Size = System::Drawing::Size(60, 36);
			this->label566->TabIndex = 559;
			// 
			// label567
			// 
			this->label567->AutoSize = true;
			this->label567->BackColor = System::Drawing::SystemColors::Window;
			this->label567->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label567->Location = System::Drawing::Point(977, 815);
			this->label567->Margin = System::Windows::Forms::Padding(0);
			this->label567->Name = L"label567";
			this->label567->Size = System::Drawing::Size(60, 36);
			this->label567->TabIndex = 558;
			// 
			// label568
			// 
			this->label568->AutoSize = true;
			this->label568->BackColor = System::Drawing::SystemColors::Window;
			this->label568->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label568->Location = System::Drawing::Point(1038, 815);
			this->label568->Margin = System::Windows::Forms::Padding(0);
			this->label568->Name = L"label568";
			this->label568->Size = System::Drawing::Size(60, 36);
			this->label568->TabIndex = 557;
			// 
			// label569
			// 
			this->label569->AutoSize = true;
			this->label569->BackColor = System::Drawing::SystemColors::Window;
			this->label569->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label569->Location = System::Drawing::Point(1099, 815);
			this->label569->Margin = System::Windows::Forms::Padding(0);
			this->label569->Name = L"label569";
			this->label569->Size = System::Drawing::Size(60, 36);
			this->label569->TabIndex = 556;
			// 
			// label570
			// 
			this->label570->AutoSize = true;
			this->label570->BackColor = System::Drawing::SystemColors::Window;
			this->label570->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label570->Location = System::Drawing::Point(1160, 815);
			this->label570->Margin = System::Windows::Forms::Padding(0);
			this->label570->Name = L"label570";
			this->label570->Size = System::Drawing::Size(60, 36);
			this->label570->TabIndex = 555;
			// 
			// label571
			// 
			this->label571->AutoSize = true;
			this->label571->BackColor = System::Drawing::SystemColors::Window;
			this->label571->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label571->Location = System::Drawing::Point(1221, 815);
			this->label571->Margin = System::Windows::Forms::Padding(0);
			this->label571->Name = L"label571";
			this->label571->Size = System::Drawing::Size(60, 36);
			this->label571->TabIndex = 554;
			// 
			// label572
			// 
			this->label572->AutoSize = true;
			this->label572->BackColor = System::Drawing::SystemColors::Window;
			this->label572->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label572->Location = System::Drawing::Point(1282, 815);
			this->label572->Margin = System::Windows::Forms::Padding(0);
			this->label572->Name = L"label572";
			this->label572->Size = System::Drawing::Size(60, 36);
			this->label572->TabIndex = 553;
			// 
			// label573
			// 
			this->label573->AutoSize = true;
			this->label573->BackColor = System::Drawing::SystemColors::Window;
			this->label573->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label573->Location = System::Drawing::Point(1343, 815);
			this->label573->Margin = System::Windows::Forms::Padding(0);
			this->label573->Name = L"label573";
			this->label573->Size = System::Drawing::Size(60, 36);
			this->label573->TabIndex = 552;
			// 
			// label574
			// 
			this->label574->AutoSize = true;
			this->label574->BackColor = System::Drawing::SystemColors::Window;
			this->label574->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label574->Location = System::Drawing::Point(1404, 815);
			this->label574->Margin = System::Windows::Forms::Padding(0);
			this->label574->Name = L"label574";
			this->label574->Size = System::Drawing::Size(60, 36);
			this->label574->TabIndex = 551;
			// 
			// label575
			// 
			this->label575->AutoSize = true;
			this->label575->BackColor = System::Drawing::SystemColors::Window;
			this->label575->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label575->Location = System::Drawing::Point(1465, 815);
			this->label575->Margin = System::Windows::Forms::Padding(0);
			this->label575->Name = L"label575";
			this->label575->Size = System::Drawing::Size(96, 36);
			this->label575->TabIndex = 550;
			// 
			// label526
			// 
			this->label526->AutoSize = true;
			this->label526->BackColor = System::Drawing::SystemColors::Window;
			this->label526->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label526->Location = System::Drawing::Point(1, 778);
			this->label526->Margin = System::Windows::Forms::Padding(0);
			this->label526->Name = L"label526";
			this->label526->Size = System::Drawing::Size(60, 36);
			this->label526->TabIndex = 549;
			// 
			// label527
			// 
			this->label527->AutoSize = true;
			this->label527->BackColor = System::Drawing::SystemColors::Window;
			this->label527->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label527->Location = System::Drawing::Point(62, 778);
			this->label527->Margin = System::Windows::Forms::Padding(0);
			this->label527->Name = L"label527";
			this->label527->Size = System::Drawing::Size(60, 36);
			this->label527->TabIndex = 548;
			// 
			// label528
			// 
			this->label528->AutoSize = true;
			this->label528->BackColor = System::Drawing::SystemColors::Window;
			this->label528->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label528->Location = System::Drawing::Point(123, 778);
			this->label528->Margin = System::Windows::Forms::Padding(0);
			this->label528->Name = L"label528";
			this->label528->Size = System::Drawing::Size(60, 36);
			this->label528->TabIndex = 547;
			// 
			// label529
			// 
			this->label529->AutoSize = true;
			this->label529->BackColor = System::Drawing::SystemColors::Window;
			this->label529->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label529->Location = System::Drawing::Point(184, 778);
			this->label529->Margin = System::Windows::Forms::Padding(0);
			this->label529->Name = L"label529";
			this->label529->Size = System::Drawing::Size(60, 36);
			this->label529->TabIndex = 546;
			// 
			// label530
			// 
			this->label530->AutoSize = true;
			this->label530->BackColor = System::Drawing::SystemColors::Window;
			this->label530->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label530->Location = System::Drawing::Point(245, 778);
			this->label530->Margin = System::Windows::Forms::Padding(0);
			this->label530->Name = L"label530";
			this->label530->Size = System::Drawing::Size(60, 36);
			this->label530->TabIndex = 545;
			// 
			// label531
			// 
			this->label531->AutoSize = true;
			this->label531->BackColor = System::Drawing::SystemColors::Window;
			this->label531->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label531->Location = System::Drawing::Point(306, 778);
			this->label531->Margin = System::Windows::Forms::Padding(0);
			this->label531->Name = L"label531";
			this->label531->Size = System::Drawing::Size(60, 36);
			this->label531->TabIndex = 544;
			// 
			// label532
			// 
			this->label532->AutoSize = true;
			this->label532->BackColor = System::Drawing::SystemColors::Window;
			this->label532->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label532->Location = System::Drawing::Point(367, 778);
			this->label532->Margin = System::Windows::Forms::Padding(0);
			this->label532->Name = L"label532";
			this->label532->Size = System::Drawing::Size(60, 36);
			this->label532->TabIndex = 543;
			// 
			// label533
			// 
			this->label533->AutoSize = true;
			this->label533->BackColor = System::Drawing::SystemColors::Window;
			this->label533->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label533->Location = System::Drawing::Point(428, 778);
			this->label533->Margin = System::Windows::Forms::Padding(0);
			this->label533->Name = L"label533";
			this->label533->Size = System::Drawing::Size(60, 36);
			this->label533->TabIndex = 542;
			// 
			// label534
			// 
			this->label534->AutoSize = true;
			this->label534->BackColor = System::Drawing::SystemColors::Window;
			this->label534->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label534->Location = System::Drawing::Point(489, 778);
			this->label534->Margin = System::Windows::Forms::Padding(0);
			this->label534->Name = L"label534";
			this->label534->Size = System::Drawing::Size(60, 36);
			this->label534->TabIndex = 541;
			// 
			// label535
			// 
			this->label535->AutoSize = true;
			this->label535->BackColor = System::Drawing::SystemColors::Window;
			this->label535->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label535->Location = System::Drawing::Point(550, 778);
			this->label535->Margin = System::Windows::Forms::Padding(0);
			this->label535->Name = L"label535";
			this->label535->Size = System::Drawing::Size(60, 36);
			this->label535->TabIndex = 540;
			// 
			// label536
			// 
			this->label536->AutoSize = true;
			this->label536->BackColor = System::Drawing::SystemColors::Window;
			this->label536->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label536->Location = System::Drawing::Point(611, 778);
			this->label536->Margin = System::Windows::Forms::Padding(0);
			this->label536->Name = L"label536";
			this->label536->Size = System::Drawing::Size(60, 36);
			this->label536->TabIndex = 539;
			// 
			// label537
			// 
			this->label537->AutoSize = true;
			this->label537->BackColor = System::Drawing::SystemColors::Window;
			this->label537->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label537->Location = System::Drawing::Point(672, 778);
			this->label537->Margin = System::Windows::Forms::Padding(0);
			this->label537->Name = L"label537";
			this->label537->Size = System::Drawing::Size(60, 36);
			this->label537->TabIndex = 538;
			// 
			// label538
			// 
			this->label538->AutoSize = true;
			this->label538->BackColor = System::Drawing::SystemColors::Window;
			this->label538->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label538->Location = System::Drawing::Point(733, 778);
			this->label538->Margin = System::Windows::Forms::Padding(0);
			this->label538->Name = L"label538";
			this->label538->Size = System::Drawing::Size(60, 36);
			this->label538->TabIndex = 537;
			// 
			// label539
			// 
			this->label539->AutoSize = true;
			this->label539->BackColor = System::Drawing::SystemColors::Window;
			this->label539->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label539->Location = System::Drawing::Point(794, 778);
			this->label539->Margin = System::Windows::Forms::Padding(0);
			this->label539->Name = L"label539";
			this->label539->Size = System::Drawing::Size(60, 36);
			this->label539->TabIndex = 536;
			// 
			// label540
			// 
			this->label540->AutoSize = true;
			this->label540->BackColor = System::Drawing::SystemColors::Window;
			this->label540->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label540->Location = System::Drawing::Point(855, 778);
			this->label540->Margin = System::Windows::Forms::Padding(0);
			this->label540->Name = L"label540";
			this->label540->Size = System::Drawing::Size(60, 36);
			this->label540->TabIndex = 535;
			// 
			// label541
			// 
			this->label541->AutoSize = true;
			this->label541->BackColor = System::Drawing::SystemColors::Window;
			this->label541->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label541->Location = System::Drawing::Point(916, 778);
			this->label541->Margin = System::Windows::Forms::Padding(0);
			this->label541->Name = L"label541";
			this->label541->Size = System::Drawing::Size(60, 36);
			this->label541->TabIndex = 534;
			// 
			// label542
			// 
			this->label542->AutoSize = true;
			this->label542->BackColor = System::Drawing::SystemColors::Window;
			this->label542->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label542->Location = System::Drawing::Point(977, 778);
			this->label542->Margin = System::Windows::Forms::Padding(0);
			this->label542->Name = L"label542";
			this->label542->Size = System::Drawing::Size(60, 36);
			this->label542->TabIndex = 533;
			// 
			// label543
			// 
			this->label543->AutoSize = true;
			this->label543->BackColor = System::Drawing::SystemColors::Window;
			this->label543->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label543->Location = System::Drawing::Point(1038, 778);
			this->label543->Margin = System::Windows::Forms::Padding(0);
			this->label543->Name = L"label543";
			this->label543->Size = System::Drawing::Size(60, 36);
			this->label543->TabIndex = 532;
			// 
			// label544
			// 
			this->label544->AutoSize = true;
			this->label544->BackColor = System::Drawing::SystemColors::Window;
			this->label544->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label544->Location = System::Drawing::Point(1099, 778);
			this->label544->Margin = System::Windows::Forms::Padding(0);
			this->label544->Name = L"label544";
			this->label544->Size = System::Drawing::Size(60, 36);
			this->label544->TabIndex = 531;
			// 
			// label545
			// 
			this->label545->AutoSize = true;
			this->label545->BackColor = System::Drawing::SystemColors::Window;
			this->label545->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label545->Location = System::Drawing::Point(1160, 778);
			this->label545->Margin = System::Windows::Forms::Padding(0);
			this->label545->Name = L"label545";
			this->label545->Size = System::Drawing::Size(60, 36);
			this->label545->TabIndex = 530;
			// 
			// label546
			// 
			this->label546->AutoSize = true;
			this->label546->BackColor = System::Drawing::SystemColors::Window;
			this->label546->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label546->Location = System::Drawing::Point(1221, 778);
			this->label546->Margin = System::Windows::Forms::Padding(0);
			this->label546->Name = L"label546";
			this->label546->Size = System::Drawing::Size(60, 36);
			this->label546->TabIndex = 529;
			// 
			// label547
			// 
			this->label547->AutoSize = true;
			this->label547->BackColor = System::Drawing::SystemColors::Window;
			this->label547->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label547->Location = System::Drawing::Point(1282, 778);
			this->label547->Margin = System::Windows::Forms::Padding(0);
			this->label547->Name = L"label547";
			this->label547->Size = System::Drawing::Size(60, 36);
			this->label547->TabIndex = 528;
			// 
			// label548
			// 
			this->label548->AutoSize = true;
			this->label548->BackColor = System::Drawing::SystemColors::Window;
			this->label548->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label548->Location = System::Drawing::Point(1343, 778);
			this->label548->Margin = System::Windows::Forms::Padding(0);
			this->label548->Name = L"label548";
			this->label548->Size = System::Drawing::Size(60, 36);
			this->label548->TabIndex = 527;
			// 
			// label549
			// 
			this->label549->AutoSize = true;
			this->label549->BackColor = System::Drawing::SystemColors::Window;
			this->label549->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label549->Location = System::Drawing::Point(1404, 778);
			this->label549->Margin = System::Windows::Forms::Padding(0);
			this->label549->Name = L"label549";
			this->label549->Size = System::Drawing::Size(60, 36);
			this->label549->TabIndex = 526;
			// 
			// label550
			// 
			this->label550->AutoSize = true;
			this->label550->BackColor = System::Drawing::SystemColors::Window;
			this->label550->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label550->Location = System::Drawing::Point(1465, 778);
			this->label550->Margin = System::Windows::Forms::Padding(0);
			this->label550->Name = L"label550";
			this->label550->Size = System::Drawing::Size(96, 36);
			this->label550->TabIndex = 525;
			// 
			// label501
			// 
			this->label501->AutoSize = true;
			this->label501->BackColor = System::Drawing::SystemColors::Window;
			this->label501->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label501->Location = System::Drawing::Point(1, 741);
			this->label501->Margin = System::Windows::Forms::Padding(0);
			this->label501->Name = L"label501";
			this->label501->Size = System::Drawing::Size(60, 36);
			this->label501->TabIndex = 524;
			// 
			// label502
			// 
			this->label502->AutoSize = true;
			this->label502->BackColor = System::Drawing::SystemColors::Window;
			this->label502->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label502->Location = System::Drawing::Point(62, 741);
			this->label502->Margin = System::Windows::Forms::Padding(0);
			this->label502->Name = L"label502";
			this->label502->Size = System::Drawing::Size(60, 36);
			this->label502->TabIndex = 523;
			// 
			// label503
			// 
			this->label503->AutoSize = true;
			this->label503->BackColor = System::Drawing::SystemColors::Window;
			this->label503->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label503->Location = System::Drawing::Point(123, 741);
			this->label503->Margin = System::Windows::Forms::Padding(0);
			this->label503->Name = L"label503";
			this->label503->Size = System::Drawing::Size(60, 36);
			this->label503->TabIndex = 522;
			// 
			// label504
			// 
			this->label504->AutoSize = true;
			this->label504->BackColor = System::Drawing::SystemColors::Window;
			this->label504->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label504->Location = System::Drawing::Point(184, 741);
			this->label504->Margin = System::Windows::Forms::Padding(0);
			this->label504->Name = L"label504";
			this->label504->Size = System::Drawing::Size(60, 36);
			this->label504->TabIndex = 521;
			// 
			// label505
			// 
			this->label505->AutoSize = true;
			this->label505->BackColor = System::Drawing::SystemColors::Window;
			this->label505->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label505->Location = System::Drawing::Point(245, 741);
			this->label505->Margin = System::Windows::Forms::Padding(0);
			this->label505->Name = L"label505";
			this->label505->Size = System::Drawing::Size(60, 36);
			this->label505->TabIndex = 520;
			// 
			// label506
			// 
			this->label506->AutoSize = true;
			this->label506->BackColor = System::Drawing::SystemColors::Window;
			this->label506->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label506->Location = System::Drawing::Point(306, 741);
			this->label506->Margin = System::Windows::Forms::Padding(0);
			this->label506->Name = L"label506";
			this->label506->Size = System::Drawing::Size(60, 36);
			this->label506->TabIndex = 519;
			// 
			// label507
			// 
			this->label507->AutoSize = true;
			this->label507->BackColor = System::Drawing::SystemColors::Window;
			this->label507->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label507->Location = System::Drawing::Point(367, 741);
			this->label507->Margin = System::Windows::Forms::Padding(0);
			this->label507->Name = L"label507";
			this->label507->Size = System::Drawing::Size(60, 36);
			this->label507->TabIndex = 518;
			// 
			// label508
			// 
			this->label508->AutoSize = true;
			this->label508->BackColor = System::Drawing::SystemColors::Window;
			this->label508->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label508->Location = System::Drawing::Point(428, 741);
			this->label508->Margin = System::Windows::Forms::Padding(0);
			this->label508->Name = L"label508";
			this->label508->Size = System::Drawing::Size(60, 36);
			this->label508->TabIndex = 517;
			// 
			// label509
			// 
			this->label509->AutoSize = true;
			this->label509->BackColor = System::Drawing::SystemColors::Window;
			this->label509->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label509->Location = System::Drawing::Point(489, 741);
			this->label509->Margin = System::Windows::Forms::Padding(0);
			this->label509->Name = L"label509";
			this->label509->Size = System::Drawing::Size(60, 36);
			this->label509->TabIndex = 516;
			// 
			// label510
			// 
			this->label510->AutoSize = true;
			this->label510->BackColor = System::Drawing::SystemColors::Window;
			this->label510->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label510->Location = System::Drawing::Point(550, 741);
			this->label510->Margin = System::Windows::Forms::Padding(0);
			this->label510->Name = L"label510";
			this->label510->Size = System::Drawing::Size(60, 36);
			this->label510->TabIndex = 515;
			// 
			// label511
			// 
			this->label511->AutoSize = true;
			this->label511->BackColor = System::Drawing::SystemColors::Window;
			this->label511->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label511->Location = System::Drawing::Point(611, 741);
			this->label511->Margin = System::Windows::Forms::Padding(0);
			this->label511->Name = L"label511";
			this->label511->Size = System::Drawing::Size(60, 36);
			this->label511->TabIndex = 514;
			// 
			// label512
			// 
			this->label512->AutoSize = true;
			this->label512->BackColor = System::Drawing::SystemColors::Window;
			this->label512->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label512->Location = System::Drawing::Point(672, 741);
			this->label512->Margin = System::Windows::Forms::Padding(0);
			this->label512->Name = L"label512";
			this->label512->Size = System::Drawing::Size(60, 36);
			this->label512->TabIndex = 513;
			// 
			// label513
			// 
			this->label513->AutoSize = true;
			this->label513->BackColor = System::Drawing::SystemColors::Window;
			this->label513->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label513->Location = System::Drawing::Point(733, 741);
			this->label513->Margin = System::Windows::Forms::Padding(0);
			this->label513->Name = L"label513";
			this->label513->Size = System::Drawing::Size(60, 36);
			this->label513->TabIndex = 512;
			// 
			// label514
			// 
			this->label514->AutoSize = true;
			this->label514->BackColor = System::Drawing::SystemColors::Window;
			this->label514->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label514->Location = System::Drawing::Point(794, 741);
			this->label514->Margin = System::Windows::Forms::Padding(0);
			this->label514->Name = L"label514";
			this->label514->Size = System::Drawing::Size(60, 36);
			this->label514->TabIndex = 511;
			// 
			// label515
			// 
			this->label515->AutoSize = true;
			this->label515->BackColor = System::Drawing::SystemColors::Window;
			this->label515->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label515->Location = System::Drawing::Point(855, 741);
			this->label515->Margin = System::Windows::Forms::Padding(0);
			this->label515->Name = L"label515";
			this->label515->Size = System::Drawing::Size(60, 36);
			this->label515->TabIndex = 510;
			// 
			// label516
			// 
			this->label516->AutoSize = true;
			this->label516->BackColor = System::Drawing::SystemColors::Window;
			this->label516->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label516->Location = System::Drawing::Point(916, 741);
			this->label516->Margin = System::Windows::Forms::Padding(0);
			this->label516->Name = L"label516";
			this->label516->Size = System::Drawing::Size(60, 36);
			this->label516->TabIndex = 509;
			// 
			// label517
			// 
			this->label517->AutoSize = true;
			this->label517->BackColor = System::Drawing::SystemColors::Window;
			this->label517->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label517->Location = System::Drawing::Point(977, 741);
			this->label517->Margin = System::Windows::Forms::Padding(0);
			this->label517->Name = L"label517";
			this->label517->Size = System::Drawing::Size(60, 36);
			this->label517->TabIndex = 508;
			// 
			// label518
			// 
			this->label518->AutoSize = true;
			this->label518->BackColor = System::Drawing::SystemColors::Window;
			this->label518->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label518->Location = System::Drawing::Point(1038, 741);
			this->label518->Margin = System::Windows::Forms::Padding(0);
			this->label518->Name = L"label518";
			this->label518->Size = System::Drawing::Size(60, 36);
			this->label518->TabIndex = 507;
			// 
			// label519
			// 
			this->label519->AutoSize = true;
			this->label519->BackColor = System::Drawing::SystemColors::Window;
			this->label519->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label519->Location = System::Drawing::Point(1099, 741);
			this->label519->Margin = System::Windows::Forms::Padding(0);
			this->label519->Name = L"label519";
			this->label519->Size = System::Drawing::Size(60, 36);
			this->label519->TabIndex = 506;
			// 
			// label520
			// 
			this->label520->AutoSize = true;
			this->label520->BackColor = System::Drawing::SystemColors::Window;
			this->label520->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label520->Location = System::Drawing::Point(1160, 741);
			this->label520->Margin = System::Windows::Forms::Padding(0);
			this->label520->Name = L"label520";
			this->label520->Size = System::Drawing::Size(60, 36);
			this->label520->TabIndex = 505;
			// 
			// label521
			// 
			this->label521->AutoSize = true;
			this->label521->BackColor = System::Drawing::SystemColors::Window;
			this->label521->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label521->Location = System::Drawing::Point(1221, 741);
			this->label521->Margin = System::Windows::Forms::Padding(0);
			this->label521->Name = L"label521";
			this->label521->Size = System::Drawing::Size(60, 36);
			this->label521->TabIndex = 504;
			// 
			// label522
			// 
			this->label522->AutoSize = true;
			this->label522->BackColor = System::Drawing::SystemColors::Window;
			this->label522->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label522->Location = System::Drawing::Point(1282, 741);
			this->label522->Margin = System::Windows::Forms::Padding(0);
			this->label522->Name = L"label522";
			this->label522->Size = System::Drawing::Size(60, 36);
			this->label522->TabIndex = 503;
			// 
			// label523
			// 
			this->label523->AutoSize = true;
			this->label523->BackColor = System::Drawing::SystemColors::Window;
			this->label523->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label523->Location = System::Drawing::Point(1343, 741);
			this->label523->Margin = System::Windows::Forms::Padding(0);
			this->label523->Name = L"label523";
			this->label523->Size = System::Drawing::Size(60, 36);
			this->label523->TabIndex = 502;
			// 
			// label524
			// 
			this->label524->AutoSize = true;
			this->label524->BackColor = System::Drawing::SystemColors::Window;
			this->label524->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label524->Location = System::Drawing::Point(1404, 741);
			this->label524->Margin = System::Windows::Forms::Padding(0);
			this->label524->Name = L"label524";
			this->label524->Size = System::Drawing::Size(60, 36);
			this->label524->TabIndex = 501;
			// 
			// label525
			// 
			this->label525->AutoSize = true;
			this->label525->BackColor = System::Drawing::SystemColors::Window;
			this->label525->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label525->Location = System::Drawing::Point(1465, 741);
			this->label525->Margin = System::Windows::Forms::Padding(0);
			this->label525->Name = L"label525";
			this->label525->Size = System::Drawing::Size(96, 36);
			this->label525->TabIndex = 500;
			// 
			// label476
			// 
			this->label476->AutoSize = true;
			this->label476->BackColor = System::Drawing::SystemColors::Window;
			this->label476->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label476->Location = System::Drawing::Point(1, 704);
			this->label476->Margin = System::Windows::Forms::Padding(0);
			this->label476->Name = L"label476";
			this->label476->Size = System::Drawing::Size(60, 36);
			this->label476->TabIndex = 499;
			// 
			// label477
			// 
			this->label477->AutoSize = true;
			this->label477->BackColor = System::Drawing::SystemColors::Window;
			this->label477->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label477->Location = System::Drawing::Point(62, 704);
			this->label477->Margin = System::Windows::Forms::Padding(0);
			this->label477->Name = L"label477";
			this->label477->Size = System::Drawing::Size(60, 36);
			this->label477->TabIndex = 498;
			// 
			// label478
			// 
			this->label478->AutoSize = true;
			this->label478->BackColor = System::Drawing::SystemColors::Window;
			this->label478->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label478->Location = System::Drawing::Point(123, 704);
			this->label478->Margin = System::Windows::Forms::Padding(0);
			this->label478->Name = L"label478";
			this->label478->Size = System::Drawing::Size(60, 36);
			this->label478->TabIndex = 497;
			// 
			// label479
			// 
			this->label479->AutoSize = true;
			this->label479->BackColor = System::Drawing::SystemColors::Window;
			this->label479->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label479->Location = System::Drawing::Point(184, 704);
			this->label479->Margin = System::Windows::Forms::Padding(0);
			this->label479->Name = L"label479";
			this->label479->Size = System::Drawing::Size(60, 36);
			this->label479->TabIndex = 496;
			// 
			// label480
			// 
			this->label480->AutoSize = true;
			this->label480->BackColor = System::Drawing::SystemColors::Window;
			this->label480->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label480->Location = System::Drawing::Point(245, 704);
			this->label480->Margin = System::Windows::Forms::Padding(0);
			this->label480->Name = L"label480";
			this->label480->Size = System::Drawing::Size(60, 36);
			this->label480->TabIndex = 495;
			// 
			// label481
			// 
			this->label481->AutoSize = true;
			this->label481->BackColor = System::Drawing::SystemColors::Window;
			this->label481->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label481->Location = System::Drawing::Point(306, 704);
			this->label481->Margin = System::Windows::Forms::Padding(0);
			this->label481->Name = L"label481";
			this->label481->Size = System::Drawing::Size(60, 36);
			this->label481->TabIndex = 494;
			// 
			// label482
			// 
			this->label482->AutoSize = true;
			this->label482->BackColor = System::Drawing::SystemColors::Window;
			this->label482->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label482->Location = System::Drawing::Point(367, 704);
			this->label482->Margin = System::Windows::Forms::Padding(0);
			this->label482->Name = L"label482";
			this->label482->Size = System::Drawing::Size(60, 36);
			this->label482->TabIndex = 493;
			// 
			// label483
			// 
			this->label483->AutoSize = true;
			this->label483->BackColor = System::Drawing::SystemColors::Window;
			this->label483->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label483->Location = System::Drawing::Point(428, 704);
			this->label483->Margin = System::Windows::Forms::Padding(0);
			this->label483->Name = L"label483";
			this->label483->Size = System::Drawing::Size(60, 36);
			this->label483->TabIndex = 492;
			// 
			// label484
			// 
			this->label484->AutoSize = true;
			this->label484->BackColor = System::Drawing::SystemColors::Window;
			this->label484->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label484->Location = System::Drawing::Point(489, 704);
			this->label484->Margin = System::Windows::Forms::Padding(0);
			this->label484->Name = L"label484";
			this->label484->Size = System::Drawing::Size(60, 36);
			this->label484->TabIndex = 491;
			// 
			// label485
			// 
			this->label485->AutoSize = true;
			this->label485->BackColor = System::Drawing::SystemColors::Window;
			this->label485->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label485->Location = System::Drawing::Point(550, 704);
			this->label485->Margin = System::Windows::Forms::Padding(0);
			this->label485->Name = L"label485";
			this->label485->Size = System::Drawing::Size(60, 36);
			this->label485->TabIndex = 490;
			// 
			// label486
			// 
			this->label486->AutoSize = true;
			this->label486->BackColor = System::Drawing::SystemColors::Window;
			this->label486->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label486->Location = System::Drawing::Point(611, 704);
			this->label486->Margin = System::Windows::Forms::Padding(0);
			this->label486->Name = L"label486";
			this->label486->Size = System::Drawing::Size(60, 36);
			this->label486->TabIndex = 489;
			// 
			// label487
			// 
			this->label487->AutoSize = true;
			this->label487->BackColor = System::Drawing::SystemColors::Window;
			this->label487->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label487->Location = System::Drawing::Point(672, 704);
			this->label487->Margin = System::Windows::Forms::Padding(0);
			this->label487->Name = L"label487";
			this->label487->Size = System::Drawing::Size(60, 36);
			this->label487->TabIndex = 488;
			// 
			// label488
			// 
			this->label488->AutoSize = true;
			this->label488->BackColor = System::Drawing::SystemColors::Window;
			this->label488->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label488->Location = System::Drawing::Point(733, 704);
			this->label488->Margin = System::Windows::Forms::Padding(0);
			this->label488->Name = L"label488";
			this->label488->Size = System::Drawing::Size(60, 36);
			this->label488->TabIndex = 487;
			// 
			// label489
			// 
			this->label489->AutoSize = true;
			this->label489->BackColor = System::Drawing::SystemColors::Window;
			this->label489->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label489->Location = System::Drawing::Point(794, 704);
			this->label489->Margin = System::Windows::Forms::Padding(0);
			this->label489->Name = L"label489";
			this->label489->Size = System::Drawing::Size(60, 36);
			this->label489->TabIndex = 486;
			// 
			// label490
			// 
			this->label490->AutoSize = true;
			this->label490->BackColor = System::Drawing::SystemColors::Window;
			this->label490->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label490->Location = System::Drawing::Point(855, 704);
			this->label490->Margin = System::Windows::Forms::Padding(0);
			this->label490->Name = L"label490";
			this->label490->Size = System::Drawing::Size(60, 36);
			this->label490->TabIndex = 485;
			// 
			// label491
			// 
			this->label491->AutoSize = true;
			this->label491->BackColor = System::Drawing::SystemColors::Window;
			this->label491->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label491->Location = System::Drawing::Point(916, 704);
			this->label491->Margin = System::Windows::Forms::Padding(0);
			this->label491->Name = L"label491";
			this->label491->Size = System::Drawing::Size(60, 36);
			this->label491->TabIndex = 484;
			// 
			// label492
			// 
			this->label492->AutoSize = true;
			this->label492->BackColor = System::Drawing::SystemColors::Window;
			this->label492->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label492->Location = System::Drawing::Point(977, 704);
			this->label492->Margin = System::Windows::Forms::Padding(0);
			this->label492->Name = L"label492";
			this->label492->Size = System::Drawing::Size(60, 36);
			this->label492->TabIndex = 483;
			// 
			// label493
			// 
			this->label493->AutoSize = true;
			this->label493->BackColor = System::Drawing::SystemColors::Window;
			this->label493->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label493->Location = System::Drawing::Point(1038, 704);
			this->label493->Margin = System::Windows::Forms::Padding(0);
			this->label493->Name = L"label493";
			this->label493->Size = System::Drawing::Size(60, 36);
			this->label493->TabIndex = 482;
			// 
			// label494
			// 
			this->label494->AutoSize = true;
			this->label494->BackColor = System::Drawing::SystemColors::Window;
			this->label494->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label494->Location = System::Drawing::Point(1099, 704);
			this->label494->Margin = System::Windows::Forms::Padding(0);
			this->label494->Name = L"label494";
			this->label494->Size = System::Drawing::Size(60, 36);
			this->label494->TabIndex = 481;
			// 
			// label495
			// 
			this->label495->AutoSize = true;
			this->label495->BackColor = System::Drawing::SystemColors::Window;
			this->label495->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label495->Location = System::Drawing::Point(1160, 704);
			this->label495->Margin = System::Windows::Forms::Padding(0);
			this->label495->Name = L"label495";
			this->label495->Size = System::Drawing::Size(60, 36);
			this->label495->TabIndex = 480;
			// 
			// label496
			// 
			this->label496->AutoSize = true;
			this->label496->BackColor = System::Drawing::SystemColors::Window;
			this->label496->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label496->Location = System::Drawing::Point(1221, 704);
			this->label496->Margin = System::Windows::Forms::Padding(0);
			this->label496->Name = L"label496";
			this->label496->Size = System::Drawing::Size(60, 36);
			this->label496->TabIndex = 479;
			// 
			// label497
			// 
			this->label497->AutoSize = true;
			this->label497->BackColor = System::Drawing::SystemColors::Window;
			this->label497->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label497->Location = System::Drawing::Point(1282, 704);
			this->label497->Margin = System::Windows::Forms::Padding(0);
			this->label497->Name = L"label497";
			this->label497->Size = System::Drawing::Size(60, 36);
			this->label497->TabIndex = 478;
			// 
			// label498
			// 
			this->label498->AutoSize = true;
			this->label498->BackColor = System::Drawing::SystemColors::Window;
			this->label498->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label498->Location = System::Drawing::Point(1343, 704);
			this->label498->Margin = System::Windows::Forms::Padding(0);
			this->label498->Name = L"label498";
			this->label498->Size = System::Drawing::Size(60, 36);
			this->label498->TabIndex = 477;
			// 
			// label499
			// 
			this->label499->AutoSize = true;
			this->label499->BackColor = System::Drawing::SystemColors::Window;
			this->label499->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label499->Location = System::Drawing::Point(1404, 704);
			this->label499->Margin = System::Windows::Forms::Padding(0);
			this->label499->Name = L"label499";
			this->label499->Size = System::Drawing::Size(60, 36);
			this->label499->TabIndex = 476;
			// 
			// label500
			// 
			this->label500->AutoSize = true;
			this->label500->BackColor = System::Drawing::SystemColors::Window;
			this->label500->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label500->Location = System::Drawing::Point(1465, 704);
			this->label500->Margin = System::Windows::Forms::Padding(0);
			this->label500->Name = L"label500";
			this->label500->Size = System::Drawing::Size(96, 36);
			this->label500->TabIndex = 475;
			// 
			// label451
			// 
			this->label451->AutoSize = true;
			this->label451->BackColor = System::Drawing::SystemColors::Window;
			this->label451->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label451->Location = System::Drawing::Point(1, 667);
			this->label451->Margin = System::Windows::Forms::Padding(0);
			this->label451->Name = L"label451";
			this->label451->Size = System::Drawing::Size(60, 36);
			this->label451->TabIndex = 474;
			// 
			// label452
			// 
			this->label452->AutoSize = true;
			this->label452->BackColor = System::Drawing::SystemColors::Window;
			this->label452->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label452->Location = System::Drawing::Point(62, 667);
			this->label452->Margin = System::Windows::Forms::Padding(0);
			this->label452->Name = L"label452";
			this->label452->Size = System::Drawing::Size(60, 36);
			this->label452->TabIndex = 473;
			// 
			// label453
			// 
			this->label453->AutoSize = true;
			this->label453->BackColor = System::Drawing::SystemColors::Window;
			this->label453->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label453->Location = System::Drawing::Point(123, 667);
			this->label453->Margin = System::Windows::Forms::Padding(0);
			this->label453->Name = L"label453";
			this->label453->Size = System::Drawing::Size(60, 36);
			this->label453->TabIndex = 472;
			// 
			// label454
			// 
			this->label454->AutoSize = true;
			this->label454->BackColor = System::Drawing::SystemColors::Window;
			this->label454->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label454->Location = System::Drawing::Point(184, 667);
			this->label454->Margin = System::Windows::Forms::Padding(0);
			this->label454->Name = L"label454";
			this->label454->Size = System::Drawing::Size(60, 36);
			this->label454->TabIndex = 471;
			// 
			// label455
			// 
			this->label455->AutoSize = true;
			this->label455->BackColor = System::Drawing::SystemColors::Window;
			this->label455->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label455->Location = System::Drawing::Point(245, 667);
			this->label455->Margin = System::Windows::Forms::Padding(0);
			this->label455->Name = L"label455";
			this->label455->Size = System::Drawing::Size(60, 36);
			this->label455->TabIndex = 470;
			// 
			// label456
			// 
			this->label456->AutoSize = true;
			this->label456->BackColor = System::Drawing::SystemColors::Window;
			this->label456->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label456->Location = System::Drawing::Point(306, 667);
			this->label456->Margin = System::Windows::Forms::Padding(0);
			this->label456->Name = L"label456";
			this->label456->Size = System::Drawing::Size(60, 36);
			this->label456->TabIndex = 469;
			// 
			// label457
			// 
			this->label457->AutoSize = true;
			this->label457->BackColor = System::Drawing::SystemColors::Window;
			this->label457->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label457->Location = System::Drawing::Point(367, 667);
			this->label457->Margin = System::Windows::Forms::Padding(0);
			this->label457->Name = L"label457";
			this->label457->Size = System::Drawing::Size(60, 36);
			this->label457->TabIndex = 468;
			// 
			// label458
			// 
			this->label458->AutoSize = true;
			this->label458->BackColor = System::Drawing::SystemColors::Window;
			this->label458->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label458->Location = System::Drawing::Point(428, 667);
			this->label458->Margin = System::Windows::Forms::Padding(0);
			this->label458->Name = L"label458";
			this->label458->Size = System::Drawing::Size(60, 36);
			this->label458->TabIndex = 467;
			// 
			// label459
			// 
			this->label459->AutoSize = true;
			this->label459->BackColor = System::Drawing::SystemColors::Window;
			this->label459->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label459->Location = System::Drawing::Point(489, 667);
			this->label459->Margin = System::Windows::Forms::Padding(0);
			this->label459->Name = L"label459";
			this->label459->Size = System::Drawing::Size(60, 36);
			this->label459->TabIndex = 466;
			// 
			// label460
			// 
			this->label460->AutoSize = true;
			this->label460->BackColor = System::Drawing::SystemColors::Window;
			this->label460->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label460->Location = System::Drawing::Point(550, 667);
			this->label460->Margin = System::Windows::Forms::Padding(0);
			this->label460->Name = L"label460";
			this->label460->Size = System::Drawing::Size(60, 36);
			this->label460->TabIndex = 465;
			// 
			// label461
			// 
			this->label461->AutoSize = true;
			this->label461->BackColor = System::Drawing::SystemColors::Window;
			this->label461->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label461->Location = System::Drawing::Point(611, 667);
			this->label461->Margin = System::Windows::Forms::Padding(0);
			this->label461->Name = L"label461";
			this->label461->Size = System::Drawing::Size(60, 36);
			this->label461->TabIndex = 464;
			// 
			// label462
			// 
			this->label462->AutoSize = true;
			this->label462->BackColor = System::Drawing::SystemColors::Window;
			this->label462->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label462->Location = System::Drawing::Point(672, 667);
			this->label462->Margin = System::Windows::Forms::Padding(0);
			this->label462->Name = L"label462";
			this->label462->Size = System::Drawing::Size(60, 36);
			this->label462->TabIndex = 463;
			// 
			// label463
			// 
			this->label463->AutoSize = true;
			this->label463->BackColor = System::Drawing::SystemColors::Window;
			this->label463->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label463->Location = System::Drawing::Point(733, 667);
			this->label463->Margin = System::Windows::Forms::Padding(0);
			this->label463->Name = L"label463";
			this->label463->Size = System::Drawing::Size(60, 36);
			this->label463->TabIndex = 462;
			// 
			// label464
			// 
			this->label464->AutoSize = true;
			this->label464->BackColor = System::Drawing::SystemColors::Window;
			this->label464->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label464->Location = System::Drawing::Point(794, 667);
			this->label464->Margin = System::Windows::Forms::Padding(0);
			this->label464->Name = L"label464";
			this->label464->Size = System::Drawing::Size(60, 36);
			this->label464->TabIndex = 461;
			// 
			// label465
			// 
			this->label465->AutoSize = true;
			this->label465->BackColor = System::Drawing::SystemColors::Window;
			this->label465->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label465->Location = System::Drawing::Point(855, 667);
			this->label465->Margin = System::Windows::Forms::Padding(0);
			this->label465->Name = L"label465";
			this->label465->Size = System::Drawing::Size(60, 36);
			this->label465->TabIndex = 460;
			// 
			// label466
			// 
			this->label466->AutoSize = true;
			this->label466->BackColor = System::Drawing::SystemColors::Window;
			this->label466->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label466->Location = System::Drawing::Point(916, 667);
			this->label466->Margin = System::Windows::Forms::Padding(0);
			this->label466->Name = L"label466";
			this->label466->Size = System::Drawing::Size(60, 36);
			this->label466->TabIndex = 459;
			// 
			// label467
			// 
			this->label467->AutoSize = true;
			this->label467->BackColor = System::Drawing::SystemColors::Window;
			this->label467->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label467->Location = System::Drawing::Point(977, 667);
			this->label467->Margin = System::Windows::Forms::Padding(0);
			this->label467->Name = L"label467";
			this->label467->Size = System::Drawing::Size(60, 36);
			this->label467->TabIndex = 458;
			// 
			// label468
			// 
			this->label468->AutoSize = true;
			this->label468->BackColor = System::Drawing::SystemColors::Window;
			this->label468->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label468->Location = System::Drawing::Point(1038, 667);
			this->label468->Margin = System::Windows::Forms::Padding(0);
			this->label468->Name = L"label468";
			this->label468->Size = System::Drawing::Size(60, 36);
			this->label468->TabIndex = 457;
			// 
			// label469
			// 
			this->label469->AutoSize = true;
			this->label469->BackColor = System::Drawing::SystemColors::Window;
			this->label469->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label469->Location = System::Drawing::Point(1099, 667);
			this->label469->Margin = System::Windows::Forms::Padding(0);
			this->label469->Name = L"label469";
			this->label469->Size = System::Drawing::Size(60, 36);
			this->label469->TabIndex = 456;
			// 
			// label470
			// 
			this->label470->AutoSize = true;
			this->label470->BackColor = System::Drawing::SystemColors::Window;
			this->label470->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label470->Location = System::Drawing::Point(1160, 667);
			this->label470->Margin = System::Windows::Forms::Padding(0);
			this->label470->Name = L"label470";
			this->label470->Size = System::Drawing::Size(60, 36);
			this->label470->TabIndex = 455;
			// 
			// label471
			// 
			this->label471->AutoSize = true;
			this->label471->BackColor = System::Drawing::SystemColors::Window;
			this->label471->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label471->Location = System::Drawing::Point(1221, 667);
			this->label471->Margin = System::Windows::Forms::Padding(0);
			this->label471->Name = L"label471";
			this->label471->Size = System::Drawing::Size(60, 36);
			this->label471->TabIndex = 454;
			// 
			// label472
			// 
			this->label472->AutoSize = true;
			this->label472->BackColor = System::Drawing::SystemColors::Window;
			this->label472->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label472->Location = System::Drawing::Point(1282, 667);
			this->label472->Margin = System::Windows::Forms::Padding(0);
			this->label472->Name = L"label472";
			this->label472->Size = System::Drawing::Size(60, 36);
			this->label472->TabIndex = 453;
			// 
			// label473
			// 
			this->label473->AutoSize = true;
			this->label473->BackColor = System::Drawing::SystemColors::Window;
			this->label473->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label473->Location = System::Drawing::Point(1343, 667);
			this->label473->Margin = System::Windows::Forms::Padding(0);
			this->label473->Name = L"label473";
			this->label473->Size = System::Drawing::Size(60, 36);
			this->label473->TabIndex = 452;
			// 
			// label474
			// 
			this->label474->AutoSize = true;
			this->label474->BackColor = System::Drawing::SystemColors::Window;
			this->label474->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label474->Location = System::Drawing::Point(1404, 667);
			this->label474->Margin = System::Windows::Forms::Padding(0);
			this->label474->Name = L"label474";
			this->label474->Size = System::Drawing::Size(60, 36);
			this->label474->TabIndex = 451;
			// 
			// label475
			// 
			this->label475->AutoSize = true;
			this->label475->BackColor = System::Drawing::SystemColors::Window;
			this->label475->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label475->Location = System::Drawing::Point(1465, 667);
			this->label475->Margin = System::Windows::Forms::Padding(0);
			this->label475->Name = L"label475";
			this->label475->Size = System::Drawing::Size(96, 36);
			this->label475->TabIndex = 450;
			// 
			// label426
			// 
			this->label426->AutoSize = true;
			this->label426->BackColor = System::Drawing::SystemColors::Window;
			this->label426->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label426->Location = System::Drawing::Point(1, 630);
			this->label426->Margin = System::Windows::Forms::Padding(0);
			this->label426->Name = L"label426";
			this->label426->Size = System::Drawing::Size(60, 36);
			this->label426->TabIndex = 449;
			// 
			// label427
			// 
			this->label427->AutoSize = true;
			this->label427->BackColor = System::Drawing::SystemColors::Window;
			this->label427->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label427->Location = System::Drawing::Point(62, 630);
			this->label427->Margin = System::Windows::Forms::Padding(0);
			this->label427->Name = L"label427";
			this->label427->Size = System::Drawing::Size(60, 36);
			this->label427->TabIndex = 448;
			// 
			// label428
			// 
			this->label428->AutoSize = true;
			this->label428->BackColor = System::Drawing::SystemColors::Window;
			this->label428->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label428->Location = System::Drawing::Point(123, 630);
			this->label428->Margin = System::Windows::Forms::Padding(0);
			this->label428->Name = L"label428";
			this->label428->Size = System::Drawing::Size(60, 36);
			this->label428->TabIndex = 447;
			// 
			// label429
			// 
			this->label429->AutoSize = true;
			this->label429->BackColor = System::Drawing::SystemColors::Window;
			this->label429->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label429->Location = System::Drawing::Point(184, 630);
			this->label429->Margin = System::Windows::Forms::Padding(0);
			this->label429->Name = L"label429";
			this->label429->Size = System::Drawing::Size(60, 36);
			this->label429->TabIndex = 446;
			// 
			// label430
			// 
			this->label430->AutoSize = true;
			this->label430->BackColor = System::Drawing::SystemColors::Window;
			this->label430->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label430->Location = System::Drawing::Point(245, 630);
			this->label430->Margin = System::Windows::Forms::Padding(0);
			this->label430->Name = L"label430";
			this->label430->Size = System::Drawing::Size(60, 36);
			this->label430->TabIndex = 445;
			// 
			// label431
			// 
			this->label431->AutoSize = true;
			this->label431->BackColor = System::Drawing::SystemColors::Window;
			this->label431->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label431->Location = System::Drawing::Point(306, 630);
			this->label431->Margin = System::Windows::Forms::Padding(0);
			this->label431->Name = L"label431";
			this->label431->Size = System::Drawing::Size(60, 36);
			this->label431->TabIndex = 444;
			// 
			// label432
			// 
			this->label432->AutoSize = true;
			this->label432->BackColor = System::Drawing::SystemColors::Window;
			this->label432->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label432->Location = System::Drawing::Point(367, 630);
			this->label432->Margin = System::Windows::Forms::Padding(0);
			this->label432->Name = L"label432";
			this->label432->Size = System::Drawing::Size(60, 36);
			this->label432->TabIndex = 443;
			// 
			// label433
			// 
			this->label433->AutoSize = true;
			this->label433->BackColor = System::Drawing::SystemColors::Window;
			this->label433->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label433->Location = System::Drawing::Point(428, 630);
			this->label433->Margin = System::Windows::Forms::Padding(0);
			this->label433->Name = L"label433";
			this->label433->Size = System::Drawing::Size(60, 36);
			this->label433->TabIndex = 442;
			// 
			// label434
			// 
			this->label434->AutoSize = true;
			this->label434->BackColor = System::Drawing::SystemColors::Window;
			this->label434->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label434->Location = System::Drawing::Point(489, 630);
			this->label434->Margin = System::Windows::Forms::Padding(0);
			this->label434->Name = L"label434";
			this->label434->Size = System::Drawing::Size(60, 36);
			this->label434->TabIndex = 441;
			// 
			// label435
			// 
			this->label435->AutoSize = true;
			this->label435->BackColor = System::Drawing::SystemColors::Window;
			this->label435->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label435->Location = System::Drawing::Point(550, 630);
			this->label435->Margin = System::Windows::Forms::Padding(0);
			this->label435->Name = L"label435";
			this->label435->Size = System::Drawing::Size(60, 36);
			this->label435->TabIndex = 440;
			// 
			// label436
			// 
			this->label436->AutoSize = true;
			this->label436->BackColor = System::Drawing::SystemColors::Window;
			this->label436->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label436->Location = System::Drawing::Point(611, 630);
			this->label436->Margin = System::Windows::Forms::Padding(0);
			this->label436->Name = L"label436";
			this->label436->Size = System::Drawing::Size(60, 36);
			this->label436->TabIndex = 439;
			// 
			// label437
			// 
			this->label437->AutoSize = true;
			this->label437->BackColor = System::Drawing::SystemColors::Window;
			this->label437->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label437->Location = System::Drawing::Point(672, 630);
			this->label437->Margin = System::Windows::Forms::Padding(0);
			this->label437->Name = L"label437";
			this->label437->Size = System::Drawing::Size(60, 36);
			this->label437->TabIndex = 438;
			// 
			// label438
			// 
			this->label438->AutoSize = true;
			this->label438->BackColor = System::Drawing::SystemColors::Window;
			this->label438->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label438->Location = System::Drawing::Point(733, 630);
			this->label438->Margin = System::Windows::Forms::Padding(0);
			this->label438->Name = L"label438";
			this->label438->Size = System::Drawing::Size(60, 36);
			this->label438->TabIndex = 437;
			// 
			// label439
			// 
			this->label439->AutoSize = true;
			this->label439->BackColor = System::Drawing::SystemColors::Window;
			this->label439->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label439->Location = System::Drawing::Point(794, 630);
			this->label439->Margin = System::Windows::Forms::Padding(0);
			this->label439->Name = L"label439";
			this->label439->Size = System::Drawing::Size(60, 36);
			this->label439->TabIndex = 436;
			// 
			// label440
			// 
			this->label440->AutoSize = true;
			this->label440->BackColor = System::Drawing::SystemColors::Window;
			this->label440->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label440->Location = System::Drawing::Point(855, 630);
			this->label440->Margin = System::Windows::Forms::Padding(0);
			this->label440->Name = L"label440";
			this->label440->Size = System::Drawing::Size(60, 36);
			this->label440->TabIndex = 435;
			// 
			// label441
			// 
			this->label441->AutoSize = true;
			this->label441->BackColor = System::Drawing::SystemColors::Window;
			this->label441->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label441->Location = System::Drawing::Point(916, 630);
			this->label441->Margin = System::Windows::Forms::Padding(0);
			this->label441->Name = L"label441";
			this->label441->Size = System::Drawing::Size(60, 36);
			this->label441->TabIndex = 434;
			// 
			// label442
			// 
			this->label442->AutoSize = true;
			this->label442->BackColor = System::Drawing::SystemColors::Window;
			this->label442->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label442->Location = System::Drawing::Point(977, 630);
			this->label442->Margin = System::Windows::Forms::Padding(0);
			this->label442->Name = L"label442";
			this->label442->Size = System::Drawing::Size(60, 36);
			this->label442->TabIndex = 433;
			// 
			// label443
			// 
			this->label443->AutoSize = true;
			this->label443->BackColor = System::Drawing::SystemColors::Window;
			this->label443->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label443->Location = System::Drawing::Point(1038, 630);
			this->label443->Margin = System::Windows::Forms::Padding(0);
			this->label443->Name = L"label443";
			this->label443->Size = System::Drawing::Size(60, 36);
			this->label443->TabIndex = 432;
			// 
			// label444
			// 
			this->label444->AutoSize = true;
			this->label444->BackColor = System::Drawing::SystemColors::Window;
			this->label444->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label444->Location = System::Drawing::Point(1099, 630);
			this->label444->Margin = System::Windows::Forms::Padding(0);
			this->label444->Name = L"label444";
			this->label444->Size = System::Drawing::Size(60, 36);
			this->label444->TabIndex = 431;
			// 
			// label445
			// 
			this->label445->AutoSize = true;
			this->label445->BackColor = System::Drawing::SystemColors::Window;
			this->label445->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label445->Location = System::Drawing::Point(1160, 630);
			this->label445->Margin = System::Windows::Forms::Padding(0);
			this->label445->Name = L"label445";
			this->label445->Size = System::Drawing::Size(60, 36);
			this->label445->TabIndex = 430;
			// 
			// label446
			// 
			this->label446->AutoSize = true;
			this->label446->BackColor = System::Drawing::SystemColors::Window;
			this->label446->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label446->Location = System::Drawing::Point(1221, 630);
			this->label446->Margin = System::Windows::Forms::Padding(0);
			this->label446->Name = L"label446";
			this->label446->Size = System::Drawing::Size(60, 36);
			this->label446->TabIndex = 429;
			// 
			// label447
			// 
			this->label447->AutoSize = true;
			this->label447->BackColor = System::Drawing::SystemColors::Window;
			this->label447->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label447->Location = System::Drawing::Point(1282, 630);
			this->label447->Margin = System::Windows::Forms::Padding(0);
			this->label447->Name = L"label447";
			this->label447->Size = System::Drawing::Size(60, 36);
			this->label447->TabIndex = 428;
			// 
			// label448
			// 
			this->label448->AutoSize = true;
			this->label448->BackColor = System::Drawing::SystemColors::Window;
			this->label448->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label448->Location = System::Drawing::Point(1343, 630);
			this->label448->Margin = System::Windows::Forms::Padding(0);
			this->label448->Name = L"label448";
			this->label448->Size = System::Drawing::Size(60, 36);
			this->label448->TabIndex = 427;
			// 
			// label449
			// 
			this->label449->AutoSize = true;
			this->label449->BackColor = System::Drawing::SystemColors::Window;
			this->label449->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label449->Location = System::Drawing::Point(1404, 630);
			this->label449->Margin = System::Windows::Forms::Padding(0);
			this->label449->Name = L"label449";
			this->label449->Size = System::Drawing::Size(60, 36);
			this->label449->TabIndex = 426;
			// 
			// label450
			// 
			this->label450->AutoSize = true;
			this->label450->BackColor = System::Drawing::SystemColors::Window;
			this->label450->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label450->Location = System::Drawing::Point(1465, 630);
			this->label450->Margin = System::Windows::Forms::Padding(0);
			this->label450->Name = L"label450";
			this->label450->Size = System::Drawing::Size(96, 36);
			this->label450->TabIndex = 425;
			// 
			// label401
			// 
			this->label401->AutoSize = true;
			this->label401->BackColor = System::Drawing::SystemColors::Window;
			this->label401->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label401->Location = System::Drawing::Point(1, 593);
			this->label401->Margin = System::Windows::Forms::Padding(0);
			this->label401->Name = L"label401";
			this->label401->Size = System::Drawing::Size(60, 36);
			this->label401->TabIndex = 424;
			// 
			// label402
			// 
			this->label402->AutoSize = true;
			this->label402->BackColor = System::Drawing::SystemColors::Window;
			this->label402->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label402->Location = System::Drawing::Point(62, 593);
			this->label402->Margin = System::Windows::Forms::Padding(0);
			this->label402->Name = L"label402";
			this->label402->Size = System::Drawing::Size(60, 36);
			this->label402->TabIndex = 423;
			// 
			// label403
			// 
			this->label403->AutoSize = true;
			this->label403->BackColor = System::Drawing::SystemColors::Window;
			this->label403->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label403->Location = System::Drawing::Point(123, 593);
			this->label403->Margin = System::Windows::Forms::Padding(0);
			this->label403->Name = L"label403";
			this->label403->Size = System::Drawing::Size(60, 36);
			this->label403->TabIndex = 422;
			// 
			// label404
			// 
			this->label404->AutoSize = true;
			this->label404->BackColor = System::Drawing::SystemColors::Window;
			this->label404->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label404->Location = System::Drawing::Point(184, 593);
			this->label404->Margin = System::Windows::Forms::Padding(0);
			this->label404->Name = L"label404";
			this->label404->Size = System::Drawing::Size(60, 36);
			this->label404->TabIndex = 421;
			// 
			// label405
			// 
			this->label405->AutoSize = true;
			this->label405->BackColor = System::Drawing::SystemColors::Window;
			this->label405->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label405->Location = System::Drawing::Point(245, 593);
			this->label405->Margin = System::Windows::Forms::Padding(0);
			this->label405->Name = L"label405";
			this->label405->Size = System::Drawing::Size(60, 36);
			this->label405->TabIndex = 420;
			// 
			// label406
			// 
			this->label406->AutoSize = true;
			this->label406->BackColor = System::Drawing::SystemColors::Window;
			this->label406->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label406->Location = System::Drawing::Point(306, 593);
			this->label406->Margin = System::Windows::Forms::Padding(0);
			this->label406->Name = L"label406";
			this->label406->Size = System::Drawing::Size(60, 36);
			this->label406->TabIndex = 419;
			// 
			// label407
			// 
			this->label407->AutoSize = true;
			this->label407->BackColor = System::Drawing::SystemColors::Window;
			this->label407->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label407->Location = System::Drawing::Point(367, 593);
			this->label407->Margin = System::Windows::Forms::Padding(0);
			this->label407->Name = L"label407";
			this->label407->Size = System::Drawing::Size(60, 36);
			this->label407->TabIndex = 418;
			// 
			// label408
			// 
			this->label408->AutoSize = true;
			this->label408->BackColor = System::Drawing::SystemColors::Window;
			this->label408->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label408->Location = System::Drawing::Point(428, 593);
			this->label408->Margin = System::Windows::Forms::Padding(0);
			this->label408->Name = L"label408";
			this->label408->Size = System::Drawing::Size(60, 36);
			this->label408->TabIndex = 417;
			// 
			// label409
			// 
			this->label409->AutoSize = true;
			this->label409->BackColor = System::Drawing::SystemColors::Window;
			this->label409->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label409->Location = System::Drawing::Point(489, 593);
			this->label409->Margin = System::Windows::Forms::Padding(0);
			this->label409->Name = L"label409";
			this->label409->Size = System::Drawing::Size(60, 36);
			this->label409->TabIndex = 416;
			// 
			// label410
			// 
			this->label410->AutoSize = true;
			this->label410->BackColor = System::Drawing::SystemColors::Window;
			this->label410->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label410->Location = System::Drawing::Point(550, 593);
			this->label410->Margin = System::Windows::Forms::Padding(0);
			this->label410->Name = L"label410";
			this->label410->Size = System::Drawing::Size(60, 36);
			this->label410->TabIndex = 415;
			// 
			// label411
			// 
			this->label411->AutoSize = true;
			this->label411->BackColor = System::Drawing::SystemColors::Window;
			this->label411->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label411->Location = System::Drawing::Point(611, 593);
			this->label411->Margin = System::Windows::Forms::Padding(0);
			this->label411->Name = L"label411";
			this->label411->Size = System::Drawing::Size(60, 36);
			this->label411->TabIndex = 414;
			// 
			// label412
			// 
			this->label412->AutoSize = true;
			this->label412->BackColor = System::Drawing::SystemColors::Window;
			this->label412->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label412->Location = System::Drawing::Point(672, 593);
			this->label412->Margin = System::Windows::Forms::Padding(0);
			this->label412->Name = L"label412";
			this->label412->Size = System::Drawing::Size(60, 36);
			this->label412->TabIndex = 413;
			// 
			// label413
			// 
			this->label413->AutoSize = true;
			this->label413->BackColor = System::Drawing::SystemColors::Window;
			this->label413->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label413->Location = System::Drawing::Point(733, 593);
			this->label413->Margin = System::Windows::Forms::Padding(0);
			this->label413->Name = L"label413";
			this->label413->Size = System::Drawing::Size(60, 36);
			this->label413->TabIndex = 412;
			// 
			// label414
			// 
			this->label414->AutoSize = true;
			this->label414->BackColor = System::Drawing::SystemColors::Window;
			this->label414->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label414->Location = System::Drawing::Point(794, 593);
			this->label414->Margin = System::Windows::Forms::Padding(0);
			this->label414->Name = L"label414";
			this->label414->Size = System::Drawing::Size(60, 36);
			this->label414->TabIndex = 411;
			// 
			// label415
			// 
			this->label415->AutoSize = true;
			this->label415->BackColor = System::Drawing::SystemColors::Window;
			this->label415->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label415->Location = System::Drawing::Point(855, 593);
			this->label415->Margin = System::Windows::Forms::Padding(0);
			this->label415->Name = L"label415";
			this->label415->Size = System::Drawing::Size(60, 36);
			this->label415->TabIndex = 410;
			// 
			// label416
			// 
			this->label416->AutoSize = true;
			this->label416->BackColor = System::Drawing::SystemColors::Window;
			this->label416->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label416->Location = System::Drawing::Point(916, 593);
			this->label416->Margin = System::Windows::Forms::Padding(0);
			this->label416->Name = L"label416";
			this->label416->Size = System::Drawing::Size(60, 36);
			this->label416->TabIndex = 409;
			// 
			// label417
			// 
			this->label417->AutoSize = true;
			this->label417->BackColor = System::Drawing::SystemColors::Window;
			this->label417->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label417->Location = System::Drawing::Point(977, 593);
			this->label417->Margin = System::Windows::Forms::Padding(0);
			this->label417->Name = L"label417";
			this->label417->Size = System::Drawing::Size(60, 36);
			this->label417->TabIndex = 408;
			// 
			// label418
			// 
			this->label418->AutoSize = true;
			this->label418->BackColor = System::Drawing::SystemColors::Window;
			this->label418->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label418->Location = System::Drawing::Point(1038, 593);
			this->label418->Margin = System::Windows::Forms::Padding(0);
			this->label418->Name = L"label418";
			this->label418->Size = System::Drawing::Size(60, 36);
			this->label418->TabIndex = 407;
			// 
			// label419
			// 
			this->label419->AutoSize = true;
			this->label419->BackColor = System::Drawing::SystemColors::Window;
			this->label419->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label419->Location = System::Drawing::Point(1099, 593);
			this->label419->Margin = System::Windows::Forms::Padding(0);
			this->label419->Name = L"label419";
			this->label419->Size = System::Drawing::Size(60, 36);
			this->label419->TabIndex = 406;
			// 
			// label420
			// 
			this->label420->AutoSize = true;
			this->label420->BackColor = System::Drawing::SystemColors::Window;
			this->label420->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label420->Location = System::Drawing::Point(1160, 593);
			this->label420->Margin = System::Windows::Forms::Padding(0);
			this->label420->Name = L"label420";
			this->label420->Size = System::Drawing::Size(60, 36);
			this->label420->TabIndex = 405;
			// 
			// label421
			// 
			this->label421->AutoSize = true;
			this->label421->BackColor = System::Drawing::SystemColors::Window;
			this->label421->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label421->Location = System::Drawing::Point(1221, 593);
			this->label421->Margin = System::Windows::Forms::Padding(0);
			this->label421->Name = L"label421";
			this->label421->Size = System::Drawing::Size(60, 36);
			this->label421->TabIndex = 404;
			// 
			// label422
			// 
			this->label422->AutoSize = true;
			this->label422->BackColor = System::Drawing::SystemColors::Window;
			this->label422->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label422->Location = System::Drawing::Point(1282, 593);
			this->label422->Margin = System::Windows::Forms::Padding(0);
			this->label422->Name = L"label422";
			this->label422->Size = System::Drawing::Size(60, 36);
			this->label422->TabIndex = 403;
			// 
			// label423
			// 
			this->label423->AutoSize = true;
			this->label423->BackColor = System::Drawing::SystemColors::Window;
			this->label423->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label423->Location = System::Drawing::Point(1343, 593);
			this->label423->Margin = System::Windows::Forms::Padding(0);
			this->label423->Name = L"label423";
			this->label423->Size = System::Drawing::Size(60, 36);
			this->label423->TabIndex = 402;
			// 
			// label424
			// 
			this->label424->AutoSize = true;
			this->label424->BackColor = System::Drawing::SystemColors::Window;
			this->label424->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label424->Location = System::Drawing::Point(1404, 593);
			this->label424->Margin = System::Windows::Forms::Padding(0);
			this->label424->Name = L"label424";
			this->label424->Size = System::Drawing::Size(60, 36);
			this->label424->TabIndex = 401;
			// 
			// label425
			// 
			this->label425->AutoSize = true;
			this->label425->BackColor = System::Drawing::SystemColors::Window;
			this->label425->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label425->Location = System::Drawing::Point(1465, 593);
			this->label425->Margin = System::Windows::Forms::Padding(0);
			this->label425->Name = L"label425";
			this->label425->Size = System::Drawing::Size(96, 36);
			this->label425->TabIndex = 400;
			// 
			// label376
			// 
			this->label376->AutoSize = true;
			this->label376->BackColor = System::Drawing::SystemColors::Window;
			this->label376->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label376->Location = System::Drawing::Point(1, 556);
			this->label376->Margin = System::Windows::Forms::Padding(0);
			this->label376->Name = L"label376";
			this->label376->Size = System::Drawing::Size(60, 36);
			this->label376->TabIndex = 399;
			// 
			// label377
			// 
			this->label377->AutoSize = true;
			this->label377->BackColor = System::Drawing::SystemColors::Window;
			this->label377->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label377->Location = System::Drawing::Point(62, 556);
			this->label377->Margin = System::Windows::Forms::Padding(0);
			this->label377->Name = L"label377";
			this->label377->Size = System::Drawing::Size(60, 36);
			this->label377->TabIndex = 398;
			// 
			// label378
			// 
			this->label378->AutoSize = true;
			this->label378->BackColor = System::Drawing::SystemColors::Window;
			this->label378->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label378->Location = System::Drawing::Point(123, 556);
			this->label378->Margin = System::Windows::Forms::Padding(0);
			this->label378->Name = L"label378";
			this->label378->Size = System::Drawing::Size(60, 36);
			this->label378->TabIndex = 397;
			// 
			// label379
			// 
			this->label379->AutoSize = true;
			this->label379->BackColor = System::Drawing::SystemColors::Window;
			this->label379->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label379->Location = System::Drawing::Point(184, 556);
			this->label379->Margin = System::Windows::Forms::Padding(0);
			this->label379->Name = L"label379";
			this->label379->Size = System::Drawing::Size(60, 36);
			this->label379->TabIndex = 396;
			// 
			// label380
			// 
			this->label380->AutoSize = true;
			this->label380->BackColor = System::Drawing::SystemColors::Window;
			this->label380->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label380->Location = System::Drawing::Point(245, 556);
			this->label380->Margin = System::Windows::Forms::Padding(0);
			this->label380->Name = L"label380";
			this->label380->Size = System::Drawing::Size(60, 36);
			this->label380->TabIndex = 395;
			// 
			// label381
			// 
			this->label381->AutoSize = true;
			this->label381->BackColor = System::Drawing::SystemColors::Window;
			this->label381->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label381->Location = System::Drawing::Point(306, 556);
			this->label381->Margin = System::Windows::Forms::Padding(0);
			this->label381->Name = L"label381";
			this->label381->Size = System::Drawing::Size(60, 36);
			this->label381->TabIndex = 394;
			// 
			// label382
			// 
			this->label382->AutoSize = true;
			this->label382->BackColor = System::Drawing::SystemColors::Window;
			this->label382->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label382->Location = System::Drawing::Point(367, 556);
			this->label382->Margin = System::Windows::Forms::Padding(0);
			this->label382->Name = L"label382";
			this->label382->Size = System::Drawing::Size(60, 36);
			this->label382->TabIndex = 393;
			// 
			// label383
			// 
			this->label383->AutoSize = true;
			this->label383->BackColor = System::Drawing::SystemColors::Window;
			this->label383->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label383->Location = System::Drawing::Point(428, 556);
			this->label383->Margin = System::Windows::Forms::Padding(0);
			this->label383->Name = L"label383";
			this->label383->Size = System::Drawing::Size(60, 36);
			this->label383->TabIndex = 392;
			// 
			// label384
			// 
			this->label384->AutoSize = true;
			this->label384->BackColor = System::Drawing::SystemColors::Window;
			this->label384->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label384->Location = System::Drawing::Point(489, 556);
			this->label384->Margin = System::Windows::Forms::Padding(0);
			this->label384->Name = L"label384";
			this->label384->Size = System::Drawing::Size(60, 36);
			this->label384->TabIndex = 391;
			// 
			// label385
			// 
			this->label385->AutoSize = true;
			this->label385->BackColor = System::Drawing::SystemColors::Window;
			this->label385->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label385->Location = System::Drawing::Point(550, 556);
			this->label385->Margin = System::Windows::Forms::Padding(0);
			this->label385->Name = L"label385";
			this->label385->Size = System::Drawing::Size(60, 36);
			this->label385->TabIndex = 390;
			// 
			// label386
			// 
			this->label386->AutoSize = true;
			this->label386->BackColor = System::Drawing::SystemColors::Window;
			this->label386->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label386->Location = System::Drawing::Point(611, 556);
			this->label386->Margin = System::Windows::Forms::Padding(0);
			this->label386->Name = L"label386";
			this->label386->Size = System::Drawing::Size(60, 36);
			this->label386->TabIndex = 389;
			// 
			// label387
			// 
			this->label387->AutoSize = true;
			this->label387->BackColor = System::Drawing::SystemColors::Window;
			this->label387->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label387->Location = System::Drawing::Point(672, 556);
			this->label387->Margin = System::Windows::Forms::Padding(0);
			this->label387->Name = L"label387";
			this->label387->Size = System::Drawing::Size(60, 36);
			this->label387->TabIndex = 388;
			// 
			// label388
			// 
			this->label388->AutoSize = true;
			this->label388->BackColor = System::Drawing::SystemColors::Window;
			this->label388->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label388->Location = System::Drawing::Point(733, 556);
			this->label388->Margin = System::Windows::Forms::Padding(0);
			this->label388->Name = L"label388";
			this->label388->Size = System::Drawing::Size(60, 36);
			this->label388->TabIndex = 387;
			// 
			// label389
			// 
			this->label389->AutoSize = true;
			this->label389->BackColor = System::Drawing::SystemColors::Window;
			this->label389->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label389->Location = System::Drawing::Point(794, 556);
			this->label389->Margin = System::Windows::Forms::Padding(0);
			this->label389->Name = L"label389";
			this->label389->Size = System::Drawing::Size(60, 36);
			this->label389->TabIndex = 386;
			// 
			// label390
			// 
			this->label390->AutoSize = true;
			this->label390->BackColor = System::Drawing::SystemColors::Window;
			this->label390->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label390->Location = System::Drawing::Point(855, 556);
			this->label390->Margin = System::Windows::Forms::Padding(0);
			this->label390->Name = L"label390";
			this->label390->Size = System::Drawing::Size(60, 36);
			this->label390->TabIndex = 385;
			// 
			// label391
			// 
			this->label391->AutoSize = true;
			this->label391->BackColor = System::Drawing::SystemColors::Window;
			this->label391->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label391->Location = System::Drawing::Point(916, 556);
			this->label391->Margin = System::Windows::Forms::Padding(0);
			this->label391->Name = L"label391";
			this->label391->Size = System::Drawing::Size(60, 36);
			this->label391->TabIndex = 384;
			// 
			// label392
			// 
			this->label392->AutoSize = true;
			this->label392->BackColor = System::Drawing::SystemColors::Window;
			this->label392->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label392->Location = System::Drawing::Point(977, 556);
			this->label392->Margin = System::Windows::Forms::Padding(0);
			this->label392->Name = L"label392";
			this->label392->Size = System::Drawing::Size(60, 36);
			this->label392->TabIndex = 383;
			// 
			// label393
			// 
			this->label393->AutoSize = true;
			this->label393->BackColor = System::Drawing::SystemColors::Window;
			this->label393->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label393->Location = System::Drawing::Point(1038, 556);
			this->label393->Margin = System::Windows::Forms::Padding(0);
			this->label393->Name = L"label393";
			this->label393->Size = System::Drawing::Size(60, 36);
			this->label393->TabIndex = 382;
			// 
			// label394
			// 
			this->label394->AutoSize = true;
			this->label394->BackColor = System::Drawing::SystemColors::Window;
			this->label394->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label394->Location = System::Drawing::Point(1099, 556);
			this->label394->Margin = System::Windows::Forms::Padding(0);
			this->label394->Name = L"label394";
			this->label394->Size = System::Drawing::Size(60, 36);
			this->label394->TabIndex = 381;
			// 
			// label395
			// 
			this->label395->AutoSize = true;
			this->label395->BackColor = System::Drawing::SystemColors::Window;
			this->label395->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label395->Location = System::Drawing::Point(1160, 556);
			this->label395->Margin = System::Windows::Forms::Padding(0);
			this->label395->Name = L"label395";
			this->label395->Size = System::Drawing::Size(60, 36);
			this->label395->TabIndex = 380;
			// 
			// label396
			// 
			this->label396->AutoSize = true;
			this->label396->BackColor = System::Drawing::SystemColors::Window;
			this->label396->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label396->Location = System::Drawing::Point(1221, 556);
			this->label396->Margin = System::Windows::Forms::Padding(0);
			this->label396->Name = L"label396";
			this->label396->Size = System::Drawing::Size(60, 36);
			this->label396->TabIndex = 379;
			// 
			// label397
			// 
			this->label397->AutoSize = true;
			this->label397->BackColor = System::Drawing::SystemColors::Window;
			this->label397->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label397->Location = System::Drawing::Point(1282, 556);
			this->label397->Margin = System::Windows::Forms::Padding(0);
			this->label397->Name = L"label397";
			this->label397->Size = System::Drawing::Size(60, 36);
			this->label397->TabIndex = 378;
			// 
			// label398
			// 
			this->label398->AutoSize = true;
			this->label398->BackColor = System::Drawing::SystemColors::Window;
			this->label398->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label398->Location = System::Drawing::Point(1343, 556);
			this->label398->Margin = System::Windows::Forms::Padding(0);
			this->label398->Name = L"label398";
			this->label398->Size = System::Drawing::Size(60, 36);
			this->label398->TabIndex = 377;
			// 
			// label399
			// 
			this->label399->AutoSize = true;
			this->label399->BackColor = System::Drawing::SystemColors::Window;
			this->label399->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label399->Location = System::Drawing::Point(1404, 556);
			this->label399->Margin = System::Windows::Forms::Padding(0);
			this->label399->Name = L"label399";
			this->label399->Size = System::Drawing::Size(60, 36);
			this->label399->TabIndex = 376;
			// 
			// label400
			// 
			this->label400->AutoSize = true;
			this->label400->BackColor = System::Drawing::SystemColors::Window;
			this->label400->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label400->Location = System::Drawing::Point(1465, 556);
			this->label400->Margin = System::Windows::Forms::Padding(0);
			this->label400->Name = L"label400";
			this->label400->Size = System::Drawing::Size(96, 36);
			this->label400->TabIndex = 375;
			// 
			// label351
			// 
			this->label351->AutoSize = true;
			this->label351->BackColor = System::Drawing::SystemColors::Window;
			this->label351->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label351->Location = System::Drawing::Point(1, 519);
			this->label351->Margin = System::Windows::Forms::Padding(0);
			this->label351->Name = L"label351";
			this->label351->Size = System::Drawing::Size(60, 36);
			this->label351->TabIndex = 374;
			// 
			// label352
			// 
			this->label352->AutoSize = true;
			this->label352->BackColor = System::Drawing::SystemColors::Window;
			this->label352->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label352->Location = System::Drawing::Point(62, 519);
			this->label352->Margin = System::Windows::Forms::Padding(0);
			this->label352->Name = L"label352";
			this->label352->Size = System::Drawing::Size(60, 36);
			this->label352->TabIndex = 373;
			// 
			// label353
			// 
			this->label353->AutoSize = true;
			this->label353->BackColor = System::Drawing::SystemColors::Window;
			this->label353->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label353->Location = System::Drawing::Point(123, 519);
			this->label353->Margin = System::Windows::Forms::Padding(0);
			this->label353->Name = L"label353";
			this->label353->Size = System::Drawing::Size(60, 36);
			this->label353->TabIndex = 372;
			// 
			// label354
			// 
			this->label354->AutoSize = true;
			this->label354->BackColor = System::Drawing::SystemColors::Window;
			this->label354->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label354->Location = System::Drawing::Point(184, 519);
			this->label354->Margin = System::Windows::Forms::Padding(0);
			this->label354->Name = L"label354";
			this->label354->Size = System::Drawing::Size(60, 36);
			this->label354->TabIndex = 371;
			// 
			// label355
			// 
			this->label355->AutoSize = true;
			this->label355->BackColor = System::Drawing::SystemColors::Window;
			this->label355->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label355->Location = System::Drawing::Point(245, 519);
			this->label355->Margin = System::Windows::Forms::Padding(0);
			this->label355->Name = L"label355";
			this->label355->Size = System::Drawing::Size(60, 36);
			this->label355->TabIndex = 370;
			// 
			// label356
			// 
			this->label356->AutoSize = true;
			this->label356->BackColor = System::Drawing::SystemColors::Window;
			this->label356->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label356->Location = System::Drawing::Point(306, 519);
			this->label356->Margin = System::Windows::Forms::Padding(0);
			this->label356->Name = L"label356";
			this->label356->Size = System::Drawing::Size(60, 36);
			this->label356->TabIndex = 369;
			// 
			// label357
			// 
			this->label357->AutoSize = true;
			this->label357->BackColor = System::Drawing::SystemColors::Window;
			this->label357->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label357->Location = System::Drawing::Point(367, 519);
			this->label357->Margin = System::Windows::Forms::Padding(0);
			this->label357->Name = L"label357";
			this->label357->Size = System::Drawing::Size(60, 36);
			this->label357->TabIndex = 368;
			// 
			// label358
			// 
			this->label358->AutoSize = true;
			this->label358->BackColor = System::Drawing::SystemColors::Window;
			this->label358->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label358->Location = System::Drawing::Point(428, 519);
			this->label358->Margin = System::Windows::Forms::Padding(0);
			this->label358->Name = L"label358";
			this->label358->Size = System::Drawing::Size(60, 36);
			this->label358->TabIndex = 367;
			// 
			// label359
			// 
			this->label359->AutoSize = true;
			this->label359->BackColor = System::Drawing::SystemColors::Window;
			this->label359->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label359->Location = System::Drawing::Point(489, 519);
			this->label359->Margin = System::Windows::Forms::Padding(0);
			this->label359->Name = L"label359";
			this->label359->Size = System::Drawing::Size(60, 36);
			this->label359->TabIndex = 366;
			// 
			// label360
			// 
			this->label360->AutoSize = true;
			this->label360->BackColor = System::Drawing::SystemColors::Window;
			this->label360->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label360->Location = System::Drawing::Point(550, 519);
			this->label360->Margin = System::Windows::Forms::Padding(0);
			this->label360->Name = L"label360";
			this->label360->Size = System::Drawing::Size(60, 36);
			this->label360->TabIndex = 365;
			// 
			// label361
			// 
			this->label361->AutoSize = true;
			this->label361->BackColor = System::Drawing::SystemColors::Window;
			this->label361->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label361->Location = System::Drawing::Point(611, 519);
			this->label361->Margin = System::Windows::Forms::Padding(0);
			this->label361->Name = L"label361";
			this->label361->Size = System::Drawing::Size(60, 36);
			this->label361->TabIndex = 364;
			// 
			// label362
			// 
			this->label362->AutoSize = true;
			this->label362->BackColor = System::Drawing::SystemColors::Window;
			this->label362->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label362->Location = System::Drawing::Point(672, 519);
			this->label362->Margin = System::Windows::Forms::Padding(0);
			this->label362->Name = L"label362";
			this->label362->Size = System::Drawing::Size(60, 36);
			this->label362->TabIndex = 363;
			// 
			// label363
			// 
			this->label363->AutoSize = true;
			this->label363->BackColor = System::Drawing::SystemColors::Window;
			this->label363->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label363->Location = System::Drawing::Point(733, 519);
			this->label363->Margin = System::Windows::Forms::Padding(0);
			this->label363->Name = L"label363";
			this->label363->Size = System::Drawing::Size(60, 36);
			this->label363->TabIndex = 362;
			// 
			// label364
			// 
			this->label364->AutoSize = true;
			this->label364->BackColor = System::Drawing::SystemColors::Window;
			this->label364->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label364->Location = System::Drawing::Point(794, 519);
			this->label364->Margin = System::Windows::Forms::Padding(0);
			this->label364->Name = L"label364";
			this->label364->Size = System::Drawing::Size(60, 36);
			this->label364->TabIndex = 361;
			// 
			// label365
			// 
			this->label365->AutoSize = true;
			this->label365->BackColor = System::Drawing::SystemColors::Window;
			this->label365->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label365->Location = System::Drawing::Point(855, 519);
			this->label365->Margin = System::Windows::Forms::Padding(0);
			this->label365->Name = L"label365";
			this->label365->Size = System::Drawing::Size(60, 36);
			this->label365->TabIndex = 360;
			// 
			// label366
			// 
			this->label366->AutoSize = true;
			this->label366->BackColor = System::Drawing::SystemColors::Window;
			this->label366->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label366->Location = System::Drawing::Point(916, 519);
			this->label366->Margin = System::Windows::Forms::Padding(0);
			this->label366->Name = L"label366";
			this->label366->Size = System::Drawing::Size(60, 36);
			this->label366->TabIndex = 359;
			// 
			// label367
			// 
			this->label367->AutoSize = true;
			this->label367->BackColor = System::Drawing::SystemColors::Window;
			this->label367->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label367->Location = System::Drawing::Point(977, 519);
			this->label367->Margin = System::Windows::Forms::Padding(0);
			this->label367->Name = L"label367";
			this->label367->Size = System::Drawing::Size(60, 36);
			this->label367->TabIndex = 358;
			// 
			// label368
			// 
			this->label368->AutoSize = true;
			this->label368->BackColor = System::Drawing::SystemColors::Window;
			this->label368->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label368->Location = System::Drawing::Point(1038, 519);
			this->label368->Margin = System::Windows::Forms::Padding(0);
			this->label368->Name = L"label368";
			this->label368->Size = System::Drawing::Size(60, 36);
			this->label368->TabIndex = 357;
			// 
			// label369
			// 
			this->label369->AutoSize = true;
			this->label369->BackColor = System::Drawing::SystemColors::Window;
			this->label369->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label369->Location = System::Drawing::Point(1099, 519);
			this->label369->Margin = System::Windows::Forms::Padding(0);
			this->label369->Name = L"label369";
			this->label369->Size = System::Drawing::Size(60, 36);
			this->label369->TabIndex = 356;
			// 
			// label370
			// 
			this->label370->AutoSize = true;
			this->label370->BackColor = System::Drawing::SystemColors::Window;
			this->label370->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label370->Location = System::Drawing::Point(1160, 519);
			this->label370->Margin = System::Windows::Forms::Padding(0);
			this->label370->Name = L"label370";
			this->label370->Size = System::Drawing::Size(60, 36);
			this->label370->TabIndex = 355;
			// 
			// label371
			// 
			this->label371->AutoSize = true;
			this->label371->BackColor = System::Drawing::SystemColors::Window;
			this->label371->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label371->Location = System::Drawing::Point(1221, 519);
			this->label371->Margin = System::Windows::Forms::Padding(0);
			this->label371->Name = L"label371";
			this->label371->Size = System::Drawing::Size(60, 36);
			this->label371->TabIndex = 354;
			// 
			// label372
			// 
			this->label372->AutoSize = true;
			this->label372->BackColor = System::Drawing::SystemColors::Window;
			this->label372->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label372->Location = System::Drawing::Point(1282, 519);
			this->label372->Margin = System::Windows::Forms::Padding(0);
			this->label372->Name = L"label372";
			this->label372->Size = System::Drawing::Size(60, 36);
			this->label372->TabIndex = 353;
			// 
			// label373
			// 
			this->label373->AutoSize = true;
			this->label373->BackColor = System::Drawing::SystemColors::Window;
			this->label373->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label373->Location = System::Drawing::Point(1343, 519);
			this->label373->Margin = System::Windows::Forms::Padding(0);
			this->label373->Name = L"label373";
			this->label373->Size = System::Drawing::Size(60, 36);
			this->label373->TabIndex = 352;
			// 
			// label374
			// 
			this->label374->AutoSize = true;
			this->label374->BackColor = System::Drawing::SystemColors::Window;
			this->label374->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label374->Location = System::Drawing::Point(1404, 519);
			this->label374->Margin = System::Windows::Forms::Padding(0);
			this->label374->Name = L"label374";
			this->label374->Size = System::Drawing::Size(60, 36);
			this->label374->TabIndex = 351;
			// 
			// label375
			// 
			this->label375->AutoSize = true;
			this->label375->BackColor = System::Drawing::SystemColors::Window;
			this->label375->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label375->Location = System::Drawing::Point(1465, 519);
			this->label375->Margin = System::Windows::Forms::Padding(0);
			this->label375->Name = L"label375";
			this->label375->Size = System::Drawing::Size(96, 36);
			this->label375->TabIndex = 350;
			// 
			// label326
			// 
			this->label326->AutoSize = true;
			this->label326->BackColor = System::Drawing::SystemColors::Window;
			this->label326->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label326->Location = System::Drawing::Point(1, 482);
			this->label326->Margin = System::Windows::Forms::Padding(0);
			this->label326->Name = L"label326";
			this->label326->Size = System::Drawing::Size(60, 36);
			this->label326->TabIndex = 349;
			// 
			// label327
			// 
			this->label327->AutoSize = true;
			this->label327->BackColor = System::Drawing::SystemColors::Window;
			this->label327->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label327->Location = System::Drawing::Point(62, 482);
			this->label327->Margin = System::Windows::Forms::Padding(0);
			this->label327->Name = L"label327";
			this->label327->Size = System::Drawing::Size(60, 36);
			this->label327->TabIndex = 348;
			// 
			// label328
			// 
			this->label328->AutoSize = true;
			this->label328->BackColor = System::Drawing::SystemColors::Window;
			this->label328->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label328->Location = System::Drawing::Point(123, 482);
			this->label328->Margin = System::Windows::Forms::Padding(0);
			this->label328->Name = L"label328";
			this->label328->Size = System::Drawing::Size(60, 36);
			this->label328->TabIndex = 347;
			// 
			// label329
			// 
			this->label329->AutoSize = true;
			this->label329->BackColor = System::Drawing::SystemColors::Window;
			this->label329->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label329->Location = System::Drawing::Point(184, 482);
			this->label329->Margin = System::Windows::Forms::Padding(0);
			this->label329->Name = L"label329";
			this->label329->Size = System::Drawing::Size(60, 36);
			this->label329->TabIndex = 346;
			// 
			// label330
			// 
			this->label330->AutoSize = true;
			this->label330->BackColor = System::Drawing::SystemColors::Window;
			this->label330->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label330->Location = System::Drawing::Point(245, 482);
			this->label330->Margin = System::Windows::Forms::Padding(0);
			this->label330->Name = L"label330";
			this->label330->Size = System::Drawing::Size(60, 36);
			this->label330->TabIndex = 345;
			// 
			// label331
			// 
			this->label331->AutoSize = true;
			this->label331->BackColor = System::Drawing::SystemColors::Window;
			this->label331->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label331->Location = System::Drawing::Point(306, 482);
			this->label331->Margin = System::Windows::Forms::Padding(0);
			this->label331->Name = L"label331";
			this->label331->Size = System::Drawing::Size(60, 36);
			this->label331->TabIndex = 344;
			// 
			// label332
			// 
			this->label332->AutoSize = true;
			this->label332->BackColor = System::Drawing::SystemColors::Window;
			this->label332->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label332->Location = System::Drawing::Point(367, 482);
			this->label332->Margin = System::Windows::Forms::Padding(0);
			this->label332->Name = L"label332";
			this->label332->Size = System::Drawing::Size(60, 36);
			this->label332->TabIndex = 343;
			// 
			// label333
			// 
			this->label333->AutoSize = true;
			this->label333->BackColor = System::Drawing::SystemColors::Window;
			this->label333->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label333->Location = System::Drawing::Point(428, 482);
			this->label333->Margin = System::Windows::Forms::Padding(0);
			this->label333->Name = L"label333";
			this->label333->Size = System::Drawing::Size(60, 36);
			this->label333->TabIndex = 342;
			// 
			// label334
			// 
			this->label334->AutoSize = true;
			this->label334->BackColor = System::Drawing::SystemColors::Window;
			this->label334->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label334->Location = System::Drawing::Point(489, 482);
			this->label334->Margin = System::Windows::Forms::Padding(0);
			this->label334->Name = L"label334";
			this->label334->Size = System::Drawing::Size(60, 36);
			this->label334->TabIndex = 341;
			// 
			// label335
			// 
			this->label335->AutoSize = true;
			this->label335->BackColor = System::Drawing::SystemColors::Window;
			this->label335->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label335->Location = System::Drawing::Point(550, 482);
			this->label335->Margin = System::Windows::Forms::Padding(0);
			this->label335->Name = L"label335";
			this->label335->Size = System::Drawing::Size(60, 36);
			this->label335->TabIndex = 340;
			// 
			// label336
			// 
			this->label336->AutoSize = true;
			this->label336->BackColor = System::Drawing::SystemColors::Window;
			this->label336->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label336->Location = System::Drawing::Point(611, 482);
			this->label336->Margin = System::Windows::Forms::Padding(0);
			this->label336->Name = L"label336";
			this->label336->Size = System::Drawing::Size(60, 36);
			this->label336->TabIndex = 339;
			// 
			// label337
			// 
			this->label337->AutoSize = true;
			this->label337->BackColor = System::Drawing::SystemColors::Window;
			this->label337->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label337->Location = System::Drawing::Point(672, 482);
			this->label337->Margin = System::Windows::Forms::Padding(0);
			this->label337->Name = L"label337";
			this->label337->Size = System::Drawing::Size(60, 36);
			this->label337->TabIndex = 338;
			// 
			// label338
			// 
			this->label338->AutoSize = true;
			this->label338->BackColor = System::Drawing::SystemColors::Window;
			this->label338->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label338->Location = System::Drawing::Point(733, 482);
			this->label338->Margin = System::Windows::Forms::Padding(0);
			this->label338->Name = L"label338";
			this->label338->Size = System::Drawing::Size(60, 36);
			this->label338->TabIndex = 337;
			// 
			// label339
			// 
			this->label339->AutoSize = true;
			this->label339->BackColor = System::Drawing::SystemColors::Window;
			this->label339->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label339->Location = System::Drawing::Point(794, 482);
			this->label339->Margin = System::Windows::Forms::Padding(0);
			this->label339->Name = L"label339";
			this->label339->Size = System::Drawing::Size(60, 36);
			this->label339->TabIndex = 336;
			// 
			// label340
			// 
			this->label340->AutoSize = true;
			this->label340->BackColor = System::Drawing::SystemColors::Window;
			this->label340->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label340->Location = System::Drawing::Point(855, 482);
			this->label340->Margin = System::Windows::Forms::Padding(0);
			this->label340->Name = L"label340";
			this->label340->Size = System::Drawing::Size(60, 36);
			this->label340->TabIndex = 335;
			// 
			// label341
			// 
			this->label341->AutoSize = true;
			this->label341->BackColor = System::Drawing::SystemColors::Window;
			this->label341->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label341->Location = System::Drawing::Point(916, 482);
			this->label341->Margin = System::Windows::Forms::Padding(0);
			this->label341->Name = L"label341";
			this->label341->Size = System::Drawing::Size(60, 36);
			this->label341->TabIndex = 334;
			// 
			// label342
			// 
			this->label342->AutoSize = true;
			this->label342->BackColor = System::Drawing::SystemColors::Window;
			this->label342->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label342->Location = System::Drawing::Point(977, 482);
			this->label342->Margin = System::Windows::Forms::Padding(0);
			this->label342->Name = L"label342";
			this->label342->Size = System::Drawing::Size(60, 36);
			this->label342->TabIndex = 333;
			// 
			// label343
			// 
			this->label343->AutoSize = true;
			this->label343->BackColor = System::Drawing::SystemColors::Window;
			this->label343->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label343->Location = System::Drawing::Point(1038, 482);
			this->label343->Margin = System::Windows::Forms::Padding(0);
			this->label343->Name = L"label343";
			this->label343->Size = System::Drawing::Size(60, 36);
			this->label343->TabIndex = 332;
			// 
			// label344
			// 
			this->label344->AutoSize = true;
			this->label344->BackColor = System::Drawing::SystemColors::Window;
			this->label344->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label344->Location = System::Drawing::Point(1099, 482);
			this->label344->Margin = System::Windows::Forms::Padding(0);
			this->label344->Name = L"label344";
			this->label344->Size = System::Drawing::Size(60, 36);
			this->label344->TabIndex = 331;
			// 
			// label345
			// 
			this->label345->AutoSize = true;
			this->label345->BackColor = System::Drawing::SystemColors::Window;
			this->label345->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label345->Location = System::Drawing::Point(1160, 482);
			this->label345->Margin = System::Windows::Forms::Padding(0);
			this->label345->Name = L"label345";
			this->label345->Size = System::Drawing::Size(60, 36);
			this->label345->TabIndex = 330;
			// 
			// label346
			// 
			this->label346->AutoSize = true;
			this->label346->BackColor = System::Drawing::SystemColors::Window;
			this->label346->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label346->Location = System::Drawing::Point(1221, 482);
			this->label346->Margin = System::Windows::Forms::Padding(0);
			this->label346->Name = L"label346";
			this->label346->Size = System::Drawing::Size(60, 36);
			this->label346->TabIndex = 329;
			// 
			// label347
			// 
			this->label347->AutoSize = true;
			this->label347->BackColor = System::Drawing::SystemColors::Window;
			this->label347->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label347->Location = System::Drawing::Point(1282, 482);
			this->label347->Margin = System::Windows::Forms::Padding(0);
			this->label347->Name = L"label347";
			this->label347->Size = System::Drawing::Size(60, 36);
			this->label347->TabIndex = 328;
			// 
			// label348
			// 
			this->label348->AutoSize = true;
			this->label348->BackColor = System::Drawing::SystemColors::Window;
			this->label348->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label348->Location = System::Drawing::Point(1343, 482);
			this->label348->Margin = System::Windows::Forms::Padding(0);
			this->label348->Name = L"label348";
			this->label348->Size = System::Drawing::Size(60, 36);
			this->label348->TabIndex = 327;
			// 
			// label349
			// 
			this->label349->AutoSize = true;
			this->label349->BackColor = System::Drawing::SystemColors::Window;
			this->label349->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label349->Location = System::Drawing::Point(1404, 482);
			this->label349->Margin = System::Windows::Forms::Padding(0);
			this->label349->Name = L"label349";
			this->label349->Size = System::Drawing::Size(60, 36);
			this->label349->TabIndex = 326;
			// 
			// label350
			// 
			this->label350->AutoSize = true;
			this->label350->BackColor = System::Drawing::SystemColors::Window;
			this->label350->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label350->Location = System::Drawing::Point(1465, 482);
			this->label350->Margin = System::Windows::Forms::Padding(0);
			this->label350->Name = L"label350";
			this->label350->Size = System::Drawing::Size(96, 36);
			this->label350->TabIndex = 325;
			// 
			// label301
			// 
			this->label301->AutoSize = true;
			this->label301->BackColor = System::Drawing::SystemColors::Window;
			this->label301->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label301->Location = System::Drawing::Point(1, 445);
			this->label301->Margin = System::Windows::Forms::Padding(0);
			this->label301->Name = L"label301";
			this->label301->Size = System::Drawing::Size(60, 36);
			this->label301->TabIndex = 324;
			// 
			// label302
			// 
			this->label302->AutoSize = true;
			this->label302->BackColor = System::Drawing::SystemColors::Window;
			this->label302->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label302->Location = System::Drawing::Point(62, 445);
			this->label302->Margin = System::Windows::Forms::Padding(0);
			this->label302->Name = L"label302";
			this->label302->Size = System::Drawing::Size(60, 36);
			this->label302->TabIndex = 323;
			// 
			// label303
			// 
			this->label303->AutoSize = true;
			this->label303->BackColor = System::Drawing::SystemColors::Window;
			this->label303->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label303->Location = System::Drawing::Point(123, 445);
			this->label303->Margin = System::Windows::Forms::Padding(0);
			this->label303->Name = L"label303";
			this->label303->Size = System::Drawing::Size(60, 36);
			this->label303->TabIndex = 322;
			// 
			// label304
			// 
			this->label304->AutoSize = true;
			this->label304->BackColor = System::Drawing::SystemColors::Window;
			this->label304->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label304->Location = System::Drawing::Point(184, 445);
			this->label304->Margin = System::Windows::Forms::Padding(0);
			this->label304->Name = L"label304";
			this->label304->Size = System::Drawing::Size(60, 36);
			this->label304->TabIndex = 321;
			// 
			// label305
			// 
			this->label305->AutoSize = true;
			this->label305->BackColor = System::Drawing::SystemColors::Window;
			this->label305->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label305->Location = System::Drawing::Point(245, 445);
			this->label305->Margin = System::Windows::Forms::Padding(0);
			this->label305->Name = L"label305";
			this->label305->Size = System::Drawing::Size(60, 36);
			this->label305->TabIndex = 320;
			// 
			// label306
			// 
			this->label306->AutoSize = true;
			this->label306->BackColor = System::Drawing::SystemColors::Window;
			this->label306->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label306->Location = System::Drawing::Point(306, 445);
			this->label306->Margin = System::Windows::Forms::Padding(0);
			this->label306->Name = L"label306";
			this->label306->Size = System::Drawing::Size(60, 36);
			this->label306->TabIndex = 319;
			// 
			// label307
			// 
			this->label307->AutoSize = true;
			this->label307->BackColor = System::Drawing::SystemColors::Window;
			this->label307->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label307->Location = System::Drawing::Point(367, 445);
			this->label307->Margin = System::Windows::Forms::Padding(0);
			this->label307->Name = L"label307";
			this->label307->Size = System::Drawing::Size(60, 36);
			this->label307->TabIndex = 318;
			// 
			// label308
			// 
			this->label308->AutoSize = true;
			this->label308->BackColor = System::Drawing::SystemColors::Window;
			this->label308->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label308->Location = System::Drawing::Point(428, 445);
			this->label308->Margin = System::Windows::Forms::Padding(0);
			this->label308->Name = L"label308";
			this->label308->Size = System::Drawing::Size(60, 36);
			this->label308->TabIndex = 317;
			// 
			// label309
			// 
			this->label309->AutoSize = true;
			this->label309->BackColor = System::Drawing::SystemColors::Window;
			this->label309->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label309->Location = System::Drawing::Point(489, 445);
			this->label309->Margin = System::Windows::Forms::Padding(0);
			this->label309->Name = L"label309";
			this->label309->Size = System::Drawing::Size(60, 36);
			this->label309->TabIndex = 316;
			// 
			// label310
			// 
			this->label310->AutoSize = true;
			this->label310->BackColor = System::Drawing::SystemColors::Window;
			this->label310->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label310->Location = System::Drawing::Point(550, 445);
			this->label310->Margin = System::Windows::Forms::Padding(0);
			this->label310->Name = L"label310";
			this->label310->Size = System::Drawing::Size(60, 36);
			this->label310->TabIndex = 315;
			// 
			// label311
			// 
			this->label311->AutoSize = true;
			this->label311->BackColor = System::Drawing::SystemColors::Window;
			this->label311->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label311->Location = System::Drawing::Point(611, 445);
			this->label311->Margin = System::Windows::Forms::Padding(0);
			this->label311->Name = L"label311";
			this->label311->Size = System::Drawing::Size(60, 36);
			this->label311->TabIndex = 314;
			// 
			// label312
			// 
			this->label312->AutoSize = true;
			this->label312->BackColor = System::Drawing::SystemColors::Window;
			this->label312->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label312->Location = System::Drawing::Point(672, 445);
			this->label312->Margin = System::Windows::Forms::Padding(0);
			this->label312->Name = L"label312";
			this->label312->Size = System::Drawing::Size(60, 36);
			this->label312->TabIndex = 313;
			// 
			// label313
			// 
			this->label313->AutoSize = true;
			this->label313->BackColor = System::Drawing::SystemColors::Window;
			this->label313->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label313->Location = System::Drawing::Point(733, 445);
			this->label313->Margin = System::Windows::Forms::Padding(0);
			this->label313->Name = L"label313";
			this->label313->Size = System::Drawing::Size(60, 36);
			this->label313->TabIndex = 312;
			// 
			// label314
			// 
			this->label314->AutoSize = true;
			this->label314->BackColor = System::Drawing::SystemColors::Window;
			this->label314->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label314->Location = System::Drawing::Point(794, 445);
			this->label314->Margin = System::Windows::Forms::Padding(0);
			this->label314->Name = L"label314";
			this->label314->Size = System::Drawing::Size(60, 36);
			this->label314->TabIndex = 311;
			// 
			// label315
			// 
			this->label315->AutoSize = true;
			this->label315->BackColor = System::Drawing::SystemColors::Window;
			this->label315->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label315->Location = System::Drawing::Point(855, 445);
			this->label315->Margin = System::Windows::Forms::Padding(0);
			this->label315->Name = L"label315";
			this->label315->Size = System::Drawing::Size(60, 36);
			this->label315->TabIndex = 310;
			// 
			// label316
			// 
			this->label316->AutoSize = true;
			this->label316->BackColor = System::Drawing::SystemColors::Window;
			this->label316->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label316->Location = System::Drawing::Point(916, 445);
			this->label316->Margin = System::Windows::Forms::Padding(0);
			this->label316->Name = L"label316";
			this->label316->Size = System::Drawing::Size(60, 36);
			this->label316->TabIndex = 309;
			// 
			// label317
			// 
			this->label317->AutoSize = true;
			this->label317->BackColor = System::Drawing::SystemColors::Window;
			this->label317->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label317->Location = System::Drawing::Point(977, 445);
			this->label317->Margin = System::Windows::Forms::Padding(0);
			this->label317->Name = L"label317";
			this->label317->Size = System::Drawing::Size(60, 36);
			this->label317->TabIndex = 308;
			// 
			// label318
			// 
			this->label318->AutoSize = true;
			this->label318->BackColor = System::Drawing::SystemColors::Window;
			this->label318->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label318->Location = System::Drawing::Point(1038, 445);
			this->label318->Margin = System::Windows::Forms::Padding(0);
			this->label318->Name = L"label318";
			this->label318->Size = System::Drawing::Size(60, 36);
			this->label318->TabIndex = 307;
			// 
			// label319
			// 
			this->label319->AutoSize = true;
			this->label319->BackColor = System::Drawing::SystemColors::Window;
			this->label319->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label319->Location = System::Drawing::Point(1099, 445);
			this->label319->Margin = System::Windows::Forms::Padding(0);
			this->label319->Name = L"label319";
			this->label319->Size = System::Drawing::Size(60, 36);
			this->label319->TabIndex = 306;
			// 
			// label320
			// 
			this->label320->AutoSize = true;
			this->label320->BackColor = System::Drawing::SystemColors::Window;
			this->label320->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label320->Location = System::Drawing::Point(1160, 445);
			this->label320->Margin = System::Windows::Forms::Padding(0);
			this->label320->Name = L"label320";
			this->label320->Size = System::Drawing::Size(60, 36);
			this->label320->TabIndex = 305;
			// 
			// label321
			// 
			this->label321->AutoSize = true;
			this->label321->BackColor = System::Drawing::SystemColors::Window;
			this->label321->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label321->Location = System::Drawing::Point(1221, 445);
			this->label321->Margin = System::Windows::Forms::Padding(0);
			this->label321->Name = L"label321";
			this->label321->Size = System::Drawing::Size(60, 36);
			this->label321->TabIndex = 304;
			// 
			// label322
			// 
			this->label322->AutoSize = true;
			this->label322->BackColor = System::Drawing::SystemColors::Window;
			this->label322->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label322->Location = System::Drawing::Point(1282, 445);
			this->label322->Margin = System::Windows::Forms::Padding(0);
			this->label322->Name = L"label322";
			this->label322->Size = System::Drawing::Size(60, 36);
			this->label322->TabIndex = 303;
			// 
			// label323
			// 
			this->label323->AutoSize = true;
			this->label323->BackColor = System::Drawing::SystemColors::Window;
			this->label323->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label323->Location = System::Drawing::Point(1343, 445);
			this->label323->Margin = System::Windows::Forms::Padding(0);
			this->label323->Name = L"label323";
			this->label323->Size = System::Drawing::Size(60, 36);
			this->label323->TabIndex = 302;
			// 
			// label324
			// 
			this->label324->AutoSize = true;
			this->label324->BackColor = System::Drawing::SystemColors::Window;
			this->label324->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label324->Location = System::Drawing::Point(1404, 445);
			this->label324->Margin = System::Windows::Forms::Padding(0);
			this->label324->Name = L"label324";
			this->label324->Size = System::Drawing::Size(60, 36);
			this->label324->TabIndex = 301;
			// 
			// label325
			// 
			this->label325->AutoSize = true;
			this->label325->BackColor = System::Drawing::SystemColors::Window;
			this->label325->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label325->Location = System::Drawing::Point(1465, 445);
			this->label325->Margin = System::Windows::Forms::Padding(0);
			this->label325->Name = L"label325";
			this->label325->Size = System::Drawing::Size(96, 36);
			this->label325->TabIndex = 300;
			// 
			// label276
			// 
			this->label276->AutoSize = true;
			this->label276->BackColor = System::Drawing::SystemColors::Window;
			this->label276->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label276->Location = System::Drawing::Point(1, 408);
			this->label276->Margin = System::Windows::Forms::Padding(0);
			this->label276->Name = L"label276";
			this->label276->Size = System::Drawing::Size(60, 36);
			this->label276->TabIndex = 299;
			// 
			// label277
			// 
			this->label277->AutoSize = true;
			this->label277->BackColor = System::Drawing::SystemColors::Window;
			this->label277->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label277->Location = System::Drawing::Point(62, 408);
			this->label277->Margin = System::Windows::Forms::Padding(0);
			this->label277->Name = L"label277";
			this->label277->Size = System::Drawing::Size(60, 36);
			this->label277->TabIndex = 298;
			// 
			// label278
			// 
			this->label278->AutoSize = true;
			this->label278->BackColor = System::Drawing::SystemColors::Window;
			this->label278->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label278->Location = System::Drawing::Point(123, 408);
			this->label278->Margin = System::Windows::Forms::Padding(0);
			this->label278->Name = L"label278";
			this->label278->Size = System::Drawing::Size(60, 36);
			this->label278->TabIndex = 297;
			// 
			// label279
			// 
			this->label279->AutoSize = true;
			this->label279->BackColor = System::Drawing::SystemColors::Window;
			this->label279->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label279->Location = System::Drawing::Point(184, 408);
			this->label279->Margin = System::Windows::Forms::Padding(0);
			this->label279->Name = L"label279";
			this->label279->Size = System::Drawing::Size(60, 36);
			this->label279->TabIndex = 296;
			// 
			// label280
			// 
			this->label280->AutoSize = true;
			this->label280->BackColor = System::Drawing::SystemColors::Window;
			this->label280->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label280->Location = System::Drawing::Point(245, 408);
			this->label280->Margin = System::Windows::Forms::Padding(0);
			this->label280->Name = L"label280";
			this->label280->Size = System::Drawing::Size(60, 36);
			this->label280->TabIndex = 295;
			// 
			// label281
			// 
			this->label281->AutoSize = true;
			this->label281->BackColor = System::Drawing::SystemColors::Window;
			this->label281->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label281->Location = System::Drawing::Point(306, 408);
			this->label281->Margin = System::Windows::Forms::Padding(0);
			this->label281->Name = L"label281";
			this->label281->Size = System::Drawing::Size(60, 36);
			this->label281->TabIndex = 294;
			// 
			// label282
			// 
			this->label282->AutoSize = true;
			this->label282->BackColor = System::Drawing::SystemColors::Window;
			this->label282->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label282->Location = System::Drawing::Point(367, 408);
			this->label282->Margin = System::Windows::Forms::Padding(0);
			this->label282->Name = L"label282";
			this->label282->Size = System::Drawing::Size(60, 36);
			this->label282->TabIndex = 293;
			// 
			// label283
			// 
			this->label283->AutoSize = true;
			this->label283->BackColor = System::Drawing::SystemColors::Window;
			this->label283->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label283->Location = System::Drawing::Point(428, 408);
			this->label283->Margin = System::Windows::Forms::Padding(0);
			this->label283->Name = L"label283";
			this->label283->Size = System::Drawing::Size(60, 36);
			this->label283->TabIndex = 292;
			// 
			// label284
			// 
			this->label284->AutoSize = true;
			this->label284->BackColor = System::Drawing::SystemColors::Window;
			this->label284->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label284->Location = System::Drawing::Point(489, 408);
			this->label284->Margin = System::Windows::Forms::Padding(0);
			this->label284->Name = L"label284";
			this->label284->Size = System::Drawing::Size(60, 36);
			this->label284->TabIndex = 291;
			// 
			// label285
			// 
			this->label285->AutoSize = true;
			this->label285->BackColor = System::Drawing::SystemColors::Window;
			this->label285->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label285->Location = System::Drawing::Point(550, 408);
			this->label285->Margin = System::Windows::Forms::Padding(0);
			this->label285->Name = L"label285";
			this->label285->Size = System::Drawing::Size(60, 36);
			this->label285->TabIndex = 290;
			// 
			// label286
			// 
			this->label286->AutoSize = true;
			this->label286->BackColor = System::Drawing::SystemColors::Window;
			this->label286->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label286->Location = System::Drawing::Point(611, 408);
			this->label286->Margin = System::Windows::Forms::Padding(0);
			this->label286->Name = L"label286";
			this->label286->Size = System::Drawing::Size(60, 36);
			this->label286->TabIndex = 289;
			// 
			// label287
			// 
			this->label287->AutoSize = true;
			this->label287->BackColor = System::Drawing::SystemColors::Window;
			this->label287->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label287->Location = System::Drawing::Point(672, 408);
			this->label287->Margin = System::Windows::Forms::Padding(0);
			this->label287->Name = L"label287";
			this->label287->Size = System::Drawing::Size(60, 36);
			this->label287->TabIndex = 288;
			// 
			// label288
			// 
			this->label288->AutoSize = true;
			this->label288->BackColor = System::Drawing::SystemColors::Window;
			this->label288->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label288->Location = System::Drawing::Point(733, 408);
			this->label288->Margin = System::Windows::Forms::Padding(0);
			this->label288->Name = L"label288";
			this->label288->Size = System::Drawing::Size(60, 36);
			this->label288->TabIndex = 287;
			// 
			// label289
			// 
			this->label289->AutoSize = true;
			this->label289->BackColor = System::Drawing::SystemColors::Window;
			this->label289->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label289->Location = System::Drawing::Point(794, 408);
			this->label289->Margin = System::Windows::Forms::Padding(0);
			this->label289->Name = L"label289";
			this->label289->Size = System::Drawing::Size(60, 36);
			this->label289->TabIndex = 286;
			// 
			// label290
			// 
			this->label290->AutoSize = true;
			this->label290->BackColor = System::Drawing::SystemColors::Window;
			this->label290->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label290->Location = System::Drawing::Point(855, 408);
			this->label290->Margin = System::Windows::Forms::Padding(0);
			this->label290->Name = L"label290";
			this->label290->Size = System::Drawing::Size(60, 36);
			this->label290->TabIndex = 285;
			// 
			// label291
			// 
			this->label291->AutoSize = true;
			this->label291->BackColor = System::Drawing::SystemColors::Window;
			this->label291->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label291->Location = System::Drawing::Point(916, 408);
			this->label291->Margin = System::Windows::Forms::Padding(0);
			this->label291->Name = L"label291";
			this->label291->Size = System::Drawing::Size(60, 36);
			this->label291->TabIndex = 284;
			// 
			// label292
			// 
			this->label292->AutoSize = true;
			this->label292->BackColor = System::Drawing::SystemColors::Window;
			this->label292->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label292->Location = System::Drawing::Point(977, 408);
			this->label292->Margin = System::Windows::Forms::Padding(0);
			this->label292->Name = L"label292";
			this->label292->Size = System::Drawing::Size(60, 36);
			this->label292->TabIndex = 283;
			// 
			// label293
			// 
			this->label293->AutoSize = true;
			this->label293->BackColor = System::Drawing::SystemColors::Window;
			this->label293->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label293->Location = System::Drawing::Point(1038, 408);
			this->label293->Margin = System::Windows::Forms::Padding(0);
			this->label293->Name = L"label293";
			this->label293->Size = System::Drawing::Size(60, 36);
			this->label293->TabIndex = 282;
			// 
			// label294
			// 
			this->label294->AutoSize = true;
			this->label294->BackColor = System::Drawing::SystemColors::Window;
			this->label294->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label294->Location = System::Drawing::Point(1099, 408);
			this->label294->Margin = System::Windows::Forms::Padding(0);
			this->label294->Name = L"label294";
			this->label294->Size = System::Drawing::Size(60, 36);
			this->label294->TabIndex = 281;
			// 
			// label295
			// 
			this->label295->AutoSize = true;
			this->label295->BackColor = System::Drawing::SystemColors::Window;
			this->label295->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label295->Location = System::Drawing::Point(1160, 408);
			this->label295->Margin = System::Windows::Forms::Padding(0);
			this->label295->Name = L"label295";
			this->label295->Size = System::Drawing::Size(60, 36);
			this->label295->TabIndex = 280;
			// 
			// label296
			// 
			this->label296->AutoSize = true;
			this->label296->BackColor = System::Drawing::SystemColors::Window;
			this->label296->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label296->Location = System::Drawing::Point(1221, 408);
			this->label296->Margin = System::Windows::Forms::Padding(0);
			this->label296->Name = L"label296";
			this->label296->Size = System::Drawing::Size(60, 36);
			this->label296->TabIndex = 279;
			// 
			// label297
			// 
			this->label297->AutoSize = true;
			this->label297->BackColor = System::Drawing::SystemColors::Window;
			this->label297->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label297->Location = System::Drawing::Point(1282, 408);
			this->label297->Margin = System::Windows::Forms::Padding(0);
			this->label297->Name = L"label297";
			this->label297->Size = System::Drawing::Size(60, 36);
			this->label297->TabIndex = 278;
			// 
			// label298
			// 
			this->label298->AutoSize = true;
			this->label298->BackColor = System::Drawing::SystemColors::Window;
			this->label298->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label298->Location = System::Drawing::Point(1343, 408);
			this->label298->Margin = System::Windows::Forms::Padding(0);
			this->label298->Name = L"label298";
			this->label298->Size = System::Drawing::Size(60, 36);
			this->label298->TabIndex = 277;
			// 
			// label299
			// 
			this->label299->AutoSize = true;
			this->label299->BackColor = System::Drawing::SystemColors::Window;
			this->label299->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label299->Location = System::Drawing::Point(1404, 408);
			this->label299->Margin = System::Windows::Forms::Padding(0);
			this->label299->Name = L"label299";
			this->label299->Size = System::Drawing::Size(60, 36);
			this->label299->TabIndex = 276;
			// 
			// label300
			// 
			this->label300->AutoSize = true;
			this->label300->BackColor = System::Drawing::SystemColors::Window;
			this->label300->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label300->Location = System::Drawing::Point(1465, 408);
			this->label300->Margin = System::Windows::Forms::Padding(0);
			this->label300->Name = L"label300";
			this->label300->Size = System::Drawing::Size(96, 36);
			this->label300->TabIndex = 275;
			// 
			// label251
			// 
			this->label251->AutoSize = true;
			this->label251->BackColor = System::Drawing::SystemColors::Window;
			this->label251->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label251->Location = System::Drawing::Point(1, 371);
			this->label251->Margin = System::Windows::Forms::Padding(0);
			this->label251->Name = L"label251";
			this->label251->Size = System::Drawing::Size(60, 36);
			this->label251->TabIndex = 274;
			// 
			// label252
			// 
			this->label252->AutoSize = true;
			this->label252->BackColor = System::Drawing::SystemColors::Window;
			this->label252->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label252->Location = System::Drawing::Point(62, 371);
			this->label252->Margin = System::Windows::Forms::Padding(0);
			this->label252->Name = L"label252";
			this->label252->Size = System::Drawing::Size(60, 36);
			this->label252->TabIndex = 273;
			// 
			// label253
			// 
			this->label253->AutoSize = true;
			this->label253->BackColor = System::Drawing::SystemColors::Window;
			this->label253->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label253->Location = System::Drawing::Point(123, 371);
			this->label253->Margin = System::Windows::Forms::Padding(0);
			this->label253->Name = L"label253";
			this->label253->Size = System::Drawing::Size(60, 36);
			this->label253->TabIndex = 272;
			// 
			// label254
			// 
			this->label254->AutoSize = true;
			this->label254->BackColor = System::Drawing::SystemColors::Window;
			this->label254->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label254->Location = System::Drawing::Point(184, 371);
			this->label254->Margin = System::Windows::Forms::Padding(0);
			this->label254->Name = L"label254";
			this->label254->Size = System::Drawing::Size(60, 36);
			this->label254->TabIndex = 271;
			// 
			// label255
			// 
			this->label255->AutoSize = true;
			this->label255->BackColor = System::Drawing::SystemColors::Window;
			this->label255->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label255->Location = System::Drawing::Point(245, 371);
			this->label255->Margin = System::Windows::Forms::Padding(0);
			this->label255->Name = L"label255";
			this->label255->Size = System::Drawing::Size(60, 36);
			this->label255->TabIndex = 270;
			// 
			// label256
			// 
			this->label256->AutoSize = true;
			this->label256->BackColor = System::Drawing::SystemColors::Window;
			this->label256->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label256->Location = System::Drawing::Point(306, 371);
			this->label256->Margin = System::Windows::Forms::Padding(0);
			this->label256->Name = L"label256";
			this->label256->Size = System::Drawing::Size(60, 36);
			this->label256->TabIndex = 269;
			// 
			// label257
			// 
			this->label257->AutoSize = true;
			this->label257->BackColor = System::Drawing::SystemColors::Window;
			this->label257->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label257->Location = System::Drawing::Point(367, 371);
			this->label257->Margin = System::Windows::Forms::Padding(0);
			this->label257->Name = L"label257";
			this->label257->Size = System::Drawing::Size(60, 36);
			this->label257->TabIndex = 268;
			// 
			// label258
			// 
			this->label258->AutoSize = true;
			this->label258->BackColor = System::Drawing::SystemColors::Window;
			this->label258->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label258->Location = System::Drawing::Point(428, 371);
			this->label258->Margin = System::Windows::Forms::Padding(0);
			this->label258->Name = L"label258";
			this->label258->Size = System::Drawing::Size(60, 36);
			this->label258->TabIndex = 267;
			// 
			// label259
			// 
			this->label259->AutoSize = true;
			this->label259->BackColor = System::Drawing::SystemColors::Window;
			this->label259->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label259->Location = System::Drawing::Point(489, 371);
			this->label259->Margin = System::Windows::Forms::Padding(0);
			this->label259->Name = L"label259";
			this->label259->Size = System::Drawing::Size(60, 36);
			this->label259->TabIndex = 266;
			// 
			// label260
			// 
			this->label260->AutoSize = true;
			this->label260->BackColor = System::Drawing::SystemColors::Window;
			this->label260->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label260->Location = System::Drawing::Point(550, 371);
			this->label260->Margin = System::Windows::Forms::Padding(0);
			this->label260->Name = L"label260";
			this->label260->Size = System::Drawing::Size(60, 36);
			this->label260->TabIndex = 265;
			// 
			// label261
			// 
			this->label261->AutoSize = true;
			this->label261->BackColor = System::Drawing::SystemColors::Window;
			this->label261->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label261->Location = System::Drawing::Point(611, 371);
			this->label261->Margin = System::Windows::Forms::Padding(0);
			this->label261->Name = L"label261";
			this->label261->Size = System::Drawing::Size(60, 36);
			this->label261->TabIndex = 264;
			// 
			// label262
			// 
			this->label262->AutoSize = true;
			this->label262->BackColor = System::Drawing::SystemColors::Window;
			this->label262->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label262->Location = System::Drawing::Point(672, 371);
			this->label262->Margin = System::Windows::Forms::Padding(0);
			this->label262->Name = L"label262";
			this->label262->Size = System::Drawing::Size(60, 36);
			this->label262->TabIndex = 263;
			// 
			// label263
			// 
			this->label263->AutoSize = true;
			this->label263->BackColor = System::Drawing::SystemColors::Window;
			this->label263->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label263->Location = System::Drawing::Point(733, 371);
			this->label263->Margin = System::Windows::Forms::Padding(0);
			this->label263->Name = L"label263";
			this->label263->Size = System::Drawing::Size(60, 36);
			this->label263->TabIndex = 262;
			// 
			// label264
			// 
			this->label264->AutoSize = true;
			this->label264->BackColor = System::Drawing::SystemColors::Window;
			this->label264->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label264->Location = System::Drawing::Point(794, 371);
			this->label264->Margin = System::Windows::Forms::Padding(0);
			this->label264->Name = L"label264";
			this->label264->Size = System::Drawing::Size(60, 36);
			this->label264->TabIndex = 261;
			// 
			// label265
			// 
			this->label265->AutoSize = true;
			this->label265->BackColor = System::Drawing::SystemColors::Window;
			this->label265->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label265->Location = System::Drawing::Point(855, 371);
			this->label265->Margin = System::Windows::Forms::Padding(0);
			this->label265->Name = L"label265";
			this->label265->Size = System::Drawing::Size(60, 36);
			this->label265->TabIndex = 260;
			// 
			// label266
			// 
			this->label266->AutoSize = true;
			this->label266->BackColor = System::Drawing::SystemColors::Window;
			this->label266->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label266->Location = System::Drawing::Point(916, 371);
			this->label266->Margin = System::Windows::Forms::Padding(0);
			this->label266->Name = L"label266";
			this->label266->Size = System::Drawing::Size(60, 36);
			this->label266->TabIndex = 259;
			// 
			// label267
			// 
			this->label267->AutoSize = true;
			this->label267->BackColor = System::Drawing::SystemColors::Window;
			this->label267->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label267->Location = System::Drawing::Point(977, 371);
			this->label267->Margin = System::Windows::Forms::Padding(0);
			this->label267->Name = L"label267";
			this->label267->Size = System::Drawing::Size(60, 36);
			this->label267->TabIndex = 258;
			// 
			// label268
			// 
			this->label268->AutoSize = true;
			this->label268->BackColor = System::Drawing::SystemColors::Window;
			this->label268->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label268->Location = System::Drawing::Point(1038, 371);
			this->label268->Margin = System::Windows::Forms::Padding(0);
			this->label268->Name = L"label268";
			this->label268->Size = System::Drawing::Size(60, 36);
			this->label268->TabIndex = 257;
			// 
			// label269
			// 
			this->label269->AutoSize = true;
			this->label269->BackColor = System::Drawing::SystemColors::Window;
			this->label269->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label269->Location = System::Drawing::Point(1099, 371);
			this->label269->Margin = System::Windows::Forms::Padding(0);
			this->label269->Name = L"label269";
			this->label269->Size = System::Drawing::Size(60, 36);
			this->label269->TabIndex = 256;
			// 
			// label270
			// 
			this->label270->AutoSize = true;
			this->label270->BackColor = System::Drawing::SystemColors::Window;
			this->label270->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label270->Location = System::Drawing::Point(1160, 371);
			this->label270->Margin = System::Windows::Forms::Padding(0);
			this->label270->Name = L"label270";
			this->label270->Size = System::Drawing::Size(60, 36);
			this->label270->TabIndex = 255;
			// 
			// label271
			// 
			this->label271->AutoSize = true;
			this->label271->BackColor = System::Drawing::SystemColors::Window;
			this->label271->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label271->Location = System::Drawing::Point(1221, 371);
			this->label271->Margin = System::Windows::Forms::Padding(0);
			this->label271->Name = L"label271";
			this->label271->Size = System::Drawing::Size(60, 36);
			this->label271->TabIndex = 254;
			// 
			// label272
			// 
			this->label272->AutoSize = true;
			this->label272->BackColor = System::Drawing::SystemColors::Window;
			this->label272->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label272->Location = System::Drawing::Point(1282, 371);
			this->label272->Margin = System::Windows::Forms::Padding(0);
			this->label272->Name = L"label272";
			this->label272->Size = System::Drawing::Size(60, 36);
			this->label272->TabIndex = 253;
			// 
			// label273
			// 
			this->label273->AutoSize = true;
			this->label273->BackColor = System::Drawing::SystemColors::Window;
			this->label273->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label273->Location = System::Drawing::Point(1343, 371);
			this->label273->Margin = System::Windows::Forms::Padding(0);
			this->label273->Name = L"label273";
			this->label273->Size = System::Drawing::Size(60, 36);
			this->label273->TabIndex = 252;
			// 
			// label274
			// 
			this->label274->AutoSize = true;
			this->label274->BackColor = System::Drawing::SystemColors::Window;
			this->label274->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label274->Location = System::Drawing::Point(1404, 371);
			this->label274->Margin = System::Windows::Forms::Padding(0);
			this->label274->Name = L"label274";
			this->label274->Size = System::Drawing::Size(60, 36);
			this->label274->TabIndex = 251;
			// 
			// label275
			// 
			this->label275->AutoSize = true;
			this->label275->BackColor = System::Drawing::SystemColors::Window;
			this->label275->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label275->Location = System::Drawing::Point(1465, 371);
			this->label275->Margin = System::Windows::Forms::Padding(0);
			this->label275->Name = L"label275";
			this->label275->Size = System::Drawing::Size(96, 36);
			this->label275->TabIndex = 250;
			// 
			// label226
			// 
			this->label226->AutoSize = true;
			this->label226->BackColor = System::Drawing::SystemColors::Window;
			this->label226->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label226->Location = System::Drawing::Point(1, 334);
			this->label226->Margin = System::Windows::Forms::Padding(0);
			this->label226->Name = L"label226";
			this->label226->Size = System::Drawing::Size(60, 36);
			this->label226->TabIndex = 249;
			// 
			// label227
			// 
			this->label227->AutoSize = true;
			this->label227->BackColor = System::Drawing::SystemColors::Window;
			this->label227->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label227->Location = System::Drawing::Point(62, 334);
			this->label227->Margin = System::Windows::Forms::Padding(0);
			this->label227->Name = L"label227";
			this->label227->Size = System::Drawing::Size(60, 36);
			this->label227->TabIndex = 248;
			// 
			// label228
			// 
			this->label228->AutoSize = true;
			this->label228->BackColor = System::Drawing::SystemColors::Window;
			this->label228->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label228->Location = System::Drawing::Point(123, 334);
			this->label228->Margin = System::Windows::Forms::Padding(0);
			this->label228->Name = L"label228";
			this->label228->Size = System::Drawing::Size(60, 36);
			this->label228->TabIndex = 247;
			// 
			// label229
			// 
			this->label229->AutoSize = true;
			this->label229->BackColor = System::Drawing::SystemColors::Window;
			this->label229->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label229->Location = System::Drawing::Point(184, 334);
			this->label229->Margin = System::Windows::Forms::Padding(0);
			this->label229->Name = L"label229";
			this->label229->Size = System::Drawing::Size(60, 36);
			this->label229->TabIndex = 246;
			// 
			// label230
			// 
			this->label230->AutoSize = true;
			this->label230->BackColor = System::Drawing::SystemColors::Window;
			this->label230->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label230->Location = System::Drawing::Point(245, 334);
			this->label230->Margin = System::Windows::Forms::Padding(0);
			this->label230->Name = L"label230";
			this->label230->Size = System::Drawing::Size(60, 36);
			this->label230->TabIndex = 245;
			// 
			// label231
			// 
			this->label231->AutoSize = true;
			this->label231->BackColor = System::Drawing::SystemColors::Window;
			this->label231->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label231->Location = System::Drawing::Point(306, 334);
			this->label231->Margin = System::Windows::Forms::Padding(0);
			this->label231->Name = L"label231";
			this->label231->Size = System::Drawing::Size(60, 36);
			this->label231->TabIndex = 244;
			// 
			// label232
			// 
			this->label232->AutoSize = true;
			this->label232->BackColor = System::Drawing::SystemColors::Window;
			this->label232->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label232->Location = System::Drawing::Point(367, 334);
			this->label232->Margin = System::Windows::Forms::Padding(0);
			this->label232->Name = L"label232";
			this->label232->Size = System::Drawing::Size(60, 36);
			this->label232->TabIndex = 243;
			// 
			// label233
			// 
			this->label233->AutoSize = true;
			this->label233->BackColor = System::Drawing::SystemColors::Window;
			this->label233->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label233->Location = System::Drawing::Point(428, 334);
			this->label233->Margin = System::Windows::Forms::Padding(0);
			this->label233->Name = L"label233";
			this->label233->Size = System::Drawing::Size(60, 36);
			this->label233->TabIndex = 242;
			// 
			// label234
			// 
			this->label234->AutoSize = true;
			this->label234->BackColor = System::Drawing::SystemColors::Window;
			this->label234->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label234->Location = System::Drawing::Point(489, 334);
			this->label234->Margin = System::Windows::Forms::Padding(0);
			this->label234->Name = L"label234";
			this->label234->Size = System::Drawing::Size(60, 36);
			this->label234->TabIndex = 241;
			// 
			// label235
			// 
			this->label235->AutoSize = true;
			this->label235->BackColor = System::Drawing::SystemColors::Window;
			this->label235->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label235->Location = System::Drawing::Point(550, 334);
			this->label235->Margin = System::Windows::Forms::Padding(0);
			this->label235->Name = L"label235";
			this->label235->Size = System::Drawing::Size(60, 36);
			this->label235->TabIndex = 240;
			// 
			// label236
			// 
			this->label236->AutoSize = true;
			this->label236->BackColor = System::Drawing::SystemColors::Window;
			this->label236->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label236->Location = System::Drawing::Point(611, 334);
			this->label236->Margin = System::Windows::Forms::Padding(0);
			this->label236->Name = L"label236";
			this->label236->Size = System::Drawing::Size(60, 36);
			this->label236->TabIndex = 239;
			// 
			// label237
			// 
			this->label237->AutoSize = true;
			this->label237->BackColor = System::Drawing::SystemColors::Window;
			this->label237->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label237->Location = System::Drawing::Point(672, 334);
			this->label237->Margin = System::Windows::Forms::Padding(0);
			this->label237->Name = L"label237";
			this->label237->Size = System::Drawing::Size(60, 36);
			this->label237->TabIndex = 238;
			// 
			// label238
			// 
			this->label238->AutoSize = true;
			this->label238->BackColor = System::Drawing::SystemColors::Window;
			this->label238->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label238->Location = System::Drawing::Point(733, 334);
			this->label238->Margin = System::Windows::Forms::Padding(0);
			this->label238->Name = L"label238";
			this->label238->Size = System::Drawing::Size(60, 36);
			this->label238->TabIndex = 237;
			// 
			// label239
			// 
			this->label239->AutoSize = true;
			this->label239->BackColor = System::Drawing::SystemColors::Window;
			this->label239->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label239->Location = System::Drawing::Point(794, 334);
			this->label239->Margin = System::Windows::Forms::Padding(0);
			this->label239->Name = L"label239";
			this->label239->Size = System::Drawing::Size(60, 36);
			this->label239->TabIndex = 236;
			// 
			// label240
			// 
			this->label240->AutoSize = true;
			this->label240->BackColor = System::Drawing::SystemColors::Window;
			this->label240->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label240->Location = System::Drawing::Point(855, 334);
			this->label240->Margin = System::Windows::Forms::Padding(0);
			this->label240->Name = L"label240";
			this->label240->Size = System::Drawing::Size(60, 36);
			this->label240->TabIndex = 235;
			// 
			// label241
			// 
			this->label241->AutoSize = true;
			this->label241->BackColor = System::Drawing::SystemColors::Window;
			this->label241->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label241->Location = System::Drawing::Point(916, 334);
			this->label241->Margin = System::Windows::Forms::Padding(0);
			this->label241->Name = L"label241";
			this->label241->Size = System::Drawing::Size(60, 36);
			this->label241->TabIndex = 234;
			// 
			// label242
			// 
			this->label242->AutoSize = true;
			this->label242->BackColor = System::Drawing::SystemColors::Window;
			this->label242->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label242->Location = System::Drawing::Point(977, 334);
			this->label242->Margin = System::Windows::Forms::Padding(0);
			this->label242->Name = L"label242";
			this->label242->Size = System::Drawing::Size(60, 36);
			this->label242->TabIndex = 233;
			// 
			// label243
			// 
			this->label243->AutoSize = true;
			this->label243->BackColor = System::Drawing::SystemColors::Window;
			this->label243->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label243->Location = System::Drawing::Point(1038, 334);
			this->label243->Margin = System::Windows::Forms::Padding(0);
			this->label243->Name = L"label243";
			this->label243->Size = System::Drawing::Size(60, 36);
			this->label243->TabIndex = 232;
			// 
			// label244
			// 
			this->label244->AutoSize = true;
			this->label244->BackColor = System::Drawing::SystemColors::Window;
			this->label244->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label244->Location = System::Drawing::Point(1099, 334);
			this->label244->Margin = System::Windows::Forms::Padding(0);
			this->label244->Name = L"label244";
			this->label244->Size = System::Drawing::Size(60, 36);
			this->label244->TabIndex = 231;
			// 
			// label245
			// 
			this->label245->AutoSize = true;
			this->label245->BackColor = System::Drawing::SystemColors::Window;
			this->label245->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label245->Location = System::Drawing::Point(1160, 334);
			this->label245->Margin = System::Windows::Forms::Padding(0);
			this->label245->Name = L"label245";
			this->label245->Size = System::Drawing::Size(60, 36);
			this->label245->TabIndex = 230;
			// 
			// label246
			// 
			this->label246->AutoSize = true;
			this->label246->BackColor = System::Drawing::SystemColors::Window;
			this->label246->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label246->Location = System::Drawing::Point(1221, 334);
			this->label246->Margin = System::Windows::Forms::Padding(0);
			this->label246->Name = L"label246";
			this->label246->Size = System::Drawing::Size(60, 36);
			this->label246->TabIndex = 229;
			// 
			// label247
			// 
			this->label247->AutoSize = true;
			this->label247->BackColor = System::Drawing::SystemColors::Window;
			this->label247->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label247->Location = System::Drawing::Point(1282, 334);
			this->label247->Margin = System::Windows::Forms::Padding(0);
			this->label247->Name = L"label247";
			this->label247->Size = System::Drawing::Size(60, 36);
			this->label247->TabIndex = 228;
			// 
			// label248
			// 
			this->label248->AutoSize = true;
			this->label248->BackColor = System::Drawing::SystemColors::Window;
			this->label248->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label248->Location = System::Drawing::Point(1343, 334);
			this->label248->Margin = System::Windows::Forms::Padding(0);
			this->label248->Name = L"label248";
			this->label248->Size = System::Drawing::Size(60, 36);
			this->label248->TabIndex = 227;
			// 
			// label249
			// 
			this->label249->AutoSize = true;
			this->label249->BackColor = System::Drawing::SystemColors::Window;
			this->label249->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label249->Location = System::Drawing::Point(1404, 334);
			this->label249->Margin = System::Windows::Forms::Padding(0);
			this->label249->Name = L"label249";
			this->label249->Size = System::Drawing::Size(60, 36);
			this->label249->TabIndex = 226;
			// 
			// label250
			// 
			this->label250->AutoSize = true;
			this->label250->BackColor = System::Drawing::SystemColors::Window;
			this->label250->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label250->Location = System::Drawing::Point(1465, 334);
			this->label250->Margin = System::Windows::Forms::Padding(0);
			this->label250->Name = L"label250";
			this->label250->Size = System::Drawing::Size(96, 36);
			this->label250->TabIndex = 225;
			// 
			// label201
			// 
			this->label201->AutoSize = true;
			this->label201->BackColor = System::Drawing::SystemColors::Window;
			this->label201->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label201->Location = System::Drawing::Point(1, 297);
			this->label201->Margin = System::Windows::Forms::Padding(0);
			this->label201->Name = L"label201";
			this->label201->Size = System::Drawing::Size(60, 36);
			this->label201->TabIndex = 224;
			// 
			// label202
			// 
			this->label202->AutoSize = true;
			this->label202->BackColor = System::Drawing::SystemColors::Window;
			this->label202->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label202->Location = System::Drawing::Point(62, 297);
			this->label202->Margin = System::Windows::Forms::Padding(0);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(60, 36);
			this->label202->TabIndex = 223;
			// 
			// label203
			// 
			this->label203->AutoSize = true;
			this->label203->BackColor = System::Drawing::SystemColors::Window;
			this->label203->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label203->Location = System::Drawing::Point(123, 297);
			this->label203->Margin = System::Windows::Forms::Padding(0);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(60, 36);
			this->label203->TabIndex = 222;
			// 
			// label204
			// 
			this->label204->AutoSize = true;
			this->label204->BackColor = System::Drawing::SystemColors::Window;
			this->label204->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label204->Location = System::Drawing::Point(184, 297);
			this->label204->Margin = System::Windows::Forms::Padding(0);
			this->label204->Name = L"label204";
			this->label204->Size = System::Drawing::Size(60, 36);
			this->label204->TabIndex = 221;
			// 
			// label205
			// 
			this->label205->AutoSize = true;
			this->label205->BackColor = System::Drawing::SystemColors::Window;
			this->label205->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label205->Location = System::Drawing::Point(245, 297);
			this->label205->Margin = System::Windows::Forms::Padding(0);
			this->label205->Name = L"label205";
			this->label205->Size = System::Drawing::Size(60, 36);
			this->label205->TabIndex = 220;
			// 
			// label206
			// 
			this->label206->AutoSize = true;
			this->label206->BackColor = System::Drawing::SystemColors::Window;
			this->label206->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label206->Location = System::Drawing::Point(306, 297);
			this->label206->Margin = System::Windows::Forms::Padding(0);
			this->label206->Name = L"label206";
			this->label206->Size = System::Drawing::Size(60, 36);
			this->label206->TabIndex = 219;
			// 
			// label207
			// 
			this->label207->AutoSize = true;
			this->label207->BackColor = System::Drawing::SystemColors::Window;
			this->label207->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label207->Location = System::Drawing::Point(367, 297);
			this->label207->Margin = System::Windows::Forms::Padding(0);
			this->label207->Name = L"label207";
			this->label207->Size = System::Drawing::Size(60, 36);
			this->label207->TabIndex = 218;
			// 
			// label208
			// 
			this->label208->AutoSize = true;
			this->label208->BackColor = System::Drawing::SystemColors::Window;
			this->label208->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label208->Location = System::Drawing::Point(428, 297);
			this->label208->Margin = System::Windows::Forms::Padding(0);
			this->label208->Name = L"label208";
			this->label208->Size = System::Drawing::Size(60, 36);
			this->label208->TabIndex = 217;
			// 
			// label209
			// 
			this->label209->AutoSize = true;
			this->label209->BackColor = System::Drawing::SystemColors::Window;
			this->label209->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label209->Location = System::Drawing::Point(489, 297);
			this->label209->Margin = System::Windows::Forms::Padding(0);
			this->label209->Name = L"label209";
			this->label209->Size = System::Drawing::Size(60, 36);
			this->label209->TabIndex = 216;
			// 
			// label210
			// 
			this->label210->AutoSize = true;
			this->label210->BackColor = System::Drawing::SystemColors::Window;
			this->label210->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label210->Location = System::Drawing::Point(550, 297);
			this->label210->Margin = System::Windows::Forms::Padding(0);
			this->label210->Name = L"label210";
			this->label210->Size = System::Drawing::Size(60, 36);
			this->label210->TabIndex = 215;
			// 
			// label211
			// 
			this->label211->AutoSize = true;
			this->label211->BackColor = System::Drawing::SystemColors::Window;
			this->label211->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label211->Location = System::Drawing::Point(611, 297);
			this->label211->Margin = System::Windows::Forms::Padding(0);
			this->label211->Name = L"label211";
			this->label211->Size = System::Drawing::Size(60, 36);
			this->label211->TabIndex = 214;
			// 
			// label212
			// 
			this->label212->AutoSize = true;
			this->label212->BackColor = System::Drawing::SystemColors::Window;
			this->label212->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label212->Location = System::Drawing::Point(672, 297);
			this->label212->Margin = System::Windows::Forms::Padding(0);
			this->label212->Name = L"label212";
			this->label212->Size = System::Drawing::Size(60, 36);
			this->label212->TabIndex = 213;
			// 
			// label213
			// 
			this->label213->AutoSize = true;
			this->label213->BackColor = System::Drawing::SystemColors::Window;
			this->label213->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label213->Location = System::Drawing::Point(733, 297);
			this->label213->Margin = System::Windows::Forms::Padding(0);
			this->label213->Name = L"label213";
			this->label213->Size = System::Drawing::Size(60, 36);
			this->label213->TabIndex = 212;
			// 
			// label214
			// 
			this->label214->AutoSize = true;
			this->label214->BackColor = System::Drawing::SystemColors::Window;
			this->label214->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label214->Location = System::Drawing::Point(794, 297);
			this->label214->Margin = System::Windows::Forms::Padding(0);
			this->label214->Name = L"label214";
			this->label214->Size = System::Drawing::Size(60, 36);
			this->label214->TabIndex = 211;
			// 
			// label215
			// 
			this->label215->AutoSize = true;
			this->label215->BackColor = System::Drawing::SystemColors::Window;
			this->label215->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label215->Location = System::Drawing::Point(855, 297);
			this->label215->Margin = System::Windows::Forms::Padding(0);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(60, 36);
			this->label215->TabIndex = 210;
			// 
			// label216
			// 
			this->label216->AutoSize = true;
			this->label216->BackColor = System::Drawing::SystemColors::Window;
			this->label216->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label216->Location = System::Drawing::Point(916, 297);
			this->label216->Margin = System::Windows::Forms::Padding(0);
			this->label216->Name = L"label216";
			this->label216->Size = System::Drawing::Size(60, 36);
			this->label216->TabIndex = 209;
			// 
			// label217
			// 
			this->label217->AutoSize = true;
			this->label217->BackColor = System::Drawing::SystemColors::Window;
			this->label217->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label217->Location = System::Drawing::Point(977, 297);
			this->label217->Margin = System::Windows::Forms::Padding(0);
			this->label217->Name = L"label217";
			this->label217->Size = System::Drawing::Size(60, 36);
			this->label217->TabIndex = 208;
			// 
			// label218
			// 
			this->label218->AutoSize = true;
			this->label218->BackColor = System::Drawing::SystemColors::Window;
			this->label218->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label218->Location = System::Drawing::Point(1038, 297);
			this->label218->Margin = System::Windows::Forms::Padding(0);
			this->label218->Name = L"label218";
			this->label218->Size = System::Drawing::Size(60, 36);
			this->label218->TabIndex = 207;
			// 
			// label219
			// 
			this->label219->AutoSize = true;
			this->label219->BackColor = System::Drawing::SystemColors::Window;
			this->label219->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label219->Location = System::Drawing::Point(1099, 297);
			this->label219->Margin = System::Windows::Forms::Padding(0);
			this->label219->Name = L"label219";
			this->label219->Size = System::Drawing::Size(60, 36);
			this->label219->TabIndex = 206;
			// 
			// label220
			// 
			this->label220->AutoSize = true;
			this->label220->BackColor = System::Drawing::SystemColors::Window;
			this->label220->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label220->Location = System::Drawing::Point(1160, 297);
			this->label220->Margin = System::Windows::Forms::Padding(0);
			this->label220->Name = L"label220";
			this->label220->Size = System::Drawing::Size(60, 36);
			this->label220->TabIndex = 205;
			// 
			// label221
			// 
			this->label221->AutoSize = true;
			this->label221->BackColor = System::Drawing::SystemColors::Window;
			this->label221->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label221->Location = System::Drawing::Point(1221, 297);
			this->label221->Margin = System::Windows::Forms::Padding(0);
			this->label221->Name = L"label221";
			this->label221->Size = System::Drawing::Size(60, 36);
			this->label221->TabIndex = 204;
			// 
			// label222
			// 
			this->label222->AutoSize = true;
			this->label222->BackColor = System::Drawing::SystemColors::Window;
			this->label222->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label222->Location = System::Drawing::Point(1282, 297);
			this->label222->Margin = System::Windows::Forms::Padding(0);
			this->label222->Name = L"label222";
			this->label222->Size = System::Drawing::Size(60, 36);
			this->label222->TabIndex = 203;
			// 
			// label223
			// 
			this->label223->AutoSize = true;
			this->label223->BackColor = System::Drawing::SystemColors::Window;
			this->label223->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label223->Location = System::Drawing::Point(1343, 297);
			this->label223->Margin = System::Windows::Forms::Padding(0);
			this->label223->Name = L"label223";
			this->label223->Size = System::Drawing::Size(60, 36);
			this->label223->TabIndex = 202;
			// 
			// label224
			// 
			this->label224->AutoSize = true;
			this->label224->BackColor = System::Drawing::SystemColors::Window;
			this->label224->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label224->Location = System::Drawing::Point(1404, 297);
			this->label224->Margin = System::Windows::Forms::Padding(0);
			this->label224->Name = L"label224";
			this->label224->Size = System::Drawing::Size(60, 36);
			this->label224->TabIndex = 201;
			// 
			// label225
			// 
			this->label225->AutoSize = true;
			this->label225->BackColor = System::Drawing::SystemColors::Window;
			this->label225->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label225->Location = System::Drawing::Point(1465, 297);
			this->label225->Margin = System::Windows::Forms::Padding(0);
			this->label225->Name = L"label225";
			this->label225->Size = System::Drawing::Size(96, 36);
			this->label225->TabIndex = 200;
			// 
			// label176
			// 
			this->label176->AutoSize = true;
			this->label176->BackColor = System::Drawing::SystemColors::Window;
			this->label176->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label176->Location = System::Drawing::Point(1, 260);
			this->label176->Margin = System::Windows::Forms::Padding(0);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(60, 36);
			this->label176->TabIndex = 199;
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->BackColor = System::Drawing::SystemColors::Window;
			this->label177->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label177->Location = System::Drawing::Point(62, 260);
			this->label177->Margin = System::Windows::Forms::Padding(0);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(60, 36);
			this->label177->TabIndex = 198;
			// 
			// label178
			// 
			this->label178->AutoSize = true;
			this->label178->BackColor = System::Drawing::SystemColors::Window;
			this->label178->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label178->Location = System::Drawing::Point(123, 260);
			this->label178->Margin = System::Windows::Forms::Padding(0);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(60, 36);
			this->label178->TabIndex = 197;
			// 
			// label179
			// 
			this->label179->AutoSize = true;
			this->label179->BackColor = System::Drawing::SystemColors::Window;
			this->label179->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label179->Location = System::Drawing::Point(184, 260);
			this->label179->Margin = System::Windows::Forms::Padding(0);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(60, 36);
			this->label179->TabIndex = 196;
			// 
			// label180
			// 
			this->label180->AutoSize = true;
			this->label180->BackColor = System::Drawing::SystemColors::Window;
			this->label180->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label180->Location = System::Drawing::Point(245, 260);
			this->label180->Margin = System::Windows::Forms::Padding(0);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(60, 36);
			this->label180->TabIndex = 195;
			// 
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->BackColor = System::Drawing::SystemColors::Window;
			this->label181->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label181->Location = System::Drawing::Point(306, 260);
			this->label181->Margin = System::Windows::Forms::Padding(0);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(60, 36);
			this->label181->TabIndex = 194;
			// 
			// label182
			// 
			this->label182->AutoSize = true;
			this->label182->BackColor = System::Drawing::SystemColors::Window;
			this->label182->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label182->Location = System::Drawing::Point(367, 260);
			this->label182->Margin = System::Windows::Forms::Padding(0);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(60, 36);
			this->label182->TabIndex = 193;
			// 
			// label183
			// 
			this->label183->AutoSize = true;
			this->label183->BackColor = System::Drawing::SystemColors::Window;
			this->label183->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label183->Location = System::Drawing::Point(428, 260);
			this->label183->Margin = System::Windows::Forms::Padding(0);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(60, 36);
			this->label183->TabIndex = 192;
			// 
			// label184
			// 
			this->label184->AutoSize = true;
			this->label184->BackColor = System::Drawing::SystemColors::Window;
			this->label184->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label184->Location = System::Drawing::Point(489, 260);
			this->label184->Margin = System::Windows::Forms::Padding(0);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(60, 36);
			this->label184->TabIndex = 191;
			// 
			// label185
			// 
			this->label185->AutoSize = true;
			this->label185->BackColor = System::Drawing::SystemColors::Window;
			this->label185->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label185->Location = System::Drawing::Point(550, 260);
			this->label185->Margin = System::Windows::Forms::Padding(0);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(60, 36);
			this->label185->TabIndex = 190;
			// 
			// label186
			// 
			this->label186->AutoSize = true;
			this->label186->BackColor = System::Drawing::SystemColors::Window;
			this->label186->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label186->Location = System::Drawing::Point(611, 260);
			this->label186->Margin = System::Windows::Forms::Padding(0);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(60, 36);
			this->label186->TabIndex = 189;
			// 
			// label187
			// 
			this->label187->AutoSize = true;
			this->label187->BackColor = System::Drawing::SystemColors::Window;
			this->label187->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label187->Location = System::Drawing::Point(672, 260);
			this->label187->Margin = System::Windows::Forms::Padding(0);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(60, 36);
			this->label187->TabIndex = 188;
			// 
			// label188
			// 
			this->label188->AutoSize = true;
			this->label188->BackColor = System::Drawing::SystemColors::Window;
			this->label188->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label188->Location = System::Drawing::Point(733, 260);
			this->label188->Margin = System::Windows::Forms::Padding(0);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(60, 36);
			this->label188->TabIndex = 187;
			// 
			// label189
			// 
			this->label189->AutoSize = true;
			this->label189->BackColor = System::Drawing::SystemColors::Window;
			this->label189->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label189->Location = System::Drawing::Point(794, 260);
			this->label189->Margin = System::Windows::Forms::Padding(0);
			this->label189->Name = L"label189";
			this->label189->Size = System::Drawing::Size(60, 36);
			this->label189->TabIndex = 186;
			// 
			// label190
			// 
			this->label190->AutoSize = true;
			this->label190->BackColor = System::Drawing::SystemColors::Window;
			this->label190->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label190->Location = System::Drawing::Point(855, 260);
			this->label190->Margin = System::Windows::Forms::Padding(0);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(60, 36);
			this->label190->TabIndex = 185;
			// 
			// label191
			// 
			this->label191->AutoSize = true;
			this->label191->BackColor = System::Drawing::SystemColors::Window;
			this->label191->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label191->Location = System::Drawing::Point(916, 260);
			this->label191->Margin = System::Windows::Forms::Padding(0);
			this->label191->Name = L"label191";
			this->label191->Size = System::Drawing::Size(60, 36);
			this->label191->TabIndex = 184;
			// 
			// label192
			// 
			this->label192->AutoSize = true;
			this->label192->BackColor = System::Drawing::SystemColors::Window;
			this->label192->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label192->Location = System::Drawing::Point(977, 260);
			this->label192->Margin = System::Windows::Forms::Padding(0);
			this->label192->Name = L"label192";
			this->label192->Size = System::Drawing::Size(60, 36);
			this->label192->TabIndex = 183;
			// 
			// label193
			// 
			this->label193->AutoSize = true;
			this->label193->BackColor = System::Drawing::SystemColors::Window;
			this->label193->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label193->Location = System::Drawing::Point(1038, 260);
			this->label193->Margin = System::Windows::Forms::Padding(0);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(60, 36);
			this->label193->TabIndex = 182;
			// 
			// label194
			// 
			this->label194->AutoSize = true;
			this->label194->BackColor = System::Drawing::SystemColors::Window;
			this->label194->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label194->Location = System::Drawing::Point(1099, 260);
			this->label194->Margin = System::Windows::Forms::Padding(0);
			this->label194->Name = L"label194";
			this->label194->Size = System::Drawing::Size(60, 36);
			this->label194->TabIndex = 181;
			// 
			// label195
			// 
			this->label195->AutoSize = true;
			this->label195->BackColor = System::Drawing::SystemColors::Window;
			this->label195->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label195->Location = System::Drawing::Point(1160, 260);
			this->label195->Margin = System::Windows::Forms::Padding(0);
			this->label195->Name = L"label195";
			this->label195->Size = System::Drawing::Size(60, 36);
			this->label195->TabIndex = 180;
			// 
			// label196
			// 
			this->label196->AutoSize = true;
			this->label196->BackColor = System::Drawing::SystemColors::Window;
			this->label196->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label196->Location = System::Drawing::Point(1221, 260);
			this->label196->Margin = System::Windows::Forms::Padding(0);
			this->label196->Name = L"label196";
			this->label196->Size = System::Drawing::Size(60, 36);
			this->label196->TabIndex = 179;
			// 
			// label197
			// 
			this->label197->AutoSize = true;
			this->label197->BackColor = System::Drawing::SystemColors::Window;
			this->label197->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label197->Location = System::Drawing::Point(1282, 260);
			this->label197->Margin = System::Windows::Forms::Padding(0);
			this->label197->Name = L"label197";
			this->label197->Size = System::Drawing::Size(60, 36);
			this->label197->TabIndex = 178;
			// 
			// label198
			// 
			this->label198->AutoSize = true;
			this->label198->BackColor = System::Drawing::SystemColors::Window;
			this->label198->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label198->Location = System::Drawing::Point(1343, 260);
			this->label198->Margin = System::Windows::Forms::Padding(0);
			this->label198->Name = L"label198";
			this->label198->Size = System::Drawing::Size(60, 36);
			this->label198->TabIndex = 177;
			// 
			// label199
			// 
			this->label199->AutoSize = true;
			this->label199->BackColor = System::Drawing::SystemColors::Window;
			this->label199->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label199->Location = System::Drawing::Point(1404, 260);
			this->label199->Margin = System::Windows::Forms::Padding(0);
			this->label199->Name = L"label199";
			this->label199->Size = System::Drawing::Size(60, 36);
			this->label199->TabIndex = 176;
			// 
			// label200
			// 
			this->label200->AutoSize = true;
			this->label200->BackColor = System::Drawing::SystemColors::Window;
			this->label200->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label200->Location = System::Drawing::Point(1465, 260);
			this->label200->Margin = System::Windows::Forms::Padding(0);
			this->label200->Name = L"label200";
			this->label200->Size = System::Drawing::Size(96, 36);
			this->label200->TabIndex = 175;
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->BackColor = System::Drawing::SystemColors::Window;
			this->label151->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label151->Location = System::Drawing::Point(1, 223);
			this->label151->Margin = System::Windows::Forms::Padding(0);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(60, 36);
			this->label151->TabIndex = 174;
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->BackColor = System::Drawing::SystemColors::Window;
			this->label152->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label152->Location = System::Drawing::Point(62, 223);
			this->label152->Margin = System::Windows::Forms::Padding(0);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(60, 36);
			this->label152->TabIndex = 173;
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->BackColor = System::Drawing::SystemColors::Window;
			this->label153->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label153->Location = System::Drawing::Point(123, 223);
			this->label153->Margin = System::Windows::Forms::Padding(0);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(60, 36);
			this->label153->TabIndex = 172;
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->BackColor = System::Drawing::SystemColors::Window;
			this->label154->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label154->Location = System::Drawing::Point(184, 223);
			this->label154->Margin = System::Windows::Forms::Padding(0);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(60, 36);
			this->label154->TabIndex = 171;
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->BackColor = System::Drawing::SystemColors::Window;
			this->label155->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label155->Location = System::Drawing::Point(245, 223);
			this->label155->Margin = System::Windows::Forms::Padding(0);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(60, 36);
			this->label155->TabIndex = 170;
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->BackColor = System::Drawing::SystemColors::Window;
			this->label156->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label156->Location = System::Drawing::Point(306, 223);
			this->label156->Margin = System::Windows::Forms::Padding(0);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(60, 36);
			this->label156->TabIndex = 169;
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->BackColor = System::Drawing::SystemColors::Window;
			this->label157->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label157->Location = System::Drawing::Point(367, 223);
			this->label157->Margin = System::Windows::Forms::Padding(0);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(60, 36);
			this->label157->TabIndex = 168;
			// 
			// label158
			// 
			this->label158->AutoSize = true;
			this->label158->BackColor = System::Drawing::SystemColors::Window;
			this->label158->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label158->Location = System::Drawing::Point(428, 223);
			this->label158->Margin = System::Windows::Forms::Padding(0);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(60, 36);
			this->label158->TabIndex = 167;
			// 
			// label159
			// 
			this->label159->AutoSize = true;
			this->label159->BackColor = System::Drawing::SystemColors::Window;
			this->label159->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label159->Location = System::Drawing::Point(489, 223);
			this->label159->Margin = System::Windows::Forms::Padding(0);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(60, 36);
			this->label159->TabIndex = 166;
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->BackColor = System::Drawing::SystemColors::Window;
			this->label160->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label160->Location = System::Drawing::Point(550, 223);
			this->label160->Margin = System::Windows::Forms::Padding(0);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(60, 36);
			this->label160->TabIndex = 165;
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->BackColor = System::Drawing::SystemColors::Window;
			this->label161->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label161->Location = System::Drawing::Point(611, 223);
			this->label161->Margin = System::Windows::Forms::Padding(0);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(60, 36);
			this->label161->TabIndex = 164;
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->BackColor = System::Drawing::SystemColors::Window;
			this->label162->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label162->Location = System::Drawing::Point(672, 223);
			this->label162->Margin = System::Windows::Forms::Padding(0);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(60, 36);
			this->label162->TabIndex = 163;
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->BackColor = System::Drawing::SystemColors::Window;
			this->label163->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label163->Location = System::Drawing::Point(733, 223);
			this->label163->Margin = System::Windows::Forms::Padding(0);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(60, 36);
			this->label163->TabIndex = 162;
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->BackColor = System::Drawing::SystemColors::Window;
			this->label164->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label164->Location = System::Drawing::Point(794, 223);
			this->label164->Margin = System::Windows::Forms::Padding(0);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(60, 36);
			this->label164->TabIndex = 161;
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->BackColor = System::Drawing::SystemColors::Window;
			this->label165->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label165->Location = System::Drawing::Point(855, 223);
			this->label165->Margin = System::Windows::Forms::Padding(0);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(60, 36);
			this->label165->TabIndex = 160;
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->BackColor = System::Drawing::SystemColors::Window;
			this->label166->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label166->Location = System::Drawing::Point(916, 223);
			this->label166->Margin = System::Windows::Forms::Padding(0);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(60, 36);
			this->label166->TabIndex = 159;
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->BackColor = System::Drawing::SystemColors::Window;
			this->label167->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label167->Location = System::Drawing::Point(977, 223);
			this->label167->Margin = System::Windows::Forms::Padding(0);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(60, 36);
			this->label167->TabIndex = 158;
			// 
			// label168
			// 
			this->label168->AutoSize = true;
			this->label168->BackColor = System::Drawing::SystemColors::Window;
			this->label168->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label168->Location = System::Drawing::Point(1038, 223);
			this->label168->Margin = System::Windows::Forms::Padding(0);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(60, 36);
			this->label168->TabIndex = 157;
			// 
			// label169
			// 
			this->label169->AutoSize = true;
			this->label169->BackColor = System::Drawing::SystemColors::Window;
			this->label169->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label169->Location = System::Drawing::Point(1099, 223);
			this->label169->Margin = System::Windows::Forms::Padding(0);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(60, 36);
			this->label169->TabIndex = 156;
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->BackColor = System::Drawing::SystemColors::Window;
			this->label170->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label170->Location = System::Drawing::Point(1160, 223);
			this->label170->Margin = System::Windows::Forms::Padding(0);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(60, 36);
			this->label170->TabIndex = 155;
			// 
			// label171
			// 
			this->label171->AutoSize = true;
			this->label171->BackColor = System::Drawing::SystemColors::Window;
			this->label171->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label171->Location = System::Drawing::Point(1221, 223);
			this->label171->Margin = System::Windows::Forms::Padding(0);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(60, 36);
			this->label171->TabIndex = 154;
			// 
			// label172
			// 
			this->label172->AutoSize = true;
			this->label172->BackColor = System::Drawing::SystemColors::Window;
			this->label172->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label172->Location = System::Drawing::Point(1282, 223);
			this->label172->Margin = System::Windows::Forms::Padding(0);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(60, 36);
			this->label172->TabIndex = 153;
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->BackColor = System::Drawing::SystemColors::Window;
			this->label173->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label173->Location = System::Drawing::Point(1343, 223);
			this->label173->Margin = System::Windows::Forms::Padding(0);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(60, 36);
			this->label173->TabIndex = 152;
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->BackColor = System::Drawing::SystemColors::Window;
			this->label174->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label174->Location = System::Drawing::Point(1404, 223);
			this->label174->Margin = System::Windows::Forms::Padding(0);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(60, 36);
			this->label174->TabIndex = 151;
			// 
			// label175
			// 
			this->label175->AutoSize = true;
			this->label175->BackColor = System::Drawing::SystemColors::Window;
			this->label175->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label175->Location = System::Drawing::Point(1465, 223);
			this->label175->Margin = System::Windows::Forms::Padding(0);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(96, 36);
			this->label175->TabIndex = 150;
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->BackColor = System::Drawing::SystemColors::Window;
			this->label126->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label126->Location = System::Drawing::Point(1, 186);
			this->label126->Margin = System::Windows::Forms::Padding(0);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(60, 36);
			this->label126->TabIndex = 149;
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->BackColor = System::Drawing::SystemColors::Window;
			this->label127->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label127->Location = System::Drawing::Point(62, 186);
			this->label127->Margin = System::Windows::Forms::Padding(0);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(60, 36);
			this->label127->TabIndex = 148;
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->BackColor = System::Drawing::SystemColors::Window;
			this->label128->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label128->Location = System::Drawing::Point(123, 186);
			this->label128->Margin = System::Windows::Forms::Padding(0);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(60, 36);
			this->label128->TabIndex = 147;
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->BackColor = System::Drawing::SystemColors::Window;
			this->label129->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label129->Location = System::Drawing::Point(184, 186);
			this->label129->Margin = System::Windows::Forms::Padding(0);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(60, 36);
			this->label129->TabIndex = 146;
			// 
			// label130
			// 
			this->label130->AutoSize = true;
			this->label130->BackColor = System::Drawing::SystemColors::Window;
			this->label130->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label130->Location = System::Drawing::Point(245, 186);
			this->label130->Margin = System::Windows::Forms::Padding(0);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(60, 36);
			this->label130->TabIndex = 145;
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->BackColor = System::Drawing::SystemColors::Window;
			this->label131->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label131->Location = System::Drawing::Point(306, 186);
			this->label131->Margin = System::Windows::Forms::Padding(0);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(60, 36);
			this->label131->TabIndex = 144;
			// 
			// label132
			// 
			this->label132->AutoSize = true;
			this->label132->BackColor = System::Drawing::SystemColors::Window;
			this->label132->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label132->Location = System::Drawing::Point(367, 186);
			this->label132->Margin = System::Windows::Forms::Padding(0);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(60, 36);
			this->label132->TabIndex = 143;
			// 
			// label133
			// 
			this->label133->AutoSize = true;
			this->label133->BackColor = System::Drawing::SystemColors::Window;
			this->label133->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label133->Location = System::Drawing::Point(428, 186);
			this->label133->Margin = System::Windows::Forms::Padding(0);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(60, 36);
			this->label133->TabIndex = 142;
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->BackColor = System::Drawing::SystemColors::Window;
			this->label134->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label134->Location = System::Drawing::Point(489, 186);
			this->label134->Margin = System::Windows::Forms::Padding(0);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(60, 36);
			this->label134->TabIndex = 141;
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->BackColor = System::Drawing::SystemColors::Window;
			this->label135->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label135->Location = System::Drawing::Point(550, 186);
			this->label135->Margin = System::Windows::Forms::Padding(0);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(60, 36);
			this->label135->TabIndex = 140;
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->BackColor = System::Drawing::SystemColors::Window;
			this->label136->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label136->Location = System::Drawing::Point(611, 186);
			this->label136->Margin = System::Windows::Forms::Padding(0);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(60, 36);
			this->label136->TabIndex = 139;
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->BackColor = System::Drawing::SystemColors::Window;
			this->label137->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label137->Location = System::Drawing::Point(672, 186);
			this->label137->Margin = System::Windows::Forms::Padding(0);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(60, 36);
			this->label137->TabIndex = 138;
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->BackColor = System::Drawing::SystemColors::Window;
			this->label138->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label138->Location = System::Drawing::Point(733, 186);
			this->label138->Margin = System::Windows::Forms::Padding(0);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(60, 36);
			this->label138->TabIndex = 137;
			// 
			// label139
			// 
			this->label139->AutoSize = true;
			this->label139->BackColor = System::Drawing::SystemColors::Window;
			this->label139->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label139->Location = System::Drawing::Point(794, 186);
			this->label139->Margin = System::Windows::Forms::Padding(0);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(60, 36);
			this->label139->TabIndex = 136;
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->BackColor = System::Drawing::SystemColors::Window;
			this->label140->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label140->Location = System::Drawing::Point(855, 186);
			this->label140->Margin = System::Windows::Forms::Padding(0);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(60, 36);
			this->label140->TabIndex = 135;
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->BackColor = System::Drawing::SystemColors::Window;
			this->label141->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label141->Location = System::Drawing::Point(916, 186);
			this->label141->Margin = System::Windows::Forms::Padding(0);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(60, 36);
			this->label141->TabIndex = 134;
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->BackColor = System::Drawing::SystemColors::Window;
			this->label142->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label142->Location = System::Drawing::Point(977, 186);
			this->label142->Margin = System::Windows::Forms::Padding(0);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(60, 36);
			this->label142->TabIndex = 133;
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->BackColor = System::Drawing::SystemColors::Window;
			this->label143->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label143->Location = System::Drawing::Point(1038, 186);
			this->label143->Margin = System::Windows::Forms::Padding(0);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(60, 36);
			this->label143->TabIndex = 132;
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->BackColor = System::Drawing::SystemColors::Window;
			this->label144->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label144->Location = System::Drawing::Point(1099, 186);
			this->label144->Margin = System::Windows::Forms::Padding(0);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(60, 36);
			this->label144->TabIndex = 131;
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->BackColor = System::Drawing::SystemColors::Window;
			this->label145->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label145->Location = System::Drawing::Point(1160, 186);
			this->label145->Margin = System::Windows::Forms::Padding(0);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(60, 36);
			this->label145->TabIndex = 130;
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->BackColor = System::Drawing::SystemColors::Window;
			this->label146->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label146->Location = System::Drawing::Point(1221, 186);
			this->label146->Margin = System::Windows::Forms::Padding(0);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(60, 36);
			this->label146->TabIndex = 129;
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->BackColor = System::Drawing::SystemColors::Window;
			this->label147->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label147->Location = System::Drawing::Point(1282, 186);
			this->label147->Margin = System::Windows::Forms::Padding(0);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(60, 36);
			this->label147->TabIndex = 128;
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->BackColor = System::Drawing::SystemColors::Window;
			this->label148->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label148->Location = System::Drawing::Point(1343, 186);
			this->label148->Margin = System::Windows::Forms::Padding(0);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(60, 36);
			this->label148->TabIndex = 127;
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->BackColor = System::Drawing::SystemColors::Window;
			this->label149->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label149->Location = System::Drawing::Point(1404, 186);
			this->label149->Margin = System::Windows::Forms::Padding(0);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(60, 36);
			this->label149->TabIndex = 126;
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->BackColor = System::Drawing::SystemColors::Window;
			this->label150->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label150->Location = System::Drawing::Point(1465, 186);
			this->label150->Margin = System::Windows::Forms::Padding(0);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(96, 36);
			this->label150->TabIndex = 125;
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->BackColor = System::Drawing::SystemColors::Window;
			this->label101->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label101->Location = System::Drawing::Point(1, 149);
			this->label101->Margin = System::Windows::Forms::Padding(0);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(60, 36);
			this->label101->TabIndex = 124;
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->BackColor = System::Drawing::SystemColors::Window;
			this->label102->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label102->Location = System::Drawing::Point(62, 149);
			this->label102->Margin = System::Windows::Forms::Padding(0);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(60, 36);
			this->label102->TabIndex = 123;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->BackColor = System::Drawing::SystemColors::Window;
			this->label103->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label103->Location = System::Drawing::Point(123, 149);
			this->label103->Margin = System::Windows::Forms::Padding(0);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(60, 36);
			this->label103->TabIndex = 122;
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->BackColor = System::Drawing::SystemColors::Window;
			this->label104->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label104->Location = System::Drawing::Point(184, 149);
			this->label104->Margin = System::Windows::Forms::Padding(0);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(60, 36);
			this->label104->TabIndex = 121;
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->BackColor = System::Drawing::SystemColors::Window;
			this->label105->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label105->Location = System::Drawing::Point(245, 149);
			this->label105->Margin = System::Windows::Forms::Padding(0);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(60, 36);
			this->label105->TabIndex = 120;
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->BackColor = System::Drawing::SystemColors::Window;
			this->label106->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label106->Location = System::Drawing::Point(306, 149);
			this->label106->Margin = System::Windows::Forms::Padding(0);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(60, 36);
			this->label106->TabIndex = 119;
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->BackColor = System::Drawing::SystemColors::Window;
			this->label107->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label107->Location = System::Drawing::Point(367, 149);
			this->label107->Margin = System::Windows::Forms::Padding(0);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(60, 36);
			this->label107->TabIndex = 118;
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->BackColor = System::Drawing::SystemColors::Window;
			this->label108->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label108->Location = System::Drawing::Point(428, 149);
			this->label108->Margin = System::Windows::Forms::Padding(0);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(60, 36);
			this->label108->TabIndex = 117;
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->BackColor = System::Drawing::SystemColors::Window;
			this->label109->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label109->Location = System::Drawing::Point(489, 149);
			this->label109->Margin = System::Windows::Forms::Padding(0);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(60, 36);
			this->label109->TabIndex = 116;
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->BackColor = System::Drawing::SystemColors::Window;
			this->label110->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label110->Location = System::Drawing::Point(550, 149);
			this->label110->Margin = System::Windows::Forms::Padding(0);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(60, 36);
			this->label110->TabIndex = 115;
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->BackColor = System::Drawing::SystemColors::Window;
			this->label111->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label111->Location = System::Drawing::Point(611, 149);
			this->label111->Margin = System::Windows::Forms::Padding(0);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(60, 36);
			this->label111->TabIndex = 114;
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->BackColor = System::Drawing::SystemColors::Window;
			this->label112->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label112->Location = System::Drawing::Point(672, 149);
			this->label112->Margin = System::Windows::Forms::Padding(0);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(60, 36);
			this->label112->TabIndex = 113;
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->BackColor = System::Drawing::SystemColors::Window;
			this->label113->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label113->Location = System::Drawing::Point(733, 149);
			this->label113->Margin = System::Windows::Forms::Padding(0);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(60, 36);
			this->label113->TabIndex = 112;
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->BackColor = System::Drawing::SystemColors::Window;
			this->label114->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label114->Location = System::Drawing::Point(794, 149);
			this->label114->Margin = System::Windows::Forms::Padding(0);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(60, 36);
			this->label114->TabIndex = 111;
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->BackColor = System::Drawing::SystemColors::Window;
			this->label115->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label115->Location = System::Drawing::Point(855, 149);
			this->label115->Margin = System::Windows::Forms::Padding(0);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(60, 36);
			this->label115->TabIndex = 110;
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->BackColor = System::Drawing::SystemColors::Window;
			this->label116->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label116->Location = System::Drawing::Point(916, 149);
			this->label116->Margin = System::Windows::Forms::Padding(0);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(60, 36);
			this->label116->TabIndex = 109;
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->BackColor = System::Drawing::SystemColors::Window;
			this->label117->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label117->Location = System::Drawing::Point(977, 149);
			this->label117->Margin = System::Windows::Forms::Padding(0);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(60, 36);
			this->label117->TabIndex = 108;
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->BackColor = System::Drawing::SystemColors::Window;
			this->label118->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label118->Location = System::Drawing::Point(1038, 149);
			this->label118->Margin = System::Windows::Forms::Padding(0);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(60, 36);
			this->label118->TabIndex = 107;
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->BackColor = System::Drawing::SystemColors::Window;
			this->label119->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label119->Location = System::Drawing::Point(1099, 149);
			this->label119->Margin = System::Windows::Forms::Padding(0);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(60, 36);
			this->label119->TabIndex = 106;
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->BackColor = System::Drawing::SystemColors::Window;
			this->label120->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label120->Location = System::Drawing::Point(1160, 149);
			this->label120->Margin = System::Windows::Forms::Padding(0);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(60, 36);
			this->label120->TabIndex = 105;
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->BackColor = System::Drawing::SystemColors::Window;
			this->label121->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label121->Location = System::Drawing::Point(1221, 149);
			this->label121->Margin = System::Windows::Forms::Padding(0);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(60, 36);
			this->label121->TabIndex = 104;
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->BackColor = System::Drawing::SystemColors::Window;
			this->label122->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label122->Location = System::Drawing::Point(1282, 149);
			this->label122->Margin = System::Windows::Forms::Padding(0);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(60, 36);
			this->label122->TabIndex = 103;
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->BackColor = System::Drawing::SystemColors::Window;
			this->label123->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label123->Location = System::Drawing::Point(1343, 149);
			this->label123->Margin = System::Windows::Forms::Padding(0);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(60, 36);
			this->label123->TabIndex = 102;
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->BackColor = System::Drawing::SystemColors::Window;
			this->label124->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label124->Location = System::Drawing::Point(1404, 149);
			this->label124->Margin = System::Windows::Forms::Padding(0);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(60, 36);
			this->label124->TabIndex = 101;
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->BackColor = System::Drawing::SystemColors::Window;
			this->label125->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label125->Location = System::Drawing::Point(1465, 149);
			this->label125->Margin = System::Windows::Forms::Padding(0);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(96, 36);
			this->label125->TabIndex = 100;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->BackColor = System::Drawing::SystemColors::Window;
			this->label76->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label76->Location = System::Drawing::Point(1, 112);
			this->label76->Margin = System::Windows::Forms::Padding(0);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(60, 36);
			this->label76->TabIndex = 99;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->BackColor = System::Drawing::SystemColors::Window;
			this->label77->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label77->Location = System::Drawing::Point(62, 112);
			this->label77->Margin = System::Windows::Forms::Padding(0);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(60, 36);
			this->label77->TabIndex = 98;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->BackColor = System::Drawing::SystemColors::Window;
			this->label78->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label78->Location = System::Drawing::Point(123, 112);
			this->label78->Margin = System::Windows::Forms::Padding(0);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(60, 36);
			this->label78->TabIndex = 97;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->BackColor = System::Drawing::SystemColors::Window;
			this->label79->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label79->Location = System::Drawing::Point(184, 112);
			this->label79->Margin = System::Windows::Forms::Padding(0);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(60, 36);
			this->label79->TabIndex = 96;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->BackColor = System::Drawing::SystemColors::Window;
			this->label80->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label80->Location = System::Drawing::Point(245, 112);
			this->label80->Margin = System::Windows::Forms::Padding(0);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(60, 36);
			this->label80->TabIndex = 95;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->BackColor = System::Drawing::SystemColors::Window;
			this->label81->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label81->Location = System::Drawing::Point(306, 112);
			this->label81->Margin = System::Windows::Forms::Padding(0);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(60, 36);
			this->label81->TabIndex = 94;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->BackColor = System::Drawing::SystemColors::Window;
			this->label82->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label82->Location = System::Drawing::Point(367, 112);
			this->label82->Margin = System::Windows::Forms::Padding(0);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(60, 36);
			this->label82->TabIndex = 93;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->BackColor = System::Drawing::SystemColors::Window;
			this->label83->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label83->Location = System::Drawing::Point(428, 112);
			this->label83->Margin = System::Windows::Forms::Padding(0);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(60, 36);
			this->label83->TabIndex = 92;
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->BackColor = System::Drawing::SystemColors::Window;
			this->label84->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label84->Location = System::Drawing::Point(489, 112);
			this->label84->Margin = System::Windows::Forms::Padding(0);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(60, 36);
			this->label84->TabIndex = 91;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->BackColor = System::Drawing::SystemColors::Window;
			this->label85->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label85->Location = System::Drawing::Point(550, 112);
			this->label85->Margin = System::Windows::Forms::Padding(0);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(60, 36);
			this->label85->TabIndex = 90;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->BackColor = System::Drawing::SystemColors::Window;
			this->label86->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label86->Location = System::Drawing::Point(611, 112);
			this->label86->Margin = System::Windows::Forms::Padding(0);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(60, 36);
			this->label86->TabIndex = 89;
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->BackColor = System::Drawing::SystemColors::Window;
			this->label87->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label87->Location = System::Drawing::Point(672, 112);
			this->label87->Margin = System::Windows::Forms::Padding(0);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(60, 36);
			this->label87->TabIndex = 88;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->BackColor = System::Drawing::SystemColors::Window;
			this->label88->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label88->Location = System::Drawing::Point(733, 112);
			this->label88->Margin = System::Windows::Forms::Padding(0);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(60, 36);
			this->label88->TabIndex = 87;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->BackColor = System::Drawing::SystemColors::Window;
			this->label89->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label89->Location = System::Drawing::Point(794, 112);
			this->label89->Margin = System::Windows::Forms::Padding(0);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(60, 36);
			this->label89->TabIndex = 86;
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->BackColor = System::Drawing::SystemColors::Window;
			this->label90->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label90->Location = System::Drawing::Point(855, 112);
			this->label90->Margin = System::Windows::Forms::Padding(0);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(60, 36);
			this->label90->TabIndex = 85;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->BackColor = System::Drawing::SystemColors::Window;
			this->label91->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label91->Location = System::Drawing::Point(916, 112);
			this->label91->Margin = System::Windows::Forms::Padding(0);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(60, 36);
			this->label91->TabIndex = 84;
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->BackColor = System::Drawing::SystemColors::Window;
			this->label92->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label92->Location = System::Drawing::Point(977, 112);
			this->label92->Margin = System::Windows::Forms::Padding(0);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(60, 36);
			this->label92->TabIndex = 83;
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->BackColor = System::Drawing::SystemColors::Window;
			this->label93->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label93->Location = System::Drawing::Point(1038, 112);
			this->label93->Margin = System::Windows::Forms::Padding(0);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(60, 36);
			this->label93->TabIndex = 82;
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->BackColor = System::Drawing::SystemColors::Window;
			this->label94->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label94->Location = System::Drawing::Point(1099, 112);
			this->label94->Margin = System::Windows::Forms::Padding(0);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(60, 36);
			this->label94->TabIndex = 81;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->BackColor = System::Drawing::SystemColors::Window;
			this->label95->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label95->Location = System::Drawing::Point(1160, 112);
			this->label95->Margin = System::Windows::Forms::Padding(0);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(60, 36);
			this->label95->TabIndex = 80;
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->BackColor = System::Drawing::SystemColors::Window;
			this->label96->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label96->Location = System::Drawing::Point(1221, 112);
			this->label96->Margin = System::Windows::Forms::Padding(0);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(60, 36);
			this->label96->TabIndex = 79;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->BackColor = System::Drawing::SystemColors::Window;
			this->label97->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label97->Location = System::Drawing::Point(1282, 112);
			this->label97->Margin = System::Windows::Forms::Padding(0);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(60, 36);
			this->label97->TabIndex = 78;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->BackColor = System::Drawing::SystemColors::Window;
			this->label98->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label98->Location = System::Drawing::Point(1343, 112);
			this->label98->Margin = System::Windows::Forms::Padding(0);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(60, 36);
			this->label98->TabIndex = 77;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->BackColor = System::Drawing::SystemColors::Window;
			this->label99->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label99->Location = System::Drawing::Point(1404, 112);
			this->label99->Margin = System::Windows::Forms::Padding(0);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(60, 36);
			this->label99->TabIndex = 76;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->BackColor = System::Drawing::SystemColors::Window;
			this->label100->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label100->Location = System::Drawing::Point(1465, 112);
			this->label100->Margin = System::Windows::Forms::Padding(0);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(96, 36);
			this->label100->TabIndex = 75;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::SystemColors::Window;
			this->label51->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label51->Location = System::Drawing::Point(1, 75);
			this->label51->Margin = System::Windows::Forms::Padding(0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(60, 36);
			this->label51->TabIndex = 74;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::SystemColors::Window;
			this->label52->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label52->Location = System::Drawing::Point(62, 75);
			this->label52->Margin = System::Windows::Forms::Padding(0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(60, 36);
			this->label52->TabIndex = 73;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::SystemColors::Window;
			this->label53->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label53->Location = System::Drawing::Point(123, 75);
			this->label53->Margin = System::Windows::Forms::Padding(0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(60, 36);
			this->label53->TabIndex = 72;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::SystemColors::Window;
			this->label54->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label54->Location = System::Drawing::Point(184, 75);
			this->label54->Margin = System::Windows::Forms::Padding(0);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(60, 36);
			this->label54->TabIndex = 71;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::SystemColors::Window;
			this->label55->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label55->Location = System::Drawing::Point(245, 75);
			this->label55->Margin = System::Windows::Forms::Padding(0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(60, 36);
			this->label55->TabIndex = 70;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::SystemColors::Window;
			this->label56->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label56->Location = System::Drawing::Point(306, 75);
			this->label56->Margin = System::Windows::Forms::Padding(0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(60, 36);
			this->label56->TabIndex = 69;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::SystemColors::Window;
			this->label57->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label57->Location = System::Drawing::Point(367, 75);
			this->label57->Margin = System::Windows::Forms::Padding(0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(60, 36);
			this->label57->TabIndex = 68;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::SystemColors::Window;
			this->label58->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label58->Location = System::Drawing::Point(428, 75);
			this->label58->Margin = System::Windows::Forms::Padding(0);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(60, 36);
			this->label58->TabIndex = 67;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::SystemColors::Window;
			this->label59->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label59->Location = System::Drawing::Point(489, 75);
			this->label59->Margin = System::Windows::Forms::Padding(0);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(60, 36);
			this->label59->TabIndex = 66;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::SystemColors::Window;
			this->label60->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label60->Location = System::Drawing::Point(550, 75);
			this->label60->Margin = System::Windows::Forms::Padding(0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(60, 36);
			this->label60->TabIndex = 65;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::SystemColors::Window;
			this->label61->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label61->Location = System::Drawing::Point(611, 75);
			this->label61->Margin = System::Windows::Forms::Padding(0);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(60, 36);
			this->label61->TabIndex = 64;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::SystemColors::Window;
			this->label62->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label62->Location = System::Drawing::Point(672, 75);
			this->label62->Margin = System::Windows::Forms::Padding(0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(60, 36);
			this->label62->TabIndex = 63;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::SystemColors::Window;
			this->label63->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label63->Location = System::Drawing::Point(733, 75);
			this->label63->Margin = System::Windows::Forms::Padding(0);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(60, 36);
			this->label63->TabIndex = 62;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::SystemColors::Window;
			this->label64->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label64->Location = System::Drawing::Point(794, 75);
			this->label64->Margin = System::Windows::Forms::Padding(0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(60, 36);
			this->label64->TabIndex = 61;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::SystemColors::Window;
			this->label65->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label65->Location = System::Drawing::Point(855, 75);
			this->label65->Margin = System::Windows::Forms::Padding(0);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(60, 36);
			this->label65->TabIndex = 60;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::SystemColors::Window;
			this->label66->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label66->Location = System::Drawing::Point(916, 75);
			this->label66->Margin = System::Windows::Forms::Padding(0);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(60, 36);
			this->label66->TabIndex = 59;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::SystemColors::Window;
			this->label67->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label67->Location = System::Drawing::Point(977, 75);
			this->label67->Margin = System::Windows::Forms::Padding(0);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(60, 36);
			this->label67->TabIndex = 58;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::SystemColors::Window;
			this->label68->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label68->Location = System::Drawing::Point(1038, 75);
			this->label68->Margin = System::Windows::Forms::Padding(0);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(60, 36);
			this->label68->TabIndex = 57;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::SystemColors::Window;
			this->label69->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label69->Location = System::Drawing::Point(1099, 75);
			this->label69->Margin = System::Windows::Forms::Padding(0);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(60, 36);
			this->label69->TabIndex = 56;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->BackColor = System::Drawing::SystemColors::Window;
			this->label70->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label70->Location = System::Drawing::Point(1160, 75);
			this->label70->Margin = System::Windows::Forms::Padding(0);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(60, 36);
			this->label70->TabIndex = 55;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::SystemColors::Window;
			this->label71->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label71->Location = System::Drawing::Point(1221, 75);
			this->label71->Margin = System::Windows::Forms::Padding(0);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(60, 36);
			this->label71->TabIndex = 54;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::SystemColors::Window;
			this->label72->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label72->Location = System::Drawing::Point(1282, 75);
			this->label72->Margin = System::Windows::Forms::Padding(0);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(60, 36);
			this->label72->TabIndex = 53;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::SystemColors::Window;
			this->label73->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label73->Location = System::Drawing::Point(1343, 75);
			this->label73->Margin = System::Windows::Forms::Padding(0);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(60, 36);
			this->label73->TabIndex = 52;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->BackColor = System::Drawing::SystemColors::Window;
			this->label74->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label74->Location = System::Drawing::Point(1404, 75);
			this->label74->Margin = System::Windows::Forms::Padding(0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(60, 36);
			this->label74->TabIndex = 51;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::SystemColors::Window;
			this->label75->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label75->Location = System::Drawing::Point(1465, 75);
			this->label75->Margin = System::Windows::Forms::Padding(0);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(96, 36);
			this->label75->TabIndex = 50;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::Window;
			this->label26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label26->Location = System::Drawing::Point(1, 38);
			this->label26->Margin = System::Windows::Forms::Padding(0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(60, 36);
			this->label26->TabIndex = 49;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::Window;
			this->label27->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label27->Location = System::Drawing::Point(62, 38);
			this->label27->Margin = System::Windows::Forms::Padding(0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(60, 36);
			this->label27->TabIndex = 48;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::Window;
			this->label28->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label28->Location = System::Drawing::Point(123, 38);
			this->label28->Margin = System::Windows::Forms::Padding(0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(60, 36);
			this->label28->TabIndex = 47;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::Window;
			this->label29->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label29->Location = System::Drawing::Point(184, 38);
			this->label29->Margin = System::Windows::Forms::Padding(0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(60, 36);
			this->label29->TabIndex = 46;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::Window;
			this->label30->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label30->Location = System::Drawing::Point(245, 38);
			this->label30->Margin = System::Windows::Forms::Padding(0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(60, 36);
			this->label30->TabIndex = 45;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::SystemColors::Window;
			this->label31->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label31->Location = System::Drawing::Point(306, 38);
			this->label31->Margin = System::Windows::Forms::Padding(0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(60, 36);
			this->label31->TabIndex = 44;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::Window;
			this->label32->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label32->Location = System::Drawing::Point(367, 38);
			this->label32->Margin = System::Windows::Forms::Padding(0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(60, 36);
			this->label32->TabIndex = 43;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::SystemColors::Window;
			this->label33->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label33->Location = System::Drawing::Point(428, 38);
			this->label33->Margin = System::Windows::Forms::Padding(0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(60, 36);
			this->label33->TabIndex = 42;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::SystemColors::Window;
			this->label34->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label34->Location = System::Drawing::Point(489, 38);
			this->label34->Margin = System::Windows::Forms::Padding(0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(60, 36);
			this->label34->TabIndex = 41;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::SystemColors::Window;
			this->label35->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label35->Location = System::Drawing::Point(550, 38);
			this->label35->Margin = System::Windows::Forms::Padding(0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(60, 36);
			this->label35->TabIndex = 40;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::SystemColors::Window;
			this->label36->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label36->Location = System::Drawing::Point(611, 38);
			this->label36->Margin = System::Windows::Forms::Padding(0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(60, 36);
			this->label36->TabIndex = 39;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::SystemColors::Window;
			this->label37->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label37->Location = System::Drawing::Point(672, 38);
			this->label37->Margin = System::Windows::Forms::Padding(0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(60, 36);
			this->label37->TabIndex = 38;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::SystemColors::Window;
			this->label38->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label38->Location = System::Drawing::Point(733, 38);
			this->label38->Margin = System::Windows::Forms::Padding(0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(60, 36);
			this->label38->TabIndex = 37;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::SystemColors::Window;
			this->label39->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label39->Location = System::Drawing::Point(794, 38);
			this->label39->Margin = System::Windows::Forms::Padding(0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(60, 36);
			this->label39->TabIndex = 36;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::SystemColors::Window;
			this->label40->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label40->Location = System::Drawing::Point(855, 38);
			this->label40->Margin = System::Windows::Forms::Padding(0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(60, 36);
			this->label40->TabIndex = 35;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::SystemColors::Window;
			this->label41->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label41->Location = System::Drawing::Point(916, 38);
			this->label41->Margin = System::Windows::Forms::Padding(0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(60, 36);
			this->label41->TabIndex = 34;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::SystemColors::Window;
			this->label42->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label42->Location = System::Drawing::Point(977, 38);
			this->label42->Margin = System::Windows::Forms::Padding(0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(60, 36);
			this->label42->TabIndex = 33;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::SystemColors::Window;
			this->label43->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label43->Location = System::Drawing::Point(1038, 38);
			this->label43->Margin = System::Windows::Forms::Padding(0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(60, 36);
			this->label43->TabIndex = 32;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::SystemColors::Window;
			this->label44->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label44->Location = System::Drawing::Point(1099, 38);
			this->label44->Margin = System::Windows::Forms::Padding(0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(60, 36);
			this->label44->TabIndex = 31;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::SystemColors::Window;
			this->label45->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label45->Location = System::Drawing::Point(1160, 38);
			this->label45->Margin = System::Windows::Forms::Padding(0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(60, 36);
			this->label45->TabIndex = 30;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::SystemColors::Window;
			this->label46->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label46->Location = System::Drawing::Point(1221, 38);
			this->label46->Margin = System::Windows::Forms::Padding(0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(60, 36);
			this->label46->TabIndex = 29;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::SystemColors::Window;
			this->label47->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label47->Location = System::Drawing::Point(1282, 38);
			this->label47->Margin = System::Windows::Forms::Padding(0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(60, 36);
			this->label47->TabIndex = 28;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::SystemColors::Window;
			this->label48->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label48->Location = System::Drawing::Point(1343, 38);
			this->label48->Margin = System::Windows::Forms::Padding(0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(60, 36);
			this->label48->TabIndex = 27;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::SystemColors::Window;
			this->label49->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label49->Location = System::Drawing::Point(1404, 38);
			this->label49->Margin = System::Windows::Forms::Padding(0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(60, 36);
			this->label49->TabIndex = 26;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::SystemColors::Window;
			this->label50->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label50->Location = System::Drawing::Point(1465, 38);
			this->label50->Margin = System::Windows::Forms::Padding(0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(96, 36);
			this->label50->TabIndex = 25;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::Window;
			this->label25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label25->Location = System::Drawing::Point(1465, 1);
			this->label25->Margin = System::Windows::Forms::Padding(0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(96, 36);
			this->label25->TabIndex = 24;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::Window;
			this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label24->Location = System::Drawing::Point(1404, 1);
			this->label24->Margin = System::Windows::Forms::Padding(0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(60, 36);
			this->label24->TabIndex = 23;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::Window;
			this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label23->Location = System::Drawing::Point(1343, 1);
			this->label23->Margin = System::Windows::Forms::Padding(0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(60, 36);
			this->label23->TabIndex = 22;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::Window;
			this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label22->Location = System::Drawing::Point(1282, 1);
			this->label22->Margin = System::Windows::Forms::Padding(0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(60, 36);
			this->label22->TabIndex = 21;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::Window;
			this->label21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label21->Location = System::Drawing::Point(1221, 1);
			this->label21->Margin = System::Windows::Forms::Padding(0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(60, 36);
			this->label21->TabIndex = 20;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::Window;
			this->label20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label20->Location = System::Drawing::Point(1160, 1);
			this->label20->Margin = System::Windows::Forms::Padding(0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(60, 36);
			this->label20->TabIndex = 19;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::Window;
			this->label19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label19->Location = System::Drawing::Point(1099, 1);
			this->label19->Margin = System::Windows::Forms::Padding(0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(60, 36);
			this->label19->TabIndex = 18;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::Window;
			this->label18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label18->Location = System::Drawing::Point(1038, 1);
			this->label18->Margin = System::Windows::Forms::Padding(0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(60, 36);
			this->label18->TabIndex = 17;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::Window;
			this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label17->Location = System::Drawing::Point(977, 1);
			this->label17->Margin = System::Windows::Forms::Padding(0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(60, 36);
			this->label17->TabIndex = 16;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::Window;
			this->label16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label16->Location = System::Drawing::Point(916, 1);
			this->label16->Margin = System::Windows::Forms::Padding(0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 36);
			this->label16->TabIndex = 15;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::Window;
			this->label15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label15->Location = System::Drawing::Point(855, 1);
			this->label15->Margin = System::Windows::Forms::Padding(0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(60, 36);
			this->label15->TabIndex = 14;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Window;
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Location = System::Drawing::Point(794, 1);
			this->label14->Margin = System::Windows::Forms::Padding(0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 36);
			this->label14->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Window;
			this->label13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label13->Location = System::Drawing::Point(733, 1);
			this->label13->Margin = System::Windows::Forms::Padding(0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(60, 36);
			this->label13->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Window;
			this->label12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label12->Location = System::Drawing::Point(672, 1);
			this->label12->Margin = System::Windows::Forms::Padding(0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 36);
			this->label12->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Window;
			this->label11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label11->Location = System::Drawing::Point(611, 1);
			this->label11->Margin = System::Windows::Forms::Padding(0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 36);
			this->label11->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Window;
			this->label10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label10->Location = System::Drawing::Point(550, 1);
			this->label10->Margin = System::Windows::Forms::Padding(0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(60, 36);
			this->label10->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Window;
			this->label9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label9->Location = System::Drawing::Point(489, 1);
			this->label9->Margin = System::Windows::Forms::Padding(0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 36);
			this->label9->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Window;
			this->label8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label8->Location = System::Drawing::Point(428, 1);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 36);
			this->label8->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Window;
			this->label7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label7->Location = System::Drawing::Point(367, 1);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 36);
			this->label7->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Window;
			this->label6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label6->Location = System::Drawing::Point(306, 1);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 36);
			this->label6->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Window;
			this->label5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label5->Location = System::Drawing::Point(245, 1);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 36);
			this->label5->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(184, 1);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 36);
			this->label4->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(123, 1);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 36);
			this->label3->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(62, 1);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 36);
			this->label2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(1, 1);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 36);
			this->label1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(1600, 827);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(258, 109);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Nastêpny cykl";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Dylemat::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(1613, 788);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(62, 22);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Dylemat::numericUpDown1_ValueChanged);
			// 
			// label626
			// 
			this->label626->AutoSize = true;
			this->label626->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label626->Location = System::Drawing::Point(1691, 788);
			this->label626->Name = L"label626";
			this->label626->Size = System::Drawing::Size(89, 24);
			this->label626->TabIndex = 3;
			this->label626->Text = L"Iloœæ cykli";
			// 
			// numericUpDownZdrajca
			// 
			this->numericUpDownZdrajca->Location = System::Drawing::Point(1613, 730);
			this->numericUpDownZdrajca->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDownZdrajca->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDownZdrajca->Name = L"numericUpDownZdrajca";
			this->numericUpDownZdrajca->Size = System::Drawing::Size(62, 22);
			this->numericUpDownZdrajca->TabIndex = 4;
			this->numericUpDownZdrajca->ValueChanged += gcnew System::EventHandler(this, &Dylemat::numericUpDown1_ValueChanged);
			// 
			// label627
			// 
			this->label627->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label627->Location = System::Drawing::Point(1628, 405);
			this->label627->Name = L"label627";
			this->label627->Size = System::Drawing::Size(197, 88);
			this->label627->TabIndex = 5;
			this->label627->Text = L"Wartoœci u¿ywane do obliczenia wartoœci wyp³at (y+x*0.1)";
			// 
			// numericUpDownPrzegrany
			// 
			this->numericUpDownPrzegrany->Location = System::Drawing::Point(1613, 531);
			this->numericUpDownPrzegrany->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDownPrzegrany->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDownPrzegrany->Name = L"numericUpDownPrzegrany";
			this->numericUpDownPrzegrany->Size = System::Drawing::Size(62, 22);
			this->numericUpDownPrzegrany->TabIndex = 6;
			// 
			// numericUpDownKara
			// 
			this->numericUpDownKara->Location = System::Drawing::Point(1613, 600);
			this->numericUpDownKara->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDownKara->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDownKara->Name = L"numericUpDownKara";
			this->numericUpDownKara->Size = System::Drawing::Size(62, 22);
			this->numericUpDownKara->TabIndex = 7;
			// 
			// numericUpDownNagroda
			// 
			this->numericUpDownNagroda->Location = System::Drawing::Point(1613, 665);
			this->numericUpDownNagroda->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDownNagroda->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, System::Int32::MinValue });
			this->numericUpDownNagroda->Name = L"numericUpDownNagroda";
			this->numericUpDownNagroda->Size = System::Drawing::Size(62, 22);
			this->numericUpDownNagroda->TabIndex = 8;
			// 
			// lblZdrada
			// 
			this->lblZdrada->AutoSize = true;
			this->lblZdrada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblZdrada->Location = System::Drawing::Point(1691, 730);
			this->lblZdrada->Name = L"lblZdrada";
			this->lblZdrada->Size = System::Drawing::Size(73, 24);
			this->lblZdrada->TabIndex = 9;
			this->lblZdrada->Text = L"Zdrajca";
			// 
			// lblNagroda
			// 
			this->lblNagroda->AutoSize = true;
			this->lblNagroda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblNagroda->Location = System::Drawing::Point(1691, 663);
			this->lblNagroda->Name = L"lblNagroda";
			this->lblNagroda->Size = System::Drawing::Size(83, 24);
			this->lblNagroda->TabIndex = 10;
			this->lblNagroda->Text = L"Nagroda";
			// 
			// lblKara
			// 
			this->lblKara->AutoSize = true;
			this->lblKara->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblKara->Location = System::Drawing::Point(1691, 600);
			this->lblKara->Name = L"lblKara";
			this->lblKara->Size = System::Drawing::Size(48, 24);
			this->lblKara->TabIndex = 11;
			this->lblKara->Text = L"Kara";
			// 
			// lblPrzegrany
			// 
			this->lblPrzegrany->AutoSize = true;
			this->lblPrzegrany->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblPrzegrany->Location = System::Drawing::Point(1691, 531);
			this->lblPrzegrany->Name = L"lblPrzegrany";
			this->lblPrzegrany->Size = System::Drawing::Size(95, 24);
			this->lblPrzegrany->TabIndex = 12;
			this->lblPrzegrany->Text = L"Przegrany";
			// 
			// label628
			// 
			this->label628->AutoSize = true;
			this->label628->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label628->Location = System::Drawing::Point(1628, 235);
			this->label628->Name = L"label628";
			this->label628->Size = System::Drawing::Size(222, 120);
			this->label628->TabIndex = 13;
			this->label628->Text = L"Podstawowe Wyp³aty: (y)\r\nPrzegrany - 0\r\nKara - 1\r\nNagroda - 2\r\nZdrajca - 3";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(1600, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(258, 109);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Nowy start";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dylemat::Dylemat_Load);
			// 
			// Dylemat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 953);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label628);
			this->Controls->Add(this->lblPrzegrany);
			this->Controls->Add(this->lblKara);
			this->Controls->Add(this->lblNagroda);
			this->Controls->Add(this->lblZdrada);
			this->Controls->Add(this->numericUpDownNagroda);
			this->Controls->Add(this->numericUpDownKara);
			this->Controls->Add(this->numericUpDownPrzegrany);
			this->Controls->Add(this->label627);
			this->Controls->Add(this->numericUpDownZdrajca);
			this->Controls->Add(this->label626);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Automat);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Dylemat";
			this->ShowIcon = false;
			this->Text = L"Dylemat wiêŸnia";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Dylemat::Dylemat_Load);
			this->Automat->ResumeLayout(false);
			this->Automat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownZdrajca))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownPrzegrany))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownKara))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownNagroda))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		System::Void losowy_start(System::Object^ sender, System::EventArgs^ e) {
			srand(time(NULL));
			char strategie[25][25][5] = { '\0' };
			int a = 0, d = 0;
			ofstream zapis("strategie_start.txt");


			//wybranie losowych stanów i strategii

			for (int i = 0; i < 25; i++)
				for (int j = 0; j < 25; j++) {
					a = rand() % 2;
					switch (a)
					{
					case 0:
						this->Automat->GetControlFromPosition(i, j)->BackColor = System::Drawing::Color::Blue;
						break;
					case 1:
						this->Automat->GetControlFromPosition(i, j)->BackColor = System::Drawing::Color::Red;
						break;
					}
				}
			for (int i = 0; i < 25; i++)
				for (int j = 0; j < 25; j++) {
					d = rand() % 6;
					switch (d)
					{
					case 0:
						strcpy(strategie[i][j], "Ad");
						break;
					case 1:
						strcpy(strategie[i][j], "Ac");
						break;
					case 2:
						strcpy(strategie[i][j], "7d");
						break;
					case 3:
						strcpy(strategie[i][j], "7c");
						break;
					case 4:
						strcpy(strategie[i][j], "3d");
						break;
					case 5:
						strcpy(strategie[i][j], "3c");
						break;
					}
				}

			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 25; j++) {
					zapis << setw(4) << strategie[i][j] << endl;
				}
			}
			zapis.close();

			ofstream dane("dane.xlsx", ios::app);
			dane << "Parametry startowe" << endl << endl;
			for (int i = 0; i < 25; i++) {
				dane << "\t";
				for (int j = 0; j < 25; j++) {
					dane << strategie[i][j] << "\t";
				}
				dane << endl;
			}
			dane << endl;
			dane.close();

			ofstream start("param_start.txt");
			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 25; j++) {
					if (this->Automat->GetControlFromPosition(j, i)->BackColor == System::Drawing::Color::Blue)
						start << "0" << endl;
					else
						start << "1" << endl;
				}
			}
			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 25; j++) {
					start << setw(4) << strategie[i][j] << endl;
				}
			}
			start.close();

			ofstream wynik("wyniki.xlsx", ios::app);
			wynik << endl;
			wynik << "\tAd\tAc\t3d\t3c\t7d\t7c\t\tZdrajcy\tKooperuj¹cy\t\tSuma wyp³at" << endl;
			wynik.close();
		}




		


		System::Void wczytaj_start(System::Object^ sender, System::EventArgs^ e) {
			srand(time(NULL));
			char strategie[25][25][5] = { '\0' };
			int a = 0, d = 0;
			ofstream zapis("strategie_start.txt");

			//wybranie pliku

			OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
			openFileDialog->InitialDirectory = "C:\\Users\\witak\\source\\repos\\Licencjat\\Licencjat";
			openFileDialog->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog->RestoreDirectory = true;

			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				string file = msclr::interop::marshal_as<std::string>(openFileDialog->FileName);
				ifstream wczytaj(file);
				


				//ustawienie stanów i strategii

				for (int i = 0; i < 25; i++)
					for (int j = 0; j < 25; j++) {
						char temp[2];
						wczytaj.getline(temp, 2);
						if(temp[0]=='0')
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Blue;
						else
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Red;
							
					}

				for (int i = 0; i < 25; i++) {
					for (int j = 0; j < 25; j++) {
						wczytaj.getline(strategie[i][j], 5);
					}
				}
				wczytaj.close();

				ofstream zapis("strategie_start.txt");
				for (int i = 0; i < 25; i++) {
					for (int j = 0; j < 25; j++) {
						zapis << setw(4) << strategie[i][j] << endl;
					}
				}
				zapis.close();
			}

			ofstream dane("dane.xlsx", ios::app);
			dane << "Parametry startowe" << endl << endl;
			for (int i = 0; i < 25; i++) {
				dane << "\t";
				for (int j = 0; j < 25; j++) {
					dane << strategie[i][j] << "\t";
				}
				dane << endl;
			}
			dane << endl;
			dane.close();

			ofstream wynik("wyniki.xlsx", ios::app);
			wynik << endl;
			wynik << "\tAd\tAc\t3d\t3c\t7d\t7c\t\tZdrajcy\tKooperuj¹cy\t\tSuma wyp³at" << endl;
			wynik.close();
		}







#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		srand(time(NULL));


		this->numericUpDownPrzegrany->Enabled = false;
		this->numericUpDownKara->Enabled = false;
		this->numericUpDownNagroda->Enabled = false;
		this->numericUpDownZdrajca->Enabled = false;
		this->numericUpDown1->Enabled = false;
		this->button1->Enabled = false;

		//cykl dylematu wiêŸnia

		for (int cykle = 0; cykle < this->numericUpDown1->Value; cykle++) {
			int sasiedzi_zdrajcy[25][25] = { 0 };
			double wyplaty[25][25] = { 0 };
			char wyniki[25][25][8][2] = { '\0' }, strategie[25][25][5] = { '\0' };
			int x = 0;


			for (int i = 0; i < 25; i++)
				for (int j = 0; j < 25; j++)
					wyplaty[i][j] = 0;


			//wczytanie strategii

			ifstream czytaj("strategie_start.txt");
			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 25; j++) {
					czytaj.getline(strategie[i][j], 5);
				}
			}
			czytaj.close();


			//sprawdzenie stanów s¹siadów

			for (int i = 0; i < 25; i++)
				for (int j = 0; j < 25; j++) {
					int c1 = 0;
					if (this->Automat->GetControlFromPosition(j, i)->BackColor == System::Drawing::Color::Blue)
						c1 = 0;
					else
						c1 = 1;
					for (int y = 1; y < 9; y++) {
						int c2 = 0;
						switch (y)
						{
						case 1:
							if (i == 0) {
								if (this->Automat->GetControlFromPosition(j, 24)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else {
								if (this->Automat->GetControlFromPosition(j, i - 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							break;
						case 2:
							if (i == 0 && j == 24) {
								if (this->Automat->GetControlFromPosition(0, 24)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else if (i == 0 && j != 24) {
								if (this->Automat->GetControlFromPosition(j + 1, 24)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else if (i != 0 && j == 24) {
								if (this->Automat->GetControlFromPosition(0, i - 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else {
								if (this->Automat->GetControlFromPosition(j + 1, i - 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							break;
						case 3:
							if (j == 24) {
								if (this->Automat->GetControlFromPosition(0, i)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else {
								if (this->Automat->GetControlFromPosition(j + 1, i)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							break;
						case 4:
							if (i == 24 && j == 24) {
								if (this->Automat->GetControlFromPosition(0, 0)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else if (i == 24 && j != 24) {
								if (this->Automat->GetControlFromPosition(j + 1, 0)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else if (i != 24 && j == 24) {
								if (this->Automat->GetControlFromPosition(0, i + 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else {
								if (this->Automat->GetControlFromPosition(j + 1, i + 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							break;
						case 5:
							if (i == 24) {
								if (this->Automat->GetControlFromPosition(j, 0)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else {
								if (this->Automat->GetControlFromPosition(j, i + 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							break;
						case 6:
							if (i == 24 && j == 0) {
								if (this->Automat->GetControlFromPosition(24, 0)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else if (i == 24 && j != 0) {
								if (this->Automat->GetControlFromPosition(j - 1, 0)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else if (i != 24 && j == 0) {
								if (this->Automat->GetControlFromPosition(24, i + 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else {
								if (this->Automat->GetControlFromPosition(j - 1, i + 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							break;
						case 7:
							if (j == 0) {
								if (this->Automat->GetControlFromPosition(24, i)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else {
								if (this->Automat->GetControlFromPosition(j - 1, i)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							break;
						case 8:
							if (i == 0 && j == 0) {
								if (this->Automat->GetControlFromPosition(24, 24)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else if (i == 0 && j != 0) {
								if (this->Automat->GetControlFromPosition(j - 1, 24)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else if (i != 0 && j == 0) {
								if (this->Automat->GetControlFromPosition(24, i - 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							else {
								if (this->Automat->GetControlFromPosition(j - 1, i - 1)->BackColor == System::Drawing::Color::Blue)
									c2 = 0;
								else
									c2 = 1;
							}
							break;
						}

						//przypisanie wyp³at graczy

						if (c1 == 0 && c2 == 0)
							strcpy(wyniki[i][j][y - 1], "R");
						else if (c1 == 1 && c2 == 1)
							strcpy(wyniki[i][j][y - 1], "P");
						else if (c1 == 0 && c2 == 1)
							strcpy(wyniki[i][j][y - 1], "S");
						else if (c1 == 1 && c2 == 0)
							strcpy(wyniki[i][j][y - 1], "T");
					}
				}

				//obliczenie wyników gier z s¹siadami
				double R = 2 + (int)numericUpDownNagroda->Value*0.1;
				double P = 1 + (int)numericUpDownKara->Value*0.1;
				double S = 0 + (int)numericUpDownPrzegrany->Value*0.1;
				double T = 3 + (int)numericUpDownZdrajca->Value*0.1;
			for (int i = 0; i < 25; i++) {
				for (int j = 0; j < 25; j++) {
					for (int y = 0; y < 8; y++) {
						if (!strcmp(wyniki[i][j][y], "R")) {
							wyplaty[i][j] += R;
							x += R;
						}
						else if (!strcmp(wyniki[i][j][y], "P")) {
							wyplaty[i][j] += P;
							x += P;
						}
						else if (!strcmp(wyniki[i][j][y], "S")) {
							wyplaty[i][j] += S;
							x += S;
						}
						else if (!strcmp(wyniki[i][j][y], "T")) {
							wyplaty[i][j] += T;
							x += T;
						}
					}
				}
			}

			//znalezienie optymalnej strategii w s¹siedztwie

			char nowa_strategia[25][25][5];
			for (int i = 0; i < 25; i++)
				for (int j = 0; j < 25; j++) {
					double max = wyplaty[i][j];
					strcpy(nowa_strategia[i][j], strategie[i][j]);
					for (int y = 1; y < 9; y++) {
						switch (y)
						{
						case 1:
							if (i == 0) {
								if (wyplaty[24][j] > max) {
									strcpy(nowa_strategia[i][j], strategie[24][j]);
									max = wyplaty[24][j];
								}
							}
							else
								if (wyplaty[i - 1][j] > max) {
									strcpy(nowa_strategia[i][j], strategie[i - 1][j]);
									max = wyplaty[i - 1][j];
								}
							break;
						case 2:
							if (i == 0 && j == 24) {
								if (wyplaty[24][0] > max) {
									strcpy(nowa_strategia[i][j], strategie[24][0]);
									max = wyplaty[24][0];
								}
							}
							else if (i == 0 && j != 24) {
								if (wyplaty[24][j + 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[24][j + 1]);
									max = wyplaty[24][j + 1];
								}
							}
							else if (i != 0 && j == 24) {
								if (wyplaty[i - 1][0] > max) {
									strcpy(nowa_strategia[i][j], strategie[i - 1][0]);
									max = wyplaty[i - 1][0];
								}
							}
							else
								if (wyplaty[i - 1][j + 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[i - 1][j + 1]);
									max = wyplaty[i - 1][j + 1];
								}
							break;
						case 3:
							if (j == 24) {
								if (wyplaty[i][0] > max) {
									strcpy(nowa_strategia[i][j], strategie[i][0]);
									max = wyplaty[i][0];
								}
							}
							else
								if (wyplaty[i][j + 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[i][j + 1]);
									max = wyplaty[i][j + 1];
								}
							break;
						case 4:
							if (i == 24 && j == 24) {
								if (wyplaty[0][0] > max) {
									strcpy(nowa_strategia[i][j], strategie[0][0]);
									max = wyplaty[0][0];
								}
							}
							else if (i == 24 && j != 24) {
								if (wyplaty[0][j + 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[0][j + 1]);
									max = wyplaty[0][j + 1];
								}
							}
							else if (i != 24 && j == 24) {
								if (wyplaty[i + 1][0] > max) {
									strcpy(nowa_strategia[i][j], strategie[i + 1][0]);
									max = wyplaty[i + 1][0];
								}
							}
							else
								if (wyplaty[i + 1][j + 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[i + 1][j + 1]);
									max = wyplaty[i + 1][j + 1];
								}
							break;
						case 5:
							if (i == 24) {
								if (wyplaty[0][j] > max) {
									strcpy(nowa_strategia[i][j], strategie[0][j]);
									max = wyplaty[0][j];
								}
							}
							else
								if (wyplaty[i + 1][j] > max) {
									strcpy(nowa_strategia[i][j], strategie[i + 1][j]);
									max = wyplaty[i + 1][j];
								}
							break;
						case 6:
							if (i == 24 && j == 0) {
								if (wyplaty[0][24] > max) {
									strcpy(nowa_strategia[i][j], strategie[0][24]);
									max = wyplaty[0][24];
								}
							}
							else if (i == 24 && j != 0) {
								if (wyplaty[0][j - 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[0][j - 1]);
									max = wyplaty[0][j - 1];
								}
							}
							else if (i != 24 && j == 0) {
								if (wyplaty[i + 1][24] > max) {
									strcpy(nowa_strategia[i][j], strategie[i + 1][24]);
									max = wyplaty[i + 1][24];
								}
							}
							else
								if (wyplaty[i + 1][j - 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[i + 1][j - 1]);
									max = wyplaty[i + 1][j - 1];
								}
							break;
						case 7:
							if (j == 0) {
								if (wyplaty[i][24] > max) {
									strcpy(nowa_strategia[i][j], strategie[i][24]);
									max = wyplaty[i][24];
								}
							}
							else
								if (wyplaty[i][j - 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[i][j - 1]);
									max = wyplaty[i][j - 1];
								}
							break;
						case 8:
							if (i == 0 && j == 0) {
								if (wyplaty[24][24] > max) {
									strcpy(nowa_strategia[i][j], strategie[24][24]);
									max = wyplaty[24][24];
								}
							}
							else if (i == 0 && j != 0) {
								if (wyplaty[24][i - 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[24][i - 1]);
									max = wyplaty[24][i - 1];
								}
							}
							else if (i != 0 && j == 0) {
								if (wyplaty[i - 1][24] > max) {
									strcpy(nowa_strategia[i][j], strategie[i - 1][24]);
									max = wyplaty[i - 1][24];
								}
							}
							else
								if (wyplaty[i - 1][j - 1] > max) {
									strcpy(nowa_strategia[i][j], strategie[i - 1][j - 1]);
									max = wyplaty[i - 1][j - 1];
								}
							break;
						}
					}
				}

				for(int i = 0 ; i < 25; i++)
					for(int j = 0 ; j < 25; j++)
						strcpy(strategie[i][j], nowa_strategia[i][j]);

				ofstream strat("strategie_start.txt");
				for (int i = 0; i < 25; i++) {
					for (int j = 0; j < 25; j++) {
						strat << setw(4) << strategie[i][j] << endl;
					}
				}
				strat.close();

				//wysy³anie do pliku

				int ilosc_Ad = 0, ilosc_Ac = 0, ilosc_3d = 0, ilosc_3c = 0, ilosc_7d = 0, ilosc_7c = 0, ilosc_kooperujacych = 0, ilosc_zdrajcow = 0;
				for (int i = 0; i < 25; i++) {
					for (int j = 0; j < 25; j++) {
						if (!strcmp(strategie[i][j], "  Ad"))
							ilosc_Ad++;
						else if (!strcmp(strategie[i][j], "  Ac"))
							ilosc_Ac++;
						else if (!strcmp(strategie[i][j], "  3d"))
							ilosc_3d++;
						else if (!strcmp(strategie[i][j], "  3c"))
							ilosc_3c++;
						else if (!strcmp(strategie[i][j], "  7d"))
							ilosc_7d++;
						else if (!strcmp(strategie[i][j], "  7c"))
							ilosc_7c++;
						if (this->Automat->GetControlFromPosition(j, i)->BackColor == System::Drawing::Color::Blue)
							ilosc_kooperujacych++;
						else
							ilosc_zdrajcow++;
					}
				}

				ofstream zapis("dane.xlsx", ios::app);
				SYSTEMTIME st;
				GetSystemTime(&st);
				if(st.wMinute < 10)
					zapis << st.wDay << "." << st.wMonth << "." << st.wYear << " " << st.wHour << ":" << "0" << st.wMinute << endl << endl;
				else
					zapis << st.wDay << "." << st.wMonth << "." << st.wYear << " " << st.wHour << ":" << st.wMinute << endl << endl;
				for (int i = 0; i < 25; i++) {
					zapis << "\t";
					for (int l = 0; l < 25; l++) {
						if (this->Automat->GetControlFromPosition(l, i)->BackColor == System::Drawing::Color::Blue)
							zapis << "0" << "\t";
						else
							zapis << "1" << "\t";
					}
					zapis << "\t";
					for (int j = 0; j < 25; j++) {
						zapis << wyplaty[i][j] << "\t";
					}
					zapis << "\t";
					for (int k = 0; k < 25; k++) {
						zapis << strategie[i][k] << "\t";
					}
					switch (i) {
					case 15:
						zapis << "\tAd\t" << ilosc_Ad;
						break;
					case 16:
						zapis << "\tAc\t" << ilosc_Ac;
						break;
					case 17:
						zapis << "\t3d\t" << ilosc_3d;
						break;
					case 18:
						zapis << "\t3c\t" << ilosc_3c;
						break;
					case 19:
						zapis << "\t7d\t" << ilosc_7d;
						break;
					case 20:
						zapis << "\t7c\t" << ilosc_7c;
						break;
					case 22:
						zapis << "\tZdrajcy\t" << ilosc_zdrajcow;
						break;
					case 23:
						zapis << "\tKooperuj¹cy\t" << ilosc_kooperujacych;
						break;
					}
					zapis << endl;
				}
				zapis << endl;
				zapis.close();

				ofstream wynik("wyniki.xlsx", ios::app);
				wynik << "\t" << ilosc_Ad << "\t" << ilosc_Ac << "\t" << ilosc_3d << "\t" << ilosc_3c << "\t" << ilosc_7d << "\t" << ilosc_7c << "\t\t" << ilosc_zdrajcow << "\t" << ilosc_kooperujacych << "\t\t" << x << endl;
				wynik.close();


				//sprawdzenie iloœci zdrajców w s¹siedztwie

			for (int i = 0; i < 25; i++)
				for (int j = 0; j < 25; j++)
					for (int y = 1; y < 9; y++)
						switch (y)
						{
						case 1:
							if (i == 0) {
								if (this->Automat->GetControlFromPosition(j, 24)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else
								if (this->Automat->GetControlFromPosition(j, i - 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							break;
						case 2:
							if (i == 0 && j == 24) {
								if (this->Automat->GetControlFromPosition(0, 24)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else if (i == 0 && j != 24) {
								if (this->Automat->GetControlFromPosition(j + 1, 24)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else if (i != 0 && j == 24) {
								if (this->Automat->GetControlFromPosition(0, i - 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else
								if (this->Automat->GetControlFromPosition(j + 1, i - 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							break;
						case 3:
							if (j == 24) {
								if (this->Automat->GetControlFromPosition(0, i)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else
								if (this->Automat->GetControlFromPosition(j + 1, i)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							break;
						case 4:
							if (i == 24 && j == 24) {
								if (this->Automat->GetControlFromPosition(0, 0)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else if (i == 24 && j != 24) {
								if (this->Automat->GetControlFromPosition(j + 1, 0)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else if (i != 24 && j == 24) {
								if (this->Automat->GetControlFromPosition(0, i + 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else
								if (this->Automat->GetControlFromPosition(j + 1, i + 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							break;
						case 5:
							if (i == 24) {
								if (this->Automat->GetControlFromPosition(j, 0)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else
								if (this->Automat->GetControlFromPosition(j, i + 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							break;
						case 6:
							if (i == 24 && j == 0) {
								if (this->Automat->GetControlFromPosition(24, 0)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else if (i == 24 && j != 0) {
								if (this->Automat->GetControlFromPosition(j - 1, 0)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else if (i != 24 && j == 0) {
								if (this->Automat->GetControlFromPosition(24, i + 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else
								if (this->Automat->GetControlFromPosition(j - 1, i + 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							break;
						case 7:
							if (j == 0) {
								if (this->Automat->GetControlFromPosition(24, i)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else
								if (this->Automat->GetControlFromPosition(j - 1, i)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							break;
						case 8:
							if (i == 0 && j == 0) {
								if (this->Automat->GetControlFromPosition(24, 24)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else if (i == 0 && j != 0) {
								if (this->Automat->GetControlFromPosition(j - 1, 24)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else if (i != 0 && j == 0) {
								if (this->Automat->GetControlFromPosition(24, i - 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							}
							else
								if (this->Automat->GetControlFromPosition(j - 1, i - 1)->BackColor == System::Drawing::Color::Red)
									sasiedzi_zdrajcy[i][j] += 1;
							break;
						}

						//zmiana stanu zgodnie ze strategi¹

			for (int i = 0; i < 25; i++)
				for (int j = 0; j < 25; j++) {
					if (!strcmp(strategie[i][j], "  Ad")) {
						if (sasiedzi_zdrajcy[i][j] == 8)
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Red;
						else
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Blue;
					}
					else if (!strcmp(strategie[i][j], "  Ac")) {
						if (sasiedzi_zdrajcy[i][j] == 0)
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Red;
						else
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Blue;
					}
					else if (!strcmp(strategie[i][j], "  3d")) {
						if (sasiedzi_zdrajcy[i][j] >= 3)
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Red;
						else
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Blue;
					}
					else if (!strcmp(strategie[i][j], "  3c")) {
						if (sasiedzi_zdrajcy[i][j] <= 5)
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Red;
						else
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Blue;
					}
					else if (!strcmp(strategie[i][j], "  7d")) {
						if (sasiedzi_zdrajcy[i][j] >= 7)
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Red;
						else
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Blue;
					}
					else if (!strcmp(strategie[i][j], "  7c")) {
						if (sasiedzi_zdrajcy[i][j] <= 1)
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Red;
						else
							this->Automat->GetControlFromPosition(j, i)->BackColor = System::Drawing::Color::Blue;
					}
				}

			
		}


		this->numericUpDown1->Enabled = true;
		this->numericUpDownPrzegrany->Enabled = true;
		this->numericUpDownKara->Enabled = true;
		this->numericUpDownNagroda->Enabled = true;
		this->numericUpDownZdrajca->Enabled = true;
		this->button1->Enabled = true;
		this->numericUpDown1->Value = 1;
	}







private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	if (this->numericUpDown1->Value < 1)
		this->numericUpDown1->Value = 1;
}





private: System::Void Dylemat_Load(System::Object^  sender, System::EventArgs^  e) {

	if (MessageBox::Show("Czy chcesz wczytaæ parametry startowe?", "Start", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
		wczytaj_start(sender, e);
	}
	else {
		losowy_start(sender, e);
	}

}
};
}


