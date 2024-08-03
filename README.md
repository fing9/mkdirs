# mkdirs

`mkdirs`는 헥사고날 아키텍처를 따르는 스프링 프로젝트에서 폴더 계층을 자동으로 생성해주는 CLI 도구입니다. 이 도구는 프로젝트의 구조를 신속하게 설정하여 개발자가 비즈니스 로직에 집중할 수 있도록 도와줍니다.

## 기능

- 헥사고날 아키텍처에 맞춘 기본 폴더 구조 생성
- `adapter`, `application`, `domain`, `infrastructure` 디렉토리 생성
- 각 디렉토리 내 세부 폴더 구조 자동 생성

## 설치

1. `make` 명령을 사용하여 프로젝트를 컴파일합니다.

```sh
make
```

2. 컴파일된 `mkdirs` 바이너리를 스크립트를 이용하여 환경변수에 등록합니다.

```sh
./setup_mkdirs.sh
```

## 사용법

하나의 도메인에 대한 헥사고날 계층을 만들고 싶은 경로에서 `mkdirs` 명령을 실행하여 폴더 계층을 생성합니다.

```sh
mkdirs <domain directory name>
```

예시
```sh
mkdirs user
```
이 명령어를 실행하면 다음과 같은 폴더 구조가 생성됩니다.

```sh
user/
├── adapter
│   ├── in
│   └── out
├── application
│   ├── port
│   │   ├── in
│   │   └── out
│   └── service
├── domain
│   └── entity
└── infrastructure
    └── repository
```