import XCTest
import SwiftTreeSitter
import TreeSitterRegex

final class TreeSitterRegexTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_regex())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Regex grammar")
    }
}
