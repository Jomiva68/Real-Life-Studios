class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "Jonzie_Mini_Cooper", { "", "", -1 } },
            { "A3L_Cooper_concept_blue", { "", "", -1 } },
            { "A3L_Cooper_concept_black", { "", "", -1 } },
            { "A3L_Cooper_concept_red", { "", "", -1 } },
            { "A3L_Cooper_concept_white", { "", "", -1 } },
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "A3L_PuntoRed", { "", "", -1 } },
            { "A3L_PuntoBlack", { "", "", -1 } },
            { "A3L_PuntoWhite", { "", "", -1 } },
            { "A3L_PuntoGrey", { "", "", -1 } },
            { "A3L_RegalBlack", { "", "", -1 } },
            { "A3L_RegalBlue", { "", "", -1 } },
            { "A3L_RegalOrange", { "", "", -1 } },
            { "A3L_RegalRed", { "", "", -1 } },
            { "A3L_RegalWhite", { "", "", -1 } },
            { "S_Rangerover_Black", { "", "", -1 } },
            { "S_Rangerover_Red", { "", "", -1 } },
            { "S_Rangerover_Blue", { "", "", -1 } },
            { "S_Rangerover_Green", { "", "", -1 } },
            { "S_Rangerover_Purple", { "", "", -1 } },
            { "S_Rangerover_Grey", { "", "", -1 } },
            { "S_Rangerover_Orange", { "", "", -1 } },
            { "S_Rangerover_White", { "", "", -1 } },
            { "A3L_RX7_Blue", { "", "", -1 } },
            { "A3L_RX7_Red", { "", "", -1 } },
            { "A3L_RX7_White", { "", "", -1 } },
            { "A3L_RX7_Black", { "", "", -1 } },
            { "A3L_Lincoln_Red", { "", "", -1 } },
            { "A3L_Lincoln_Black", { "", "", -1 } },
            { "A3L_Lincoln_DarkBlue", { "", "", -1 } },
            { "A3L_Lincoln_Yellow", { "", "", -1 } },
            { "A3L_Lincoln_Pink", { "", "", -1 } },
            { "A3L_Lincoln_Grey", { "", "", -1 } },
            { "A3L_Lincoln_Purple", { "", "", -1 } },
            { "A3L_Lincoln_Orange", { "", "", -1 } },
            { "A3L_Smartcar_Red", { "", "", -1 } },
            { "A3L_Smartcar_Black", { "", "", -1 } },
            { "A3L_Smartcar_Blue", { "", "", -1 } },
            { "tw_truck", { "", "", -1 } },
            { "tw_truck_grey", { "", "", -1 } },
            { "tw_truck_blue", { "", "", -1 } },
            { "tw_truck_red", { "", "", -1 } },
            { "tw_truck_yellow", { "", "", -1 } },
            { "tw_truck_orange", { "", "", -1 } },
            { "tw_truck_t", { "", "", -1 } },
            { "tw_truck_grey_t", { "", "", -1 } },
            { "tw_truck_blue_t", { "", "", -1 } },
            { "tw_truck_red_t", { "", "", -1 } },
            { "tw_truck_yellow_t", { "", "", -1 } },
            { "tw_truck_orange_t", { "", "", -1 } },
        };
    };

    class mitsubishi_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "ivory_evox", { "", "", -1 } },
            { "ivory_evox_tuned", { "", "", -1 } },
        };
    };

    class exo_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "A3L_Alfa_Romeo_White", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Black", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Red", { "", "", -1 } },
            { "A3L_Alfa_Romeo_DarkBlue", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Yellow", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Pink", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Grey", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Purple", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Orange", { "", "", -1 } },
            { "A3L_Citreon_C4_White", { "", "", -1 } },
            { "A3L_Citreon_C4_Black", { "", "", -1 } },
            { "A3L_Citreon_C4_Red", { "", "", -1 } },
            { "A3L_Citreon_C4_DarkBlue", { "", "", -1 } },
            { "A3L_Citreon_C4_Yellow", { "", "", -1 } },
            { "A3L_Citreon_C4_Pink", { "", "", -1 } },
            { "A3L_Citreon_C4_Grey", { "", "", -1 } },
            { "A3L_Citreon_C4_Purple", { "", "", -1 } },
            { "A3L_Citreon_C4_Orange", { "", "", -1 } },
            { "A3L_Citreon_DS3_White", { "", "", -1 } },
            { "A3L_Citreon_DS3_Black", { "", "", -1 } },
            { "A3L_Citreon_DS3_Red", { "", "", -1 } },
            { "A3L_Citreon_DS3_DarkBlue", { "", "", -1 } },
            { "A3L_Citreon_DS3_Yellow", { "", "", -1 } },
            { "A3L_Citreon_DS3_Pink", { "", "", -1 } },
            { "A3L_Citreon_DS3_Grey", { "", "", -1 } },
            { "A3L_Citreon_DS3_Purple", { "", "", -1 } },
            { "A3L_Citreon_DS3_Orange", { "", "", -1 } },
            { "A3L_S60_White", { "", "", -1 } },
            { "A3L_S60_Red", { "", "", -1 } },
            { "A3L_S60_Pink", { "", "", -1 } },
            { "A3L_S60_DarkBlue", { "", "", -1 } },
            { "A3L_S60_Black", { "", "", -1 } },
            { "A3L_S60_Yellow", { "", "", -1 } },
            { "A3L_S60_Orange", { "", "", -1 } },
            { "A3L_H1_White", { "", "", -1 } },
            { "A3L_H1_Red", { "", "", -1 } },
            { "A3L_H1_Pink", { "", "", -1 } },
            { "A3L_H1_DarkBlue", { "", "", -1 } },
            { "A3L_H1_Black", { "", "", -1 } },
            { "A3L_H1_Yellow", { "", "", -1 } },
            { "A3L_H1_Orange", { "", "", -1 } },
            { "A3L_Zonda_White", { "", "", -1 } },
            { "A3L_Zonda_Red", { "", "", -1 } },
            { "A3L_Zonda_Pink", { "", "", -1 } },
            { "A3L_Zonda_DarkBlue", { "", "", -1 } },
            { "A3L_Zonda_Black", { "", "", -1 } },
            { "A3L_Zonda_Yellow", { "", "", -1 } },
            { "A3L_Zonda_Orange", { "", "", -1 } },
            { "A3L_Mercedes_ML63_White", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Red", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Pink", { "", "", -1 } },
            { "A3L_Mercedes_ML63_DarkBlue", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Black", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Yellow", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Orange", { "", "", -1 } },
            { "Urbanized_67Mustang_black", { "", "", -1 } },
            { "Urbanized_67Mustang_white", { "", "", -1 } },
            { "Urbanized_67Mustang_blue", { "", "", -1 } },
            { "Urbanized_67Mustang_orange", { "", "", -1 } },
            { "Urbanized_67Mustang_darkred", { "", "", -1 } },
            { "UG_Hornet_C", { "", "", -1 } },
            { "ivory_rs4", { "", "", -1 } },
            { "ivory_rs4_taxi", { "", "", -1 } },
            { "S_McLarenP1_Black", { "", "", -1 } },
            { "S_McLarenP1_Blue", { "", "", -1 } },
            { "S_McLarenP1_Orange", { "", "", -1 } },
            { "S_McLarenP1_White", { "", "", -1 } },
            { "S_McLarenP1_Yellow", { "", "", -1 } },
            { "S_McLarenP1_Silver", { "", "", -1 } },
            { "A3L_Veyron", { "", "", -1 } },
            { "Urbanized_427_black", { "", "", -1 } },
            { "Urbanized_427_white", { "", "", -1 } },
            { "Urbanized_427_blue", { "", "", -1 } },
            { "Urbanized_427_pink", { "", "", -1 } },
            { "Urbanized_427_orange", { "", "", -1 } },
            { "Urbanized_427_red", { "", "", -1 } },
            { "Urbanized_427_yellow", { "", "", -1 } },
            { "Urbanized_CTSV_red", { "", "", -1 } },
            { "Urbanized_CTSV_black", { "", "", -1 } },
            { "Urbanized_CTSV_white", { "", "", -1 } },
            { "Urbanized_CTSV_blue", { "", "", -1 } },
            { "Urbanized_CTSV_purple", { "", "", -1 } },
            { "Urbanized_CTSV_pink", { "", "", -1 } },
            { "Urbanized_CTSV_orange", { "", "", -1 } },
            { "Urbanized_CTSV_yellow", { "", "", -1 } },
            { "Urbanized_CTSV_Lime", { "", "", -1 } },
            { "ivory_190e", { "", "", -1 } },
            { "ivory_190e_taxi", { "", "", -1 } },
            { "ivory_gti", { "", "", -1 } },
        };
    };

    class worldfinemotors_shop {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            {"IVORY_REV", { "", "", -1 } },
            {"quiet_Bugatti_blanche_f", { "", "", -1 } },
            {"Jonzie_Viper", { "", "", -1 } },
            {"Jonzie_Escalade", { "", "", -1 } },
            {"shounka_gt_bleufonce", { "", "", -1 } },
            {"shounka_gt_grise", { "", "", -1 } },
            {"shounka_gt_jaune", { "", "", -1 } },
            {"shounka_gt_noir", { "", "", -1 } },
            {"shounka_gt_orange", { "", "", -1 } },
            {"shounka_gt_rose", { "", "", -1 } },
            {"shounka_gt_rouge", { "", "", -1 } },
            {"shounka_gt_violet", { "", "", -1 } },
            {"Mrshounka_agera_p_bleu", { "", "", -1 } },
            {"Mrshounka_agera_p_jaune", { "", "", -1 } },
            {"Mrshounka_agera_p_noir", { "", "", -1 } },
            {"Mrshounka_agera_p_noir", { "", "", -1 } },
            {"shounka_f430_spider_bleufonce", { "", "", -1 } },
            {"shounka_f430_spider_grise", { "", "", -1 } },
            {"shounka_f430_spider_jaune", { "", "", -1 } },
            {"shounka_f430_spider_noir", { "", "", -1 } },
            {"shounka_f430_spider_orange", { "", "", -1 } },
            {"shounka_f430_spider_rose", { "", "", -1 } },
            {"shounka_f430_spider_rouge", { "", "", -1 } },
            {"shounka_f430_spider_violet", { "", "", -1 } },
            {"Mrshounka_lykan_c_bleufonce", { "", "", -1 } },
            {"Mrshounka_lykan_c_grise", { "", "", -1 } },
            {"Mrshounka_lykan_c_jaune", { "", "", -1 } },
            {"Mrshounka_lykan_c_noir", { "", "", -1 } },
            {"Mrshounka_lykan_c_orange", { "", "", -1 } },
            {"Mrshounka_lykan_c_rose", { "", "", -1 } },
            {"Mrshounka_lykan_c_rouge", { "", "", -1 } },
            {"Mrshounka_lykan_c_violet", { "", "", -1 } },
            {"shounka_mp4_bleufonce", { "", "", -1 } },
            {"shounka_mp4_grise", { "", "", -1 } },
            {"shounka_mp4_jaune", { "", "", -1 } },
            {"shounka_mp4_noir", { "", "", -1 } },
            {"shounka_mp4_orange", { "", "", -1 } },
            {"shounka_mp4_rose", { "", "", -1 } },
            {"shounka_mp4_rouge", { "", "", -1 } },
            {"shounka_mp4_violet", { "", "", -1 } },
            {"Mrshounka_pagani_c_bleufonce", { "", "", -1 } },
            {"Mrshounka_pagani_c_grise", { "", "", -1 } },
            {"Mrshounka_pagani_c_jaune", { "", "", -1 } },
            {"Mrshounka_pagani_c_noir", { "", "", -1 } },
            {"Mrshounka_pagani_c_orange", { "", "", -1 } },
            {"Mrshounka_pagani_c_rose", { "", "", -1 } },
            {"Mrshounka_pagani_c_rouge", { "", "", -1 } },
            {"Mrshounka_pagani_c_violet", { "", "", -1 } },
            {"Mrshounka_veneno_c_noir", { "", "", -1 } },
            {"Mrshounka_veneno_c_bleu", { "", "", -1 } },
            {"Mrshounka_veneno_c_jaune", { "", "", -1 } },
            {"mrshounka_huracan_c_bleufonce", { "", "", -1 } },
            {"mrshounka_huracan_c_grise", { "", "", -1 } },
            {"mrshounka_huracan_c_jaune", { "", "", -1 } },
            {"mrshounka_huracan_c_noir", { "", "", -1 } },
            {"mrshounka_huracan_c_orange", { "", "", -1 } },
            {"mrshounka_huracan_c_rose", { "", "", -1 } },
            {"mrshounka_huracan_c_rouge", { "", "", -1 } },
            {"mrshounka_huracan_c_violet", { "", "", -1 } },
            {"Mrshounka_ducati_p_bf", { "", "", -1 } },
            {"Mrshounka_ducati_p_g", { "", "", -1 } },
            {"Mrshounka_ducati_p_j", { "", "", -1 } },
            {"Mrshounka_ducati_p_noir", { "", "", -1 } },
            {"Mrshounka_ducati_p_o", { "", "", -1 } },
            {"Mrshounka_ducati_p_r", { "", "", -1 } },
            {"Mrshounka_ducati_p_rose", { "", "", -1 } },
            {"Mrshounka_ducati_p_v", { "", "", -1 } },
            {"Mrshounka_yamaha_p_bf", { "", "", -1 } },
            {"Mrshounka_yamaha_p_g", { "", "", -1 } },
            {"Mrshounka_yamaha_p_j", { "", "", -1 } },
            {"Mrshounka_yamaha_p_noir", { "", "", -1 } },
            {"Mrshounka_yamaha_p_o", { "", "", -1 } },
            {"Mrshounka_yamaha_p_r", { "", "", -1 } },
            {"Mrshounka_yamaha_p_rose", { "", "", -1 } },
            {"Mrshounka_yamaha_p_v", { "", "", -1 } },
            /*{"tw_harley_blue", { "", "", -1 } },
            {"tw_harley_white", { "", "", -1 } },
            {"tw_harley_red", { "", "", -1 } },
            {"tw_harley_metal", { "", "", -1 } },
            {"tw_harley_gay", { "", "", -1 } },
            {"tw_harley_skeleton", { "", "", -1 } },
            {"tw_harley_limited", { "", "", -1 } },
            {"tw_harley_demon", { "", "", -1 } },
            {"tw_harley_orig1", { "", "", -1 } },
            {"tw_harley_orig2", { "", "", -1 } },*/
            {"ivory_lfa", { "", "", -1 } },
            {"ivory_supra", { "", "", -1 } },
            {"ivory_supra_tuned", { "", "", -1 } },
            {"ivory_c", { "", "", -1 } },
            {"ivory_elise", { "", "", -1 } },
            {"ivory_isf", { "", "", -1 } },
            {"ivory_lp560", { "", "", -1 } },
            {"ivory_wrx", { "", "", -1 } },
            {"ivory_gt500", { "", "", -1 } },
            {"Urbanized_LaFerrari_black", { "", "", -1 } },
            {"Urbanized_LaFerrari_white", { "", "", -1 } },
            {"Urbanized_LaFerrari_blue", { "", "", -1 } },
            {"Urbanized_LaFerrari_red", { "", "", -1 } },
            {"Urbanized_LaFerrari_purple", { "", "", -1 } },
            {"Urbanized_LaFerrari_pink", { "", "", -1 } },
            {"Urbanized_LaFerrari_hotpink", { "", "", -1 } },
            {"Urbanized_LaFerrari_darkred", { "", "", -1 } },
            {"Urbanized_LaFerrari_yellow", { "", "", -1 } },
            {"Urbanized_LaFerrari_lime", { "", "", -1 } },
            {"Urbanized_458Ferrari_black", { "", "", -1 } },
            {"Urbanized_458Ferrari_white", { "", "", -1 } },
            {"Urbanized_458Ferrari_blue", { "", "", -1 } },
            {"Urbanized_458Ferrari_pink", { "", "", -1 } },
            {"Urbanized_458Ferrari_orange", { "", "", -1 } },
            {"Urbanized_458Ferrari_darkred", { "", "", -1 } },
            {"Urbanized_458Ferrari_yellow", { "", "", -1 } },
            {"Urbanized_LP700_black", { "", "", -1 } },
            {"Urbanized_LP700_red", { "", "", -1 } },
            {"Urbanized_LP700_white", { "", "", -1 } },
            {"Urbanized_LP700_blue", { "", "", -1 } },
            {"Urbanized_LP700_purple", { "", "", -1 } },
            {"Urbanized_LP700_pink", { "", "", -1 } },
            {"Urbanized_LP700_orange", { "", "", -1 } },
            {"Urbanized_LP700_yellow", { "", "", -1 } },
            {"Urbanized_LP700_Lime", { "", "", -1 } },
            {"Urbanized_G65_black", { "", "", -1 } },
            {"Urbanized_G65_red", { "", "", -1 } },
            {"Urbanized_G65_white", { "", "", -1 } },
            {"Urbanized_G65_blue", { "", "", -1 } },
            {"Urbanized_G65_purple", { "", "", -1 } },
            {"Urbanized_G65_pink", { "", "", -1 } },
            {"Urbanized_G65_orange", { "", "", -1 } },
            {"Urbanized_G65_yellow", { "", "", -1 } },
            {"Urbanized_G65_Lime", { "", "", -1 } },
            {"red_venomgt_11", { "", "", -1 } },
            {"red_xkrs_12", { "", "", -1 } },
            {"red_porsche_12", { "", "", -1 } },
            {"red_panamera_10", { "", "", -1 } },
            {"red_s65_12", { "", "", -1 } },
            {"red_vanquish_13", { "", "", -1 } },
            {"red_gs350_13", { "", "", -1 } },
            {"red_genesis_16", { "", "", -1 } },
            {"Urbanized_GranTurismo_black", { "", "", -1 } },
            {"Urbanized_GranTurismo_white", { "", "", -1 } },
            {"Urbanized_GranTurismo_blue", { "", "", -1 } },
            {"Urbanized_GranTurismo_purple", { "", "", -1 } },
            {"Urbanized_GranTurismo_orange", { "", "", -1 } },
            {"Urbanized_GranTurismo_darkred", { "", "", -1 } },
            {"Urbanized_GranTurismo_hotpink", { "", "", -1 } },
            {"Urbanized_GranTurismo_yellow", { "", "", -1 } },
            {"Urbanized_GranTurismo_Lime", { "", "", -1 } },
        };
    };

    class nissan_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "ivory_r34", { "", "", -1 } },
            { "Nissan_GTR_White", { "", "", -1 } },
            { "Nissan_GTR_Black", { "", "", -1 } },
            { "Nissan_GTR_DarkBlue", { "", "", -1 } },
            { "Nissan_GTR_Red", { "", "", -1 } },
            { "Nissan_GTR_Green", { "", "", -1 } },
            { "tw_s14", { "", "", -1 } },
            { "tw_s14_b", { "", "", -1 } },
            { "tw_s14_c", { "", "", -1 } },
            { "tw_s14_d", { "", "", -1 } },
            { "tw_s14_e", { "", "", -1 } },
        };
    };

    class jeep_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "A3L_JeepWhiteBlack", { "", "", -1 } },
            { "A3L_JeepGreenBlack", { "", "", -1 } },
            { "A3L_JeepRedTan", { "", "", -1 } },
            { "A3L_JeepRedBlack", { "", "", -1 } },
            { "A3L_JeepGrayBlack", { "", "", -1 } },
            { "A3L_LandCruiser_white", { "", "", -1 } },
            { "A3L_LandCruiser_grey", { "", "", -1 } },
            { "A3L_LandCruiser_red", { "", "", -1 } },
            { "A3L_LandCruiser_orange", { "", "", -1 } },
            { "A3L_LandCruiser_green", { "", "", -1 } },
            { "A3L_LandCruiser_blue", { "", "", -1 } },
            { "A3L_LandCruiser_black", { "", "", -1 } },
        };
    };

    class don_car {
        side = "civ";
        conditions = "call life_donlevel >= 1";
        vehicles[] = {
            { "A3L_GMC_Van_Don", { "", "", -1 } },
            { "ivory_evox_don", { "", "", -1 } },
        };
    };

    class don_car_sped {
        side = "civ";
        conditions = "call life_donlevel >= 4";
        vehicles[] = {
            { "red_venomgt_aquaberry", { "", "", -1 } },
            { "red_venomgt_magma", { "", "", -1 } },
            { "red_venomgt_acid", { "", "", -1 } },
            { "red_venomgt_chrome", { "", "", -1 } },
            { "red_venomgt_gold", { "", "", -1 } },
            { "red_venomgt_roseGold", { "", "", -1 } },
            { "red_venomgt_rose", { "", "", -1 } },
            { "red_venomgt_ocean", { "", "", -1 } },
            { "red_venomgt_inferno", { "", "", -1 } },
            { "red_venomgt_midnight", { "", "", -1 } },
            { "red_vanquish_aquaberry", { "", "", -1 } },
            { "red_vanquish_magma", { "", "", -1 } },
            { "red_vanquish_acid", { "", "", -1 } },
            { "red_vanquish_chrome", { "", "", -1 } },
            { "red_vanquish_gold", { "", "", -1 } },
            { "red_vanquish_roseGold", { "", "", -1 } },
            { "red_vanquish_rose", { "", "", -1 } },
            { "red_vanquish_ocean", { "", "", -1 } },
            { "red_vanquish_inferno", { "", "", -1 } },
            { "red_vanquish_midnight", { "", "", -1 } },
            { "A3L_Atom", { "", "", -1 } },
            { "A3L_Delorean", { "", "", -1 } },
            { "A3L_Flipcar", { "", "", -1 } },
            { "ADM_1969_Camaro", { "", "", -1 } },
            { "ADM_1969_Charger", { "", "", -1 } },
            { "ADM_1964_Impala", { "", "", -1 } },
            { "Mrshounka_Bowler_c", { "", "", -1 } },
            { "shounka_buggy_noir", { "", "", -1 } },
            { "shounka_monsteur", { "", "", -1 } },
            { "Jonzie_Datsun_Z432", { "", "", -1 } },
            { "Jonzie_XB", { "", "", -1 } },
            { "shounka_transam", { "", "", -1 } },
            { "UG_Hornet_S", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_noir", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_bleu", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_rouge", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_violet", { "", "", -1 } },
            { "Mrshounka_jeep_blinde_blanc", { "", "", -1 } },
            { "Urbanized_GranTurismo_aquaberry", { "", "", -1 } },
            { "Urbanized_GranTurismo_Magma", { "", "", -1 } },
            { "Urbanized_GranTurismo_Acid", { "", "", -1 } },
            { "Urbanized_GranTurismo_Chrome", { "", "", -1 } },
            { "Urbanized_GranTurismo_Gold", { "", "", -1 } },
            { "Urbanized_GranTurismo_RoseGold", { "", "", -1 } },
            { "Urbanized_GranTurismo_Rose", { "", "", -1 } },
            { "Urbanized_GranTurismo_Ocean", { "", "", -1 } },
            { "Urbanized_GranTurismo_Inferno", { "", "", -1 } },
            { "Urbanized_GranTurismo_Midnight", { "", "", -1 } },
            { "Urbanized_LP700_aquaberry", { "", "", -1 } },
            { "Urbanized_LP700_Magma", { "", "", -1 } },
            { "Urbanized_LP700_Acid", { "", "", -1 } },
            { "Urbanized_LP700_Chrome", { "", "", -1 } },
            { "Urbanized_LP700_Gold", { "", "", -1 } },
            { "Urbanized_LP700_RoseGold", { "", "", -1 } },
            { "Urbanized_LP700_Rose", { "", "", -1 } },
            { "Urbanized_LP700_Ocean", { "", "", -1 } },
            { "Urbanized_LP700_Inferno", { "", "", -1 } },
            { "Urbanized_LP700_Midnight", { "", "", -1 } },
            { "ivory_evox_aquaberry", { "", "", -1 } },
            { "ivory_evox_Magma", { "", "", -1 } },
            { "ivory_evox_Acid", { "", "", -1 } },
            { "ivory_evox_Chrome", { "", "", -1 } },
            { "ivory_evox_Gold", { "", "", -1 } },
            { "ivory_evox_RoseGold", { "", "", -1 } },
            { "ivory_evox_Rose", { "", "", -1 } },
            { "ivory_evox_Ocean", { "", "", -1 } },
            { "ivory_evox_Inferno", { "", "", -1 } },
            { "ivory_evox_Midnight", { "", "", -1 } },
        };
    };

    class don_car_sped2 {
        side = "civ";
        conditions = "call life_donlevel >=1";
        vehicles[] = {
            { "red_charger_aquaberry", { "", "", -1 } },
            { "red_charger_magma", { "", "", -1 } },
            { "red_charger_acid", { "", "", -1 } },
            { "red_charger_chrome", { "", "", -1 } },
            { "red_charger_gold", { "", "", -1 } },
            { "red_charger_roseGold", { "", "", -1 } },
            { "red_charger_rose", { "", "", -1 } },
            { "red_charger_ocean", { "", "", -1 } },
            { "red_charger_inferno", { "", "", -1 } },
            { "red_charger_midnight", { "", "", -1 } },
            { "red_suburban_aquaberry", { "", "", -1 } },
            { "red_suburban_magma", { "", "", -1 } },
            { "red_suburban_acid", { "", "", -1 } },
            { "red_suburban_chrome", { "", "", -1 } },
            { "red_suburban_gold", { "", "", -1 } },
            { "red_suburban_roseGold", { "", "", -1 } },
            { "red_suburban_rose", { "", "", -1 } },
            { "red_suburban_ocean", { "", "", -1 } },
            { "red_suburban_inferno", { "", "", -1 } },
            { "red_suburban_midnight", { "", "", -1 } },
            { "red_corvette_aquaberry", { "", "", -1 } },
            { "red_corvette_magma", { "", "", -1 } },
            { "red_corvette_acid", { "", "", -1 } },
            { "red_corvette_chrome", { "", "", -1 } },
            { "red_corvette_gold", { "", "", -1 } },
            { "red_corvette_roseGold", { "", "", -1 } },
            { "red_corvette_rose", { "", "", -1 } },
            { "red_corvette_ocean", { "", "", -1 } },
            { "red_corvette_inferno", { "", "", -1 } },
            { "red_corvette_midnight", { "", "", -1 } },
            { "A3L_Ford_Mustang_RedTail", { "", "", -1 } },
            { "A3L_Ford_Mustang_Sticker", { "", "", -1 } },
            { "A3L_Ford_Mustang_Rs3", { "", "", -1 } },
            { "A3L_Ford_Mustang_Roush", { "", "", -1 } },
            { "A3L_Ford_Mustang_Monster", { "", "", -1 } },
            { "A3L_Ford_Mustang_Falken", { "", "", -1 } },
            { "A3L_Ford_Mustang_blackbird", { "", "", -1 } },
            { "A3L_Ford_Mustang_Cobra", { "", "", -1 } },
            { "ivory_lp560_don2", { "", "", -1 } },
            { "IVORY_PRIUS_WTF", { "", "", -1 } },
            { "IVORY_PRIUS_Anime", { "", "", -1 } },
            { "IVORY_PRIUS_Animu", { "", "", -1 } },
            { "IVORY_PRIUS_Yankes", { "", "", -1 } },
            { "A3L_GMC_Van_Shark", { "", "", -1 } },
            { "A3L_GMC_Van_Rockstar", { "", "", -1 } },
            { "A3L_GMC_Van_SWAGGY", { "", "", -1 } },
            { "A3L_GMC_Van_Scoobydoo", { "", "", -1 } },
            { "A3L_GMC_Van_Monster", { "", "", -1 } },
            { "A3L_GMC_Van_LOST", { "", "", -1 } },
            { "A3L_GMC_Van_HGE", { "", "", -1 } },
            { "A3L_GMC_Van_Gangbang", { "", "", -1 } },
            { "A3L_GMC_Van_Dew", { "", "", -1 } },
            { "A3L_GMC_Van_Ghost", { "", "", -1 } },
            { "Urbanized_LaFerrari_Lime_S", { "", "", -1 } },
            { "Urbanized_LaFerrari_Blue_S", { "", "", -1 } },
            { "Urbanized_LaFerrari_Black_S", { "", "", -1 } },
            { "shounka_monsteur_noir", { "", "", -1 } },
            { "shounka_monsteur_bleufonce", { "", "", -1 } },
            { "shounka_monsteur_grise", { "", "", -1 } },
            { "shounka_monsteur_orange", { "", "", -1 } },
            { "shounka_monsteur_rouge", { "", "", -1 } },
            { "shounka_monsteur_rose", { "", "", -1 } },
            { "shounka_monsteur_violet", { "", "", -1 } },
            { "shounka_monsteur_jaune", { "", "", -1 } },
            { "A3L_BMW_M6_MpowerSport", { "", "", -1 } },
            { "A3L_BMW_M6_M6Racing", { "", "", -1 } },
            { "A3L_BMW_M6_Anime", { "", "", -1 } },
            { "ivory_lp560_aquaberry", { "", "", -1 } },
            { "ivory_lp560_Magma", { "", "", -1 } },
            { "ivory_lp560_Acid", { "", "", -1 } },
            { "ivory_lp560_Chrome", { "", "", -1 } },
            { "ivory_lp560_Gold", { "", "", -1 } },
            { "ivory_lp560_RoseGold", { "", "", -1 } },
            { "ivory_lp560_Rose", { "", "", -1 } },
            { "ivory_lp560_Ocean", { "", "", -1 } },
            { "ivory_lp560_Inferno", { "", "", -1 } },
            { "ivory_lp560_Midnight", { "", "", -1 } },
            { "ivory_wrx_aquaberry", { "", "", -1 } },
            { "ivory_wrx_Magma", { "", "", -1 } },
            { "ivory_wrx_Acid", { "", "", -1 } },
            { "ivory_wrx_Chrome", { "", "", -1 } },
            { "ivory_wrx_Gold", { "", "", -1 } },
            { "ivory_wrx_RoseGold", { "", "", -1 } },
            { "ivory_wrx_Rose", { "", "", -1 } },
            { "ivory_wrx_Ocean", { "", "", -1 } },
            { "ivory_wrx_Inferno", { "", "", -1 } },
            { "ivory_wrx_Midnight", { "", "", -1 } },
            { "Urbanized_G65_aquaberry", { "", "", -1 } },
            { "Urbanized_G65_Magma", { "", "", -1 } },
            { "Urbanized_G65_Acid", { "", "", -1 } },
            { "Urbanized_G65_Chrome", { "", "", -1 } },
            { "Urbanized_G65_Gold", { "", "", -1 } },
            { "Urbanized_G65_RoseGold", { "", "", -1 } },
            { "Urbanized_G65_Rose", { "", "", -1 } },
            { "Urbanized_G65_Ocean", { "", "", -1 } },
            { "Urbanized_G65_Inferno", { "", "", -1 } },
            { "Urbanized_G65_Midnight", { "", "", -1 } },
        };
    };

    class volkswagen_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "red_beetle_66", { "", "", -1 } },
            { "A3L_Touareg_Red", { "", "", -1 } },
            { "A3L_Touareg_Black", { "", "", -1 } },
            { "A3L_Touareg_DarkBlue", { "", "", -1 } },
            { "A3L_Touareg_White", { "", "", -1 } },
            { "A3L_Touareg_Yellow", { "", "", -1 } },
            { "A3L_Touareg_Pink", { "", "", -1 } },
            { "A3L_Touareg_Grey", { "", "", -1 } },
            { "A3L_Touareg_Purple", { "", "", -1 } },
            { "A3L_Touareg_Orange", { "", "", -1 } },
            { "Mrshounka_golfvi_bleufonce", { "", "", -1 } },
            { "Mrshounka_golfvi_grise", { "", "", -1 } },
            { "Mrshounka_golfvi_jaune", { "", "", -1 } },
            { "Mrshounka_golfvi_civ", { "", "", -1 } },
            { "Mrshounka_golfvi_noir", { "", "", -1 } },
            { "Mrshounka_golfvi_orange", { "", "", -1 } },
            { "Mrshounka_golfvi_rose", { "", "", -1 } },
            { "Mrshounka_golfvi_rouge", { "", "", -1 } },
            { "Mrshounka_golfvi_violet", { "", "", -1 } },
        };
    };

    class peugeot_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "A3L_Peugeot_308_RCZ_Red", { "", "", -1 } },
            { "A3L_Peugeot_308_RCZ_Black", { "", "", -1 } },
            { "A3L_Peugeot_308_RCZ_DarkBlue", { "", "", -1 } },
            { "A3L_Peugeot_308_RCZ_Yellow", { "", "", -1 } },
            { "A3L_Peugeot_308_RCZ_Pink", { "", "", -1 } },
            { "A3L_Peugeot_308_RCZ_Grey", { "", "", -1 } },
            { "A3L_Peugeot_308_RCZ_Orange", { "", "", -1 } },
        };
    };

    class bmw_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "ivory_e36", { "", "", -1 } },
            { "ivory_m3", { "", "", -1 } },
            { "ivory_m3_gts", { "", "", -1 } },
            { "A3L_BMW_M6_Grey", { "", "", -1 } },
            { "A3L_BMW_M6_Yellow", { "", "", -1 } },
            { "A3L_BMW_M6_Orange", { "", "", -1 } },
            { "A3L_BMW_M6_Red", { "", "", -1 } },
            { "A3L_BMW_M6_Black", { "", "", -1 } },
            { "A3L_BMW_M6_DarkBlue", { "", "", -1 } },
            { "A3L_BMW_M6_Purple", { "", "", -1 } },
            { "A3L_BMW_M6_Pink", { "", "", -1 } },
            { "A3L_BMW_M6_White", { "", "", -1 } },
        };
    };

    class chev_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "shounka_avalanche_noir", { "", "", -1 } },
            { "shounka_avalanche_bleufonce", { "", "", -1 } },
            { "shounka_avalanche_rouge", { "", "", -1 } },
            { "shounka_avalanche_jaune", { "", "", -1 } },
            { "shounka_avalanche_rose", { "", "", -1 } },
            { "shounka_avalanche_grise", { "", "", -1 } },
            { "shounka_avalanche_violet", { "", "", -1 } },
            { "shounka_avalanche_orange", { "", "", -1 } },
            { "shounka_avalanche_pussywagon", { "", "", -1 } },
            { "DAR_TahoeCivBlack", { "", "", -1 } },
            { "DAR_TahoeCivRed", { "", "", -1 } },
            { "DAR_TahoeCivBlue", { "", "", -1 } },
            { "DAR_TahoeCivSilver", { "", "", -1 } },
            { "DAR_TahoeCivGreen", { "", "", -1 } },
            { "DAR_TahoeCivOrange", { "", "", -1 } },
            { "DAR_TahoeCivPink", { "", "", -1 } },
            { "DAR_TahoeCivPurple", { "", "", -1 } },
            { "tw_cobalt", { "", "", -1 } },
            { "red_suburban_15", { "", "", -1 } },
            { "red_camaro_12", { "", "", -1 } },
            { "red_corvette_14", { "", "", -1 } },
            { "tw_van", { "", "", -1 } },
        };
    };

    class ford_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "tw_vic_taxi", { "", "", -1 } },
            { "tw_vic", { "", "", -1 } },
            { "red_taurus_10", { "", "", -1 } },
            { "A3L_Ford_Mustang_Red", { "", "", -1 } },
            { "A3L_Ford_Mustang_Black", { "", "", -1 } },
            { "A3L_Ford_Mustang_DarkBlue", { "", "", -1 } },
            { "A3L_Ford_Mustang_Yellow", { "", "", -1 } },
            { "A3L_Ford_Mustang_Pink", { "", "", -1 } },
            { "A3L_Ford_Mustang_Grey", { "", "", -1 } },
            { "A3L_Ford_Mustang_Purple", { "", "", -1 } },
            { "A3L_Ford_Mustang_Orange", { "", "", -1 } },
            { "A3L_Ford_Mustang_White", { "", "", -1 } },
            { "ADM_Ford_F100", { "", "", -1 } },
            { "red_f350_08", { "", "", -1 } },
            { "red_explorer_16", { "", "", -1 } },
            { "Quiet_ford_raptor_blanche_f", { "", "", -1 } },
            { "Quiet_ford_raptor_bleu_f", { "", "", -1 } },
            { "Quiet_ford_raptor_noir_f", { "", "", -1 } },
            { "Quiet_ford_raptor_rouge_f", { "", "", -1 } },
            { "Quiet_ford_raptor_chrome_f", { "", "", -1 } },
        };
    };

    class dodge_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "A3L_GrandCaravan", { "", "", -1 } },
            { "A3L_GrandCaravanBlk", { "", "", -1 } },
            { "A3L_GrandCaravanBlue", { "", "", -1 } },
            { "A3L_GrandCaravanGreen", { "", "", -1 } },
            { "A3L_GrandCaravanRed", { "", "", -1 } },
            { "A3L_GrandCaravanPurple", { "", "", -1 } },
            { "red_charger_15", { "", "", -1 } },
            { "red_charger_12", { "", "", -1 } },
            { "A3L_Challenger", { "", "", -1 } },
            { "A3L_ChallengerGreen", { "", "", -1 } },
            { "A3L_ChallengerRed", { "", "", -1 } },
            { "A3L_ChallengerWhite", { "", "", -1 } },
            { "A3L_ChallengerBlack", { "", "", -1 } },
            { "A3L_ChallengerBlue", { "", "", -1 } },
        };
    };

    class dezzie_car {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "IVORY_PRIUS", { "", "", -1 } },
            { "A3L_PriusHelloKitty", { "", "", -1 } },
            { "IVORY_R8", { "", "", -1 } },
            { "IVORY_R8SPYDER", { "", "", -1 } },
            { "Jonzie_Mini_Cooper_R_spec", { "", "", -1 } },
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "A3L_Karts", { "", "", -1 } },
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } },
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "license_civ_trucking";
        vehicles[] = {
            { "A3L_Hyster60", { "", "", -1 } },
            { "A3L_Dumptruck", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
            { "A3L_Bus", { "", "", -1 } },
            { "A3L_Towtruck_black", { "", "", -1 } },
            { "A3L_Towtruck_blue", { "", "", -1 } },
            { "A3L_Towtruck_green", { "", "", -1 } },
            { "A3L_Towtruck_orange", { "", "", -1 } },
            { "A3L_Towtruck_red", { "", "", -1 } },
            { "A3L_Towtruck_yellow", { "", "", -1 } },
            { "red_towtruck_08", { "", "", -1 } },
            { "Jonzie_Tow_Truck", { "", "", -1 } },
            { "A3L_GMC_Van_White", { "", "", -1 } },
            { "A3L_GMC_Van_Black", { "", "", -1 } },
            { "A3L_GMC_Van_DarkBlue", { "", "", -1 } },
            { "A3L_GMC_Van_Red", { "", "", -1 } },
            { "A3L_GMC_Van_Yellow", { "", "", -1 } },
            { "A3L_GMC_Van_Pink", { "", "", -1 } },
            { "A3L_GMC_Van_Grey", { "", "", -1 } },
            { "A3L_GMC_Van_Purple", { "", "", -1 } },
            { "A3L_GMC_Van_Orange", { "", "", -1 } },
            { "A3L_GMC_Van_HGE", { "", "", -1 } },
            { "A3L_GMC_Van_FBI", { "", "", -1 } },
            { "A3L_GMC_Van_Wifi", { "", "", -1 } },
            { "A3L_GMC_Van_PoGO", { "", "", -1 } },
            { "A3L_GMC_Van_Clothing", { "", "", -1 } },
            { "A3L_GMC_Van_Food", { "", "", -1 } },
            { "A3L_GMC_Van_General", { "", "", -1 } },
            { "A3L_Renault_Magnum", { "", "", -1 } },
            { "A3L_Renault_Magnum_Purple", { "", "", -1 } },
            { "A3L_Renault_Magnum_Blue", { "", "", -1 } },
            { "A3L_Renault_Magnum_Red", { "", "", -1 } },
            { "A3L_Renault_Magnum_Yellow", { "", "", -1 } },
            { "A3L_Renault_Magnum_Orange", { "", "", -1 } },
            { "A3L_Renault_Magnum_Black", { "", "", -1 } },
            { "A3L_Renault_Magnum_White", { "", "", -1 } },
            //{ "Jonzie_Western", { "", "", -1 } },
            //{ "Jonzie_Superliner", { "", "", -1 } },
            //{ "Jonzie_Curtain", { "", "", -1 } },
            //{ "Jonzie_Curtain_Roadtrain", { "", "", -1 } },
        };
    };

    class civ_air {
        side = "civ";
        conditions = "license_civ_pilot";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "ivory_b206", { "", "", -1 } },
            { "ivory_b206_news", { "", "", -1 } },
            { "IVORY_BELL512", { "", "", -1 } },
            { "IVORY_BELL512_Grey", { "", "", -1 } },
            { "IVORY_BELL512_Blue", { "", "", -1 } },
            { "IVORY_BELL512_Green", { "", "", -1 } },
            { "IVORY_BELL512_Yellow", { "", "", -1 } },
            { "GNT_C185BW", { "", "", -1 } },
            { "GNT_C185RW", { "", "", -1 } },
            { "GNT_C185YW", { "", "", -1 } },
            { "GNT_C185OW", { "", "", -1 } },
            { "GNT_C185BLW", { "", "", -1 } },
            { "GNT_C185R", { "", "", -1 } },
            { "C_Plane_Civil_01_F", { "", "", -1 } },
            { "IVORY_CRJ200_1", { "", "", -1 } },
            { "IVORY_ERJ135_1", { "", "", -1 } },
            { "IVORY_YAK42D_1", { "", "", -1 } },
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "license_civ_boat";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "A3L_JetSki", { "", "", -1 } },
            { "A3L_JetSki_Yellow", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } },
            { "red_searay_14_black", { "", "", -1 } },
            { "red_searay_14_blue", { "", "", -1 } },
            { "red_searay_14_white", { "", "", -1 } },
            { "red_searay_14_seablue", { "", "", -1 } },
            { "red_searay_14_shoreline", { "", "", -1 } },
            { "A3L_Ship", { "", "", -1 } },
        };
    };

    class reb_car {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {
            { "ivory_evox_reb", { "", "", -1 } },
            { "ivory_wrx_reb", { "", "", -1 } },
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "A3L_LandCruiser_bluecamo", { "", "", -1 } },
            { "A3L_LandCruiser_greycamo", { "", "", -1 } },
            { "A3L_LandCruiser_orangecamo", { "", "", -1 } },
            { "A3L_LandCruiser_pinkcamo", { "", "", -1 } },
            { "A3L_LandCruiser_purplecamo", { "", "", -1 } },
            { "A3L_LandCruiser_greencamo", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
        };
    };

    class med_shop {
        side = "med";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "Jonzie_Ambulance_Fire_Department", { "", "", -1 } },
            { "Jonzie_Ambulance_CancerAwareness", { "", "", -1 } },
            { "Jonzie_Ambulance_Hospital", { "", "", -1 } },
            { "Jonzie_Ambulance_EMS", { "", "", -1 } },
            { "red_ambulance_08_EMS", { "", "", -1 } },
            { "red_ambulance_08_SR", { "", "", -1 } },
            { "red_ambulance_08_FD", { "", "", -1 } },
            //{ "A3L_Stretcher_F", { "", "", -1 } },
            { "red_taurus_10_p_ems", { "", "", -1 } },
            { "red_charger_12_p_ems", { "", "", -1 } },
            { "red_charger_15_p_ems", { "", "", -1 } },
            { "red_suburban_15_p_ems", { "", "", -1 } },
            { "red_f350_08_p_ems", { "", "", -1 } },
            { "red_kawasaki_10_p_ems", { "", "", -1 } },
            { "red_porsche_12_p_u_ems", { "", "", -1 } },
            { "B_MRAP_01_SR", { "", "", -1 } },
            { "A3L_GMC_Van_Coroner", { "", "", -1 } },
            { "red_explorer_16_p_ems", { "", "", -1 } },
            { "A3L_GMC_Van_CDC", { "", "", -1 } },
            { "DAR_TahoeEMS", { "", "", -1 } },
            { "Urbanized_LP700_EMS", { "", "", -1 } },
            { "A3L_ladder", { "", "", -1 } },
            { "A3L_engine", { "", "", -1 } },
            { "Urbanized_67Mustang_EMS", { "", "", -1 } },
            { "tw_vic_ems", { "", "", -1 } },
        };
    };

    class med_air_hs {
        side = "med";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "EMS_ORCA", { "", "", -1 } },
            { "EMS_TARU", { "", "", -1 } },
            { "EMS_HUMMINGBIRD", { "", "", -1 } },
            { "IVORY_BELL512_EMS", { "", "", -1 } },
            { "EMS_HURON", { "", "", -1 } },
            { "A3L_EC635_SAR", { "", "", -1 } },
        };
    };

    class sp_car {
        side = "cop";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "tw_vic_marked", ""},
            { "tw_vic_slicktop", ""},
            { "red_charger_12_p", ""},
            { "red_charger_15_p", ""},
            { "red_charger_15_p_unmarked", ""},
            { "red_taurus_10_p", ""},
            { "red_taurus_10_p_slicktop", ""},
            { "red_explorer_16_p", ""},
            { "red_suburban_15_p", ""},
            { "red_suburban_15_p_slicktop", ""},
            { "red_f350_08_p", ""},
            { "red_kawasaki_10_p", ""},
            { "Mrshounka_ducati_police_p", ""}
        };
    };

    class cop_car {
        side = "cop";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "tw_vic_marked", { "", "", -1 } },
            { "tw_vic_slicktop", { "", "", -1 } },
            { "tw_vic_unmarked", { "", "", -1 } },
            { "red_charger_12_p", { "", "", -1 } },
            { "red_charger_12_p_unmarked", { "", "", -1 } },
            { "red_charger_15_p", { "", "", -1 } },
            { "red_charger_15_p_unmarked", { "", "", -1 } },
            { "red_taurus_10_p", { "", "", -1 } },
            { "red_taurus_10_p_slicktop", { "", "", -1 } },
            { "red_f350_08_p", { "", "", -1 } },
            { "red_suburban_15_p", { "", "", -1 } },
            { "red_suburban_15_p_slicktop", { "", "", -1 } },
            { "red_kawasaki_10_p", { "", "", -1 } },
            { "red_camaro_12_unmarked", { "", "", -1 } },
            { "ivory_m3_unmarked", { "", "", -1 } },
            { "ivory_wrx_unmarked", { "", "", -1 } },
            { "ivory_isf_unmarked", { "", "", -1 } },
            { "ivory_rs4_unmarked", { "", "", -1 } },
            { "Urbanized_CTSV_UC1", { "", "", -1 } },
            { "Urbanized_CTSV_UC2", { "", "", -1 } },
            { "Urbanized_CTSV_UC3", { "", "", -1 } },
            { "ivory_evox_unmarked", { "", "", -1 } },
            { "Urbanized_67Mustang_UC1", { "", "", -1 } },
            { "Urbanized_67Mustang_UC2", { "", "", -1 } },
            { "Urbanized_67Mustang_UC3", { "", "", -1 } },
            { "red_explorer_16_p", { "", "", -1 } },
            { "A3L_jailBus", { "", "", -1 } },
        };
    };

    class dtu_car {
        side = "cop";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "Jonzie_Mini_Cooper", { "", "", -1 } },
            { "A3L_Cooper_concept_blue", { "", "", -1 } },
            { "A3L_Cooper_concept_black", { "", "", -1 } },
            { "A3L_Cooper_concept_red", { "", "", -1 } },
            { "A3L_Cooper_concept_white", { "", "", -1 } },
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "A3L_PuntoRed", { "", "", -1 } },
            { "A3L_PuntoBlack", { "", "", -1 } },
            { "A3L_PuntoWhite", { "", "", -1 } },
            { "A3L_PuntoGrey", { "", "", -1 } },
            { "A3L_RegalBlack", { "", "", -1 } },
            { "A3L_RegalBlue", { "", "", -1 } },
            { "A3L_RegalOrange", { "", "", -1 } },
            { "A3L_RegalRed", { "", "", -1 } },
            { "A3L_RegalWhite", { "", "", -1 } },
            { "S_Rangerover_Black", { "", "", -1 } },
            { "S_Rangerover_Red", { "", "", -1 } },
            { "S_Rangerover_Blue", { "", "", -1 } },
            { "S_Rangerover_Green", { "", "", -1 } },
            { "S_Rangerover_Purple", { "", "", -1 } },
            { "S_Rangerover_Grey", { "", "", -1 } },
            { "S_Rangerover_Orange", { "", "", -1 } },
            { "S_Rangerover_White", { "", "", -1 } },
            { "A3L_RX7_Blue", { "", "", -1 } },
            { "A3L_RX7_Red", { "", "", -1 } },
            { "A3L_RX7_White", { "", "", -1 } },
            { "A3L_RX7_Black", { "", "", -1 } },
            { "A3L_Lincoln_Red", { "", "", -1 } },
            { "A3L_Lincoln_Black", { "", "", -1 } },
            { "A3L_Lincoln_DarkBlue", { "", "", -1 } },
            { "A3L_Lincoln_Yellow", { "", "", -1 } },
            { "A3L_Lincoln_Pink", { "", "", -1 } },
            { "A3L_Lincoln_Grey", { "", "", -1 } },
            { "A3L_Lincoln_Purple", { "", "", -1 } },
            { "A3L_Lincoln_Orange", { "", "", -1 } },
            { "A3L_Smartcar_Red", { "", "", -1 } },
            { "A3L_Smartcar_Black", { "", "", -1 } },
            { "A3L_Smartcar_Blue", { "", "", -1 } },
            { "tw_truck", { "", "", -1 } },
            { "tw_truck_grey", { "", "", -1 } },
            { "tw_truck_blue", { "", "", -1 } },
            { "tw_truck_red", { "", "", -1 } },
            { "tw_truck_yellow", { "", "", -1 } },
            { "tw_truck_orange", { "", "", -1 } },
            { "tw_truck_t", { "", "", -1 } },
            { "tw_truck_grey_t", { "", "", -1 } },
            { "tw_truck_blue_t", { "", "", -1 } },
            { "tw_truck_red_t", { "", "", -1 } },
            { "tw_truck_yellow_t", { "", "", -1 } },
            { "tw_truck_orange_t", { "", "", -1 } },
        };
    };

    class dtu_exotic {
        side = "cop";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "A3L_Alfa_Romeo_White", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Black", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Red", { "", "", -1 } },
            { "A3L_Alfa_Romeo_DarkBlue", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Yellow", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Pink", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Grey", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Purple", { "", "", -1 } },
            { "A3L_Alfa_Romeo_Orange", { "", "", -1 } },
            { "A3L_Citreon_C4_White", { "", "", -1 } },
            { "A3L_Citreon_C4_Black", { "", "", -1 } },
            { "A3L_Citreon_C4_Red", { "", "", -1 } },
            { "A3L_Citreon_C4_DarkBlue", { "", "", -1 } },
            { "A3L_Citreon_C4_Yellow", { "", "", -1 } },
            { "A3L_Citreon_C4_Pink", { "", "", -1 } },
            { "A3L_Citreon_C4_Grey", { "", "", -1 } },
            { "A3L_Citreon_C4_Purple", { "", "", -1 } },
            { "A3L_Citreon_C4_Orange", { "", "", -1 } },
            { "A3L_Citreon_DS3_White", { "", "", -1 } },
            { "A3L_Citreon_DS3_Black", { "", "", -1 } },
            { "A3L_Citreon_DS3_Red", { "", "", -1 } },
            { "A3L_Citreon_DS3_DarkBlue", { "", "", -1 } },
            { "A3L_Citreon_DS3_Yellow", { "", "", -1 } },
            { "A3L_Citreon_DS3_Pink", { "", "", -1 } },
            { "A3L_Citreon_DS3_Grey", { "", "", -1 } },
            { "A3L_Citreon_DS3_Purple", { "", "", -1 } },
            { "A3L_Citreon_DS3_Orange", { "", "", -1 } },
            { "A3L_S60_White", { "", "", -1 } },
            { "A3L_S60_Red", { "", "", -1 } },
            { "A3L_S60_Pink", { "", "", -1 } },
            { "A3L_S60_DarkBlue", { "", "", -1 } },
            { "A3L_S60_Black", { "", "", -1 } },
            { "A3L_S60_Yellow", { "", "", -1 } },
            { "A3L_S60_Orange", { "", "", -1 } },
            { "A3L_H1_White", { "", "", -1 } },
            { "A3L_H1_Red", { "", "", -1 } },
            { "A3L_H1_Pink", { "", "", -1 } },
            { "A3L_H1_DarkBlue", { "", "", -1 } },
            { "A3L_H1_Black", { "", "", -1 } },
            { "A3L_H1_Yellow", { "", "", -1 } },
            { "A3L_H1_Orange", { "", "", -1 } },
            { "A3L_Zonda_White", { "", "", -1 } },
            { "A3L_Zonda_Red", { "", "", -1 } },
            { "A3L_Zonda_Pink", { "", "", -1 } },
            { "A3L_Zonda_DarkBlue", { "", "", -1 } },
            { "A3L_Zonda_Black", { "", "", -1 } },
            { "A3L_Zonda_Yellow", { "", "", -1 } },
            { "A3L_Zonda_Orange", { "", "", -1 } },
            { "A3L_Mercedes_ML63_White", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Red", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Pink", { "", "", -1 } },
            { "A3L_Mercedes_ML63_DarkBlue", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Black", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Yellow", { "", "", -1 } },
            { "A3L_Mercedes_ML63_Orange", { "", "", -1 } },
            { "Urbanized_67Mustang_black", { "", "", -1 } },
            { "Urbanized_67Mustang_white", { "", "", -1 } },
            { "Urbanized_67Mustang_blue", { "", "", -1 } },
            { "Urbanized_67Mustang_orange", { "", "", -1 } },
            { "Urbanized_67Mustang_darkred", { "", "", -1 } },
            { "UG_Hornet_C", { "", "", -1 } },
            { "ivory_rs4", { "", "", -1 } },
            { "ivory_rs4_taxi", { "", "", -1 } },
            { "S_McLarenP1_Black", { "", "", -1 } },
            { "S_McLarenP1_Blue", { "", "", -1 } },
            { "S_McLarenP1_Orange", { "", "", -1 } },
            { "S_McLarenP1_White", { "", "", -1 } },
            { "S_McLarenP1_Yellow", { "", "", -1 } },
            { "S_McLarenP1_Silver", { "", "", -1 } },
            { "A3L_Veyron", { "", "", -1 } },
            { "Urbanized_427_black", { "", "", -1 } },
            { "Urbanized_427_white", { "", "", -1 } },
            { "Urbanized_427_blue", { "", "", -1 } },
            { "Urbanized_427_pink", { "", "", -1 } },
            { "Urbanized_427_orange", { "", "", -1 } },
            { "Urbanized_427_red", { "", "", -1 } },
            { "Urbanized_427_yellow", { "", "", -1 } },
            { "Urbanized_CTSV_red", { "", "", -1 } },
            { "Urbanized_CTSV_black", { "", "", -1 } },
            { "Urbanized_CTSV_white", { "", "", -1 } },
            { "Urbanized_CTSV_blue", { "", "", -1 } },
            { "Urbanized_CTSV_purple", { "", "", -1 } },
            { "Urbanized_CTSV_pink", { "", "", -1 } },
            { "Urbanized_CTSV_orange", { "", "", -1 } },
            { "Urbanized_CTSV_yellow", { "", "", -1 } },
            { "Urbanized_CTSV_Lime", { "", "", -1 } },
            { "ivory_190e", { "", "", -1 } },
            { "ivory_190e_taxi", { "", "", -1 } },
            { "ivory_gti", { "", "", -1 } },
        };
    };

    class dtu_air {
        side = "cop";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "ivory_b206", { "", "", -1 } },
            { "ivory_b206_news", { "", "", -1 } },
            { "IVORY_BELL512", { "", "", -1 } },
            { "IVORY_BELL512_Grey", { "", "", -1 } },
            { "IVORY_BELL512_Blue", { "", "", -1 } },
            { "IVORY_BELL512_Green", { "", "", -1 } },
            { "IVORY_BELL512_Yellow", { "", "", -1 } },
            { "GNT_C185BW", { "", "", -1 } },
            { "GNT_C185RW", { "", "", -1 } },
            { "GNT_C185YW", { "", "", -1 } },
            { "GNT_C185OW", { "", "", -1 } },
            { "GNT_C185BLW", { "", "", -1 } },
            { "GNT_C185R", { "", "", -1 } },
            { "C_Plane_Civil_01_F", { "", "", -1 } },
            { "IVORY_CRJ200_1", { "", "", -1 } },
            { "IVORY_ERJ135_1", { "", "", -1 } },
            { "IVORY_YAK42D_1", { "", "", -1 } },
        };
    };

    class dtu_truck {
        side = "cop";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "A3L_Hyster60", { "", "", -1 } },
            { "A3L_Dumptruck", { "", "", -1 } },
            { "C_Van_01_box_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
            { "A3L_Bus", { "", "", -1 } },
            { "A3L_Towtruck_black", { "", "", -1 } },
            { "A3L_Towtruck_blue", { "", "", -1 } },
            { "A3L_Towtruck_green", { "", "", -1 } },
            { "A3L_Towtruck_orange", { "", "", -1 } },
            { "A3L_Towtruck_red", { "", "", -1 } },
            { "A3L_Towtruck_yellow", { "", "", -1 } },
            { "red_towtruck_08", { "", "", -1 } },
            { "Jonzie_Tow_Truck", { "", "", -1 } },
            { "A3L_GMC_Van_White", { "", "", -1 } },
            { "A3L_GMC_Van_Black", { "", "", -1 } },
            { "A3L_GMC_Van_DarkBlue", { "", "", -1 } },
            { "A3L_GMC_Van_Red", { "", "", -1 } },
            { "A3L_GMC_Van_Yellow", { "", "", -1 } },
            { "A3L_GMC_Van_Pink", { "", "", -1 } },
            { "A3L_GMC_Van_Grey", { "", "", -1 } },
            { "A3L_GMC_Van_Purple", { "", "", -1 } },
            { "A3L_GMC_Van_Orange", { "", "", -1 } },
            { "A3L_GMC_Van_HGE", { "", "", -1 } },
            { "A3L_GMC_Van_FBI", { "", "", -1 } },
            { "A3L_GMC_Van_Wifi", { "", "", -1 } },
            { "A3L_GMC_Van_PoGO", { "", "", -1 } },
            { "A3L_GMC_Van_Clothing", { "", "", -1 } },
            { "A3L_GMC_Van_Food", { "", "", -1 } },
            { "A3L_GMC_Van_General", { "", "", -1 } },
            { "A3L_Renault_Magnum", { "", "", -1 } },
            { "A3L_Renault_Magnum_Purple", { "", "", -1 } },
            { "A3L_Renault_Magnum_Blue", { "", "", -1 } },
            { "A3L_Renault_Magnum_Red", { "", "", -1 } },
            { "A3L_Renault_Magnum_Yellow", { "", "", -1 } },
            { "A3L_Renault_Magnum_Orange", { "", "", -1 } },
            { "A3L_Renault_Magnum_Black", { "", "", -1 } },
            { "A3L_Renault_Magnum_White", { "", "", -1 } },
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "EC635_Unarmed", { "", "", -1 } },
            { "IVORY_BELL512_STATEPOLICE", { "", "", -1 } },
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "MELB_MH6M", { "", "", -1 } },
            { "SP_M900", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
        };
    };

    class cop_airhq {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "EC635_Unarmed", { "", "", -1 } },
            { "IVORY_BELL512_STATEPOLICE", { "", "", -1 } },
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "MELB_MH6M", { "", "", -1 } },
            { "SP_M900", { "", "", -1 } },
            { "B_Heli_Light_01_F", "call life_coplevel == 9" }
        };
    };

    class cop_ship {
        side = "cop";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "A3L_JetSki", { "", "", -1 } },
            { "A3L_JetSki_Yellow", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } },
            { "red_searay_14_black", { "", "", -1 } },
            { "red_searay_14_blue", { "", "", -1 } },
            { "red_searay_14_white", { "", "", -1 } },
            { "red_searay_14_seablue", { "", "", -1 } },
            { "red_searay_14_shoreline", { "", "", -1 } },
            { "A3L_Ship", { "", "", -1 } },
        };
    };

    class ems_ship {
        side = "med";
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", { "", "", -1 } },
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "A3L_JetSki", { "", "", -1 } },
            { "A3L_JetSki_Yellow", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } },
            { "red_searay_14_black", { "", "", -1 } },
            { "red_searay_14_blue", { "", "", -1 } },
            { "red_searay_14_white", { "", "", -1 } },
            { "red_searay_14_seablue", { "", "", -1 } },
            { "red_searay_14_shoreline", { "", "", -1 } },
            { "A3L_Ship", { "", "", -1 } },
        };
    };

    class DoJ_Car_Shop {
        side = "civ";
        conditions = "call life_dojlevel >=1";
        vehicles[] = {
            { "red_charger_12_DOJ", { "", "", -1 } },
            { "Urbanized_G65_DOJ", { "", "", -1 } },
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    // Tim's Additions

    //World Fine Motors
    class ivory_rev {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {
            { "Matte White", "civ", {
                "#(argb,8,8,3)color(1,1,1,1.0,CO)"
            }, "" },
            { "Matte Black", "civ", {
                "#(argb,8,8,3)color(0,0,0,1.0,CO)"
            }, "" },
            { "Matte Blue", "civ", {
                "#(argb,8,8,3)color(0,0.501961,1,1.0,CO)"
            }, "" },
            { "Matte Pink", "civ", {
                "#(argb,8,8,3)color(1,0.501961,1,1.0,CO)"
            }, "" },
            { "Matte Green", "civ", {
                "#(argb,8,8,3)color(0,0.25098,0,1.0,CO)"
            }, "" },
            { "Matte Red", "civ", {
                "#(argb,8,8,3)color(0.541176,0,0,1.0,CO)"
            }, "" },
            { "Matte Purple", "civ", {
                "#(argb,8,8,3)color(1,0,1,1.0,CO)"
            }, "" },
            { "Sports 1", "civ", {
                "\IVORY_REV\data\lamborghini_reventon_livery01_hr.paa"
            }, "" },
            { "Sports 2", "civ", {
                "\IVORY_REV\data\lamborghini_reventon_livery02_hr.paa"
            }, "" },
            { "Sports 3", "civ", {
                "\IVORY_REV\data\lamborghini_reventon_livery03_hr.paa"
            }, "" },
            { "Sports 4", "civ", {
                "\IVORY_REV\data\lamborghini_reventon_livery04_hr.paa"
            }, "" }
        };
    };

    class quiet_Bugatti_blanche_f {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Jonzie_Viper {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Jonzie_Escalade {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class shounka_gt_bleufonce {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class shounka_gt_grise {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class shounka_gt_jaune {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class shounka_gt_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class shounka_gt_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class shounka_gt_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class shounka_gt_rouge {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class shounka_gt_violet {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Mrshounka_agera_p_bleu {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2500000;
        textures[] = {};
    };

    class Mrshounka_agera_p_jaune {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2500000;
        textures[] = {};
    };

    class Mrshounka_agera_p_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2500000;
        textures[] = {};
    };

    class shounka_f430_spider_bleufonce {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = {};
    };

    class shounka_f430_spider_grise {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = {};
    };

    class shounka_f430_spider_jaune {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = {};
    };

    class shounka_f430_spider_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = {};
    };

    class shounka_f430_spider_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = {};
    };

    class shounka_f430_spider_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = {};
    };

    class shounka_f430_spider_rouge {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = {};
    };

    class shounka_f430_spider_violet {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_bleufonce {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2450000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_grise {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2450000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_jaune {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2450000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2450000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2450000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2450000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_rouge {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2450000;
        textures[] = {};
    };

    class Mrshounka_lykan_c_violet {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2450000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_bleufonce {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_grise {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_jaune {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_rouge {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Mrshounka_pagani_c_violet {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_bleu {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_jaune {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class mrshounka_huracan_c_bleufonce {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class mrshounka_huracan_c_grise {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class mrshounka_huracan_c_jaune {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class mrshounka_huracan_c_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class mrshounka_huracan_c_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class mrshounka_huracan_c_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class mrshounka_huracan_c_rouge {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class mrshounka_huracan_c_violet {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_bf {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_g {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_j {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_o {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_r {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_v {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_bf {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_g {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_j {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_o {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_r {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_v {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class tw_harley_blue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class tw_harley_white {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class tw_harley_red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class tw_harley_metal {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class tw_harley_gay {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class tw_harley_skeleton {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class tw_harley_limited {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class tw_harley_demon {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class tw_harley_orig1 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class tw_harley_orig2 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {};
    };

    class ivory_lfa {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_supra {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_supra_tuned {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1100000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_c {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_elise {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_isf {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_lp560 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_wrx {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_gt500 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 450000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class Urbanized_LaFerrari_black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_white {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_blue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_purple {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_hotpink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_darkred {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_lime {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_white {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_blue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_darkred {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_458Ferrari_yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_LP700_black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_white {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_blue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_purple {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_lime {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_G65_black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_white {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_blue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_purple {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_lime {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class red_venomgt_11 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_xkrs_12 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_porsche_12 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_panamera_10 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_s65_12 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 950000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_vanquish_13 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_gs350_13 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_genesis_16 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class Urbanized_GranTurismo_black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_white {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_blue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_purple {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_darkred {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_hotpink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_lime {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    //Mitsubishi Dealership
    class ivory_evox {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_evox_tuned {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    //Deezie's Cars
    class IVORY_PRIUS {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class A3L_PriusHelloKitty {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class IVORY_R8 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 585000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class IVORY_R8SPYDER {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 386000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class Jonzie_Mini_Cooper_R_spec {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 70000;
        textures[] = {};
    };

    //EMS Vehicles
    class Jonzie_Ambulance_Fire_Department {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class Jonzie_Ambulance_EMS {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class Jonzie_Ambulance_Hospital {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class Jonzie_Ambulance_CancerAwareness {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class red_ambulance_08_EMS {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class red_ambulance_08_SR {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class red_ambulance_08_FD {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class A3L_Stretcher_F {
        vItemSpace = 1;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000;
        textures[] = {};
    };

    class red_taurus_10_p_ems {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "\red_config\red_taurus_10_p\skins\ems.paa"
            }, "" }
        };
    };

    class red_charger_15_p_ems {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "\red_config\red_charger_15_p\skins\ems.paa"
            }, "" }
        };
    };

    class red_charger_12_p_ems {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "\red_config\red_charger_12_p\skins\ems.paa"
            }, "" }
        };
    };

    class red_suburban_15_p_ems {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "\red_config\red_suburban_15_p\skins\ems.paa"
            }, "" }
        };
    };

    class red_f350_08_p_ems {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "\red_config\red_f350_08_p\skins\ems.paa"
            }, "" },
            { "Search and Rescue", "med", {
                "\red_config\red_f350_08_p\skins\sandr.paa"
            }, "" },
        };
    };

    class red_kawasaki_10_p_ems {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "\red_config\red_kawasaki_10_p\skins\ems.paa"
            }, "" }
        };
    };

    class red_porsche_12_p_u_ems {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "\red_config\red_porsche_12_pu\skins\ems.paa"
            }, "" }
        };
    };

    class red_explorer_16_p_ems {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "\red_config\red_explorer_16_p\skins\ems.paa"
            }, "" }
        };
    };

    class B_MRAP_01_SR {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class A3L_GMC_Van_Coroner {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class A3L_GMC_Van_CDC {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class DAR_TahoeEMS {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class Urbanized_LP700_EMS {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class A3L_ladder {
        vItemSpace = 60;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class A3L_engine {
        vItemSpace = 60;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class Urbanized_67Mustang_EMS {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class tw_vic_ems {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "EMS", "med", {
                "\tw_vic\Textures\ems.paa"
            }, "" }
        };
    };

    //EMS Air
    class EMS_ORCA {
        vItemSpace = 50;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class EMS_TARU {
        vItemSpace = 50;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class EMS_HUMMINGBIRD {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class IVORY_BELL512_EMS {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class EMS_HURON {
        vItemSpace = 75;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class A3L_EC635_SAR {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    //Exotic Car shop
    class A3L_Alfa_Romeo_White {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class A3L_Alfa_Romeo_Black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class A3L_Alfa_Romeo_Red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class A3L_Alfa_Romeo_DarkBlue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class A3L_Alfa_Romeo_Yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class A3L_Alfa_Romeo_Pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class A3L_Alfa_Romeo_Grey {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class A3L_Alfa_Romeo_Purple {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class A3L_Alfa_Romeo_Orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class A3L_Citreon_C4_White {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 73600;
        textures[] = {};
    };

    class shounka_mp4_bleufonce {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_mp4_grise {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_mp4_jaune {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_mp4_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_mp4_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_mp4_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_mp4_rouge {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_mp4_violet {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class A3L_Citreon_C4_Black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 73600;
        textures[] = {};
    };

    class A3L_Citreon_C4_Red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 73600;
        textures[] = {};
    };

    class A3L_Citreon_C4_DarkBlue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 73600;
        textures[] = {};
    };

    class A3L_Citreon_C4_Yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 73600;
        textures[] = {};
    };

    class A3L_Citreon_C4_Pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 73600;
        textures[] = {};
    };

    class A3L_Citreon_C4_Grey {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 73600;
        textures[] = {};
    };

    class A3L_Citreon_C4_Purple {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 73600;
        textures[] = {};
    };

    class A3L_Citreon_C4_Orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 73600;
        textures[] = {};
    };

    class A3L_Citreon_DS3_White {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_Citreon_DS3_Black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_Citreon_DS3_Red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_Citreon_DS3_DarkBlue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_Citreon_DS3_Yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_Citreon_DS3_Pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_Citreon_DS3_Grey {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_Citreon_DS3_Purple {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_Citreon_DS3_Orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_S60_White {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_S60_Red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_S60_Pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_S60_DarkBlue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_S60_Black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_S60_Yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_S60_Orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_H1_White {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 680000;
        textures[] = {};
    };

    class A3L_H1_Red {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 680000;
        textures[] = {};
    };

    class A3L_H1_Pink {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 680000;
        textures[] = {};
    };

    class A3L_H1_DarkBlue {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 680000;
        textures[] = {};
    };

    class A3L_H1_Black {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 680000;
        textures[] = {};
    };

    class A3L_H1_Yellow {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 680000;
        textures[] = {};
    };

    class A3L_H1_Orange {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 680000;
        textures[] = {};
    };

    class A3L_Zonda_White {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {};
    };

    class A3L_Zonda_Red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {};
    };

    class A3L_Zonda_Pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {};
    };

    class A3L_Zonda_DarkBlue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {};
    };

    class A3L_Zonda_Black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {};
    };

    class A3L_Zonda_Yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {};
    };

    class A3L_Zonda_Orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {};
    };

    class A3L_Mercedes_ML63_White {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class A3L_Mercedes_ML63_Red {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class A3L_Mercedes_ML63_Pink {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class A3L_Mercedes_ML63_DarkBlue {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class A3L_Mercedes_ML63_Black {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class A3L_Mercedes_ML63_Yellow {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class A3L_Mercedes_ML63_Orange {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {};
    };

    class Urbanized_67Mustang_black {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class Urbanized_67Mustang_white {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class Urbanized_67Mustang_blue {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class Urbanized_67Mustang_Orange {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class Urbanized_67Mustang_darkred {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class UG_Hornet_C {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_rs4 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_rs4_taxi {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {
            { "Taxi", "civ", {
                "\ivory_rs4\data\rs4_taxi.paa"
            }, "" }
        };
    };

    class S_McLarenP1_Black {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class S_McLarenP1_Blue {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class S_McLarenP1_Orange {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class S_McLarenP1_White {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class S_McLarenP1_Yellow {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class S_McLarenP1_Silver {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class A3L_Veyron {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class Urbanized_427_black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Urbanized_427_white {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Urbanized_427_blue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Urbanized_427_pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Urbanized_427_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Urbanized_427_red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Urbanized_427_yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Urbanized_CTSV_red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class Urbanized_CTSV_black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class Urbanized_CTSV_white {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class Urbanized_CTSV_blue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class Urbanized_CTSV_purple {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class Urbanized_CTSV_pink {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class Urbanized_CTSV_orange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class Urbanized_CTSV_yellow {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class Urbanized_CTSV_lime {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 900000;
        textures[] = {};
    };

    class ivory_190e {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_190e_taxi {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {
            { "Taxi", "civ", {
                "\ivory_190e\data\taxi.paa"
            }, "" }
        };
    };

    class ivory_gti {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    //Nissan Car Shop
    class ivory_r34 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class tw_s14 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class tw_s14_b {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 375000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class tw_s14_c {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 375000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class tw_s14_d {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 375000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class tw_s14_e {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 375000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class Nissan_GTR_White {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class Nissan_GTR_Black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class Nissan_GTR_DarkBlue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class Nissan_GTR_Red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class Nissan_GTR_Green {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    //Jeep Car Shop
    class A3L_JeepWhiteBlack {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 30750;
        textures[] = {};
    };

    class A3L_JeepRedBlack {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 30750;
        textures[] = {};
    };

    class A3L_JeepGreenBlack {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 30750;
        textures[] = {};
    };

    class A3L_JeepRedTan {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 30750;
        textures[] = {};
    };

    class A3L_JeepGrayBlack {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 30750;
        textures[] = {};
    };

    class A3L_LandCruiser_white {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 320000;
        textures[] = {};
    };

    class A3L_LandCruiser_grey {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 320000;
        textures[] = {};
    };

    class A3L_LandCruiser_red {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 320000;
        textures[] = {};
    };

    class A3L_LandCruiser_orange {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 320000;
        textures[] = {};
    };

    class A3L_LandCruiser_green {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 320000;
        textures[] = {};
    };

    class A3L_LandCruiser_blue {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 320000;
        textures[] = {};
    };

    class A3L_LandCruiser_black {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 320000;
        textures[] = {};
    };

    //Donation Car Shop
    class ivory_evox_don {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {
            { "Kidney Collection Agency", "civ", {
                "\ivory_evox\data\KCA.paa"
            }, "" }
        };
    };

    class A3L_GMC_Van_Don {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {
            { "Reapers", "civ", {
                "\a3l_donation\vehicles\Reapers.paa"
            }, "" }
        };
    };

    class red_charger_15_don {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class tw_vic_security {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 46500;
        textures[] = {
            { "Ravenclaw Towing", "civ", {
                "\tw_vic\textures\ravenclaw.paa"
            }, "" }
        };
    };

    class Jonzie_Ambulance_KCA {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 225000;
        textures[] = {};
    };

    class Urbanized_G65_BS {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class red_s65_12_don {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 950000;
        textures[] = {
            { "Lakeside Lotto", "civ", {
                "\red_config\red_s65_12\skins\Lotto.paa"
            }, "" }
        };
    };

    class Urbanized_G65_DON_Lotto {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class A3L_Towtruck_raven {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    //Donation Car Sped (meaning stupid? as in stupid for donating? LOL)
    class A3L_Atom {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class A3L_Delorean {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class A3L_Flipcar {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ADM_1969_Camaro {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class ADM_1969_Charger {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class ADM_1964_Impala {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class Mrshounka_Bowler_c {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class shounka_buggy_noir {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class shounka_monsteur {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class Jonzie_Datsun_Z432 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class Jonzie_XB {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class shounka_transam {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class UG_Hornet_S {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {
            { "Cars", "civ", {
                "\UG_Hornet\Textures\#(argb,8,8,3)color(0,0.04,0.17,1.0,CO)"
            }, "" }
        };
    };

    class Mrshounka_jeep_blinde_noir {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Mrshounka_jeep_blinde_bleu {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Mrshounka_jeep_blinde_rouge {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Mrshounka_jeep_blinde_violet {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Mrshounka_jeep_blinde_blanc {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_aquaberry {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_Magma {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_Acid {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_Chrome {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_Gold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_RoseGold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_Rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_Ocean {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_Inferno {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_GranTurismo_Midnight {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1400000;
        textures[] = {};
    };

    class Urbanized_LP700_aquaberry {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_Magma {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_Acid {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_Chrome {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_Gold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_RoseGold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_Rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_Ocean {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_Inferno {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class Urbanized_LP700_Midnight {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1600000;
        textures[] = {};
    };

    class ivory_evox_aquaberry {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class ivory_evox_Magma {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class ivory_evox_acid {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class ivory_evox_chrome{
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class ivory_evox_Gold {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class ivory_evox_RoseGold {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class ivory_evox_Rose {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class ivory_evox_Ocean {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class ivory_evox_Inferno {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    class ivory_evox_Midnight {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };

    //Donation Car Sped2 Shop
    class A3L_Ford_Mustang_Sticker {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Yellow {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_RedTail {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Rs3 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Roush {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Monster {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Falken {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_blackbird {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Cobra {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class ivory_lp560_don2 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {
            { "Black", "civ", {
                "\ivory_lp560\data\Kryblack.paa"
            }, "" },
            { "Blue", "civ", {
                "\ivory_lp560\data\Kryblue.paa"
            }, "" },
            { "Green", "civ", {
                "\ivory_lp560\data\Krygreen.paa"
            }, "" },
            { "Orange", "civ", {
                "\ivory_lp560\data\Kryorange.paa"
            }, "" },
            { "Pink", "civ", {
                "\ivory_lp560\data\Krypink.paa"
            }, "" },
            { "Red", "civ", {
                "\ivory_lp560\data\Kryred.paa"
            }, "" },
            { "Yellow", "civ", {
                "\ivory_lp560\data\Kryyellow.paa"
            }, "" },
            { "Purple", "civ", {
                "\ivory_lp560\data\Krypurple.paa"
            }, "" }
        };
    };

    class IVORY_PRIUS_WTF {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class IVORY_PRIUS_Anime {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class IVORY_PRIUS_Animu {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class IVORY_PRIUS_Yankes {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_GMC_Van_Shark {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class A3L_GMC_Van_Rockstar {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class A3L_GMC_Van_SWAGGY {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class A3L_GMC_Van_Scoobydoo {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class A3L_GMC_Van_Monster {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class A3L_GMC_Van_LOST {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class A3L_GMC_Van_HGE {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class A3L_GMC_Van_Gangbang {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class A3L_GMC_Van_Dew {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class A3L_GMC_Van_Ghost {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_Lime_S {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_Blue_S {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class Urbanized_LaFerrari_Black_S {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class shounka_monsteur_noir {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_monsteur_bleufonce {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_monsteur_grise {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_monsteur_orange {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_monsteur_rouge {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_monsteur_rose {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_monsteur_violet {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class shounka_monsteur_jaune {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class A3L_BMW_M6_MpowerSport {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_M6Racing {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_Anime {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class ivory_lp560_aquaberry {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_lp560_Magma {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_lp560_Acid {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_lp560_Chrome {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_lp560_Gold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_lp560_RoseGold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_lp560_Rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_lp560_Ocean {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_lp560_Inferno {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_lp560_Midnight {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class ivory_wrx_aquaberry {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class ivory_wrx_Magma {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class ivory_wrx_Acid {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class ivory_wrx_Chrome {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class ivory_wrx_Gold {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class ivory_wrx_RoseGold {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class ivory_wrx_Rose {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class ivory_wrx_Ocean {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class ivory_wrx_Inferno {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class ivory_wrx_Midnight {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 700000;
        textures[] = {};
    };

    class Urbanized_G65_yellow {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_aquaberry {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_Magma {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_acid {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_Chrome {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_Gold {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_RoseGold {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_Rose {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_Ocean {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_Inferno {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };

    class Urbanized_G65_Midnight {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1500000;
        textures[] = {};
    };
    
    class red_charger_aquaberry {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    
    class red_charger_magma {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    
    class red_charger_acid {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    
    class red_charger_chrome {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    
    class red_charger_gold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    
    class red_charger_rosegold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    
    class red_charger_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    
    class red_charger_ocean {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    
    class red_charger_inferno {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };
    
    class red_charger_midnight {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class red_suburban_aquaberry {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    
    class red_suburban_magma {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    
    class red_suburban_acid {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    
    class red_suburban_chrome {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    
    class red_suburban_gold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    
    class red_suburban_rosegold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    
    class red_suburban_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    
    class red_suburban_ocean {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    
    class red_suburban_inferno {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };
    
    class red_suburban_midnight {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    class red_corvette_aquaberry {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_corvette_magma {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_corvette_acid {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_corvette_chrome {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_corvette_gold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_corvette_rosegold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_corvette_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_corvette_ocean {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_corvette_inferno {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_corvette_midnight {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {};
    };
    
    class red_venomgt_aquaberry {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_venomgt_magma {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_venomgt_acid {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_venomgt_chrome {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_venomgt_gold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_venomgt_rosegold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_venomgt_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_venomgt_ocean {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_venomgt_inferno {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_venomgt_midnight {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1750000;
        textures[] = {};
    };

    class red_vanquish_aquaberry {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class red_vanquish_magma {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class red_vanquish_acid {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class red_vanquish_chrome {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class red_vanquish_gold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class red_vanquish_rosegold {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class red_vanquish_rose {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class red_vanquish_ocean {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    class red_vanquish_inferno {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };
    
    class red_vanquish_midnight {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {};
    };

    //Volksvagen Carz
    class red_beetle_66 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 33600;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class A3L_Touareg_Red {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65600;
        textures[] = {};
    };

    class A3L_Touareg_Black {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65600;
        textures[] = {};
    };

    class A3L_Touareg_DarkBlue {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65600;
        textures[] = {};
    };

    class A3L_Touareg_White {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65600;
        textures[] = {};
    };

    class A3L_Touareg_Yellow {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65600;
        textures[] = {};
    };

    class A3L_Touareg_Pink {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65600;
        textures[] = {};
    };

    class A3L_Touareg_Grey {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65600;
        textures[] = {};
    };

    class A3L_Touareg_Purple {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65600;
        textures[] = {};
    };

    class A3L_Touareg_Orange {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 65600;
        textures[] = {};
    };

    class Mrshounka_golfvi_bleufonce {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class Mrshounka_golfvi_grise {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class Mrshounka_golfvi_jaune {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class Mrshounka_golfvi_civ {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class Mrshounka_golfvi_noir {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class Mrshounka_golfvi_orange {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class Mrshounka_golfvi_rose {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class Mrshounka_golfvi_rouge {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class Mrshounka_golfvi_violet {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    //Peugeot Car Shop
    class A3L_Peugeot_308_RCZ_Red {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 97000;
        textures[] = {};
    };

    class A3L_Peugeot_308_RCZ_Black {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 97000;
        textures[] = {};
    };

    class A3L_Peugeot_308_RCZ_DarkBlue {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 97000;
        textures[] = {};
    };

    class A3L_Peugeot_308_RCZ_Yellow {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 97000;
        textures[] = {};
    };

    class A3L_Peugeot_308_RCZ_Pink {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 97000;
        textures[] = {};
    };

    class A3L_Peugeot_308_RCZ_Grey {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 97000;
        textures[] = {};
    };

    class A3L_Peugeot_308_RCZ_Orange {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 97000;
        textures[] = {};
    };

    //BMW Car Shop
    class ivory_e36 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_m3 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class ivory_m3_gts {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class A3L_BMW_M6_Grey {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_Yellow {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_Orange {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_Red {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_Black {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_DarkBlue {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_Purple {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_Pink {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    class A3L_BMW_M6_White {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 650000;
        textures[] = {};
    };

    //Chevy Car Shop
     class tw_van {
        vItemSpace = 60;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
         textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    },
    { "Vape Nation", "med", 
        {
            "\tw_van\textures\vapenation.paa"
        }, 
            "" 
    }
};
    };

    class tw_cobalt {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 67500;
         textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class shounka_avalanche_noir {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class shounka_avalanche_bleufonce {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class shounka_avalanche_rouge {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class shounka_avalanche_jaune {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class shounka_avalanche_rose {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class shounka_avalanche_grise {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class shounka_avalanche_violet {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class shounka_avalanche_orange {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 50000;
        textures[] = {};
    };

    class shounka_avalanche_pussywagon {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class DAR_TahoeCivBlack {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class DAR_TahoeCivRed {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class DAR_TahoeCivBlue {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class DAR_TahoeCivSilver {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class DAR_TahoeCivGreen {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class DAR_TahoeCivOrange {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class DAR_TahoeCivPink {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class DAR_TahoeCivPurple {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 125000;
        textures[] = {};
    };

    class red_suburban_15 {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_camaro_12 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 325000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_corvette_14 {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 800000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    //Ford Car Shop
    class tw_vic_taxi {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 46500;
        textures[] = {
            { "Taxi 1", "civ", {
                "\tw_vic\Textures\taxi1.paa"
            }, "" },
            { "Taxi 2", "civ", {
                "\tw_vic\Textures\taxi2.paa"
            }, "" },
            { "Taxi 3", "civ", {
                "\tw_vic\Textures\taxi3.paa"
            }, "" }
        };
    };

    class tw_vic {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 46500;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_taurus_10 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class A3L_Ford_Mustang_Red {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Black {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_DarkBlue {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Pink {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Grey {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Purple {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_Orange {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class A3L_Ford_Mustang_White {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {};
    };

    class ADM_Ford_F100 {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 500000;
        textures[] = {};
    };

    class red_f350_08 {
        vItemSpace = 75;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 90000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_explorer_16 {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class Quiet_ford_raptor_blanche_f {
        vItemSpace = 80;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    class Quiet_ford_raptor_bleu_f {
        vItemSpace = 80;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    class Quiet_ford_raptor_noir_f {
        vItemSpace = 80;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    class Quiet_ford_raptor_rouge_f {
        vItemSpace = 80;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    class Quiet_ford_raptor_chrome_f {
        vItemSpace = 80;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 95000;
        textures[] = {};
    };

    //Dodge Car Shop
    class A3L_GrandCaravan {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class A3L_GrandCaravanBlk {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class A3L_GrandCaravanBlue {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class A3L_GrandCaravanGreen {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class A3L_GrandCaravanRed {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class A3L_GrandCaravanPurple {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class red_charger_15 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class red_charger_12 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class A3L_Challenger {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };

    class A3L_ChallengerGreen {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };

    class A3L_ChallengerRed {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };

    class A3L_ChallengerWhite {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };

    class A3L_ChallengerBlack {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };

    class A3L_ChallengerBlue {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 400000;
        textures[] = {};
    };

    //Civ Car Shop
    class Jonzie_Mini_Cooper {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 7500;
        textures[] = {};
    };

    class A3L_Cooper_concept_blue {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class A3L_Cooper_concept_black {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class A3L_Cooper_concept_red {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class A3L_Cooper_concept_white {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class B_Quadbike_01_F {
        vItemSpace = 5;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Brown", "cop",
                {
                    "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
                }, 
                    "" 
            },
            { "Digi Desert", "reb", 
                {
                    "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
                }, 
                    "" 
            },
            { "Rebel Camo", "reb", 
                {
                    "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
                }, 
                    "" 
            },
            { "Black", "civ", 
                {
                    "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
                }, 
                    "" 
            },
            { "Blue", "civ", 
                {
                    "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
                }, 
                    "" 
            },
            { "Red", "civ", 
                {
                    "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
                }, 
                    "" 
            },
            { "White", "civ", 
                {
                    "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
                }, 
                    "" 
            },
            { "Digi Green", "civ", 
                {
                    "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
                }, 
                    "" 
            }
        };
    };

    class A3L_PuntoRed {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 9000;
        textures[] = {};
    };

    class A3L_PuntoBlack {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 9000;
        textures[] = {};
    };

    class A3L_PuntoWhite {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 9000;
        textures[] = {};
    };

    class A3L_PuntoGrey {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 9000;
        textures[] = {};
    };

    class A3L_RegalBlack {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = {};
    };

    class A3L_RegalBlue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = {};
    };

    class A3L_RegalOrange {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = {};
    };

    class A3L_RegalRed {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = {};
    };

    class A3L_RegalWhite {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 12000;
        textures[] = {};
    };

    class S_Rangerover_Black {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 55500;
        textures[] = {};
    };

    class S_Rangerover_Grey {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 55500;
        textures[] = {};
    };

    class S_Rangerover_Red {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 55500;
        textures[] = {};
    };

    class S_Rangerover_Blue {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 55500;
        textures[] = {};
    };

    class S_Rangerover_Green {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 55500;
        textures[] = {};
    };

    class S_Rangerover_Purple {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 55500;
        textures[] = {};
    };

    class S_Rangerover_Orange {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 55500;
        textures[] = {};
    };

    class S_Rangerover_White {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 55500;
        textures[] = {};
    };

    class A3L_RX7_Blue {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class A3L_RX7_Red {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class A3L_RX7_White {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class A3L_RX7_Black {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class A3L_Lincoln_Red {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Lincoln_Black {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Lincoln_DarkBlue {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Lincoln_Yellow {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Lincoln_Pink {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Lincoln_Grey {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Lincoln_Purple {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Lincoln_Orange {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Smartcar_Red {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 8000;
        textures[] = {};
    };

    class A3L_Smartcar_Black {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 8000;
        textures[] = {};
    };

    class A3L_Smartcar_Blue {
        vItemSpace = 20;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 8000;
        textures[] = {};
    };

    class tw_truck {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class tw_truck_grey {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class tw_truck_blue {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class tw_truck_red {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class tw_truck_yellow {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class tw_truck_orange {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class tw_truck_t {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    class tw_truck_grey_t {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    class tw_truck_blue_t {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    class tw_truck_red_t {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    class tw_truck_yellow_t {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    class tw_truck_orange_t {
        vItemSpace = 35;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };

    //Civ Truck Shop
    class A3L_Hyster60 {
        vItemSpace = 5;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 15220;
        textures[] = {};
    };

    class A3L_Dumptruck {
        vItemSpace = 170;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 288000;
        textures[] = {};
    };

    class C_Van_01_box_F {
        vItemSpace = 125;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 96000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 80;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class A3L_Bus {
        vItemSpace = 70;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class A3L_Towtruck_red {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Towtruck_black {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Towtruck_blue {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Towtruck_orange {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Towtruck_green {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class A3L_Towtruck_yellow {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class red_towtruck_08 {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
    { "Silver", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
        }, 
            "" 
    },
    { "White", "civ", 
        {
            "#(argb,8,8,3)color(1,1,1,1,CO)"
        }, 
            "" 
    },
    { "Orange", "civ", 
        {
            "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
        }, 
            "" 
    },
    { "Blue", "civ", 
        {
            "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
        }, 
            "" 
    },
    { "Black", "civ", 
        {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)"
        }, 
            "" 
    },
    { "Lime Green", "civ", 
        {
            "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
        }, 
            "" 
    },
    { "Red", "civ", 
        {
            "#(argb,8,8,3)color(0.92,0,0,1,CO)"
        }, 
            "" 
    },
    { "Purple", "civ", 
        {
            "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
        }, 
            "" 
    },
    { "Yellow", "civ", 
        {
            "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
        }, 
            "" 
    },
    { "Sky Blue", "civ", 
        {
            "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
        }, 
            "" 
    }
};
    };

    class Jonzie_Tow_Truck {
        vItemSpace = 40;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {};
    };

    class A3L_GMC_Van_White {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_GMC_Van_Black {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_GMC_Van_DarkBlue {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_GMC_Van_Red {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_GMC_Van_Yellow {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_GMC_Van_Pink {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_GMC_Van_Grey {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_GMC_Van_Purple {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_GMC_Van_Orange {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

    class A3L_GMC_Van_FBI {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class A3L_GMC_Van_Wifi {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class A3L_GMC_Van_PoGO {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class A3L_GMC_Van_Clothing {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class A3L_GMC_Van_Food {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class A3L_GMC_Van_General {
        vItemSpace = 30;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {};
    };

    class A3L_Renault_Magnum {
        vItemSpace = 280;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 628000;
        textures[] = {};
    };

    class A3L_Renault_Magnum_Purple {
        vItemSpace = 280;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 628000;
        textures[] = {};
    };

    class A3L_Renault_Magnum_Blue {
        vItemSpace = 280;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 628000;
        textures[] = {};
    };

    class A3L_Renault_Magnum_Red {
        vItemSpace = 280;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 628000;
        textures[] = {};
    };
    class A3L_Renault_Magnum_Yellow {
        vItemSpace = 280;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 628000;
        textures[] = {};
    };

    class A3L_Renault_Magnum_Orange {
        vItemSpace = 280;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 628000;
        textures[] = {};
    };

    class A3L_Renault_Magnum_Black {
        vItemSpace = 280;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 628000;
        textures[] = {};
    };

    class A3L_Renault_Magnum_White {
        vItemSpace = 280;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 628000;
        textures[] = {};
    };

    class Jonzie_Western {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1328000;
        textures[] = {};
    };

    class Jonzie_Superliner {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1528000;
        textures[] = {};
    };

    class Jonzie_Curtain {
        vItemSpace = 420;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = {};
    };

    class Jonzie_Curtain_Roadtrain {
        vItemSpace = 300;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {};
    };

    //Rebel Car Shop
    class ivory_evox_reb {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {
            { "Camo Black", "civ", {
                "\ivory_evox\data\camoblack.paa"
            }, "" },
            { "Camo Blue", "civ", {
                "\ivory_evox\data\camoblue.paa"
            }, "" },
            { "Camo Green", "civ", {
                "\ivory_evox\data\camogreen.paa"
            }, "" },
            { "Camo Orange", "civ", {
                "\ivory_evox\data\camoorange.paa"
            }, "" },
            { "Camo Pink", "civ", {
                "\ivory_evox\data\camopink.paa"
            }, "" },
            { "Camo Purple", "civ", {
                "\ivory_evox\data\camopurple.paa"
            }, "" },
            { "Camo Red", "civ", {
                "\ivory_evox\data\camored.paa"
            }, "" }
        };
    };

    class ivory_wrx_reb {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 600000;
        textures[] = {
            { "Camo Grey", "civ", {
                "\ivory_wrx\data\Subaru_camo_grey.paa"
            }, "" },
            { "Camo Purple", "civ", {
                "\ivory_wrx\data\Subaru_camo_purple.paa"
            }, "" },
            { "Camo Pink", "civ", {
                "\ivory_wrx\data\Subaru_camo_pink.paa"
            }, "" },
            { "Camo Green", "civ", {
                "\ivory_wrx\data\Subaru_camo_green.paa"
            }, "" },
            { "Camo", "civ", {
                "\ivory_wrx\data\Subaru_camo.paa"
            }, "" }
        };
    };

    class A3L_LandCruiser_bluecamo {
        vItemSpace = 70;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

    class A3L_LandCruiser_greycamo {
        vItemSpace = 70;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

    class A3L_LandCruiser_orangecamo {
        vItemSpace = 70;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

    class A3L_LandCruiser_pinkcamo {
        vItemSpace = 70;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

    class A3L_LandCruiser_purplecamo {
        vItemSpace = 70;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

    class A3L_LandCruiser_greencamo {
        vItemSpace = 70;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };

    //State Police Car Shop
    class tw_vic_marked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\tw_vic\Textures\state.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\tw_vic\Textures\sheriff.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class tw_vic_slicktop {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\tw_vic\Textures\state.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\tw_vic\Textures\sheriff.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_charger_12_p {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\red_config\red_charger_12_p\skins\StateTrooper.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\red_config\red_charger_12_p\skins\sheriff.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_charger_12_p_unmarked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };
    
    class red_charger_15_p {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\red_config\red_charger_15_p\skins\StateTrooper.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\red_config\red_charger_15_p\skins\sheriff.paa"
            }, "" },
            { "SERT", "cop", {
                "\red_config\red_charger_15_p\skins\sert.paa"
            }, "" },
            { "SERT 2", "cop", {
                "\red_config\red_charger_15_p\skins\sert2.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_charger_15_p_unmarked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\red_config\red_charger_15_p\skins\StateTrooper.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\red_config\red_charger_15_p\skins\sheriff.paa"
            }, "" },
            { "SERT", "cop", {
                "\red_config\red_charger_15_p\skins\sert.paa"
            }, "" },
            { "SERT 2", "cop", {
                "\red_config\red_charger_15_p\skins\sert2.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_taurus_10_p {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\red_config\red_taurus_10_p\skins\StateTrooper.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\red_config\red_taurus_10_p\skins\sheriff.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_taurus_10_p_slicktop {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\red_config\red_taurus_10_p\skins\StateTrooper.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\red_config\red_taurus_10_p\skins\sheriff.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_explorer_16_p {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\red_config\red_explorer_16_p\skins\StateTrooper.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\red_config\red_explorer_16_p\skins\sheriff.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_suburban_15_p {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_suburban_15_p_slicktop {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_f350_08_p {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\red_config\red_f350_08_p\skins\StateTrooper.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\red_config\red_f350_08_p\skins\sheriff.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            },
            { "Park Rangers", "cop", {
                "\red_config\red_f350_08_p\skins\parkrangers.paa"
            }, "" }
        };
    };

    class red_kawasaki_10_p {
        vItemSpace = 15;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "State Police", "cop", {
                "\red_config\red_kawasaki_10_p\skins\biketrooper.paa"
            }, "" },
            { "Sheriff's Office", "cop", {
                "\red_config\red_kawasaki_10_p\skins\sheriff.paa"
            }, "" },
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class Mrshounka_ducati_police_p {
        vItemSpace = 10;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    //Cop Car Shop
    class tw_vic_unmarked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class red_camaro_12_unmarked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class ivory_m3_unmarked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class ivory_wrx_unmarked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class ivory_evox_unmarked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class ivory_isf_unmarked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class ivory_rs4_unmarked {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {
            { "Silver", "cop", 
            {
                "#(argb,8,8,3)color(0.8,0.8,0.8,1.0,CO)"
            }, 
                "" 
            },
            { "White", "cop", 
                {
                    "#(argb,8,8,3)color(1,1,1,1,CO)"
                }, 
                    "" 
            },
            { "Orange", "cop", 
                {
                    "#(argb,8,8,3)color(0.956863,0.313725,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0,0.18,0.79,1,CO)"
                }, 
                    "" 
            },
            { "Black", "cop", 
                {
                    "#(argb,8,8,3)color(0,0,0,1.0,CO)"
                }, 
                    "" 
            },
            { "Lime Green", "cop", 
                {
                    "#(argb,8,8,3)color(0.32,0.98,0.15,1,CO)"
                }, 
                    "" 
            },
            { "Red", "cop", 
                {
                    "#(argb,8,8,3)color(0.92,0,0,1,CO)"
                }, 
                    "" 
            },
            { "Purple", "cop", 
                {
                    "#(argb,8,8,3)color(0.33,0.05,0.56,1,CO)"
                }, 
                    "" 
            },
            { "Yellow", "cop", 
                {
                    "#(argb,8,8,3)color(0.8,0.67,0,1,CO)"
                }, 
                    "" 
            },
            { "Sky Blue", "cop", 
                {
                    "#(argb,8,8,3)color(0.19,0.72,0.94,1,CO)"
                }, 
                    "" 
            }
        };
    };

    class Urbanized_CTSV_UC1 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class Urbanized_CTSV_UC2 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class Urbanized_CTSV_UC3 {
        vItemSpace = 25;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    class A3L_jailBus {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 5000;
        textures[] = {};
    };

    //Civ Air Shop
    class ivory_b206 {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class ivory_b206_news {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class IVORY_BELL512 {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class IVORY_BELL512_Grey {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class IVORY_BELL512_Blue {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class IVORY_BELL512_Green {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class IVORY_BELL512_Yellow {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class GNT_C185BW {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class GNT_C185RW {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class GNT_C185YW {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class GNT_C185OW {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class GNT_C185BLW {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class GNT_C185R {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class IVORY_CRJ200_1 {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class IVORY_ERJ135_1 {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    class IVORY_YAK42D_1 {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = {};
    };

    //Cop Air Shop
    class EC635_Unarmed {
        vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {};
    };

    class IVORY_BELL512_STATEPOLICE {
        vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {};
    };

    class MELB_MH6M {
        vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {};
    };

    class SP_M900 {
        vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {};
    };

    //Civ Boat Shop
    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 35000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class A3L_JetSki {
        vItemSpace = 55;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class A3L_JetSki_Yellow {
        vItemSpace = 55;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 75000;
        textures[] = { };
    };

    class red_searay_14_black {
        vItemSpace = 140;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = { };
    };

    class red_searay_14_blue {
        vItemSpace = 140;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = { };
    };

    class red_searay_14_white {
        vItemSpace = 140;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = { };
    };

    class red_searay_14_seablue {
        vItemSpace = 140;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = { };
    };

    class red_searay_14_shoreline {
        vItemSpace = 140;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = { };
    };

    class A3L_Ship {
        vItemSpace = 110;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1200000;
        textures[] = { };
    };

    class B_SDV_01_F {
        vItemSpace = 90;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 2000000;
        textures[] = {};
    };

    //DOJ Car Shop
    class red_charger_12_DOJ {
        vItemSpace = 55;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {};
    };

    class Urbanized_G65_DOJ {
        vItemSpace = 55;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 10000;
        textures[] = {};
    };

    // End Tim's Additions

    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 1500000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {};
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };

    class a3l_karts {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1550000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "SP Chief Only", "cop", {
                "\a3l_donation\data\ColtenHeli.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 1000000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 1000000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
};
