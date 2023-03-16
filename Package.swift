// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "MAdiOS",
    platforms: [.iOS(.v14)],
    products: [
        .library(name: "MAdiOS", targets: ["MAdiOS"])
    ],
    dependencies: [
        .package(url: "https://github.com/asharmaa/MAdSDK/tree/master/MAdiOS.xcframework", .exact("1.5.0"))
    ],
    targets: [
        .target(
            name: "MAdiOS",
            dependencies: [],
            path: "Sources")
    ]
)
