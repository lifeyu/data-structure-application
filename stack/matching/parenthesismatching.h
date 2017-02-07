#ifndef __PARENTHESISMATCHING_H__
#define __PARENTHESISMATCHING_H__


#include "../lib/seq-stack-char/seqstack.h"
/**
 * 栈的应用，括号匹配的检验
 */

/**
 * 检验括号是否匹配，使用 "期待急迫程度" 的概念描述
 */
boolean checkmatching(char *str);


#endif	// __PARENTHESISMATCHING_H__
