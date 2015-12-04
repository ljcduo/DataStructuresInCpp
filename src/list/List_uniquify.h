/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#pragma once

template <typename T> int List<T>::uniquify() { //成批剔除重复元素，效率更高
   if (_size < 2) return 0; //平凡列表自然无重复
   int oldSize = _size; //记录原规模
   ListNodePosi(T) p; ListNodePosi(T) q; //依次指向紧邻的各对节点
   for (p = header, q = p->succ; trailer != q; p = q, q = q->succ) //从自左向右扫描
      if (p->data == q->data) { remove(q); q = p; } //若p和q雷同，则删除后者
   return oldSize - _size; //列表规模变化量，即被删除元素总数
}