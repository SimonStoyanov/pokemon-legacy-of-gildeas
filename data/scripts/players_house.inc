# 1 "data/scripts/players_house.pory"

# 2 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet::
# 3 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 5
# 4 "data/scripts/players_house.pory"
	return
# 5 "data/scripts/players_house.pory"

# 6 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_EnterHouseMovingIn::
# 7 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsntItNiceInHere, MSGBOX_DEFAULT
# 8 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 9 "data/scripts/players_house.pory"
	waitmovement 0
# 10 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, MALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale
# 11 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8005, FEMALE, PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale
# 12 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MoversPokemonGoSetClock, MSGBOX_DEFAULT
# 13 "data/scripts/players_house.pory"
	closemessage
# 14 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 4
# 15 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerWalkIn
# 16 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 17 "data/scripts/players_house.pory"
	waitmovement 0
# 18 "data/scripts/players_house.pory"
	releaseall
# 19 "data/scripts/players_house.pory"
	end
# 20 "data/scripts/players_house.pory"

# 21 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInMale::
# 22 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 23 "data/scripts/players_house.pory"
	waitmovement 0
# 24 "data/scripts/players_house.pory"
	return
# 25 "data/scripts/players_house.pory"

# 26 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomFacePlayerMovingInFemale::
# 27 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 28 "data/scripts/players_house.pory"
	waitmovement 0
# 29 "data/scripts/players_house.pory"
	return
# 30 "data/scripts/players_house.pory"

# 31 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerWalkIn:
# 32 "data/scripts/players_house.pory"
	walk_up
# 33 "data/scripts/players_house.pory"
	step_end
# 34 "data/scripts/players_house.pory"

# 35 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomGoSeeRoom::
# 36 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ArentYouInterestedInRoom, MSGBOX_DEFAULT
# 37 "data/scripts/players_house.pory"
	closemessage
# 38 "data/scripts/players_house.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 39 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_MovePlayerAwayFromDoor
# 40 "data/scripts/players_house.pory"
	waitmovement 0
# 41 "data/scripts/players_house.pory"
	releaseall
# 42 "data/scripts/players_house.pory"
	end
# 43 "data/scripts/players_house.pory"

# 44 "data/scripts/players_house.pory"
LittlerootTown_BrendansHouse_2F_EventScript_WallClock::
# 45 "data/scripts/players_house.pory"
	lockall
# 46 "data/scripts/players_house.pory"
	setvar VAR_0x8004, MALE
# 47 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 48 "data/scripts/players_house.pory"
	end
# 49 "data/scripts/players_house.pory"

# 50 "data/scripts/players_house.pory"
LittlerootTown_MaysHouse_2F_EventScript_WallClock::
# 51 "data/scripts/players_house.pory"
	lockall
# 52 "data/scripts/players_house.pory"
	setvar VAR_0x8004, FEMALE
# 53 "data/scripts/players_house.pory"
	goto PlayersHouse_2F_EventScript_WallClock
# 54 "data/scripts/players_house.pory"
	end
# 55 "data/scripts/players_house.pory"

# 56 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_WallClock::
# 57 "data/scripts/players_house.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, PlayersHouse_2F_EventScript_CheckWallClock
# 58 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 59 "data/scripts/players_house.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 60 "data/scripts/players_house.pory"
	delay 30
# 61 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 62 "data/scripts/players_house.pory"
	setflag FLAG_SET_WALL_CLOCK
# 63 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 64 "data/scripts/players_house.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 65 "data/scripts/players_house.pory"
	checkplayergender
# 66 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_2F_EventScript_MomComesUpstairsMale
# 67 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_2F_EventScript_MomComesUpstairsFemale
# 68 "data/scripts/players_house.pory"
	playse SE_EXIT
# 69 "data/scripts/players_house.pory"
	removeobject VAR_0x8008
# 70 "data/scripts/players_house.pory"
	releaseall
# 71 "data/scripts/players_house.pory"
	end
# 72 "data/scripts/players_house.pory"

# 73 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsMale::
# 74 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_PLAYERS_HOUSE_2F_MOM
# 75 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 76 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersMale
# 77 "data/scripts/players_house.pory"
	waitmovement 0
# 78 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 79 "data/scripts/players_house.pory"
	waitmovement 0
# 80 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_HowDoYouLikeYourRoom, MSGBOX_DEFAULT
# 81 "data/scripts/players_house.pory"
	closemessage
# 82 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsMale
# 83 "data/scripts/players_house.pory"
	waitmovement 0
# 84 "data/scripts/players_house.pory"
	return
# 85 "data/scripts/players_house.pory"

# 86 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_MomComesUpstairsFemale::
# 87 "data/scripts/players_house.pory"
	setvar VAR_0x8008, LOCALID_PLAYERS_HOUSE_2F_MOM
# 88 "data/scripts/players_house.pory"
	addobject VAR_0x8008
# 89 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomEntersFemale
# 90 "data/scripts/players_house.pory"
	waitmovement 0
# 91 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 92 "data/scripts/players_house.pory"
	waitmovement 0
# 93 "data/scripts/players_house.pory"
	msgbox PlayersHouse_2F_Text_HowDoYouLikeYourRoom, MSGBOX_DEFAULT
# 94 "data/scripts/players_house.pory"
	closemessage
# 95 "data/scripts/players_house.pory"
	applymovement VAR_0x8008, PlayersHouse_2F_Movement_MomExitsFemale
# 96 "data/scripts/players_house.pory"
	waitmovement 0
# 97 "data/scripts/players_house.pory"
	return
# 98 "data/scripts/players_house.pory"

# 99 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_CheckWallClock::
# 100 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 101 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 102 "data/scripts/players_house.pory"
	special Special_ViewWallClock
# 103 "data/scripts/players_house.pory"
	waitstate
# 104 "data/scripts/players_house.pory"
	releaseall
# 105 "data/scripts/players_house.pory"
	end
# 106 "data/scripts/players_house.pory"

# 107 "data/scripts/players_house.pory"
PlayersHouse_2F_EventScript_SetWallClock::
# 108 "data/scripts/players_house.pory"
	fadescreen FADE_TO_BLACK
# 109 "data/scripts/players_house.pory"
	special StartWallClock
# 110 "data/scripts/players_house.pory"
	waitstate
# 111 "data/scripts/players_house.pory"
	return
# 112 "data/scripts/players_house.pory"

# 113 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersMale:
# 114 "data/scripts/players_house.pory"
	delay_8
# 115 "data/scripts/players_house.pory"
	walk_down
# 116 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 117 "data/scripts/players_house.pory"
	delay_16
# 118 "data/scripts/players_house.pory"
	delay_8
# 119 "data/scripts/players_house.pory"
	walk_left
# 120 "data/scripts/players_house.pory"
	step_end
# 121 "data/scripts/players_house.pory"

# 122 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsMale:
# 123 "data/scripts/players_house.pory"
	walk_right
# 124 "data/scripts/players_house.pory"
	walk_up
# 125 "data/scripts/players_house.pory"
	delay_8
# 126 "data/scripts/players_house.pory"
	step_end
# 127 "data/scripts/players_house.pory"

# 128 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomEntersFemale:
# 129 "data/scripts/players_house.pory"
	delay_8
# 130 "data/scripts/players_house.pory"
	walk_down
# 131 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 132 "data/scripts/players_house.pory"
	delay_16
# 133 "data/scripts/players_house.pory"
	delay_8
# 134 "data/scripts/players_house.pory"
	walk_right
# 135 "data/scripts/players_house.pory"
	step_end
# 136 "data/scripts/players_house.pory"

# 137 "data/scripts/players_house.pory"
PlayersHouse_2F_Movement_MomExitsFemale:
# 138 "data/scripts/players_house.pory"
	walk_left
# 139 "data/scripts/players_house.pory"
	walk_up
# 140 "data/scripts/players_house.pory"
	delay_8
# 141 "data/scripts/players_house.pory"
	step_end
# 142 "data/scripts/players_house.pory"

# 143 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetWatchedBroadcast::
# 144 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 7
# 145 "data/scripts/players_house.pory"
	releaseall
# 146 "data/scripts/players_house.pory"
	end
# 147 "data/scripts/players_house.pory"

# 148 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportMale::
# 149 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterRight
# 150 "data/scripts/players_house.pory"
	waitmovement 0
# 151 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 152 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymMale
# 153 "data/scripts/players_house.pory"
	waitmovement 0
# 154 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 155 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
# 156 "data/scripts/players_house.pory"
	closemessage
# 157 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale
# 158 "data/scripts/players_house.pory"
	waitmovement 0
# 159 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVMale
# 160 "data/scripts/players_house.pory"
	waitmovement 0
# 161 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 162 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 163 "data/scripts/players_house.pory"
	waitmovement 0
# 164 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
# 165 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor, MSGBOX_DEFAULT
# 166 "data/scripts/players_house.pory"
	closemessage
# 167 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 168 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatMale
# 169 "data/scripts/players_house.pory"
	waitmovement 0
# 170 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 171 "data/scripts/players_house.pory"
	end
# 172 "data/scripts/players_house.pory"

# 173 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PetalburgGymReportFemale::
# 174 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_WalkInPlaceFasterLeft
# 175 "data/scripts/players_house.pory"
	waitmovement 0
# 176 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomNoticeGymBroadcast
# 177 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale
# 178 "data/scripts/players_house.pory"
	waitmovement 0
# 179 "data/scripts/players_house.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 180 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_MaybeDadWillBeOn, MSGBOX_DEFAULT
# 181 "data/scripts/players_house.pory"
	closemessage
# 182 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale
# 183 "data/scripts/players_house.pory"
	waitmovement 0
# 184 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerMoveToTVFemale
# 185 "data/scripts/players_house.pory"
	waitmovement 0
# 186 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_WatchGymBroadcast
# 187 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 188 "data/scripts/players_house.pory"
	waitmovement 0
# 189 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ItsOverWeMissedHim, MSGBOX_DEFAULT
# 190 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor, MSGBOX_DEFAULT
# 191 "data/scripts/players_house.pory"
	closemessage
# 192 "data/scripts/players_house.pory"
	setvar VAR_TEMP_1, 1
# 193 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, PlayersHouse_1F_Movement_MomReturnToSeatFemale
# 194 "data/scripts/players_house.pory"
	waitmovement 0
# 195 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_SetWatchedBroadcast
# 196 "data/scripts/players_house.pory"
	end
# 197 "data/scripts/players_house.pory"

# 198 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticeGymBroadcast::
# 199 "data/scripts/players_house.pory"
	playse SE_PIN
# 200 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_ExclamationMark
# 201 "data/scripts/players_house.pory"
	waitmovement 0
# 202 "data/scripts/players_house.pory"
	applymovement VAR_0x8005, Common_Movement_Delay48
# 203 "data/scripts/players_house.pory"
	waitmovement 0
# 204 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_OhComeQuickly, MSGBOX_DEFAULT
# 205 "data/scripts/players_house.pory"
	closemessage
# 206 "data/scripts/players_house.pory"
	return
# 207 "data/scripts/players_house.pory"

# 208 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_WatchGymBroadcast::
# 209 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 210 "data/scripts/players_house.pory"
	waitmovement 0
# 211 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_ReportFromPetalburgGym, MSGBOX_DEFAULT
# 212 "data/scripts/players_house.pory"
	fadedefaultbgm
# 213 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 214 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_HOME
# 215 "data/scripts/players_house.pory"
	delay 35
# 216 "data/scripts/players_house.pory"
	return
# 217 "data/scripts/players_house.pory"

# 218 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadMale:
# 219 "data/scripts/players_house.pory"
	walk_up
# 220 "data/scripts/players_house.pory"
	walk_right
# 221 "data/scripts/players_house.pory"
	walk_right
# 222 "data/scripts/players_house.pory"
	walk_right
# 223 "data/scripts/players_house.pory"
	walk_right
# 224 "data/scripts/players_house.pory"
	walk_down
# 225 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 226 "data/scripts/players_house.pory"
	step_end
# 227 "data/scripts/players_house.pory"

# 228 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachDadFemale:
# 229 "data/scripts/players_house.pory"
	walk_up
# 230 "data/scripts/players_house.pory"
	walk_left
# 231 "data/scripts/players_house.pory"
	walk_left
# 232 "data/scripts/players_house.pory"
	walk_left
# 233 "data/scripts/players_house.pory"
	walk_left
# 234 "data/scripts/players_house.pory"
	walk_down
# 235 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 236 "data/scripts/players_house.pory"
	step_end
# 237 "data/scripts/players_house.pory"

# 238 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerMale:
# 239 "data/scripts/players_house.pory"
	walk_right
# 240 "data/scripts/players_house.pory"
	step_end
# 241 "data/scripts/players_house.pory"

# 242 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerFemale:
# 243 "data/scripts/players_house.pory"
	walk_left
# 244 "data/scripts/players_house.pory"
	step_end
# 245 "data/scripts/players_house.pory"

# 246 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale:
# 247 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 248 "data/scripts/players_house.pory"
	delay_16
# 249 "data/scripts/players_house.pory"
	delay_16
# 250 "data/scripts/players_house.pory"
	delay_16
# 251 "data/scripts/players_house.pory"
	delay_16
# 252 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 253 "data/scripts/players_house.pory"
	delay_16
# 254 "data/scripts/players_house.pory"
	delay_16
# 255 "data/scripts/players_house.pory"
	step_end
# 256 "data/scripts/players_house.pory"

# 257 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale:
# 258 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 259 "data/scripts/players_house.pory"
	delay_16
# 260 "data/scripts/players_house.pory"
	delay_16
# 261 "data/scripts/players_house.pory"
	delay_16
# 262 "data/scripts/players_house.pory"
	delay_16
# 263 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 264 "data/scripts/players_house.pory"
	delay_16
# 265 "data/scripts/players_house.pory"
	delay_16
# 266 "data/scripts/players_house.pory"
	step_end
# 267 "data/scripts/players_house.pory"

# 268 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale:
# 269 "data/scripts/players_house.pory"
	walk_up
# 270 "data/scripts/players_house.pory"
	walk_left
# 271 "data/scripts/players_house.pory"
	walk_left
# 272 "data/scripts/players_house.pory"
	step_end
# 273 "data/scripts/players_house.pory"

# 274 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale:
# 275 "data/scripts/players_house.pory"
	walk_up
# 276 "data/scripts/players_house.pory"
	walk_right
# 277 "data/scripts/players_house.pory"
	walk_right
# 278 "data/scripts/players_house.pory"
	step_end
# 279 "data/scripts/players_house.pory"

# 280 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVMale:
# 281 "data/scripts/players_house.pory"
	walk_left
# 282 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 283 "data/scripts/players_house.pory"
	step_end
# 284 "data/scripts/players_house.pory"

# 285 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomMakeRoomToSeeTVFemale:
# 286 "data/scripts/players_house.pory"
	walk_right
# 287 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 288 "data/scripts/players_house.pory"
	step_end
# 289 "data/scripts/players_house.pory"

# 290 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatMale:
# 291 "data/scripts/players_house.pory"
	walk_left
# 292 "data/scripts/players_house.pory"
	walk_down
# 293 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 294 "data/scripts/players_house.pory"
	step_end
# 295 "data/scripts/players_house.pory"

# 296 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomReturnToSeatFemale:
# 297 "data/scripts/players_house.pory"
	walk_right
# 298 "data/scripts/players_house.pory"
	walk_down
# 299 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 300 "data/scripts/players_house.pory"
	step_end
# 301 "data/scripts/players_house.pory"

# 302 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DontPushYourselfTooHard::
# 303 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 304 "data/scripts/players_house.pory"
	release
# 305 "data/scripts/players_house.pory"
	end
# 306 "data/scripts/players_house.pory"

# 307 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryRegisterMom::
# 308 "data/scripts/players_house.pory"
	goto_if_set FLAG_ENABLE_MOM_MATCH_CALL, PlayersHouse_1F_EventScript_CheckGiveAmuletCoin
# 309 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatAPokenav, MSGBOX_DEFAULT
# 310 "data/scripts/players_house.pory"
	closemessage
# 311 "data/scripts/players_house.pory"
	delay 30
# 312 "data/scripts/players_house.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 313 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RegisteredMom, MSGBOX_DEFAULT
# 314 "data/scripts/players_house.pory"
	waitfanfare
# 315 "data/scripts/players_house.pory"
	closemessage
# 316 "data/scripts/players_house.pory"
	delay 30
# 317 "data/scripts/players_house.pory"
	setflag FLAG_ENABLE_MOM_MATCH_CALL
# 318 "data/scripts/players_house.pory"
	release
# 319 "data/scripts/players_house.pory"
	end
# 320 "data/scripts/players_house.pory"

# 321 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_CheckGiveAmuletCoin::
# 322 "data/scripts/players_house.pory"
	goto_if_set FLAG_BADGE05_GET, PlayersHouse_1F_EventScript_TryGiveAmuletCoin
# 323 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
# 324 "data/scripts/players_house.pory"

# 325 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_TryGiveAmuletCoin::
# 326 "data/scripts/players_house.pory"
	goto_if_set FLAG_RECEIVED_AMULET_COIN, PlayersHouse_1F_EventScript_MomHealsParty
# 327 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom, MSGBOX_DEFAULT
# 328 "data/scripts/players_house.pory"
	giveitem ITEM_AMULET_COIN
# 329 "data/scripts/players_house.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 330 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DontPushYourselfTooHard, MSGBOX_DEFAULT
# 331 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_AMULET_COIN
# 332 "data/scripts/players_house.pory"
	release
# 333 "data/scripts/players_house.pory"
	end
# 334 "data/scripts/players_house.pory"

# 335 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomHealsParty::
# 336 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_YouShouldRestABit, MSGBOX_DEFAULT
# 337 "data/scripts/players_house.pory"
	goto PlayersHouse_1F_EventScript_HealParty
# 338 "data/scripts/players_house.pory"
	end
# 339 "data/scripts/players_house.pory"

# 340 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SeeYouHoney::
# 341 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_SeeYouHoney, MSGBOX_DEFAULT
# 342 "data/scripts/players_house.pory"
	release
# 343 "data/scripts/players_house.pory"
	end
# 344 "data/scripts/players_house.pory"

# 345 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_HealParty::
# 346 "data/scripts/players_house.pory"
	closemessage
# 347 "data/scripts/players_house.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 348 "data/scripts/players_house.pory"
	incrementgamestat GAME_STAT_RESTED_AT_HOME
# 349 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TakeCareHoney, MSGBOX_DEFAULT
# 350 "data/scripts/players_house.pory"
	release
# 351 "data/scripts/players_house.pory"
	end
# 352 "data/scripts/players_house.pory"

# 353 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DidYouMeetProfBirch::
# 354 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DidYouMeetProfBirch, MSGBOX_DEFAULT
# 355 "data/scripts/players_house.pory"
	release
# 356 "data/scripts/players_house.pory"
	end
# 357 "data/scripts/players_house.pory"

# 358 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth1::
# 359 "data/scripts/players_house.pory"
	lock
# 360 "data/scripts/players_house.pory"
	faceplayer
# 361 "data/scripts/players_house.pory"
	waitse
# 362 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 363 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth1, MSGBOX_DEFAULT
# 364 "data/scripts/players_house.pory"
	waitmoncry
# 365 "data/scripts/players_house.pory"
	release
# 366 "data/scripts/players_house.pory"
	end
# 367 "data/scripts/players_house.pory"

# 368 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_Vigoroth2::
# 369 "data/scripts/players_house.pory"
	lock
# 370 "data/scripts/players_house.pory"
	faceplayer
# 371 "data/scripts/players_house.pory"
	waitse
# 372 "data/scripts/players_house.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 373 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_Vigoroth2, MSGBOX_DEFAULT
# 374 "data/scripts/players_house.pory"
	waitmoncry
# 375 "data/scripts/players_house.pory"
	release
# 376 "data/scripts/players_house.pory"
	end
# 377 "data/scripts/players_house.pory"

# 378 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymMale:
# 379 "data/scripts/players_house.pory"
	walk_down
# 380 "data/scripts/players_house.pory"
	walk_down
# 381 "data/scripts/players_house.pory"
	walk_left
# 382 "data/scripts/players_house.pory"
	walk_left
# 383 "data/scripts/players_house.pory"
	walk_left
# 384 "data/scripts/players_house.pory"
	step_end
# 385 "data/scripts/players_house.pory"

# 386 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVMale:
# 387 "data/scripts/players_house.pory"
	walk_left
# 388 "data/scripts/players_house.pory"
	step_end
# 389 "data/scripts/players_house.pory"

# 390 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForGymFemale:
# 391 "data/scripts/players_house.pory"
	walk_down
# 392 "data/scripts/players_house.pory"
	walk_down
# 393 "data/scripts/players_house.pory"
	walk_right
# 394 "data/scripts/players_house.pory"
	walk_right
# 395 "data/scripts/players_house.pory"
	walk_right
# 396 "data/scripts/players_house.pory"
	step_end
# 397 "data/scripts/players_house.pory"

# 398 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerMoveToTVFemale:
# 399 "data/scripts/players_house.pory"
	walk_right
# 400 "data/scripts/players_house.pory"
	step_end
# 401 "data/scripts/players_house.pory"

# 402 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MovePlayerAwayFromDoor:
# 403 "data/scripts/players_house.pory"
	walk_up
# 404 "data/scripts/players_house.pory"
	step_end
# 405 "data/scripts/players_house.pory"

# 406 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV::
# 407 "data/scripts/players_house.pory"
	lockall
# 408 "data/scripts/players_house.pory"
	checkplayergender
# 409 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, MALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale
# 410 "data/scripts/players_house.pory"
	call_if_eq VAR_RESULT, FEMALE, PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale
# 411 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerEnterRoomMale
# 412 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerEnterRoomFemale
# 413 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_FacePlayer
# 414 "data/scripts/players_house.pory"
	waitmovement 0
# 415 "data/scripts/players_house.pory"
	playse SE_PIN
# 416 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_ExclamationMark
# 417 "data/scripts/players_house.pory"
	waitmovement 0
# 418 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, Common_Movement_Delay48
# 419 "data/scripts/players_house.pory"
	waitmovement 0
# 420 "data/scripts/players_house.pory"
	delay 20
# 421 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadApproachPlayerMale
# 422 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadApproachPlayerFemale
# 423 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_TicketFromBrineyCameForYou, MSGBOX_DEFAULT
# 424 "data/scripts/players_house.pory"
	giveitem ITEM_SS_TICKET
# 425 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_PortsInSlateportLilycove, MSGBOX_DEFAULT
# 426 "data/scripts/players_house.pory"
	closemessage
# 427 "data/scripts/players_house.pory"
	delay 20
# 428 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachDadMale
# 429 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachDadFemale
# 430 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_BetterGetBackToGym, MSGBOX_DEFAULT
# 431 "data/scripts/players_house.pory"
	closemessage
# 432 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_DadExitsMale
# 433 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_DadExitsFemale
# 434 "data/scripts/players_house.pory"
	playse SE_DOOR
# 435 "data/scripts/players_house.pory"
	removeobject VAR_0x8009
# 436 "data/scripts/players_house.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 437 "data/scripts/players_house.pory"
	delay 30
# 438 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerMale
# 439 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerFemale
# 440 "data/scripts/players_house.pory"
	delay 20
# 441 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_DadShouldStayLonger, MSGBOX_DEFAULT
# 442 "data/scripts/players_house.pory"
	closemessage
# 443 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 444 "data/scripts/players_house.pory"
	special TurnOnTVScreen
# 445 "data/scripts/players_house.pory"
	delay 60
# 446 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale
# 447 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale
# 448 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_IsThatABreakingStory, MSGBOX_DEFAULT
# 449 "data/scripts/players_house.pory"
	closemessage
# 450 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale
# 451 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale
# 452 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_LatiEmergencyNewsFlash, MSGBOX_DEFAULT
# 453 "data/scripts/players_house.pory"
	closemessage
# 454 "data/scripts/players_house.pory"
	clearflag FLAG_SYS_TV_LATIAS_LATIOS
# 455 "data/scripts/players_house.pory"
	setflag FLAG_LATIOS_OR_LATIAS_ROAMING
# 456 "data/scripts/players_house.pory"
	special TurnOffTVScreen
# 457 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, MALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale
# 458 "data/scripts/players_house.pory"
	call_if_eq VAR_0x8008, FEMALE, PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale
# 459 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_WhatColorDidTheySay, MSGBOX_DEFAULT
# 460 "data/scripts/players_house.pory"
	multichoice 22, 8, MULTI_TV_LATI, TRUE
# 461 "data/scripts/players_house.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 462 "data/scripts/players_house.pory"
	special InitRoamer
# 463 "data/scripts/players_house.pory"
	copyvar VAR_ROAMER_POKEMON, VAR_RESULT
# 464 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_StillUnknownPokemon, MSGBOX_DEFAULT
# 465 "data/scripts/players_house.pory"
	closemessage
# 466 "data/scripts/players_house.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
# 467 "data/scripts/players_house.pory"
	setvar VAR_ARCHEVALE_HOUSE_STATE, 4
# 468 "data/scripts/players_house.pory"
	releaseall
# 469 "data/scripts/players_house.pory"
	end
# 470 "data/scripts/players_house.pory"

# 471 "data/scripts/players_house.pory"
@ Never called.
# 472 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_AirLatiBroadcast::
# 473 "data/scripts/players_house.pory"
	setflag FLAG_SYS_TV_LATIAS_LATIOS
# 474 "data/scripts/players_house.pory"
	return
# 475 "data/scripts/players_house.pory"

# 476 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsMale::
# 477 "data/scripts/players_house.pory"
	setvar VAR_0x8008, MALE
# 478 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_PLAYERS_HOUSE_1F_DAD
# 479 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_PLAYERS_HOUSE_1F_MOM
# 480 "data/scripts/players_house.pory"
	return
# 481 "data/scripts/players_house.pory"

# 482 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_SetUpObjectEventVarsFemale::
# 483 "data/scripts/players_house.pory"
	setvar VAR_0x8008, FEMALE
# 484 "data/scripts/players_house.pory"
	setvar VAR_0x8009, LOCALID_PLAYERS_HOUSE_1F_DAD
# 485 "data/scripts/players_house.pory"
	setvar VAR_0x800A, LOCALID_PLAYERS_HOUSE_1F_MOM
# 486 "data/scripts/players_house.pory"
	return
# 487 "data/scripts/players_house.pory"

# 488 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerMale::
# 489 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerMale
# 490 "data/scripts/players_house.pory"
	waitmovement 0
# 491 "data/scripts/players_house.pory"
	return
# 492 "data/scripts/players_house.pory"

# 493 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadApproachPlayerFemale::
# 494 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadApproachPlayerFemale
# 495 "data/scripts/players_house.pory"
	waitmovement 0
# 496 "data/scripts/players_house.pory"
	return
# 497 "data/scripts/players_house.pory"

# 498 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadMale::
# 499 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadMale
# 500 "data/scripts/players_house.pory"
	waitmovement 0
# 501 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomMale
# 502 "data/scripts/players_house.pory"
	waitmovement 0
# 503 "data/scripts/players_house.pory"
	return
# 504 "data/scripts/players_house.pory"

# 505 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachDadFemale::
# 506 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachDadFemale
# 507 "data/scripts/players_house.pory"
	waitmovement 0
# 508 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadFaceMomFemale
# 509 "data/scripts/players_house.pory"
	waitmovement 0
# 510 "data/scripts/players_house.pory"
	return
# 511 "data/scripts/players_house.pory"

# 512 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsMale::
# 513 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 514 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 515 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsMale
# 516 "data/scripts/players_house.pory"
	waitmovement 0
# 517 "data/scripts/players_house.pory"
	return
# 518 "data/scripts/players_house.pory"

# 519 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_DadExitsFemale::
# 520 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 521 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit
# 522 "data/scripts/players_house.pory"
	applymovement VAR_0x8009, PlayersHouse_1F_Movement_DadExitsFemale
# 523 "data/scripts/players_house.pory"
	waitmovement 0
# 524 "data/scripts/players_house.pory"
	return
# 525 "data/scripts/players_house.pory"

# 526 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomMale::
# 527 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomMale
# 528 "data/scripts/players_house.pory"
	waitmovement 0
# 529 "data/scripts/players_house.pory"
	return
# 530 "data/scripts/players_house.pory"

# 531 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerEnterRoomFemale::
# 532 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerEnterRoomFemale
# 533 "data/scripts/players_house.pory"
	waitmovement 0
# 534 "data/scripts/players_house.pory"
	return
# 535 "data/scripts/players_house.pory"

# 536 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiMale::
# 537 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale
# 538 "data/scripts/players_house.pory"
	waitmovement 0
# 539 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterLeft
# 540 "data/scripts/players_house.pory"
	waitmovement 0
# 541 "data/scripts/players_house.pory"
	return
# 542 "data/scripts/players_house.pory"

# 543 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_PlayerApproachTVForLatiFemale::
# 544 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale
# 545 "data/scripts/players_house.pory"
	waitmovement 0
# 546 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, Common_Movement_WalkInPlaceFasterRight
# 547 "data/scripts/players_house.pory"
	waitmovement 0
# 548 "data/scripts/players_house.pory"
	return
# 549 "data/scripts/players_house.pory"

# 550 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerMale::
# 551 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerMale
# 552 "data/scripts/players_house.pory"
	waitmovement 0
# 553 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 554 "data/scripts/players_house.pory"
	waitmovement 0
# 555 "data/scripts/players_house.pory"
	return
# 556 "data/scripts/players_house.pory"

# 557 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerFemale::
# 558 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerFemale
# 559 "data/scripts/players_house.pory"
	waitmovement 0
# 560 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 561 "data/scripts/players_house.pory"
	waitmovement 0
# 562 "data/scripts/players_house.pory"
	return
# 563 "data/scripts/players_house.pory"

# 564 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastMale::
# 565 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastMale
# 566 "data/scripts/players_house.pory"
	waitmovement 0
# 567 "data/scripts/players_house.pory"
	return
# 568 "data/scripts/players_house.pory"

# 569 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomNoticesLatiBroadcastFemale::
# 570 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomNoticesLatiBroadcastFemale
# 571 "data/scripts/players_house.pory"
	waitmovement 0
# 572 "data/scripts/players_house.pory"
	return
# 573 "data/scripts/players_house.pory"

# 574 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVMale::
# 575 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVMale
# 576 "data/scripts/players_house.pory"
	waitmovement 0
# 577 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 578 "data/scripts/players_house.pory"
	waitmovement 0
# 579 "data/scripts/players_house.pory"
	return
# 580 "data/scripts/players_house.pory"

# 581 "data/scripts/players_house.pory"
PlayersHouse_1F_EventScript_MomApproachPlayerAfterTVFemale::
# 582 "data/scripts/players_house.pory"
	applymovement VAR_0x800A, PlayersHouse_1F_Movement_MomApproachPlayerAfterTVFemale
# 583 "data/scripts/players_house.pory"
	waitmovement 0
# 584 "data/scripts/players_house.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 585 "data/scripts/players_house.pory"
	waitmovement 0
# 586 "data/scripts/players_house.pory"
	return
# 587 "data/scripts/players_house.pory"

# 588 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerMale:
# 589 "data/scripts/players_house.pory"
	walk_right
# 590 "data/scripts/players_house.pory"
	walk_right
# 591 "data/scripts/players_house.pory"
	step_end
# 592 "data/scripts/players_house.pory"

# 593 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadApproachPlayerFemale:
# 594 "data/scripts/players_house.pory"
	walk_left
# 595 "data/scripts/players_house.pory"
	walk_left
# 596 "data/scripts/players_house.pory"
	step_end
# 597 "data/scripts/players_house.pory"

# 598 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomMale:
# 599 "data/scripts/players_house.pory"
	face_left
# 600 "data/scripts/players_house.pory"
	step_end
# 601 "data/scripts/players_house.pory"

# 602 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadFaceMomFemale:
# 603 "data/scripts/players_house.pory"
	face_right
# 604 "data/scripts/players_house.pory"
	step_end
# 605 "data/scripts/players_house.pory"

# 606 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsMale:
# 607 "data/scripts/players_house.pory"
	walk_down
# 608 "data/scripts/players_house.pory"
	walk_right
# 609 "data/scripts/players_house.pory"
	walk_down
# 610 "data/scripts/players_house.pory"
	delay_8
# 611 "data/scripts/players_house.pory"
	step_end
# 612 "data/scripts/players_house.pory"

# 613 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_DadExitsFemale:
# 614 "data/scripts/players_house.pory"
	walk_down
# 615 "data/scripts/players_house.pory"
	walk_left
# 616 "data/scripts/players_house.pory"
	walk_down
# 617 "data/scripts/players_house.pory"
	delay_8
# 618 "data/scripts/players_house.pory"
	step_end
# 619 "data/scripts/players_house.pory"

# 620 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomMale:
# 621 "data/scripts/players_house.pory"
	delay_16
# 622 "data/scripts/players_house.pory"
	walk_down
# 623 "data/scripts/players_house.pory"
	walk_down
# 624 "data/scripts/players_house.pory"
	walk_down
# 625 "data/scripts/players_house.pory"
	walk_in_place_faster_left
# 626 "data/scripts/players_house.pory"
	step_end
# 627 "data/scripts/players_house.pory"

# 628 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_MomAndPlayerWatchDadExit:
# 629 "data/scripts/players_house.pory"
	delay_8
# 630 "data/scripts/players_house.pory"
	delay_16
# 631 "data/scripts/players_house.pory"
	delay_16
# 632 "data/scripts/players_house.pory"
	walk_in_place_faster_down
# 633 "data/scripts/players_house.pory"
	step_end
# 634 "data/scripts/players_house.pory"

# 635 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerEnterRoomFemale:
# 636 "data/scripts/players_house.pory"
	delay_16
# 637 "data/scripts/players_house.pory"
	walk_down
# 638 "data/scripts/players_house.pory"
	walk_down
# 639 "data/scripts/players_house.pory"
	walk_down
# 640 "data/scripts/players_house.pory"
	walk_in_place_faster_right
# 641 "data/scripts/players_house.pory"
	step_end
# 642 "data/scripts/players_house.pory"

# 643 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiMale:
# 644 "data/scripts/players_house.pory"
	walk_up
# 645 "data/scripts/players_house.pory"
	walk_left
# 646 "data/scripts/players_house.pory"
	walk_left
# 647 "data/scripts/players_house.pory"
	walk_left
# 648 "data/scripts/players_house.pory"
	walk_left
# 649 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 650 "data/scripts/players_house.pory"
	step_end
# 651 "data/scripts/players_house.pory"

# 652 "data/scripts/players_house.pory"
PlayersHouse_1F_Movement_PlayerApproachTVForLatiFemale:
# 653 "data/scripts/players_house.pory"
	walk_up
# 654 "data/scripts/players_house.pory"
	walk_right
# 655 "data/scripts/players_house.pory"
	walk_right
# 656 "data/scripts/players_house.pory"
	walk_right
# 657 "data/scripts/players_house.pory"
	walk_right
# 658 "data/scripts/players_house.pory"
	walk_in_place_faster_up
# 659 "data/scripts/players_house.pory"
	step_end
# 660 "data/scripts/players_house.pory"

# 661 "data/scripts/players_house.pory"
EventScript_RunningShoesManual::
# 662 "data/scripts/players_house.pory"
	msgbox PlayersHouse_1F_Text_RunningShoesManual, MSGBOX_SIGN
# 663 "data/scripts/players_house.pory"
	end

PlayersHouse_1F_EventScript_Mom::
# 669 "data/scripts/players_house.pory"
	lock
# 670 "data/scripts/players_house.pory"
	faceplayer
# 671 "data/scripts/players_house.pory"
	switch VAR_ARCHEVALE_HOUSE_STATE
# 672 "data/scripts/players_house.pory"
	case 1, PlayersHouse_1F_EventScript_Mom_3
# 673 "data/scripts/players_house.pory"
	case 4, PlayersHouse_1F_EventScript_Mom_4
# 674 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_MomHealsParty
PlayersHouse_1F_EventScript_Mom_1:
# 676 "data/scripts/players_house.pory"
	release
	return

PlayersHouse_1F_EventScript_Mom_3:
# 672 "data/scripts/players_house.pory"
	call PlayerHouse_1F_GoOn
	goto PlayersHouse_1F_EventScript_Mom_1

PlayersHouse_1F_EventScript_Mom_4:
# 673 "data/scripts/players_house.pory"
	call PlayersHouse_1F_EventScript_DontPushYourselfTooHard
	goto PlayersHouse_1F_EventScript_Mom_1


PlayerHouse_1F_GoOn::
# 680 "data/scripts/players_house.pory"
	msgbox PlayerHouse_1F_GoOn_Text_0
# 681 "data/scripts/players_house.pory"
	release
	end


PlayerHouse_1F_GoOn_Text_0:
# 680 "data/scripts/players_house.pory"
	.string "MOM: Go on, your adventure awaits!$"
