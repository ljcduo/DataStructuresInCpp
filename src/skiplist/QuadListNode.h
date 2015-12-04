/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

#include "../Entry/Entry.h"
#define QuadlistNodePosi(T)  QuadlistNode<T>* //跳转表节点位置

template <typename T> struct QuadlistNode{ //QuadlistNode模板类
   T entry; //所存词条
   QuadlistNodePosi(T) pred;  QuadlistNodePosi(T) succ;  //前驱、后继
   QuadlistNodePosi(T) above; QuadlistNodePosi(T) below; //上邻、下邻
   QuadlistNode //构造器
      ( T e = T(), QuadlistNodePosi(T) p = NULL, QuadlistNodePosi(T) s = NULL,
      QuadlistNodePosi(T) a = NULL, QuadlistNodePosi(T) b = NULL)
      : entry(e), pred(p), succ(s), above(a), below(b) {}
   QuadlistNodePosi(T) insertAsSuccAbove //插入新节点，以当前节点为前驱，以节点b为下邻
      (T const & e, QuadlistNodePosi(T) b = NULL);
};

#include "QuadlistNode_implementation.h"