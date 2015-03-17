/* Name: keyCurControl.h  ver 1.2
 * Content: Ŀ��, Ű���� ��Ʈ�� �Լ����� ����
 * Implementation: YSW
 * 
 * Last modified 2008/01/01
 */

#ifndef __KEY_CURSOR_H_
#define __KEY_CURSOR_H_

#include "point.h"

void RemoveCursor(void);
point GetCurrentCursorPos(void);
void SetCurrentCursorPos(int x, int y);
int ProcessKeyInput(void);
void InitKeyDelayRate(int rate);
void KeyDelaySpeedCtl(int addSpeed);

#endif
/* end of file */