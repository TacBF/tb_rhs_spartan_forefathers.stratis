#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {}      	, {}    , 1      , {}        , 0    , "US Base" },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {9}			, {}    , 1      , {}        , 0    , "RUS Base" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {1}      	, {}   	, 1      , {}        , 0    , "LZ Connor" },
{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {3}  		, {}    , 1      , {}        , 0    , "Agios Ioannis" },
{ 5, TEAM_BLUE, 	SPAWN_NEVER,    {4}      	, {}  	, 1      , {}        , 0    , "Crossroads" },
{ 6, TEAM_BLUE, 	SPAWN_NEVER,    {5}      	, {7}   , 1      , {}        , 0    , "Checkpoint" },
{ 7, TEAM_BLUE,	 	SPAWN_NEVER,    {5}			, {6}   , 1      , {}        , 0    , "Camp Maxwell" },
{ 8, TEAM_BLUE, 	SPAWN_NEVER,    {7,6}      	, {}    , 1      , {}		 , 0    , "Air Station Mike-26" },
{ 9, TEAM_BLUE, 	SPAWN_NEVER,  	{8}			, {}    , 1      , {}    	 , 0    , "Old Outpost" },

{ 10,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1	     , {4,8}     , 2    , "FB1" },
{ 11,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1      , {1,5}   	 , 2    , "FB 2" }
};