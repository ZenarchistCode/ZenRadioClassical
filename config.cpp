class CfgPatches
{
	/************* HOW TO ADD YOUR OWN CASSETTES - FOLLOW THESE STEPS: *************************************************
	CfgVehicles:
	- Copy & paste an existing tape's config class - you just need to extend Yuki's base class.
	- Change class name
	- Change display name
	- Change description
	- Change texture (optional - photoshop file is included in Yuki's original Radio mod files)
	- Change soundSet name

	CfgSoundSets
	- Name soundset class the same as CfgVehicles class soundSet path
	- Keep the soundShaders string the same

	CfgSoundShaders
	- Change class name to be same as CfgSoundSets class & shader path
	- Samples string is the path to your .ogg audio file

	You can only use .ogg files - if you need to convert a mp3/wav/etc just use Audacity (it's free).

	DON'T FORGET TO ADD YOUR CUSTOM CASSETTES INTO YOUR TYPES.XML FOLDER TO GIVE THEM PERSISTENCE!

	Eg.:
	<type name="Zen_Cassette_Classical1">
		<nominal>2</nominal>
		<lifetime>21600</lifetime>
		<restock>7200</restock>
		<min>1</min>
		<quantmin>-1</quantmin>
		<quantmax>-1</quantmax>
		<cost>100</cost>
		<flags count_in_cargo="0" count_in_hoarder="0" count_in_map="1" count_in_player="0" crafted="0" deloot="0"/>
		<category name="tools"/>
		<tag name="shelves"/>
		<usage name="Town"/>
		<usage name="Village"/>
		<usage name="School"/>
	</type>
	****************************************************************************************************************/

	class ZenRadioClassical // Change this to your mod name
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = { "DZ_Data", "YK_Radio" }; // Make sure to require YK_Radio mod package
	};
};

class CfgMods
{
	class ZenRadioClassical // Change this to your mod name
	{
		dir="ZenRadioClassical"; // Change this to your mod directory
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Zen Radio Classical Cassettes";  // Change this to your mod name
		credits="Yuki"; 
		author="Zenarchist";  // Change this to your author name
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
	};
};

class CfgVehicles
{
	class YK_Cassette_Base; // Don't remove or edit this line!
	class Zen_Cassette_Classical1 : YK_Cassette_Base // Name your cassette class
	{
		scope = 2; // Leave this
		displayName = "Classical Tape (1/9)"; // Give your tape a display name
		descriptionShort = "Fur Elise (by Beethoven)"; // Give it a description
		hiddenSelectionsTextures[] = { "YK_Radio\Cassettes\Clear\data\cassette_co.paa" }; // Change tape item texture here.
		class CfgCassette { soundSet = "Zen_SoundSet_Classical1"; }; // This is your SoundSet class from CfgSoundSets
	};
	class Zen_Cassette_Classical2 : YK_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (2/9)";
		descriptionShort = "Gymnopedie No. 3 (by Wahneta Meixsell)";
		hiddenSelectionsTextures[] = { "YK_Radio\Cassettes\Clear\data\cassette_co.paa" };
		class CfgCassette { soundSet = "Zen_SoundSet_Classical2"; };
	};

	class Zen_Cassette_Classical3 : YK_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (3/9)";
		descriptionShort = "Les Toreadors from Carmen (by Bizet)";
		hiddenSelectionsTextures[] = { "YK_Radio\Cassettes\Clear\data\cassette_co.paa" };
		class CfgCassette { soundSet = "Zen_SoundSet_Classical3"; };
	};

	class Zen_Cassette_Classical4 : YK_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (4/9)";
		descriptionShort = "Messiah (by Handel)";
		hiddenSelectionsTextures[] = { "YK_Radio\Cassettes\Clear\data\cassette_co.paa" };
		class CfgCassette { soundSet = "Zen_SoundSet_Classical4"; };
	};

	class Zen_Cassette_Classical5 : YK_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (5/9)";
		descriptionShort = "Morning Mood (by Grieg)";
		hiddenSelectionsTextures[] = { "YK_Radio\Cassettes\Clear\data\cassette_co.paa" };
		class CfgCassette { soundSet = "Zen_SoundSet_Classical5"; };
	};

	class Zen_Cassette_Classical6 : YK_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (6/9)";
		descriptionShort = "Ride of the Valkyries (by Wagner)";
		hiddenSelectionsTextures[] = { "YK_Radio\Cassettes\Clear\data\cassette_co.paa" };
		class CfgCassette { soundSet = "Zen_SoundSet_Classical6"; };
	};

	class Zen_Cassette_Classical7 : YK_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (7/9)";
		descriptionShort = "Toccata in D Minor (by Bach)";
		hiddenSelectionsTextures[] = { "YK_Radio\Cassettes\Clear\data\cassette_co.paa" };
		class CfgCassette { soundSet = "Zen_SoundSet_Classical7"; };
	};

	class Zen_Cassette_Classical8 : YK_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (8/9)";
		descriptionShort = "Moonlight Sonata (by Beethoven)";
		hiddenSelectionsTextures[] = { "YK_Radio\Cassettes\Clear\data\cassette_co.paa" };
		class CfgCassette { soundSet = "Zen_SoundSet_Classical8"; };
	};

	class Zen_Cassette_Classical9 : YK_Cassette_Base
	{
		scope = 2;
		displayName = "Classical Tape (9/9)";
		descriptionShort = "Canon in D Major (by Kevin MacLeod)";
		hiddenSelectionsTextures[] = { "YK_Radio\Cassettes\Clear\data\cassette_co.paa" };
		class CfgCassette { soundSet = "Zen_SoundSet_Classical9"; };
	};
};

class CfgSoundSets
{
	class Mods_SoundSet_Base; // Don't change this line
	class Zen_SoundSet_Classical1 { soundShaders[] = { "Zen_SoundSet_Classical1" }; }; // This links the SoundShader to the item
	class Zen_SoundSet_Classical2 { soundShaders[] = { "Zen_SoundSet_Classical2" }; };
	class Zen_SoundSet_Classical3 { soundShaders[] = { "Zen_SoundSet_Classical3" }; };
	class Zen_SoundSet_Classical4 { soundShaders[] = { "Zen_SoundSet_Classical4" }; };
	class Zen_SoundSet_Classical5 { soundShaders[] = { "Zen_SoundSet_Classical5" }; };
	class Zen_SoundSet_Classical6 { soundShaders[] = { "Zen_SoundSet_Classical6" }; };
	class Zen_SoundSet_Classical7 { soundShaders[] = { "Zen_SoundSet_Classical7" }; };
	class Zen_SoundSet_Classical8 { soundShaders[] = { "Zen_SoundSet_Classical8" }; };
	class Zen_SoundSet_Classical9 { soundShaders[] = { "Zen_SoundSet_Classical9" }; };
};

class CfgSoundShaders
{
	class YK_Cassette_SoundShader_Base; // Don't change this line
	class Zen_SoundSet_Classical1 : YK_Cassette_SoundShader_Base { samples[] = { { "ZenRadioClassical\data\sounds\classical1", 1 } }; }; // This is the path to your audio.ogg file
	class Zen_SoundSet_Classical2 : YK_Cassette_SoundShader_Base { samples[] = { { "ZenRadioClassical\data\sounds\classical2", 1 } }; };
	class Zen_SoundSet_Classical3 : YK_Cassette_SoundShader_Base { samples[] = { { "ZenRadioClassical\data\sounds\classical3", 1 } }; };
	class Zen_SoundSet_Classical4 : YK_Cassette_SoundShader_Base { samples[] = { { "ZenRadioClassical\data\sounds\classical4", 1 } }; };
	class Zen_SoundSet_Classical5 : YK_Cassette_SoundShader_Base { samples[] = { { "ZenRadioClassical\data\sounds\classical5", 1 } }; };
	class Zen_SoundSet_Classical6 : YK_Cassette_SoundShader_Base { samples[] = { { "ZenRadioClassical\data\sounds\classical6", 1 } }; };
	class Zen_SoundSet_Classical7 : YK_Cassette_SoundShader_Base { samples[] = { { "ZenRadioClassical\data\sounds\classical7", 1 } }; };
	class Zen_SoundSet_Classical8 : YK_Cassette_SoundShader_Base { samples[] = { { "ZenRadioClassical\data\sounds\classical8", 1 } }; };
	class Zen_SoundSet_Classical9 : YK_Cassette_SoundShader_Base { samples[] = { { "ZenRadioClassical\data\sounds\classical9", 1 } }; };
};