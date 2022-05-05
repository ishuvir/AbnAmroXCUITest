## [8.9.3] - 2022-04-17
### Update
- Quick fix - set delay between requests in 'long request protocol' to 0.5s. Temporary workaround.

## [8.9.2] - 2022-04-14
### Fixed
- isEqual: method in AbstractProxySettings class. Case, when both usernames or passwords are nil, was missed.

## [8.9.1] - 2022-04-13
### Added
- Parameter "ufgJobType" in Environment section was missing.

## [8.9.0] - 2022-04-11
### Updated
- Remove prefix 'beta' and merge eyes_xcui_beta branch to master.

## [8.9.11-beta] - 2022-03-16
### Added
- Resource map upload.

## [8.9.10-beta] - 2022-02-09
### Fixed
- Remove [FBConfiguration disableRemoteQueryEvaluation] that prevent system alerts to close in end-to-end tests.


## [8.9.9-beta] - 2021-12-30
### Added
- Add iOS 15 new devices.

## [8.9.8-beta] - 2021-12-23
### Updated
- Scroll points in case UFG-lib is injected.
### Added
- VHS metadata to render request.
### Fixed
- Eyes should take runner's serverConnector, if it exists.

## [8.9.7-beta] - 2021-09-21
### Added
- Script instrument-applitools.sh for dynamic injection of UFG-lib and EyesiOSHelper.

## [8.9.6-beta] - 2021-09-16
### Fixed
- Increase global timeout, when using Grid, to 1 hour.

## [8.9.5-beta] - 2021-09-07
### Fixed
- Eyes should take serverUrl, apiKey and proxy from runner, if these values exist.

## [8.9.4-beta] - 2021-09-07
### Added
- Print debug info avout errors.

## [8.9.3-beta] - 2021-08-23
### Fixed
- Grid also can work with another tested application.

## [8.9.2-beta] - 2021-08-17
### Added
- Add renderId to all request.

## [8.9.1-beta] - 2021-08-02
### Added
- Add renderId to check-related requests. 

## [8.8.8] - 2021-04-26
### Fixed
- Set proxy settings for https as well.[Trello 2489](https://trello.com/c/BeyAtPnC) 

## [8.9.0-beta] - 2021-04-22
### Added
- VisualGridRunner. [Trello 2536](https://trello.com/c/l4RLOcQJ)

## [8.8.7] - 2021-03-16
### Fixed
- Missed calculation of status bar height for iPhone 12 and 12 Pro. [Trello 2502](https://trello.com/c/1Nd04ydd)
- Set apiKey and agentId for RESTClient, that is created with proxy parameter.[Trello 2489](https://trello.com/c/BeyAtPnC) 

## [8.8.6] - 2021-03-03
### Fixed
- EyesXCUIHelperConnector's application property is set during eyes.open call. [Trello 2479](https://trello.com/c/cfcVxMZ9)

## [8.8.5] - 2021-02-03
### Added
- Collect content insets data in EyesiOSHelper and use it in fullpage screenshot algorithm for UICollectionView. [Trello 2378](https://trello.com/c/lXkISbLb)

## [8.8.4] - 2021-01-25
### Added
- Grab debug information from EyesiOSHelper library and print it during full page screenshot. [Trello 2378](https://trello.com/c/lXkISbLb)

## [8.8.3] - 2021-01-05
### Added
- EyesXCUI and EyesiOSHelper go to Cocoapods as xcframeworks instead of 'fat' frameworks. [Trello 2378](https://trello.com/c/lXkISbLb)

## [8.8.2] - 2020-12-21
### Fixed
- Algorithm for reaching top left corner. [Trello 2389](https://trello.com/c/5Lkj1Dxb)
- Searching scrollable view and getting its content size in EyesiOSHelper library. [Trello 2378](https://trello.com/c/lXkISbLb)

## [8.8.1] - 2020-11-02
### Fixed
- Full coverage report always sends tests to 'result' endpoint. [Trello 2281](https://trello.com/c/ic0fxK2w)
### Update
- DefaultMatchTimout set to 0(to avoid retry mechanism, that sometimes work incorrectly). [Trello 2273](https://trello.com/c/LudBDx1A)
- AUTO_APP_NAME method in Feature class for Swift. [Trello 2275](https://trello.com/c/jYoJSB8V)

## [8.8.0] - 2020-10-27
### Update
- Update README with feature flag usage explanation. [Trello 2253](https://trello.com/c/n11UtK6p)
- Scroll to invisible element without using WebDriverAgent. [Trello 2082](https://trello.com/c/d4V6exoM)
### Added
- Custom constructor to AccessibilitySettings. [Trello 2237](https://trello.com/c/3iTVfSo1)
- Full-coverage report event. [Trello 2019](https://trello.com/c/3y4UcfXd)
- ClassicRunner to follow class structure like in other SDKs. [Trello 2175](https://trello.com/c/uWNlZxVN)
- Add feature flag AUTO_APP_NAME. [Trello 1630](https://trello.com/c/eHoL0vBg)
### Fixed
- hostingAppInfo and osInfo handling. [Trello 2267](https://trello.com/c/Imp4p2g1)
- Viewport size should not store float values. [Trello 2256](https://trello.com/c/lMbYayfD/)
- Test result URL in logs. [Trello 2229](https://trello.com/c/2BWdzoj6)
- prettyDescription unrecognized selector crash. [Trello 2255](https://trello.com/c/ZZhUr2sW)
- Remove overwriting deprecated method recordFailureWithDescription:inFile:atLine:expected. [Trello 2248](https://trello.com/c/bJIWegUh)
- Return application name, taken from bundle, if hostingAppInfo wasn't set by user. [Trello 2244](https://trello.com/c/9abe8w3O)
- hostApp value proper handling. [Trello 2239](https://trello.com/c/A9xKsgnn)
- x, y, width and height of any region, that is supposed to be sent to the server(ignored, strict, content, layout etc.), should be rounded. [Trello 1917](https://trello.com/c/tt860YLU)
- Configuration should be copied in setter and return copy in getter instead of using reference. [Trello 2169](https://trello.com/c/XsYCJl5G)

## [8.7.1] - 2020-09-21
### Update
- Round first visible child's coordinates to avoid infinit moving to top left. [Trello 2167](https://trello.com/c/LnFkkkrs)
### Added
- More logs to full page screenshot algorithm. [Trello 2166](https://trello.com/c/DrzOtOq5) 

## [8.7.0] - 2020-08-25
### Added
- Stitch overlap. [Trello 2103](https://trello.com/c/vn2UCbzm)
- Return to the top left position after making full page screenshot. [Trello 2075](https://trello.com/c/UvzxlwOL)

## [8.6.2] - 2020-08-13
### Update
- Crop result screenshot if its size more that max allowed. Max allowed size is taken from renderingInfo. [Trello 1991](https://trello.com/c/2iCNfoI7)

## [8.6.1] - 2020-08-06
### Updated
- Retry algorithm - if current screenshot is the same as the lastscreenshot, don't upload the new screenshot to the server. [Trello 1866](https://trello.com/c/KyxkI6Bu)
### Fixed
- New way of seaching scrollable view that plays main role in fullpage screenshot and scrolling. [Trello 1930](https://trello.com/c/Kq1bIHrm)

## [8.6.0] - 2020-07-28
### Added
- Helper library that provides content offset and content size of first scrollable view on the screen; status bar visibility state and size. Library should be injected into the tested application. [Trello 1963](https://trello.com/c/0R1C7uoy) 
### Fixed
- Fix scroll hanging in cases when 'checkElement' is called and element is not completely visible. [Trello 2037](https://trello.com/c/yPulKrYa)
- Release event: create stage for each SDK, send release mail to release.reports@applitools.com. [Trello 1973](https://trello.com/c/7rEnph5U)
### Updated 
- Split regression tests on 2 stages on Travis. [Trello 2036](https://trello.com/c/IqoC2CDL)
- Demo application - update screens and transition between screens to avoid issues with show/hide status bar toggling. [Trello 1985](https://trello.com/c/Ui62JSOY)
- Improve scrolling performance during full page screenshot. [Trello 1939](https://trello.com/c/GJn9ODeC)
- Make scrollable elements shorter - decrease number of cells or content height. [Trello 1967](https://trello.com/c/Ud7nAJwy)

## [8.5.3] - 2020-06-29
### Fixed
- Fix "Unable to read the license file" warning during installation via Cocoapods. [Trello 1916](https://trello.com/c/iJ6uNw45)
### Added
- Regression test scheme and release event. [Trello 1797](https://trello.com/c/dj7njVl4)
- Unit tests for Start session.[Trello 1849](https://trello.com/c/cYLuIO2f)

## [8.5.2] - 2020-06-12
### Added
- Cache status bar height and its visibility state. [Trello 1880](https://trello.com/c/tAtvGndy)
### Updated
- Improve long running tasks polling delay. [Trello 1877](https://trello.com/c/bs4rLwqj) 
- Replace taking rendering info after session was created. [Trello 1876](https://trello.com/c/xgkM2yHr)

## [8.5.1] - 2020-05-28
### Fixed
- Status bar height for 10.5 inch iPads in iOS 13. [Trello 1859](https://trello.com/c/osxOiFMa)
- Ignore/content/layout/strict/floating/accessibility regions, those were hardcoded, should be adjusted by status bar's height. [Trello 1826](https://trello.com/c/RROgFEev)
- Correct screenshots when screen is in landscape mode. [Trello 1778](https://trello.com/c/TvZqjsh1)  

## [8.5.0] - 2020-05-19
### Added
- Test results metadata. Improve accessiblity tests. [Trello 1817](https://trello.com/c/OaGV319p) 
- Accessiblity guidelines version support. [Trello 1767](https://trello.com/c/gq69woeK)
- Send report about test results either test failed or passed. [Trello 1733](https://trello.com/c/Yz6EkCqz)

## [8.4.1] - 2020-04-09
### Fixed 
- Update handling auth challenges in network requests. [Trello 1725](https://trello.com/c/UqYhOCDY)

### Added
- Update handling 'isNew' flag in StartSession request. [Trello 1715](https://trello.com/c/DcVzWbeR)
- Send agentId as custom header in all requests to Eyes server. [Trello 1697](https://trello.com/c/CzhUxOqE)
- Update tests for classic API. [Trello 1698](https://trello.com/c/gWkxbTFd)

## [8.4.0] - 2020-03-25
### Fixed 
- Values of "parentBranchName" and "baselineBranchName" fields. [Trello 1688](https://trello.com/c/dDxGxser)
### Added
- Scroll view is supported as scrollable element. [Trello 1686](https://trello.com/c/Ksxb8BBz)

## [8.3.1] - 2020-03-19
### Fixed
-  bathInfo value of configuration field in EyesBase. [Trello 1666](https://trello.com/c/K51yYR7U)

## [8.3.0] - 2020-02-25
### Added
- EyesRunner and Batch notification API. [Trello 1454](https://trello.com/c/M9MWNhTH)

## [8.2.2] - 2020-02-18
### Added
- Missing fields of ImageMatchSettgins: splitBottomHeight, splitTopHeight, remainder and scale. [https://trello.com/c/T9M2UAqo/1571-add-missing-fields-to-imagematchsettings-ios]
### Fixed
- Calculation default viewport size for iOS 13. [https://trello.com/c/h80Lmpuq/1552-default-viewport-size-is-incorrect-for-eyesxcui-in-ios-13]  

## [8.2.1] - 2020-02-05
### Fixed
- DefaultMatchSettings are overridden properly by ImageMatchSettings. [https://trello.com/c/KEbWXavV/1495-all-sdks-defaultmatchsettings-being-overridden-incorrectly-by-imagematchsettings?menu=filter&filter=due:notdue]

## [8.2.0] - 2020-01-30
### Added
- Long-running task protocol for all request to Eyes server. [https://trello.com/c/GThsXbIL/1516-all-sdks-correctly-implement-long-running-tasks?menu=filter&filter=due:notdue]
### Fixed
- Check invisible element. [https://trello.com/c/0rEkrZ5w/1441-check-invisible-element-doesnt-work-on-ios-13]
### Fixed
- Return viewport screenshot if fullpage algorithm was called on the screen without scrollable element. [https://trello.com/c/7kwU6MAI/1506-fix-crash-when-doing-full-page-screenshot-on-screen-without-scrollable-element] 

## [8.1.0] - 2020-01-23
### Added
- Upload images directly to storage service. [https://trello.com/c/S3vZOlBD/1496-all-ios-sdks-should-upload-images-directly-to-azure-storage]
### Added
- Test baseline fields [https://trello.com/c/MIpM0DK6/1453-test-for-ticket-correct-baseline-fields]

## [8.0.0] - 2019-12-27
### Fixed
- Correct baseline fields [https://trello.com/c/A0j8rAMO/1446-correct-baseline-fields]
### Fixed
- Full page algorithm(template is algorithm from EyesAppium module from Java 4)
### Added
- statusBarExists field to Configuration and XCUICheckSettings
### Added
- Status bar height calculation for iOS 13 and higher

## [7.0.6] - 2019-12-20
### Added
- License info at the top of public headers

## [7.0.5] - 2019-12-18
### Fixed
- Timeout for network requests is 5 minutes. 
### Added
- Log message of actual path where debug screenshots are saved(if flag saveDebugScreenshots is set to true)
### Added
- Save each part full page screenshot "puzzle" as debug screenshot(if flag saveDebugScreenshots is set to true)

## [7.0.3] - 2019-11-25
### Fixed
- Content height calculation

## [7.0.2] - 2019-11-25
### Fixed
- Full page screenshot algorithm
### Added 
- Logs to full page screenshot algorithm 

## [7.0.1] - 2019-11-18
### Fixed 
- Nullability warnings
### Added
- "Accept" HTTP header with value "application/json"
### Fixed
- Work with regions those got floating x,, y, width and height values 
### Fixed
- Fullpage screenshot for iPhone X and newer phones.
### Added
- Support of APPLITOOLS_SERVER_URL environment
- Support of all existent environment variables with "bamboo_" prefix

## [7.0.0] - 2019-10-18
### Added 
- This CHANGELOG file.
- Added ‘Configuration’ API.
### Fixed
- Xcode 11 compatibility.
