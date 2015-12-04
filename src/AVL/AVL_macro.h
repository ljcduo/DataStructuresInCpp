/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

/******************************************************************************************
 * 在左、右孩子中取更高者，若等高，则与父亲p同侧者优先
 * 在AVL平衡调整前，借此确定重构方案
 ******************************************************************************************/
#define tallerChild(x) ( \
   stature((x)->lChild) > stature((x)->rChild) ? (x)->lChild : ( \
   stature((x)->rChild) > stature((x)->lChild) ? (x)->rChild : ( \
   IsLChild(*(x)) ? (x)->lChild : (x)->rChild \
   ) \
   ) \
)
