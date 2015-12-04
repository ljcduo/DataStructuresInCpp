/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> BinNodePosi(T) BinNode<T>::zag() { //ÄæÊ±ÕëÐý×ª
   BinNodePosi(T) rc = rChild;
   rc->parent = this->parent;
   if (rc->parent)
      ( (this == rc->parent->lChild) ? rc->parent->lChild : rc->parent->rChild ) = rc;
   rChild = rc->lChild; if (rChild) rChild->parent = this;
   rc->lChild = this; this->parent = rc;
   return rc;
}
