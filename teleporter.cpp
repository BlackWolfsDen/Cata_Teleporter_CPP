/*
Patch: 4.3.4
Creature_Name: Teleporter
Script_Name: npc_teleport
Scripted_by: YouarexD (http://EmuDevs.com)
Menu_Language: German (witch to your language)
Script_Description: This is a Teleport npc for cataclysm 4.3.4 private servers.
*/

class npc_teleport : public CreatureScript
{
	public:
		npc_teleport() : CreatureScript("npc_teleport") { }

		bool OnGossipHello(Player* player, Creature* creature)
		{
			if (player->IsInCombat())
			{
				player->GetSession()->SendNotification("Du musst den Kampf verlassen!");
				player->CLOSE_GOSSIP_MENU();
			}

			player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Playertreff", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+1);
			player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Cataclysm Raids", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+2);
			player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Cataclysm Instanzen", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+3);
			player->ADD_GOSSIP_ITEM(GOSSIP_ICON_BATTLE, "Gurubashi Arena", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+4);
			player->ADD_GOSSIP_ITEM(GOSSIP_ICON_DOT, "Nevermind...", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+99);
			player->SEND_GOSSIP_MENU(1, creature->GetGUID());
			return true;
		}

		bool OnGossipSelect(Player* player, Creature* creature, uint32 /* sender */, uint32 actions)
		{
			player->PlayerTalkClass->ClearMenus();

			switch (actions)
			{
			case GOSSIP_ACTION_INFO_DEF+1:
				player->TeleportTo(530, -1872.285645f, 5438.351563f, -10.464044f, 5.425379f);
				break;

			case GOSSIP_ACTION_INFO_DEF+2:
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Pechschwingenabstieg", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+10);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Thron der vier Winde", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+11);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Brandin Hold", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+12);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Bastion des Zwielichts", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+13);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Feuerlande", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+14);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Drachenseele", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+15);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Nevermind...", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+99);
				player->SEND_GOSSIP_MENU(1, creature->GetGUID());
				break;

			case GOSSIP_ACTION_INFO_DEF+3:
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Die Todesmine", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+16);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Burg Schattenfang", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+17);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Grim Batol", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+18);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Zul Aman ", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+19);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Zul Gurub", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+20);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Der Steinerne Kern", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+21);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Die Stunde des Zwielichts", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+22);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Brunen der Ewigkeit", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+23);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "End Zeit", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+24);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Der Vortexgipfel", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+25);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Thron der Gezeiten", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+26);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Die Verlorene Stadt von der Tol vir", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+27);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Halle der Origination", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+28);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Schwarzfelshölen", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+29);
				player->ADD_GOSSIP_ITEM(GOSSIP_ICON_CHAT, "Nevermind...", GOSSIP_SENDER_MAIN, GOSSIP_ACTION_INFO_DEF+99);
				player->SEND_GOSSIP_MENU(1, creature->GetGUID());
				break;

			case GOSSIP_ACTION_INFO_DEF+4:
				player->TeleportTo(0, -13228.135742f, 228.834442f, 32.980816f, 1.118780f);
				break;

			case GOSSIP_ACTION_INFO_DEF+10:
				player->TeleportTo(0, -7533.682129f, -1209.040039f, 477.726227f, 1.953624f);
				break;

			case GOSSIP_ACTION_INFO_DEF+11:
				player->TeleportTo(1, -11355.214844f, 58.152069f, 723.883606f, 1.976673f);
				break;

			case GOSSIP_ACTION_INFO_DEF+12:
				player->TeleportTo(732,  -1251.937134f, 1050.386108f, 106.994698f, 3.158482f);
				break;

			case GOSSIP_ACTION_INFO_DEF+13:
				player->TeleportTo(0, -4884.354004f, -4253.973633f, 827.763611f, 2.060737f);
				break;

			case GOSSIP_ACTION_INFO_DEF+14:
				player->TeleportTo(1, 3993.743652f, -2956.993896f, 1002.547424f, 1.966209f);
				break;

			case GOSSIP_ACTION_INFO_DEF+15:
				player->TeleportTo(1, -8273.353516f, -4517.355957f, -219.333969f, 0.558964f);
				break;

			case GOSSIP_ACTION_INFO_DEF+16:
				player->TeleportTo(0, -11207.520508f, 1668.632690f, 24.623632f, 1.576529f);
				break;

			case GOSSIP_ACTION_INFO_DEF+17:
				player->TeleportTo(0, -245.124878f, 1534.565063f, 76.890091f, 1.196693f);
				break;

			case GOSSIP_ACTION_INFO_DEF+18:
				player->TeleportTo(0, -4062.229980f, -3450.429932f, 280.571014f, 0.390264f);
				break;

			case GOSSIP_ACTION_INFO_DEF+19:
				player->TeleportTo(530, 6851.167480f, -7948.453613f, 170.061768f, 4.694218f);
				break;

			case GOSSIP_ACTION_INFO_DEF+20:
				player->TeleportTo(0, -11916.513672f, -1204.576904f, 92.287773f, 4.729164f);
				break;

			case GOSSIP_ACTION_INFO_DEF+21:
				player->TeleportTo(646, 1020.976868f, 654.496826f, 156.671310f, 4.933526f);
				break;

			case GOSSIP_ACTION_INFO_DEF+22:
				player->TeleportTo(1,  -8292.754883f, -4554.543457f, -222.483215f, 4.710849f);
				break;

			case GOSSIP_ACTION_INFO_DEF+23:
				player->TeleportTo(1, -8602.987305f, -4031.282715f, -208.407211f, 1.247818f);
				break;

			case GOSSIP_ACTION_INFO_DEF+24:
				player->TeleportTo(1,  -8327.620117f, -4475.427734f, -208.855865f, 0.500819f);
				break;

			case GOSSIP_ACTION_INFO_DEF+25:
				player->TeleportTo(1, -11505.550781f, -2303.350586f, 608.393616f, 3.814200f);
				break;

			case GOSSIP_ACTION_INFO_DEF+26:
				player->TeleportTo(0, -5598.150391f, 5412.423340f, -1798.709961f, 5.561488f);
				break;

			case GOSSIP_ACTION_INFO_DEF+27:
				player->TeleportTo(1, -10662.940430f, -1301.864380f, 15.353823f, 3.387370f);
				break;

			case GOSSIP_ACTION_INFO_DEF+28:
				player->TeleportTo(1, -10188.481445f, -1837.926880f, 20.127676f, 3.141458f);
				break;

			case GOSSIP_ACTION_INFO_DEF+29:
				player->TeleportTo(0, -7571.896484f, -1317.194458f, 245.536163f, 4.842430f);
				break;

			case GOSSIP_ACTION_INFO_DEF+99:
				player->CLOSE_GOSSIP_MENU();
				break;
			}
			return true;
		}
};

void AddSC_npc_teleport()
{
	new npc_teleport();
}
