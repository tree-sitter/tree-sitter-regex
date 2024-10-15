// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterRegex",
    products: [
        .library(name: "TreeSitterRegex", targets: ["TreeSitterRegex"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterRegex",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterRegexTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterRegex",
            ],
            path: "bindings/swift/TreeSitterRegexTests"
        )
    ],
    cLanguageStandard: .c11
)
