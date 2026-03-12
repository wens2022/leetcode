# Vim Cheatsheet | Vim速查表

> Run `vimtutor` in terminal for hands-on practice | 终端运行vimtutor交互练习.

---

## Motion | 移动

```
h j k l          ← ↓ ↑ →
w / b            next/previous word | 下一个词/上一个词
e                end of word | 词尾
0 / ^            start of line | 行首
$                end of line | 行尾
gg / G           top/bottom of file | 文件开头/结尾
{n}G             jump to line n | 跳到第n行
{ / }            previous/next paragraph | 上一段/下一段
Ctrl+d / Ctrl+u  scroll half page | 翻半屏
zz               center current line | 当前行居中
```

## Insert Mode | 插入模式

```
i / a            insert before/after cursor | 光标前/后插入
I / A            insert at line start/end | 行首/尾插入
o / O            new line below/above | 下方/上方新建一行
```

## Edit | 编辑

```
x                delete character | 删除字符
dd / {n}dd       delete line(s) | 删除行
dw / d$          delete word / to end of line | 删除词/到行尾
yy / yw          copy line / word | 复制行/词
p / P            paste below/above | 粘贴下方/上方
cc / cw          delete line/word and insert | 删除并插入
r{char}          replace character | 替换字符
u / Ctrl+r       undo / redo | 撤销/重做
.                repeat last action | 重复上一操作 ← very useful
```

## Search & Replace | 搜索与替换

```
/pattern         search forward | 向下搜索
?pattern         search backward | 向上搜索
n / N            next/previous match | 下一个/上一个
*                search word under cursor | 搜索光标词
:%s/old/new/g    replace all in file | 替换整个文件
:%s/old/new/gc   replace with confirmation | 逐个确认
```

## Visual Mode | 可视模式

```
v / V / Ctrl+v   character/line/block selection | 字符/行/块选择
# Batch comment | 批量注释:
Ctrl+v → select lines → I → // → Esc
```

## Splits & Files | 分屏与文件

```
:sp / :vsp       horizontal/vertical split | 水平/垂直分屏
Ctrl+w h/j/k/l   move between splits | 分屏间移动
:w / :q / :wq    save / quit / save+quit
:q!              quit without saving | 不保存退出
```

## ~/.vimrc

```vim
set number
set relativenumber
set tabstop=4
set shiftwidth=4
set expandtab
set hlsearch
set incsearch
set ignorecase
set smartcase
syntax on
```

## Learning Priority | 学习优先级

```
Week 1: motion + basic edit + save/quit
Week 2: search/replace + visual mode + . repeat
Week 3: splits + vimrc
Later:  macros (q to record, @ to replay)
```
