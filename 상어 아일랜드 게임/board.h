//
//  board.h
//  상어 아일랜드 게임
//
//  Created by MacBook Air on 2023/11/21.
//

#define BOARDSTATUS_OK          1
#define BOARDSTATUS_NOK         0

int board_initboard(void);
int board_printBoardStatus(void);

int board_getBoardStatus(int pos);
int board_getBoardCoin(int pos);

int board_getSharkPosition(void);
int board_stepShark(void);
