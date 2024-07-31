#include "script_mod.hpp"
#include "script_macros.hpp"


class CfgPatches {
    class hlcweapons_core {
        requiredaddons[] = {"A3_Data_F_Destroyer_Loadorder","A3_Data_F_Sams_Loadorder","cba_main"}; //this covers all A3(v1.84) + CBA addons
        units[] = {};
        weapons[] = {};
        magazines[] = {};
        author="scout";
		requiredVersion = REQUIRED_VERSION;
    };
};

#include "Particles.hpp"