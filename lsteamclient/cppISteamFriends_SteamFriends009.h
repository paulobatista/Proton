#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends009_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends009_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends009_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends009_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends009_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends009_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends009_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends009_GetFriendPersonaName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends009_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends009_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends009_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends009_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends009_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends009_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends009_GetClanTag(void *, CSteamID);
extern int cppISteamFriends_SteamFriends009_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends009_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends009_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends009_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlayToStore(void *, AppId_t);
extern void cppISteamFriends_SteamFriends009_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog(void *, CSteamID);
extern int cppISteamFriends_SteamFriends009_GetSmallFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends009_GetMediumFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends009_GetLargeFriendAvatar(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends009_RequestUserInformation(void *, CSteamID, bool);
extern SteamAPICall_t cppISteamFriends_SteamFriends009_RequestClanOfficerList(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends009_GetClanOwner(void *, CSteamID);
extern int cppISteamFriends_SteamFriends009_GetClanOfficerCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends009_GetClanOfficerByIndex(void *, CSteamID, int);
extern uint32 cppISteamFriends_SteamFriends009_GetUserRestrictions(void *);
extern bool cppISteamFriends_SteamFriends009_SetRichPresence(void *, const char *, const char *);
extern void cppISteamFriends_SteamFriends009_ClearRichPresence(void *);
extern const char * cppISteamFriends_SteamFriends009_GetFriendRichPresence(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends009_InviteUserToGame(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends009_GetCoplayFriendCount(void *);
extern CSteamID cppISteamFriends_SteamFriends009_GetCoplayFriend(void *, int);
extern int cppISteamFriends_SteamFriends009_GetFriendCoplayTime(void *, CSteamID);
extern AppId_t cppISteamFriends_SteamFriends009_GetFriendCoplayGame(void *, CSteamID);
#ifdef __cplusplus
}
#endif
