/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> BinNodePosi(T) BinNode<T>::zig() { //Ë³Ê±ÕëÐý×ª
   BinNodePosi(T) lc = lChild;
   lc->parent = this->parent;
   if (lc->parent)
      ( (this == lc->parent->rChild) ? lc->parent->rChild : lc->parent->lChild ) = lc;
   lChild = lc->rChild; if (lChild) lChild->parent = this;
   lc->rChild = this; this->parent = lc;
   return lc;
}
