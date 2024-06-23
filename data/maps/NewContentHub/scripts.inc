NewContentHub_MapScripts::
	.byte 0
	SCRIPT_SelfTrade_V1::
		lock
		faceplayer
		msgbox SCRIPT_SelfTrade_Text_IllTradeIfYouWant, MSGBOX_YESNO
		compare VAR_RESULT, NO
		goto_if_eq SCRIPT_SelfTrade_DeclineTrade
		special ChoosePartyMon
		waitstate
		compare VAR_0x8004, 255
		goto_if_eq SCRIPT_SelfTrade_DeclineTrade
		copyvar VAR_0x8005, VAR_0x8004
		setvar VAR_0x8004, 6
		special CreateInGameTradePokemon
		special DoInGameTradeScene
		waitstate
		msgbox SCRIPT_SelfTrade_Text_ComeBack, MSGBOX_DEFAULT
		release
		end
	
	SCRIPT_SelfTrade_DeclineTrade::
		msgbox SCRIPT_SelfTrade_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
		release
		end

	SCRIPT_SelfTrade_Text_IllTradeIfYouWant:
		.string "I'm John Trademan!\p"
		.string "I'll let you"
		.string "trade with yourself"
		.string "for trade evos!$"

	SCRIPT_SelfTrade_Text_ComeBack:
		.string "Come back anytime.$"

	SCRIPT_SelfTrade_Text_YouDontWantToThatsOkay:
		.string "You dont want to?\p"
			.string "That's chill come back\n"
			.string "whenever.$"
			
	SCRIPT_Explain_New_Routes::
		lock
		faceplayer
		msgbox SCRIPT_Explain_New_Routes_Text
		release
		end
	
	SCRIPT_Explain_New_Routes_Text::
		.string "You might notice"
		.string "new areas connected\n"
		.string "to already existing"
		.string "areas.\p"
		.string "These contain Pokemon"
		.string "not already in Gen 3.\p"
		.string "Try to look out"
		.string "for them!\p$"
		
	SCRIPT_Creator_Message::
		lock
		faceplayer
		msgbox SCRIPT_Creator_Message_Text
		release
		end
		
	SCRIPT_Creator_Message_Text::
		.string "Hi!\n"
		.string "I'm icyChao!\p"
		.string "I made this hack"
		.string "and I hope you\n"
		.string "enjoy it as much"
		.string "as I did making it!$"
		
