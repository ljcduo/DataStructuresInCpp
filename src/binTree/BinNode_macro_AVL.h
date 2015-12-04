/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

/*DSA*/#define HeightUpdated(x) /*高度更新常规条件*/ \
/*DSA*/        ((x).height == 1 + max(stature((x).lChild), stature((x).rChild)))
#define Balanced(x) (stature((x).lChild) == stature((x).rChild)) //理想平衡条件
#define BalFac(x) (stature((x).lChild) - stature((x).rChild)) //平衡因子
#define AvlBalanced(x) ((-2 < BalFac(x)) && (BalFac(x) < 2)) //AVL平衡条件
