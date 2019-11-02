# 简单的Git 

Git是一个免费开源的分布式版本控制系统。

- 分布式 : 每个人都可以自己存储仓库在云端(通常来说没有核心仓库，但是在普遍认知中会有一个主要的核心仓库/核心分支)，然后允许开发者在本地克隆完整的服务器版本(本地仓库)。开发者可以对本地仓库进行修改，提交，以及提交到服务器上的仓库...

- 版本控制：仓库会记录每次提交的修改，从而创建一棵版本树(不同分支导致他是树)，可以任意切换当前版本的分支，以及回滚任意版本。

Git可以很方便的支持多人开发，每个人可以克隆主项目，并对其进行自己负责的部分的开发和修改，然后再提交到分支，和分支进行合并。如果遇到多个提交不是父子关系而是兄弟关系，则会产生一个合并请求，来决定如何将两个提交与分支进行合并。

### 任务

- 将 [oops_2019](https://github.com/oops-sdu/oops_2019) `fork`到自己的项目里😀。
- 将 `fork` 后的远程仓库 `clone` 下来，并在 `./src` 里创建一个文件夹，文件夹名为 Github 的用户名，并在文件夹内存放一个文件。
- 存放的文件内容可以是(文件大小不宜太大)：其他题目的文件，可选任务的代码文件，你的[女装](https://github.com/komeiji-satori/Dress)照片(😀)等。
- 将修改后的项目提交到你 `fork` 的远程仓库。
- 当你确定你不会再更改远程仓库的时候，提交合并请求到主项目。(当然你提交后还是可以修改再次提交)
- 有任何疑问请先尝试通过issue的形式提出。

### 可选任务

如果对 Computer Graphics 感兴趣，你可以在[oops_2019/src/LinkClinton](https://github.com/oops-sdu/oops_2019/tree/master/src/LinkClinton)里面发现一个可选任务，完成它。