/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKPlayer, GKScore;

@interface GKLeaderboardItem : NSObject {
    GKPlayer *_player;
    GKScore *_score;
    unsigned int _totalScores;
}

@property(retain) GKPlayer * player;
@property(retain) GKScore * score;
@property unsigned int totalScores;

- (id)_gkViewDebuggingChildKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)player;
- (id)score;
- (void)setPlayer:(id)arg1;
- (void)setScore:(id)arg1;
- (void)setTotalScores:(unsigned int)arg1;
- (unsigned int)totalScores;

@end
