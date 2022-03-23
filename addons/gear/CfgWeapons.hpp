		//Imports
		class SWLB_clone_bag_belt;
		
		class GVAR(Pilot_Radio_Pack):SWLB_clone_bag_belt {
				DISPLAYNAME(Pilot Radio Pack)
		model = QPATHTOF(data\radio.p3d);
		mass = 0;
		tf_dialogUpdate = QUOTE(call TFAR_fnc_updateLRDialogToChannel;);
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "tf_west_radio_code";
		tf_subtype = "digital_lr";
		tf_range = 120000;
		maximumLoad = 500;
		};